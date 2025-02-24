// This file is generated by rust-protobuf 2.22.1. Do not edit
// @generated

// https://github.com/rust-lang/rust-clippy/issues/702
#![allow(unknown_lints)]
#![allow(clippy::all)]

#![allow(unused_attributes)]
#![cfg_attr(rustfmt, rustfmt::skip)]

#![allow(box_pointers)]
#![allow(dead_code)]
#![allow(missing_docs)]
#![allow(non_camel_case_types)]
#![allow(non_snake_case)]
#![allow(non_upper_case_globals)]
#![allow(trivial_casts)]
#![allow(unused_imports)]
#![allow(unused_results)]
//! Generated file from `hci/facade/hci_facade.proto`

/// Generated files are compatible only with the same version
/// of protobuf runtime.
// const _PROTOBUF_VERSION_CHECK: () = ::protobuf::VERSION_2_22_1;

#[derive(PartialEq,Clone,Default)]
pub struct EventRequest {
    // message fields
    pub code: u32,
    // special fields
    pub unknown_fields: ::protobuf::UnknownFields,
    pub cached_size: ::protobuf::CachedSize,
}

impl<'a> ::std::default::Default for &'a EventRequest {
    fn default() -> &'a EventRequest {
        <EventRequest as ::protobuf::Message>::default_instance()
    }
}

impl EventRequest {
    pub fn new() -> EventRequest {
        ::std::default::Default::default()
    }

    // uint32 code = 1;


    pub fn get_code(&self) -> u32 {
        self.code
    }
    pub fn clear_code(&mut self) {
        self.code = 0;
    }

    // Param is passed by value, moved
    pub fn set_code(&mut self, v: u32) {
        self.code = v;
    }
}

impl ::protobuf::Message for EventRequest {
    fn is_initialized(&self) -> bool {
        true
    }

    fn merge_from(&mut self, is: &mut ::protobuf::CodedInputStream<'_>) -> ::protobuf::ProtobufResult<()> {
        while !is.eof()? {
            let (field_number, wire_type) = is.read_tag_unpack()?;
            match field_number {
                1 => {
                    if wire_type != ::protobuf::wire_format::WireTypeVarint {
                        return ::std::result::Result::Err(::protobuf::rt::unexpected_wire_type(wire_type));
                    }
                    let tmp = is.read_uint32()?;
                    self.code = tmp;
                },
                _ => {
                    ::protobuf::rt::read_unknown_or_skip_group(field_number, wire_type, is, self.mut_unknown_fields())?;
                },
            };
        }
        ::std::result::Result::Ok(())
    }

    // Compute sizes of nested messages
    #[allow(unused_variables)]
    fn compute_size(&self) -> u32 {
        let mut my_size = 0;
        if self.code != 0 {
            my_size += ::protobuf::rt::value_size(1, self.code, ::protobuf::wire_format::WireTypeVarint);
        }
        my_size += ::protobuf::rt::unknown_fields_size(self.get_unknown_fields());
        self.cached_size.set(my_size);
        my_size
    }

    fn write_to_with_cached_sizes(&self, os: &mut ::protobuf::CodedOutputStream<'_>) -> ::protobuf::ProtobufResult<()> {
        if self.code != 0 {
            os.write_uint32(1, self.code)?;
        }
        os.write_unknown_fields(self.get_unknown_fields())?;
        ::std::result::Result::Ok(())
    }

    fn get_cached_size(&self) -> u32 {
        self.cached_size.get()
    }

    fn get_unknown_fields(&self) -> &::protobuf::UnknownFields {
        &self.unknown_fields
    }

    fn mut_unknown_fields(&mut self) -> &mut ::protobuf::UnknownFields {
        &mut self.unknown_fields
    }

    fn as_any(&self) -> &dyn (::std::any::Any) {
        self as &dyn (::std::any::Any)
    }
    fn as_any_mut(&mut self) -> &mut dyn (::std::any::Any) {
        self as &mut dyn (::std::any::Any)
    }
    fn into_any(self: ::std::boxed::Box<Self>) -> ::std::boxed::Box<dyn (::std::any::Any)> {
        self
    }

