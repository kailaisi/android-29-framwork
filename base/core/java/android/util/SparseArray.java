/*
 * Copyright (C) 2006 The Android Open Source Project
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

package android.util;

import android.annotation.UnsupportedAppUsage;

import com.android.internal.util.ArrayUtils;
import com.android.internal.util.GrowingArrayUtils;

import libcore.util.EmptyArray;

/**
 * <code>SparseArray</code> maps integers to Objects and, unlike a normal array of Objects,
 * its indices can contain gaps. <code>SparseArray</code> is intended to be more memory-efficient
 * than a
 * <a href="/reference/java/util/HashMap"><code>HashMap</code></a>, because it avoids
 * auto-boxing keys and its data structure doesn't rely on an extra entry object
 * for each mapping.
 *
 * <p>Note that this container keeps its mappings in an array data structure,
 * using a binary search to find keys. The implementation is not intended to be appropriate for
 * data structures
 * that may contain large numbers of items. It is generally slower than a
 * <code>HashMap</code> because lookups require a binary search,
 * and adds and removes require inserting
 * and deleting entries in the array. For containers holding up to hundreds of items,
 * the performance difference is less than 50%.
 *
 * <p>To help with performance, the container includes an optimization when removing
 * keys: instead of compacting its array immediately, it leaves the removed entry marked
 * as deleted. The entry can then be re-used for the same key or compacted later in
 * a single garbage collection of all removed entries. This garbage collection
 * must be performed whenever the array needs to be grown, or when the map size or
 * entry values are retrieved.
 *
 * <p>It is possible to iterate over the items in this container using
 * {@link #keyAt(int)} and {@link #valueAt(int)}. Iterating over the keys using
 * <code>keyAt(int)</code> with ascending values of the index returns the
 * keys in ascending order. In the case of <code>valueAt(int)</code>, the
 * values corresponding to the keys are returned in ascending order.
 */
public class SparseArray<E> implements Cloneable {
    private static final Object DELETED = new Object();
    //是否需要进行回收，也就是进行key，value的整理
    private boolean mGarbage = false;

    @UnsupportedAppUsage(maxTargetSdk = 28) // Use keyAt(int)
    private int[] mKeys;//存储的key值
    @UnsupportedAppUsage(maxTargetSdk = 28) // Use valueAt(int), setValueAt(int, E)
    private Object[] mValues;//存储的value值
    @UnsupportedAppUsage(maxTargetSdk = 28) // Use size()
    private int mSize;//实际的占用的数据的大小

    /**
     * Creates a new SparseArray containing no mappings.
     */
    public SparseArray() {
        //默认数组的大小是10
        this(10);
    }

    /**
     * Creates a new SparseArray containing no mappings that will not
     * require any additional memory allocation to store the specified
     * number of mappings.  If you supply an initial capacity of 0, the
     * sparse array will be initialized with a light-weight representation
     * not requiring any additional array allocations.
     */
    public SparseArray(int initialCapacity) {
        if (initialCapacity == 0) {
            mKeys = EmptyArray.INT;
            mValues = EmptyArray.OBJECT;
        } else {
            mValues = ArrayUtils.newUnpaddedObjectArray(initialCapacity);
            mKeys = new int[mValues.length];
        }
        mSize = 0;
    }

    @Override
    @SuppressWarnings("unchecked")
    public SparseArray<E> clone() {
        SparseArray<E> clone = null;
        try {
            clone = (SparseArray<E>) super.clone();
            clone.mKeys = mKeys.clone();
            clone.mValues = mValues.clone();
        } catch (CloneNotSupportedException cnse) {
            /* ignore */
        }
        return clone;
    }

    /**
     * Gets the Object mapped from the specified key, or <code>null</code>
     * if no such mapping has been made.
     */
    public E get(int key) {
        return get(key, null);
    }

    /**
     * Gets the Object mapped from the specified key, or the specified Object if no such mapping has been made.
     */
    //获取指定key的值，如果获取不到，则返回指定对象。
    @SuppressWarnings("unchecked")
    public E get(int key, E valueIfKeyNotFound) {
        //获取key对应的index位置
        int i = ContainerHelpers.binarySearch(mKeys, mSize, key);
        //如果不存在，或者i位置的数据已经回收了，则直接返回
        if (i < 0 || mValues[i] == DELETED) {
            return valueIfKeyNotFound;
        } else {
            return (E) mValues[i];
        }
    }

