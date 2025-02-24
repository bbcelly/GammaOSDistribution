/*
 * This file is auto-generated.  DO NOT MODIFY.
 */
package android.media.tv.tuner;
/**
 * Analog Frontend Capabilities interface.
 *
 * {@hide}
 */
public class TunerFrontendAnalogCapabilities implements android.os.Parcelable
{
  /**
       * Signal Type capability
       */
  public int typeCap = 0;
  /**
       * Standard Interchange Format (SIF) capability
       */
  public int sifStandardCap = 0;
  public static final android.os.Parcelable.Creator<TunerFrontendAnalogCapabilities> CREATOR = new android.os.Parcelable.Creator<TunerFrontendAnalogCapabilities>() {
    @Override
    public TunerFrontendAnalogCapabilities createFromParcel(android.os.Parcel _aidl_source) {
      TunerFrontendAnalogCapabilities _aidl_out = new TunerFrontendAnalogCapabilities();
      _aidl_out.readFromParcel(_aidl_source);
      return _aidl_out;
    }
    @Override
    public TunerFrontendAnalogCapabilities[] newArray(int _aidl_size) {
      return new TunerFrontendAnalogCapabilities[_aidl_size];
    }
  };
  @Override public final void writeToParcel(android.os.Parcel _aidl_parcel, int _aidl_flag)
  {
    int _aidl_start_pos = _aidl_parcel.dataPosition();
    _aidl_parcel.writeInt(0);
    _aidl_parcel.writeInt(typeCap);
    _aidl_parcel.writeInt(sifStandardCap);
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
      typeCap = _aidl_parcel.readInt();
      if (_aidl_parcel.dataPosition() - _aidl_start_pos >= _aidl_parcelable_size) return;
      sifStandardCap = _aidl_parcel.readInt();
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
    return _mask;
  }
}
