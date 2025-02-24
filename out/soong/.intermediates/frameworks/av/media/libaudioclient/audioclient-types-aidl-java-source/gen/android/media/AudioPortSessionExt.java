/*
 * This file is auto-generated.  DO NOT MODIFY.
 */
package android.media;
/**
 * {@hide}
 */
public class AudioPortSessionExt implements android.os.Parcelable
{
  /** Audio session. Interpreted as audio_session_t. */
  public int session = 0;
  public static final android.os.Parcelable.Creator<AudioPortSessionExt> CREATOR = new android.os.Parcelable.Creator<AudioPortSessionExt>() {
    @Override
    public AudioPortSessionExt createFromParcel(android.os.Parcel _aidl_source) {
      AudioPortSessionExt _aidl_out = new AudioPortSessionExt();
      _aidl_out.readFromParcel(_aidl_source);
      return _aidl_out;
    }
    @Override
    public AudioPortSessionExt[] newArray(int _aidl_size) {
      return new AudioPortSessionExt[_aidl_size];
    }
  };
  @Override public final void writeToParcel(android.os.Parcel _aidl_parcel, int _aidl_flag)
  {
    int _aidl_start_pos = _aidl_parcel.dataPosition();
    _aidl_parcel.writeInt(0);
    _aidl_parcel.writeInt(session);
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
      session = _aidl_parcel.readInt();
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
