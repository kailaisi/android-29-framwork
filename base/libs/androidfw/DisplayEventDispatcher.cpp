/*
 * Copyright (C) 2015 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#define LOG_TAG "DisplayEventDispatcher"

#include <cinttypes>
#include <cstdint>

#include <androidfw/DisplayEventDispatcher.h>
#include <gui/DisplayEventReceiver.h>
#include <utils/Log.h>
#include <utils/Looper.h>

#include <utils/Timers.h>

namespace android {

// Number of events to read at a time from the DisplayEventDispatcher pipe.
// The value should be large enough that we can quickly drain the pipe
// using just a few large reads.
static const size_t EVENT_BUFFER_SIZE = 100;

DisplayEventDispatcher::DisplayEventDispatcher(const sp<Looper>& looper,ISurfaceComposer::VsyncSource vsyncSource) :
        //Vsync的来源传递给了mReceiver。这里相当于调用了mReceiver(DisplayEventReceiver)的构造函数
        mLooper(looper), mReceiver(vsyncSource), mWaitingForVsync(false) {
    ALOGV("dispatcher %p ~ Initializing display event dispatcher.", this);
}

status_t DisplayEventDispatcher::initialize() {
	//异常检测
    status_t result = mReceiver.initCheck();
    if (result) {
        ALOGW("Failed to initialize display event receiver, status=%d", result);
        return result;
    }
	//这里的Looper就是应用app进程的主线程Looper，这一步就是将创建的BitTube信道的
	//fd添加到Looper的监听。这里DisplayEventDispatcher继承了LooperCallback，所以这里的this方法就是指handleEvent
    int rc = mLooper->addFd(mReceiver.getFd(), 0, Looper::EVENT_INPUT,
            this, NULL);
    if (rc < 0) {
        return UNKNOWN_ERROR;
    }
    return OK;
}

void DisplayEventDispatcher::dispose() {
    ALOGV("dispatcher %p ~ Disposing display event dispatcher.", this);

    if (!mReceiver.initCheck()) {
        mLooper->removeFd(mReceiver.getFd());
    }
}

//调度Vsync
status_t DisplayEventDispatcher::scheduleVsync() {
	//如果当前正在等待Vsync信号，那么直接返回
    if (!mWaitingForVsync) {
        ALOGV("dispatcher %p ~ Scheduling vsync.", this);

        // Drain all pending events.
        nsecs_t vsyncTimestamp;
        PhysicalDisplayId vsyncDisplayId;
        uint32_t vsyncCount;
		//重点方法1   处理对应的准备事件，如果获取到了Vsync信号的话，这里会返回true
        if (processPendingEvents(&vsyncTimestamp, &vsyncDisplayId, &vsyncCount)) {
            ALOGE("dispatcher %p ~ last event processed while scheduling was for %" PRId64 "",
                    this, ns2ms(static_cast<nsecs_t>(vsyncTimestamp)));
        }
		//重点方法2   请求下一个Vsync信号
        status_t status = mReceiver.requestNextVsync();
        if (status) {
            ALOGW("Failed to request next vsync, status=%d", status);
            return status;
        }
		//设置正在等待Vsync信号
        mWaitingForVsync = true;
    }
    return OK;
}

int DisplayEventDispatcher::handleEvent(int, int events, void*) {
    if (events & (Looper::EVENT_ERROR | Looper::EVENT_HANGUP)) {
        ALOGE("Display event receiver pipe was closed or an error occurred.  "
                "events=0x%x", events);
        return 0; // remove the callback
    }

    if (!(events & Looper::EVENT_INPUT)) {
        ALOGW("Received spurious callback for unhandled poll event.  "
                "events=0x%x", events);
        return 1; // keep the callback
    }

    // Drain all pending events, keep the last vsync.
    nsecs_t vsyncTimestamp;
    PhysicalDisplayId vsyncDisplayId;
    uint32_t vsyncCount;
    if (processPendingEvents(&vsyncTimestamp, &vsyncDisplayId, &vsyncCount)) {
        ALOGV("dispatcher %p ~ Vsync pulse: timestamp=%" PRId64 ", displayId=%"
                ANDROID_PHYSICAL_DISPLAY_ID_FORMAT ", count=%d",
                this, ns2ms(vsyncTimestamp), vsyncDisplayId, vsyncCount);
        mWaitingForVsync = false;
        dispatchVsync(vsyncTimestamp, vsyncDisplayId, vsyncCount);
    }

    return 1; // keep the callback
}

bool DisplayEventDispatcher::processPendingEvents(
        nsecs_t* outTimestamp, PhysicalDisplayId* outDisplayId, uint32_t* outCount) {
    bool gotVsync = false;
	//创建一个buff
    DisplayEventReceiver::Event buf[EVENT_BUFFER_SIZE];
    ssize_t n;
	//获取对应的事件
    while ((n = mReceiver.getEvents(buf, EVENT_BUFFER_SIZE)) > 0) {
        ALOGV("dispatcher %p ~ Read %d events.", this, int(n));
        for (ssize_t i = 0; i < n; i++) {
            const DisplayEventReceiver::Event& ev = buf[i];
            switch (ev.header.type) {
            case DisplayEventReceiver::DISPLAY_EVENT_VSYNC://Vsync类型
                // Later vsync events will just overwrite the info from earlier
                // ones. That's fine, we only care about the most recent.
                //获取到最新的Vsync信号，然后将时间戳等信息保存下来
                gotVsync = true;
                *outTimestamp = ev.header.timestamp;
                *outDisplayId = ev.header.displayId;
                *outCount = ev.vsync.count;
                break;
            case DisplayEventReceiver::DISPLAY_EVENT_HOTPLUG:
                dispatchHotplug(ev.header.timestamp, ev.header.displayId, ev.hotplug.connected);
                break;
            case DisplayEventReceiver::DISPLAY_EVENT_CONFIG_CHANGED:
                dispatchConfigChanged(ev.header.timestamp, ev.header.displayId, ev.config.configId);
                break;
            default:
                ALOGW("dispatcher %p ~ ignoring unknown event type %#x", this, ev.header.type);
                break;
            }
        }
    }
    if (n < 0) {
        ALOGW("Failed to get events from display event dispatcher, status=%d", status_t(n));
    }
    return gotVsync;
}
}
