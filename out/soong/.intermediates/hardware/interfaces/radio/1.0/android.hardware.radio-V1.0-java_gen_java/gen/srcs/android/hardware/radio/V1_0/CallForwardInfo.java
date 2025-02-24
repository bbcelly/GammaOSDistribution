package android.hardware.radio.V1_0;


public final class CallForwardInfo {
    public int status = 0;
    public int reason = 0;
    public int serviceClass = 0;
    public int toa = 0;
    public String number = new String();
    public int timeSeconds = 0;

    @Override
    public final boolean equals(Object otherObject) {
        if (this == otherObject) {
            return true;
        }
        if (otherObject == null) {
            return false;
        }
        if (otherObject.getClass() != android.hardware.radio.V1_0.CallForwardInfo.class) {
            return false;
        }
        android.hardware.radio.V1_0.CallForwardInfo other = (android.hardware.radio.V1_0.CallForwardInfo)otherObject;
        if (this.status != other.status) {
            return false;
        }
        if (this.reason != other.reason) {
            return false;
        }
        if (this.serviceClass != other.serviceClass) {
            return false;
        }
        if (this.toa != other.toa) {
            return false;
        }
        if (!android.os.HidlSupport.deepEquals(this.number, other.number)) {
            return false;
        }
        if (this.timeSeconds != other.timeSeconds) {
            return false;
        }
        return true;
    }

    @Override
    public final int hashCode() {
        return java.util.Objects.hash(
                android.os.HidlSupport.deepHashCode(this.status), 
                android.os.HidlSupport.deepHashCode(this.reason), 
                android.os.HidlSupport.deepHashCode(this.serviceClass), 
                android.os.HidlSupport.deepHashCode(this.toa), 
                android.os.HidlSupport.deepHashCode(this.number), 
                android.os.HidlSupport.deepHashCode(this.timeSeconds));
    }

    @Override
    public final String toString() {
        java.lang.StringBuilder builder = new java.lang.StringBuilder();
        builder.append("{");
        builder.append(".status = ");
        builder.append(android.hardware.radio.V1_0.CallForwardInfoStatus.toString(this.status));
        builder.append(", .reason = ");
        builder.append(this.reason);
        builder.append(", .serviceClass = ");
        builder.append(this.serviceClass);
        builder.append(", .toa = ");
        builder.append(this.toa);
        builder.append(", .number = ");
        builder.append(this.number);
        builder.append(", .timeSeconds = ");
        builder.append(this.timeSeconds);
        builder.append("}");
        return builder.toString();
    }

    public final void readFromParcel(android.os.HwParcel parcel) {
        android.os.HwBlob blob = parcel.readBuffer(40 /* size */);
        readEmbeddedFromParcel(parcel, blob, 0 /* parentOffset */);
    }

    public static final java.util.ArrayList<CallForwardInfo> readVectorFromParcel(android.os.HwParcel parcel) {
        java.util.ArrayList<CallForwardInfo> _hidl_vec = new java.util.ArrayList();
        android.os.HwBlob _hidl_blob = parcel.readBuffer(16 /* sizeof hidl_vec<T> */);

        {
            int _hidl_vec_size = _hidl_blob.getInt32(0 + 8 /* offsetof(hidl_vec<T>, mSize) */);
            android.os.HwBlob childBlob = parcel.readEmbeddedBuffer(
                    _hidl_vec_size * 40,_hidl_blob.handle(),
                    0 + 0 /* offsetof(hidl_vec<T>, mBuffer) */,true /* nullable */);

            _hidl_vec.clear();
            for (int _hidl_index_0 = 0; _hidl_index_0 < _hidl_vec_size; ++_hidl_index_0) {
                android.hardware.radio.V1_0.CallForwardInfo _hidl_vec_element = new android.hardware.radio.V1_0.CallForwardInfo();
                ((android.hardware.radio.V1_0.CallForwardInfo) _hidl_vec_element).readEmbeddedFromParcel(parcel, childBlob, _hidl_index_0 * 40);
                _hidl_vec.add(_hidl_vec_element);
            }
        }

        return _hidl_vec;
    }

    public final void readEmbeddedFromParcel(
            android.os.HwParcel parcel, android.os.HwBlob _hidl_blob, long _hidl_offset) {
        status = _hidl_blob.getInt32(_hidl_offset + 0);
        reason = _hidl_blob.getInt32(_hidl_offset + 4);
        serviceClass = _hidl_blob.getInt32(_hidl_offset + 8);
        toa = _hidl_blob.getInt32(_hidl_offset + 12);
        number = _hidl_blob.getString(_hidl_offset + 16);

        parcel.readEmbeddedBuffer(
                ((String) number).getBytes().length + 1,
                _hidl_blob.handle(),
                _hidl_offset + 16 + 0 /* offsetof(hidl_string, mBuffer) */,false /* nullable */);

        timeSeconds = _hidl_blob.getInt32(_hidl_offset + 32);
    }

    public final void writeToParcel(android.os.HwParcel parcel) {
        android.os.HwBlob _hidl_blob = new android.os.HwBlob(40 /* size */);
        writeEmbeddedToBlob(_hidl_blob, 0 /* parentOffset */);
        parcel.writeBuffer(_hidl_blob);
    }

    public static final void writeVectorToParcel(
            android.os.HwParcel parcel, java.util.ArrayList<CallForwardInfo> _hidl_vec) {
        android.os.HwBlob _hidl_blob = new android.os.HwBlob(16 /* sizeof(hidl_vec<T>) */);
        {
            int _hidl_vec_size = _hidl_vec.size();
            _hidl_blob.putInt32(0 + 8 /* offsetof(hidl_vec<T>, mSize) */, _hidl_vec_size);
            _hidl_blob.putBool(0 + 12 /* offsetof(hidl_vec<T>, mOwnsBuffer) */, false);
            android.os.HwBlob childBlob = new android.os.HwBlob((int)(_hidl_vec_size * 40));
            for (int _hidl_index_0 = 0; _hidl_index_0 < _hidl_vec_size; ++_hidl_index_0) {
                _hidl_vec.get(_hidl_index_0).writeEmbeddedToBlob(childBlob, _hidl_index_0 * 40);
            }
            _hidl_blob.putBlob(0 + 0 /* offsetof(hidl_vec<T>, mBuffer) */, childBlob);
        }

        parcel.writeBuffer(_hidl_blob);
    }

    public final void writeEmbeddedToBlob(
            android.os.HwBlob _hidl_blob, long _hidl_offset) {
        _hidl_blob.putInt32(_hidl_offset + 0, status);
        _hidl_blob.putInt32(_hidl_offset + 4, reason);
        _hidl_blob.putInt32(_hidl_offset + 8, serviceClass);
        _hidl_blob.putInt32(_hidl_offset + 12, toa);
        _hidl_blob.putString(_hidl_offset + 16, number);
        _hidl_blob.putInt32(_hidl_offset + 32, timeSeconds);
    }
};