    /**
     * Removes the mapping from the specified key, if there was any.
     */
    public void delete(int key) {
        //通过二分查找，获取key所在位置
        int i = ContainerHelpers.binarySearch(mKeys, mSize, key);
        if (i >= 0) {
            //将所在位置的value设置为DELETED,然后标记需要进行整理。
            if (mValues[i] != DELETED) {
                mValues[i] = DELETED;
                mGarbage = true;
            }
        }
    }

    /**
     * @hide
     * Removes the mapping from the specified key, if there was any, returning the old value.
     */
    public E removeReturnOld(int key) {
        int i = ContainerHelpers.binarySearch(mKeys, mSize, key);
        if (i >= 0) {
            //如果key所在的index的值不为DELETED，则返回数据，并标记对应index的值为DELETED，
            if (mValues[i] != DELETED) {
                final E old = (E) mValues[i];
                mValues[i] = DELETED;
                mGarbage = true;
                return old;
            }
        }
        return null;
    }

    /**
     * Alias for {@link #delete(int)}.
     */
    public void remove(int key) {
        delete(key);
    }

    /**
     * Removes the mapping at the specified index.
     *
     * <p>For indices outside of the range <code>0...size()-1</code>,
     * the behavior is undefined for apps targeting {@link android.os.Build.VERSION_CODES#P} and
     * earlier, and an {@link ArrayIndexOutOfBoundsException} is thrown for apps targeting
     * {@link android.os.Build.VERSION_CODES#Q} and later.</p>
     */
    //删除指定索引对应的元素值
    public void removeAt(int index) {
        if (index >= mSize && UtilConfig.sThrowExceptionForUpperArrayOutOfBounds) {
            // The array might be slightly bigger than mSize, in which case, indexing won't fail.
            // Check if exception should be thrown outside of the critical path.
            throw new ArrayIndexOutOfBoundsException(index);
        }
        if (mValues[index] != DELETED) {
            mValues[index] = DELETED;
            mGarbage = true;
        }
    }

    /**
     * Remove a range of mappings as a batch.
     *
     * @param index Index to begin at
     * @param size Number of mappings to remove
     *
     * <p>For indices outside of the range <code>0...size()-1</code>,
     * the behavior is undefined.</p>
     */
    public void removeAtRange(int index, int size) {
        final int end = Math.min(mSize, index + size);
        for (int i = index; i < end; i++) {
            removeAt(i);
        }
    }
    //用于移除无用的引用，通过移动，将现在所有的key和value连续保存到数组中，而不会使某个位置的value为空
    //而且会将mSize赋值为实际使用的大小
    private void gc() {
        // Log.e("SparseArray", "gc start with " + mSize);

        int n = mSize;
        //o 值用于表示 GC 后的元素个数
        int o = 0;
        int[] keys = mKeys;
        Object[] values = mValues;

        for (int i = 0; i < n; i++) {
            Object val = values[i];
            //如果value不是DELETED，证明当前的位置数据是可用的
            if (val != DELETED) {
                if (i != o) {
                    keys[o] = keys[i];
                    values[o] = val;
                    values[i] = null;
                }
                o++;
            }
        }
        mGarbage = false;
        mSize = o;

        // Log.e("SparseArray", "gc end with " + mSize);
    }

