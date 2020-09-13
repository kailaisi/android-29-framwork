/*
 * Copyright (C) 2011 The Android Open Source Project
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

#include <string.h>

#include <utils/Errors.h>

#include <gui/DisplayEventReceiver.h>
#include <gui/IDisplayEventConnection.h>
#include <gui/ISurfaceComposer.h>

#include <private/gui/ComposerService.h>

#include <private/gui/BitTube.h>

// ---------------------------------------------------------------------------

namespace android {

// ---------------------------------------------------------------------------
////DisplayEventReceiver的主要作用是建立与SurfaceFlinger的连接
DisplayEventReceiver::DisplayEventReceiver(ISurfaceComposer::VsyncSource vsyncSource,
                                           ISurfaceComposer::ConfigChanged configChanged) {
    //方法1   	获取SurfaceFling服务,并保存在ComposerService中                             
    sp<ISurfaceComposer> sf(ComposerService::getComposerService());
    if (sf != nullptr) {
		//方法2   通过binder，最后跨进程调用surfaceFling的createDisplayEventConnection方法
		//方法位置 ISurfaceComposer.cpp	frameworks\native\libs\gui
        mEventConnection = sf->createDisplayEventConnection(vsyncSource, configChanged);
        if (mEventConnection != nullptr) {
			//方法3    创建的gui::BitTube对象
            mDataChannel = std::make_unique<gui::BitTube>();
			//方法4	 将surfaceFling中创建的connection的ReceiveFd复制给mDataChannel。这样相当于app的EventReceiver持有了fd文件
			//而SurfaceFlinger持有了mSendFd文件，二者通过socket就可以实现通讯了
            mEventConnection->stealReceiveChannel(mDataChannel.get());
        }
    }
}

DisplayEventReceiver::~DisplayEventReceiver() {
}

status_t DisplayEventReceiver::initCheck() const {
    if (mDataChannel != nullptr)
        return NO_ERROR;
    return NO_INIT;
}

int DisplayEventReceiver::getFd() const {
    if (mDataChannel == nullptr)
        return NO_INIT;

    return mDataChannel->getFd();
}

status_t DisplayEventReceiver::setVsyncRate(uint32_t count) {
    if (int32_t(count) < 0)
        return BAD_VALUE;

    if (mEventConnection != nullptr) {
        mEventConnection->setVsyncRate(count);
        return NO_ERROR;
    }
    return NO_INIT;
}

status_t DisplayEventReceiver::requestNextVsync() {
    if (mEventConnection != nullptr) {
        mEventConnection->requestNextVsync();
        return NO_ERROR;
    }
    return NO_INIT;
}


ssize_t DisplayEventReceiver::getEvents(DisplayEventReceiver::Event* events,
        size_t count) {
    return DisplayEventReceiver::getEvents(mDataChannel.get(), events, count);
}

ssize_t DisplayEventReceiver::getEvents(gui::BitTube* dataChannel,
        Event* events, size_t count)
{
    return gui::BitTube::recvObjects(dataChannel, events, count);
}

ssize_t DisplayEventReceiver::sendEvents(gui::BitTube* dataChannel,
        Event const* events, size_t count)
{
    return gui::BitTube::sendObjects(dataChannel, events, count);
}

// ---------------------------------------------------------------------------

}; // namespace android