    fn descriptor(&self) -> &'static ::protobuf::reflect::MessageDescriptor {
        Self::descriptor_static()
    }

    fn new() -> EventRequest {
        EventRequest::new()
    }

    fn descriptor_static() -> &'static ::protobuf::reflect::MessageDescriptor {
        static descriptor: ::protobuf::rt::LazyV2<::protobuf::reflect::MessageDescriptor> = ::protobuf::rt::LazyV2::INIT;
        descriptor.get(|| {
            let mut fields = ::std::vec::Vec::new();
            fields.push(::protobuf::reflect::accessor::make_simple_field_accessor::<_, ::protobuf::types::ProtobufTypeUint32>(
                "code",
                |m: &EventRequest| { &m.code },
                |m: &mut EventRequest| { &mut m.code },
            ));
            ::protobuf::reflect::MessageDescriptor::new_pb_name::<EventRequest>(
                "EventRequest",
                fields,
                file_descriptor_proto()
            )
        })
    }

    fn default_instance() -> &'static EventRequest {
        static instance: ::protobuf::rt::LazyV2<EventRequest> = ::protobuf::rt::LazyV2::INIT;
        instance.get(EventRequest::new)
    }
}

impl ::protobuf::Clear for EventRequest {
    fn clear(&mut self) {
        self.code = 0;
        self.unknown_fields.clear();
    }
}

impl ::std::fmt::Debug for EventRequest {
    fn fmt(&self, f: &mut ::std::fmt::Formatter<'_>) -> ::std::fmt::Result {
        ::protobuf::text_format::fmt(self, f)
    }
}

impl ::protobuf::reflect::ProtobufValue for EventRequest {
    fn as_ref(&self) -> ::protobuf::reflect::ReflectValueRef {
        ::protobuf::reflect::ReflectValueRef::Message(self)
    }
}