    /**
     * Adds a mapping from the specified key to the specified value,
     * replacing the previous mapping from the specified key if there
     * was one.
     */
    public void put(int key, E value) {
        //通过ContainerHelpers进行二分查找。如果存在则返回key的位置
        // 如果不存在则返回key在数组中可以存储的位置i的负值。
        int i = ContainerHelpers.binarySearch(mKeys, mSize, key);
        //如果key已经存在，则直接赋值
        if (i >= 0) {
            mValues[i] = value;
        } else {
            //binarySearch 方法的返回值分为两种情况：
            //1、如果存在对应的 key，则直接返回对应的索引值
            //2、如果不存在对应的 key
            //  2.1、假设 mKeys 中存在"值比 key 大且大小与 key 最接近的值的索引"为 presentIndex，则此方法的返回值为 ~presentIndex
            //  2.2、如果 mKeys 中不存在比 key 还要大的值的话，则返回值为 ~mKeys.length
            //可以看到，即使在 mKeys 中不存在目标 key，但其返回值也指向了应该让 key 存入的位置
            //通过将计算出的索引值进行 ~ 运算，则返回值一定是 0 或者负数，从而与“找得到目标key的情况（返回值大于0）”的情况区分开
            //且通过这种方式来存放数据，可以使得 mKeys 的内部值一直是按照值递增的方式来排序的
            i = ~i;
            //如果搜索到的i位置可以使用，并且没有数据，则将对应的key，value存入到i位置
            if (i < mSize && mValues[i] == DELETED) {
                mKeys[i] = key;
                mValues[i] = value;
                return;
            }
            //如果可以进行数组的整理，并且当前的数组大小能够进行存储，则进行数据的整理，然后再进行位置的查找
            if (mGarbage && mSize >= mKeys.length) {
                gc();
                // Search again because indices may have changed.
                //GC 后再次进行查找，因为值可能已经发生变化了
                i = ~ContainerHelpers.binarySearch(mKeys, mSize, key);
            }
            //通过复制或者扩容数组，将数据存放到数组中
            mKeys = GrowingArrayUtils.insert(mKeys, mSize, i, key);
            mValues = GrowingArrayUtils.insert(mValues, mSize, i, value);
            mSize++;
        }
    }

    /**
     * Returns the number of key-value mappings that this SparseArray
     * currently stores.
     */
    public int size() {
        if (mGarbage) {
            gc();
        }

        return mSize;
    }

    /**
     * Given an index in the range <code>0...size()-1</code>, returns
     * the key from the <code>index</code>th key-value mapping that this
     * SparseArray stores.
     *
     * <p>The keys corresponding to indices in ascending order are guaranteed to
     * be in ascending order, e.g., <code>keyAt(0)</code> will return the
     * smallest key and <code>keyAt(size()-1)</code> will return the largest
     * key.</p>
     *
     * <p>For indices outside of the range <code>0...size()-1</code>,
     * the behavior is undefined for apps targeting {@link android.os.Build.VERSION_CODES#P} and
     * earlier, and an {@link ArrayIndexOutOfBoundsException} is thrown for apps targeting
     * {@link android.os.Build.VERSION_CODES#Q} and later.</p>
     */
    public int keyAt(int index) {
        if (index >= mSize && UtilConfig.sThrowExceptionForUpperArrayOutOfBounds) {
            // The array might be slightly bigger than mSize, in which case, indexing won't fail.
            // Check if exception should be thrown outside of the critical path.
            throw new ArrayIndexOutOfBoundsException(index);
        }
        if (mGarbage) {
            gc();
        }

        return mKeys[index];
    }

    /**
     * Given an index in the range <code>0...size()-1</code>, returns
     * the value from the <code>index</code>th key-value mapping that this
     * SparseArray stores.
     *
     * <p>The values corresponding to indices in ascending order are guaranteed
     * to be associated with keys in ascending order, e.g.,
     * <code>valueAt(0)</code> will return the value associated with the
     * smallest key and <code>valueAt(size()-1)</code> will return the value
     * associated with the largest key.</p>
     *
     * <p>For indices outside of the range <code>0...size()-1</code>,
     * the behavior is undefined for apps targeting {@link android.os.Build.VERSION_CODES#P} and
     * earlier, and an {@link ArrayIndexOutOfBoundsException} is thrown for apps targeting
     * {@link android.os.Build.VERSION_CODES#Q} and later.</p>
     */
    //因为数据remove以后，可能mValues中的数据并不连续，所以先进行一次数据的整理，然后再返回index位置的数据
    @SuppressWarnings("unchecked")
    public E valueAt(int index) {
        if (index >= mSize && UtilConfig.sThrowExceptionForUpperArrayOutOfBounds) {
            // The array might be slightly bigger than mSize, in which case, indexing won't fail.
            // Check if exception should be thrown outside of the critical path.
            throw new ArrayIndexOutOfBoundsException(index);
        }
        if (mGarbage) {
            gc();
        }

        return (E) mValues[index];
    }

