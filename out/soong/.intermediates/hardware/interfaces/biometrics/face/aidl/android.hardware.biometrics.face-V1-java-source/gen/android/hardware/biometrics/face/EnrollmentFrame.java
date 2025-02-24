/*
 * This file is auto-generated.  DO NOT MODIFY.
 */
package android.hardware.biometrics.face;
public class EnrollmentFrame implements android.os.Parcelable
{
  public android.hardware.biometrics.face.Cell cell;
  public byte stage = android.hardware.biometrics.face.EnrollmentStage.UNKNOWN;
  public android.hardware.biometrics.face.BaseFrame data;
  @Override
   public final int getStability() { return android.os.Parcelable.PARCELABLE_STABILITY_VINTF; }
  public static final android.os.Parcelable.Creator<EnrollmentFrame> CREATOR = new android.os.Parcelable.Creator<EnrollmentFrame>() {
    @Override
    public EnrollmentFrame createFromParcel(android.os.Parcel _aidl_source) {
      EnrollmentFrame _aidl_out = new EnrollmentFrame();
      _aidl_out.readFromParcel(_aidl_source);
      return _aidl_out;
    }
    @Override
    public EnrollmentFrame[] newArray(int _aidl_size) {
      return new EnrollmentFrame[_aidl_size];
    }
  };
  @Override public final void writeToParcel(android.os.Parcel _aidl_parcel, int _aidl_flag)
  {
    int _aidl_start_pos = _aidl_parcel.dataPosition();
    _aidl_parcel.writeInt(0);
    if ((cell!=null)) {
      _aidl_parcel.writeInt(1);
      cell.writeToParcel(_aidl_parcel, 0);
    }
    else {
      _aidl_parcel.writeInt(0);
    }
    _aidl_parcel.writeByte(stage);
    if ((data!=null)) {
      _aidl_parcel.writeInt(1);
      data.writeToParcel(_aidl_parcel, 0);
    }
    else {
      _aidl_parcel.writeInt(0);
    }
    int _aidl_end_pos = _aidl_parcel.dataPosition();
    _aidl_parcel.setDataPosition(_aidl_start_pos);
    _aidl_parcel.writeInt(_aidl_end_pos - _aidl_start_pos);
    _aidl_parcel.setDataPosition(_aidl_end_pos);
  }
  public final void readFromParcel(android.os.Parcel _aidl_parcel)
  {
    int _aidl_start_pos = _aidl_parcel.dataPosition();
    int _aidl_parcelable_size = _aidl_parcel.readInt();
    try {
      if (_aidl_parcelable_size < 0) return;
      if (_aidl_parcel.dataPosition() - _aidl_start_pos >= _aidl_parcelable_size) return;
      if ((0!=_aidl_parcel.readInt())) {
        cell = android.hardware.biometrics.face.Cell.CREATOR.createFromParcel(_aidl_parcel);
      }
      else {
        cell = null;
      }
      if (_aidl_parcel.dataPosition() - _aidl_start_pos >= _aidl_parcelable_size) return;
      stage = _aidl_parcel.readByte();
      if (_aidl_parcel.dataPosition() - _aidl_start_pos >= _aidl_parcelable_size) return;
      if ((0!=_aidl_parcel.readInt())) {
        data = android.hardware.biometrics.face.BaseFrame.CREATOR.createFromParcel(_aidl_parcel);
      }
      else {
        data = null;
      }
    } finally {
      if (_aidl_start_pos > (Integer.MAX_VALUE - _aidl_parcelable_size)) {
        throw new android.os.BadParcelableException("Overflow in the size of parcelable");
      }
      _aidl_parcel.setDataPosition(_aidl_start_pos + _aidl_parcelable_size);
    }
  }
  @Override
  public int describeContents() {
    int _mask = 0;
    _mask |= describeContents(cell);
    _mask |= describeContents(data);
    return _mask;
  }
  private int describeContents(Object _v) {
    if (_v == null) return 0;
    if (_v instanceof android.os.Parcelable) {
      return ((android.os.Parcelable) _v).describeContents();
    }
    return 0;
  }
}
