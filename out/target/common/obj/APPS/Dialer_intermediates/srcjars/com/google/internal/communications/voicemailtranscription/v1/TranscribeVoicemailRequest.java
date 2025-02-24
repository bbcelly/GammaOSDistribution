// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: packages/apps/Dialer/java/com/android/voicemail/impl/transcribe/grpc/voicemail_transcription.proto

package com.google.internal.communications.voicemailtranscription.v1;

/**
 * <pre>
 * Request for synchronous voicemail transcription.
 * </pre>
 *
 * Protobuf type {@code google.internal.communications.voicemailtranscription.v1.TranscribeVoicemailRequest}
 */
public  final class TranscribeVoicemailRequest extends
    com.google.protobuf.GeneratedMessageLite<
        TranscribeVoicemailRequest, TranscribeVoicemailRequest.Builder> implements
    // @@protoc_insertion_point(message_implements:google.internal.communications.voicemailtranscription.v1.TranscribeVoicemailRequest)
    TranscribeVoicemailRequestOrBuilder {
  private TranscribeVoicemailRequest() {
    voicemailData_ = com.google.protobuf.ByteString.EMPTY;
  }
  private int bitField0_;
  public static final int VOICEMAIL_DATA_FIELD_NUMBER = 1;
  private com.google.protobuf.ByteString voicemailData_;
  /**
   * <pre>
   * Voicemail audio file containing the raw bytes we receive from the carrier.
   * </pre>
   *
   * <code>optional bytes voicemail_data = 1;</code>
   */
  @java.lang.Override
  public boolean hasVoicemailData() {
    return ((bitField0_ & 0x00000001) != 0);
  }
  /**
   * <pre>
   * Voicemail audio file containing the raw bytes we receive from the carrier.
   * </pre>
   *
   * <code>optional bytes voicemail_data = 1;</code>
   */
  @java.lang.Override
  public com.google.protobuf.ByteString getVoicemailData() {
    return voicemailData_;
  }
  /**
   * <pre>
   * Voicemail audio file containing the raw bytes we receive from the carrier.
   * </pre>
   *
   * <code>optional bytes voicemail_data = 1;</code>
   */
  private void setVoicemailData(com.google.protobuf.ByteString value) {
    if (value == null) {
    throw new NullPointerException();
  }
  bitField0_ |= 0x00000001;
    voicemailData_ = value;
  }
  /**
   * <pre>
   * Voicemail audio file containing the raw bytes we receive from the carrier.
   * </pre>
   *
   * <code>optional bytes voicemail_data = 1;</code>
   */
  private void clearVoicemailData() {
    bitField0_ = (bitField0_ & ~0x00000001);
    voicemailData_ = getDefaultInstance().getVoicemailData();
  }

  public static final int AUDIO_FORMAT_FIELD_NUMBER = 2;
  private int audioFormat_;
  /**
   * <pre>
   * Audio format of the voicemail file.
   * </pre>
   *
   * <code>optional .google.internal.communications.voicemailtranscription.v1.AudioFormat audio_format = 2;</code>
   */
  @java.lang.Override
  public boolean hasAudioFormat() {
    return ((bitField0_ & 0x00000002) != 0);
  }
  /**
   * <pre>
   * Audio format of the voicemail file.
   * </pre>
   *
   * <code>optional .google.internal.communications.voicemailtranscription.v1.AudioFormat audio_format = 2;</code>
   */
  @java.lang.Override
  public com.google.internal.communications.voicemailtranscription.v1.AudioFormat getAudioFormat() {
    com.google.internal.communications.voicemailtranscription.v1.AudioFormat result = com.google.internal.communications.voicemailtranscription.v1.AudioFormat.forNumber(audioFormat_);
    return result == null ? com.google.internal.communications.voicemailtranscription.v1.AudioFormat.AUDIO_FORMAT_UNSPECIFIED : result;
  }
  /**
   * <pre>
   * Audio format of the voicemail file.
   * </pre>
   *
   * <code>optional .google.internal.communications.voicemailtranscription.v1.AudioFormat audio_format = 2;</code>
   */
  private void setAudioFormat(com.google.internal.communications.voicemailtranscription.v1.AudioFormat value) {
    if (value == null) {
      throw new NullPointerException();
    }
    bitField0_ |= 0x00000002;
    audioFormat_ = value.getNumber();
  }
  /**
   * <pre>
   * Audio format of the voicemail file.
   * </pre>
   *
   * <code>optional .google.internal.communications.voicemailtranscription.v1.AudioFormat audio_format = 2;</code>
   */
  private void clearAudioFormat() {
    bitField0_ = (bitField0_ & ~0x00000002);
    audioFormat_ = 0;
  }

  public static com.google.internal.communications.voicemailtranscription.v1.TranscribeVoicemailRequest parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static com.google.internal.communications.voicemailtranscription.v1.TranscribeVoicemailRequest parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static com.google.internal.communications.voicemailtranscription.v1.TranscribeVoicemailRequest parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static com.google.internal.communications.voicemailtranscription.v1.TranscribeVoicemailRequest parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static com.google.internal.communications.voicemailtranscription.v1.TranscribeVoicemailRequest parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static com.google.internal.communications.voicemailtranscription.v1.TranscribeVoicemailRequest parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static com.google.internal.communications.voicemailtranscription.v1.TranscribeVoicemailRequest parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static com.google.internal.communications.voicemailtranscription.v1.TranscribeVoicemailRequest parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static com.google.internal.communications.voicemailtranscription.v1.TranscribeVoicemailRequest parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input);
  }
  public static com.google.internal.communications.voicemailtranscription.v1.TranscribeVoicemailRequest parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static com.google.internal.communications.voicemailtranscription.v1.TranscribeVoicemailRequest parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static com.google.internal.communications.voicemailtranscription.v1.TranscribeVoicemailRequest parseFrom(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }

  public static Builder newBuilder() {
    return (Builder) DEFAULT_INSTANCE.createBuilder();
  }
  public static Builder newBuilder(com.google.internal.communications.voicemailtranscription.v1.TranscribeVoicemailRequest prototype) {
    return (Builder) DEFAULT_INSTANCE.createBuilder(prototype);
  }

  /**
   * <pre>
   * Request for synchronous voicemail transcription.
   * </pre>
   *
   * Protobuf type {@code google.internal.communications.voicemailtranscription.v1.TranscribeVoicemailRequest}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageLite.Builder<
        com.google.internal.communications.voicemailtranscription.v1.TranscribeVoicemailRequest, Builder> implements
      // @@protoc_insertion_point(builder_implements:google.internal.communications.voicemailtranscription.v1.TranscribeVoicemailRequest)
      com.google.internal.communications.voicemailtranscription.v1.TranscribeVoicemailRequestOrBuilder {
    // Construct using com.google.internal.communications.voicemailtranscription.v1.TranscribeVoicemailRequest.newBuilder()
    private Builder() {
      super(DEFAULT_INSTANCE);
    }


    /**
     * <pre>
     * Voicemail audio file containing the raw bytes we receive from the carrier.
     * </pre>
     *
     * <code>optional bytes voicemail_data = 1;</code>
     */
    @java.lang.Override
    public boolean hasVoicemailData() {
      return instance.hasVoicemailData();
    }
    /**
     * <pre>
     * Voicemail audio file containing the raw bytes we receive from the carrier.
     * </pre>
     *
     * <code>optional bytes voicemail_data = 1;</code>
     */
    @java.lang.Override
    public com.google.protobuf.ByteString getVoicemailData() {
      return instance.getVoicemailData();
    }
    /**
     * <pre>
     * Voicemail audio file containing the raw bytes we receive from the carrier.
     * </pre>
     *
     * <code>optional bytes voicemail_data = 1;</code>
     */
    public Builder setVoicemailData(com.google.protobuf.ByteString value) {
      copyOnWrite();
      instance.setVoicemailData(value);
      return this;
    }
    /**
     * <pre>
     * Voicemail audio file containing the raw bytes we receive from the carrier.
     * </pre>
     *
     * <code>optional bytes voicemail_data = 1;</code>
     */
    public Builder clearVoicemailData() {
      copyOnWrite();
      instance.clearVoicemailData();
      return this;
    }

    /**
     * <pre>
     * Audio format of the voicemail file.
     * </pre>
     *
     * <code>optional .google.internal.communications.voicemailtranscription.v1.AudioFormat audio_format = 2;</code>
     */
    @java.lang.Override
    public boolean hasAudioFormat() {
      return instance.hasAudioFormat();
    }
    /**
     * <pre>
     * Audio format of the voicemail file.
     * </pre>
     *
     * <code>optional .google.internal.communications.voicemailtranscription.v1.AudioFormat audio_format = 2;</code>
     */
    @java.lang.Override
    public com.google.internal.communications.voicemailtranscription.v1.AudioFormat getAudioFormat() {
      return instance.getAudioFormat();
    }
    /**
     * <pre>
     * Audio format of the voicemail file.
     * </pre>
     *
     * <code>optional .google.internal.communications.voicemailtranscription.v1.AudioFormat audio_format = 2;</code>
     */
    public Builder setAudioFormat(com.google.internal.communications.voicemailtranscription.v1.AudioFormat value) {
      copyOnWrite();
      instance.setAudioFormat(value);
      return this;
    }
    /**
     * <pre>
     * Audio format of the voicemail file.
     * </pre>
     *
     * <code>optional .google.internal.communications.voicemailtranscription.v1.AudioFormat audio_format = 2;</code>
     */
    public Builder clearAudioFormat() {
      copyOnWrite();
      instance.clearAudioFormat();
      return this;
    }

    // @@protoc_insertion_point(builder_scope:google.internal.communications.voicemailtranscription.v1.TranscribeVoicemailRequest)
  }
  @java.lang.Override
  @java.lang.SuppressWarnings({"unchecked", "fallthrough"})
  protected final java.lang.Object dynamicMethod(
      com.google.protobuf.GeneratedMessageLite.MethodToInvoke method,
      java.lang.Object arg0, java.lang.Object arg1) {
    switch (method) {
      case NEW_MUTABLE_INSTANCE: {
        return new com.google.internal.communications.voicemailtranscription.v1.TranscribeVoicemailRequest();
      }
      case NEW_BUILDER: {
        return new Builder();
      }
      case BUILD_MESSAGE_INFO: {
          java.lang.Object[] objects = new java.lang.Object[] {
            "bitField0_",
            "voicemailData_",
            "audioFormat_",
            com.google.internal.communications.voicemailtranscription.v1.AudioFormat.internalGetVerifier(),
          };
          java.lang.String info =
              "\u0001\u0002\u0000\u0001\u0001\u0002\u0002\u0000\u0000\u0000\u0001\n\u0000\u0002" +
              "\f\u0001";
          return newMessageInfo(DEFAULT_INSTANCE, info, objects);
      }
      // fall through
      case GET_DEFAULT_INSTANCE: {
        return DEFAULT_INSTANCE;
      }
      case GET_PARSER: {
        com.google.protobuf.Parser<com.google.internal.communications.voicemailtranscription.v1.TranscribeVoicemailRequest> parser = PARSER;
        if (parser == null) {
          synchronized (com.google.internal.communications.voicemailtranscription.v1.TranscribeVoicemailRequest.class) {
            parser = PARSER;
            if (parser == null) {
              parser =
                  new DefaultInstanceBasedParser<com.google.internal.communications.voicemailtranscription.v1.TranscribeVoicemailRequest>(
                      DEFAULT_INSTANCE);
              PARSER = parser;
            }
          }
        }
        return parser;
    }
    case GET_MEMOIZED_IS_INITIALIZED: {
      return (byte) 1;
    }
    case SET_MEMOIZED_IS_INITIALIZED: {
      return null;
    }
    }
    throw new UnsupportedOperationException();
  }


  // @@protoc_insertion_point(class_scope:google.internal.communications.voicemailtranscription.v1.TranscribeVoicemailRequest)
  private static final com.google.internal.communications.voicemailtranscription.v1.TranscribeVoicemailRequest DEFAULT_INSTANCE;
  static {
    TranscribeVoicemailRequest defaultInstance = new TranscribeVoicemailRequest();
    // New instances are implicitly immutable so no need to make
    // immutable.
    DEFAULT_INSTANCE = defaultInstance;
    com.google.protobuf.GeneratedMessageLite.registerDefaultInstance(
      TranscribeVoicemailRequest.class, defaultInstance);
  }

  public static com.google.internal.communications.voicemailtranscription.v1.TranscribeVoicemailRequest getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static volatile com.google.protobuf.Parser<TranscribeVoicemailRequest> PARSER;

  public static com.google.protobuf.Parser<TranscribeVoicemailRequest> parser() {
    return DEFAULT_INSTANCE.getParserForType();
  }
}