    /**
     * Given an index in the range <code>0...size()-1</code>, sets a new
     * value for the <code>index</code>th key-value mapping that this
     * SparseArray stores.
     *
     * <p>For indices outside of the range <code>0...size()-1</code>, the behavior is undefined for
     * apps targeting {@link android.os.Build.VERSION_CODES#P} and earlier, and an
     * {@link ArrayIndexOutOfBoundsException} is thrown for apps targeting
     * {@link android.os.Build.VERSION_CODES#Q} and later.</p>
     */
    public void setValueAt(int index, E value) {
        if (index >= mSize && UtilConfig.sThrowExceptionForUpperArrayOutOfBounds) {
            // The array might be slightly bigger than mSize, in which case, indexing won't fail.
            // Check if exception should be thrown outside of the critical path.
            throw new ArrayIndexOutOfBoundsException(index);
        }
        if (mGarbage) {
            gc();
        }

        mValues[index] = value;
    }

    /**
     * Returns the index for which {@link #keyAt} would return the
     * specified key, or a negative number if the specified
     * key is not mapped.
     */
    public int indexOfKey(int key) {
        if (mGarbage) {
            gc();
        }

        return ContainerHelpers.binarySearch(mKeys, mSize, key);
    }

    /**
     * Returns an index for which {@link #valueAt} would return the
     * specified value, or a negative number if no keys map to the
     * specified value.
     * <p>Beware that this is a linear search, unlike lookups by key,
     * and that multiple keys can map to the same value and this will
     * find only one of them.
     * <p>Note also that unlike most collections' {@code indexOf} methods,
     * this method compares values using {@code ==} rather than {@code equals}.
     */
    //根据value值，获取其对应的index信息
    public int indexOfValue(E value) {
        if (mGarbage) {
            gc();
        }
        for (int i = 0; i < mSize; i++) {
            if (mValues[i] == value) {
                return i;
            }
        }
        return -1;
    }

    /**
     * Returns an index for which {@link #valueAt} would return the
     * specified value, or a negative number if no keys map to the
     * specified value.
     * <p>Beware that this is a linear search, unlike lookups by key,
     * and that multiple keys can map to the same value and this will
     * find only one of them.
     * <p>Note also that this method uses {@code equals} unlike {@code indexOfValue}.
     * @hide
     */
    public int indexOfValueByValue(E value) {
        if (mGarbage) {
            gc();
        }

        for (int i = 0; i < mSize; i++) {
            if (value == null) {
                if (mValues[i] == null) {
                    return i;
                }
            } else {
                if (value.equals(mValues[i])) {
                    return i;
                }
            }
        }
        return -1;
    }

    /**
     * Removes all key-value mappings from this SparseArray.
     */
    public void clear() {
        int n = mSize;
        Object[] values = mValues;

        for (int i = 0; i < n; i++) {
            values[i] = null;
        }

        mSize = 0;
        mGarbage = false;
    }

    /**
     * Puts a key/value pair into the array, optimizing for the case where
     * the key is greater than all existing keys in the array.
     */
    public void append(int key, E value) {
        if (mSize != 0 && key <= mKeys[mSize - 1]) {
            put(key, value);
            return;
        }

        if (mGarbage && mSize >= mKeys.length) {
            gc();
        }

        mKeys = GrowingArrayUtils.append(mKeys, mSize, key);
        mValues = GrowingArrayUtils.append(mValues, mSize, value);
        mSize++;
    }

    /**
     * {@inheritDoc}
     *
     * <p>This implementation composes a string by iterating over its mappings. If
     * this map contains itself as a value, the string "(this Map)"
     * will appear in its place.
     */
    @Override
    public String toString() {
        if (size() <= 0) {
            return "{}";
        }

        StringBuilder buffer = new StringBuilder(mSize * 28);
        buffer.append('{');
        for (int i=0; i<mSize; i++) {
            if (i > 0) {
                buffer.append(", ");
            }
            int key = keyAt(i);
            buffer.append(key);
            buffer.append('=');
            Object value = valueAt(i);
            if (value != this) {
                buffer.append(value);
            } else {
                buffer.append("(this Map)");
            }
        }
        buffer.append('}');
        return buffer.toString();
    }
}
