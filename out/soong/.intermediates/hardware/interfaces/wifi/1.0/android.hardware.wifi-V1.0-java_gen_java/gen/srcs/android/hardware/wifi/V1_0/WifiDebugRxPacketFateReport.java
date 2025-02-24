package android.hardware.wifi.V1_0;


public final class WifiDebugRxPacketFateReport {
    public int fate = 0;
    public android.hardware.wifi.V1_0.WifiDebugPacketFateFrameInfo frameInfo = new android.hardware.wifi.V1_0.WifiDebugPacketFateFrameInfo();

    @Override
    public final boolean equals(Object otherObject) {
        if (this == otherObject) {
            return true;
        }
        if (otherObject == null) {
            return false;
        }
        if (otherObject.getClass() != android.hardware.wifi.V1_0.WifiDebugRxPacketFateReport.class) {
            return false;
        }
        android.hardware.wifi.V1_0.WifiDebugRxPacketFateReport other = (android.hardware.wifi.V1_0.WifiDebugRxPacketFateReport)otherObject;
        if (this.fate != other.fate) {
            return false;
        }
        if (!android.os.HidlSupport.deepEquals(this.frameInfo, other.frameInfo)) {
            return false;
        }
        return true;
    }

    @Override
    public final int hashCode() {
        return java.util.Objects.hash(
                android.os.HidlSupport.deepHashCode(this.fate), 
                android.os.HidlSupport.deepHashCode(this.frameInfo));
    }

    @Override
    public final String toString() {
        java.lang.StringBuilder builder = new java.lang.StringBuilder();
        builder.append("{");
        builder.append(".fate = ");
        builder.append(android.hardware.wifi.V1_0.WifiDebugRxPacketFate.toString(this.fate));
        builder.append(", .frameInfo = ");
        builder.append(this.frameInfo);
        builder.append("}");
        return builder.toString();
    }

    public final void readFromParcel(android.os.HwParcel parcel) {
        android.os.HwBlob blob = parcel.readBuffer(56 /* size */);
        readEmbeddedFromParcel(parcel, blob, 0 /* parentOffset */);
    }

    public static final java.util.ArrayList<WifiDebugRxPacketFateReport> readVectorFromParcel(android.os.HwParcel parcel) {
        java.util.ArrayList<WifiDebugRxPacketFateReport> _hidl_vec = new java.util.ArrayList();
        android.os.HwBlob _hidl_blob = parcel.readBuffer(16 /* sizeof hidl_vec<T> */);

        {
            int _hidl_vec_size = _hidl_blob.getInt32(0 + 8 /* offsetof(hidl_vec<T>, mSize) */);
            android.os.HwBlob childBlob = parcel.readEmbeddedBuffer(
                    _hidl_vec_size * 56,_hidl_blob.handle(),
                    0 + 0 /* offsetof(hidl_vec<T>, mBuffer) */,true /* nullable */);

            _hidl_vec.clear();
            for (int _hidl_index_0 = 0; _hidl_index_0 < _hidl_vec_size; ++_hidl_index_0) {
                android.hardware.wifi.V1_0.WifiDebugRxPacketFateReport _hidl_vec_element = new android.hardware.wifi.V1_0.WifiDebugRxPacketFateReport();
                ((android.hardware.wifi.V1_0.WifiDebugRxPacketFateReport) _hidl_vec_element).readEmbeddedFromParcel(parcel, childBlob, _hidl_index_0 * 56);
                _hidl_vec.add(_hidl_vec_element);
            }
        }

        return _hidl_vec;
    }

    public final void readEmbeddedFromParcel(
            android.os.HwParcel parcel, android.os.HwBlob _hidl_blob, long _hidl_offset) {
        fate = _hidl_blob.getInt32(_hidl_offset + 0);
        ((android.hardware.wifi.V1_0.WifiDebugPacketFateFrameInfo) frameInfo).readEmbeddedFromParcel(parcel, _hidl_blob, _hidl_offset + 8);
    }

    public final void writeToParcel(android.os.HwParcel parcel) {
        android.os.HwBlob _hidl_blob = new android.os.HwBlob(56 /* size */);
        writeEmbeddedToBlob(_hidl_blob, 0 /* parentOffset */);
        parcel.writeBuffer(_hidl_blob);
    }

    public static final void writeVectorToParcel(
            android.os.HwParcel parcel, java.util.ArrayList<WifiDebugRxPacketFateReport> _hidl_vec) {
        android.os.HwBlob _hidl_blob = new android.os.HwBlob(16 /* sizeof(hidl_vec<T>) */);
        {
            int _hidl_vec_size = _hidl_vec.size();
            _hidl_blob.putInt32(0 + 8 /* offsetof(hidl_vec<T>, mSize) */, _hidl_vec_size);
            _hidl_blob.putBool(0 + 12 /* offsetof(hidl_vec<T>, mOwnsBuffer) */, false);
            android.os.HwBlob childBlob = new android.os.HwBlob((int)(_hidl_vec_size * 56));
            for (int _hidl_index_0 = 0; _hidl_index_0 < _hidl_vec_size; ++_hidl_index_0) {
                _hidl_vec.get(_hidl_index_0).writeEmbeddedToBlob(childBlob, _hidl_index_0 * 56);
            }
            _hidl_blob.putBlob(0 + 0 /* offsetof(hidl_vec<T>, mBuffer) */, childBlob);
        }

        parcel.writeBuffer(_hidl_blob);
    }

    public final void writeEmbeddedToBlob(
            android.os.HwBlob _hidl_blob, long _hidl_offset) {
        _hidl_blob.putInt32(_hidl_offset + 0, fate);
        frameInfo.writeEmbeddedToBlob(_hidl_blob, _hidl_offset + 8);
    }
};

