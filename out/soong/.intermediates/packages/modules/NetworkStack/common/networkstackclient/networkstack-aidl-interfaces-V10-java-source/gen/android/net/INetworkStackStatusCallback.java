/*
 * This file is auto-generated.  DO NOT MODIFY.
 */
package android.net;
/** @hide */
public interface INetworkStackStatusCallback extends android.os.IInterface
{
  /**
   * The version of this interface that the caller is built against.
   * This might be different from what {@link #getInterfaceVersion()
   * getInterfaceVersion} returns as that is the version of the interface
   * that the remote object is implementing.
   */
  public static final int VERSION = 10;
  public static final String HASH = "4925f4fdbb270e4f35cc5519a15ed8dd8c69a549";
  /** Default implementation for INetworkStackStatusCallback. */
  public static class Default implements android.net.INetworkStackStatusCallback
  {
    @Override public void onStatusAvailable(int statusCode) throws android.os.RemoteException
    {
    }
    @Override
    public int getInterfaceVersion() {
      return 0;
    }
    @Override
    public String getInterfaceHash() {
      return "";
    }
    @Override
    public android.os.IBinder asBinder() {
      return null;
    }
  }
  /** Local-side IPC implementation stub class. */
  public static abstract class Stub extends android.os.Binder implements android.net.INetworkStackStatusCallback
  {
    /** Construct the stub at attach it to the interface. */
    public Stub()
    {
      this.attachInterface(this, DESCRIPTOR);
    }
    /**
     * Cast an IBinder object into an android.net.INetworkStackStatusCallback interface,
     * generating a proxy if needed.
     */
    public static android.net.INetworkStackStatusCallback asInterface(android.os.IBinder obj)
    {
      if ((obj==null)) {
        return null;
      }
      android.os.IInterface iin = obj.queryLocalInterface(DESCRIPTOR);
      if (((iin!=null)&&(iin instanceof android.net.INetworkStackStatusCallback))) {
        return ((android.net.INetworkStackStatusCallback)iin);
      }
      return new android.net.INetworkStackStatusCallback.Stub.Proxy(obj);
    }
    @Override public android.os.IBinder asBinder()
    {
      return this;
    }
    @Override public boolean onTransact(int code, android.os.Parcel data, android.os.Parcel reply, int flags) throws android.os.RemoteException
    {
      java.lang.String descriptor = DESCRIPTOR;
      switch (code)
      {
        case INTERFACE_TRANSACTION:
        {
          reply.writeString(descriptor);
          return true;
        }
        case TRANSACTION_getInterfaceVersion:
        {
          data.enforceInterface(descriptor);
          reply.writeNoException();
          reply.writeInt(getInterfaceVersion());
          return true;
        }
        case TRANSACTION_getInterfaceHash:
        {
          data.enforceInterface(descriptor);
          reply.writeNoException();
          reply.writeString(getInterfaceHash());
          return true;
        }
      }
      switch (code)
      {
        case TRANSACTION_onStatusAvailable:
        {
          data.enforceInterface(descriptor);
          int _arg0;
          _arg0 = data.readInt();
          this.onStatusAvailable(_arg0);
          return true;
        }
        default:
        {
          return super.onTransact(code, data, reply, flags);
        }
      }
    }
    private static class Proxy implements android.net.INetworkStackStatusCallback
    {
      private android.os.IBinder mRemote;
      Proxy(android.os.IBinder remote)
      {
        mRemote = remote;
      }
      private int mCachedVersion = -1;
      private String mCachedHash = "-1";
      @Override public android.os.IBinder asBinder()
      {
        return mRemote;
      }
      public java.lang.String getInterfaceDescriptor()
      {
        return DESCRIPTOR;
      }
      @Override public void onStatusAvailable(int statusCode) throws android.os.RemoteException
      {
        android.os.Parcel _data = android.os.Parcel.obtain();
        try {
          _data.writeInterfaceToken(DESCRIPTOR);
          _data.writeInt(statusCode);
          boolean _status = mRemote.transact(Stub.TRANSACTION_onStatusAvailable, _data, null, android.os.IBinder.FLAG_ONEWAY);
          if (!_status) {
            if (getDefaultImpl() != null) {
              getDefaultImpl().onStatusAvailable(statusCode);
              return;
            }
            else {
              throw new android.os.RemoteException("Method onStatusAvailable is unimplemented.");
            }
          }
        }
        finally {
          _data.recycle();
        }
      }
      @Override
      public int getInterfaceVersion() throws android.os.RemoteException {
        if (mCachedVersion == -1) {
          android.os.Parcel data = android.os.Parcel.obtain();
          android.os.Parcel reply = android.os.Parcel.obtain();
          try {
            data.writeInterfaceToken(DESCRIPTOR);
            boolean _status = mRemote.transact(Stub.TRANSACTION_getInterfaceVersion, data, reply, 0);
            if (!_status) {
              if (getDefaultImpl() != null) {
                return getDefaultImpl().getInterfaceVersion();
              }
            }
            reply.readException();
            mCachedVersion = reply.readInt();
          } finally {
            reply.recycle();
            data.recycle();
          }
        }
        return mCachedVersion;
      }
      @Override
      public synchronized String getInterfaceHash() throws android.os.RemoteException {
        if ("-1".equals(mCachedHash)) {
          android.os.Parcel data = android.os.Parcel.obtain();
          android.os.Parcel reply = android.os.Parcel.obtain();
          try {
            data.writeInterfaceToken(DESCRIPTOR);
            boolean _status = mRemote.transact(Stub.TRANSACTION_getInterfaceHash, data, reply, 0);
            if (!_status) {
              if (getDefaultImpl() != null) {
                return getDefaultImpl().getInterfaceHash();
              }
            }
            reply.readException();
            mCachedHash = reply.readString();
          } finally {
            reply.recycle();
            data.recycle();
          }
        }
        return mCachedHash;
      }
      public static android.net.INetworkStackStatusCallback sDefaultImpl;
    }
    static final int TRANSACTION_onStatusAvailable = (android.os.IBinder.FIRST_CALL_TRANSACTION + 0);
    static final int TRANSACTION_getInterfaceVersion = (android.os.IBinder.FIRST_CALL_TRANSACTION + 16777214);
    static final int TRANSACTION_getInterfaceHash = (android.os.IBinder.FIRST_CALL_TRANSACTION + 16777213);
    public static boolean setDefaultImpl(android.net.INetworkStackStatusCallback impl) {
      // Only one user of this interface can use this function
      // at a time. This is a heuristic to detect if two different
      // users in the same process use this function.
      if (Stub.Proxy.sDefaultImpl != null) {
        throw new IllegalStateException("setDefaultImpl() called twice");
      }
      if (impl != null) {
        Stub.Proxy.sDefaultImpl = impl;
        return true;
      }
      return false;
    }
    public static android.net.INetworkStackStatusCallback getDefaultImpl() {
      return Stub.Proxy.sDefaultImpl;
    }
  }
  public static final java.lang.String DESCRIPTOR = "android$net$INetworkStackStatusCallback".replace('$', '.');
  public void onStatusAvailable(int statusCode) throws android.os.RemoteException;
  public int getInterfaceVersion() throws android.os.RemoteException;
  public String getInterfaceHash() throws android.os.RemoteException;
}