static file_descriptor_proto_data: &'static [u8] = b"\
    \n\x1bhci/facade/hci_facade.proto\x12\rbluetooth.hci\x1a\x1bgoogle/proto\
    buf/empty.proto\x1a\x13facade/common.proto\"\"\n\x0cEventRequest\x12\x12\
    \n\x04code\x18\x01\x20\x01(\rR\x04code2\xea\x03\n\tHciFacade\x12?\n\x0bS\
    endCommand\x12\x16.bluetooth.facade.Data\x1a\x16.google.protobuf.Empty\"\
    \0\x12E\n\x0cRequestEvent\x12\x1b.bluetooth.hci.EventRequest\x1a\x16.goo\
    gle.protobuf.Empty\"\0\x12B\n\x0cStreamEvents\x12\x16.google.protobuf.Em\
    pty\x1a\x16.bluetooth.facade.Data\"\00\x01\x12J\n\x11RequestLeSubevent\
    \x12\x1b.bluetooth.hci.EventRequest\x1a\x16.google.protobuf.Empty\"\0\
    \x12G\n\x11StreamLeSubevents\x12\x16.google.protobuf.Empty\x1a\x16.bluet\
    ooth.facade.Data\"\00\x01\x12;\n\x07SendAcl\x12\x16.bluetooth.facade.Dat\
    a\x1a\x16.google.protobuf.Empty\"\0\x12?\n\tStreamAcl\x12\x16.google.pro\
    tobuf.Empty\x1a\x16.bluetooth.facade.Data\"\00\x01J\xd3\x04\n\x06\x12\
    \x04\0\0\x16\x01\n\x08\n\x01\x0c\x12\x03\0\0\x12\n\x08\n\x01\x02\x12\x03\
    \x02\0\x16\n\t\n\x02\x03\0\x12\x03\x04\0%\n\t\n\x02\x03\x01\x12\x03\x05\
    \0\x1d\n\n\n\x02\x06\0\x12\x04\x07\0\x12\x01\n\n\n\x03\x06\0\x01\x12\x03\
    \x07\x08\x11\n\x0b\n\x04\x06\0\x02\0\x12\x03\x08\x02A\n\x0c\n\x05\x06\0\
    \x02\0\x01\x12\x03\x08\x06\x11\n\x0c\n\x05\x06\0\x02\0\x02\x12\x03\x08\
    \x12\x1d\n\x0c\n\x05\x06\0\x02\0\x03\x12\x03\x08(=\n\x0b\n\x04\x06\0\x02\
    \x01\x12\x03\n\x02C\n\x0c\n\x05\x06\0\x02\x01\x01\x12\x03\n\x06\x12\n\
    \x0c\n\x05\x06\0\x02\x01\x02\x12\x03\n\x13\x1f\n\x0c\n\x05\x06\0\x02\x01\
    \x03\x12\x03\n*?\n\x0b\n\x04\x06\0\x02\x02\x12\x03\x0b\x02I\n\x0c\n\x05\
    \x06\0\x02\x02\x01\x12\x03\x0b\x06\x12\n\x0c\n\x05\x06\0\x02\x02\x02\x12\
    \x03\x0b\x13(\n\x0c\n\x05\x06\0\x02\x02\x06\x12\x03\x0b39\n\x0c\n\x05\
    \x06\0\x02\x02\x03\x12\x03\x0b:E\n\x0b\n\x04\x06\0\x02\x03\x12\x03\r\x02\
    H\n\x0c\n\x05\x06\0\x02\x03\x01\x12\x03\r\x06\x17\n\x0c\n\x05\x06\0\x02\
    \x03\x02\x12\x03\r\x18$\n\x0c\n\x05\x06\0\x02\x03\x03\x12\x03\r/D\n\x0b\
    \n\x04\x06\0\x02\x04\x12\x03\x0e\x02N\n\x0c\n\x05\x06\0\x02\x04\x01\x12\
    \x03\x0e\x06\x17\n\x0c\n\x05\x06\0\x02\x04\x02\x12\x03\x0e\x18-\n\x0c\n\
    \x05\x06\0\x02\x04\x06\x12\x03\x0e8>\n\x0c\n\x05\x06\0\x02\x04\x03\x12\
    \x03\x0e?J\n\x0b\n\x04\x06\0\x02\x05\x12\x03\x10\x02=\n\x0c\n\x05\x06\0\
    \x02\x05\x01\x12\x03\x10\x06\r\n\x0c\n\x05\x06\0\x02\x05\x02\x12\x03\x10\
    \x0e\x19\n\x0c\n\x05\x06\0\x02\x05\x03\x12\x03\x10$9\n\x0b\n\x04\x06\0\
    \x02\x06\x12\x03\x11\x02F\n\x0c\n\x05\x06\0\x02\x06\x01\x12\x03\x11\x06\
    \x0f\n\x0c\n\x05\x06\0\x02\x06\x02\x12\x03\x11\x10%\n\x0c\n\x05\x06\0\
    \x02\x06\x06\x12\x03\x1106\n\x0c\n\x05\x06\0\x02\x06\x03\x12\x03\x117B\n\
    \n\n\x02\x04\0\x12\x04\x14\0\x16\x01\n\n\n\x03\x04\0\x01\x12\x03\x14\x08\
    \x14\n\x0b\n\x04\x04\0\x02\0\x12\x03\x15\x02\x12\n\r\n\x05\x04\0\x02\0\
    \x04\x12\x04\x15\x02\x14\x16\n\x0c\n\x05\x04\0\x02\0\x05\x12\x03\x15\x02\
    \x08\n\x0c\n\x05\x04\0\x02\0\x01\x12\x03\x15\t\r\n\x0c\n\x05\x04\0\x02\0\
    \x03\x12\x03\x15\x10\x11b\x06proto3\
";

static file_descriptor_proto_lazy: ::protobuf::rt::LazyV2<::protobuf::descriptor::FileDescriptorProto> = ::protobuf::rt::LazyV2::INIT;

fn parse_descriptor_proto() -> ::protobuf::descriptor::FileDescriptorProto {
    ::protobuf::Message::parse_from_bytes(file_descriptor_proto_data).unwrap()
}

pub fn file_descriptor_proto() -> &'static ::protobuf::descriptor::FileDescriptorProto {
    file_descriptor_proto_lazy.get(|| {
        parse_descriptor_proto()
    })
}
