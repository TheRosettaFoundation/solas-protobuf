// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "UserTaskClaim.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* UserTaskClaim_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  UserTaskClaim_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_UserTaskClaim_2eproto() {
  protobuf_AddDesc_UserTaskClaim_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "UserTaskClaim.proto");
  GOOGLE_CHECK(file != NULL);
  UserTaskClaim_descriptor_ = file->message_type(0);
  static const int UserTaskClaim_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserTaskClaim, email_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserTaskClaim, user_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserTaskClaim, task_id_),
  };
  UserTaskClaim_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      UserTaskClaim_descriptor_,
      UserTaskClaim::default_instance_,
      UserTaskClaim_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserTaskClaim, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserTaskClaim, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(UserTaskClaim));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_UserTaskClaim_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    UserTaskClaim_descriptor_, &UserTaskClaim::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_UserTaskClaim_2eproto() {
  delete UserTaskClaim::default_instance_;
  delete UserTaskClaim_reflection_;
}

void protobuf_AddDesc_UserTaskClaim_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_EmailMessage_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023UserTaskClaim.proto\032\022EmailMessage.prot"
    "o\"h\n\rUserTaskClaim\0225\n\nemail_type\030\001 \002(\0162\022"
    ".EmailMessage.Type:\rUserTaskClaim\022\017\n\007use"
    "r_id\030\002 \002(\005\022\017\n\007task_id\030\003 \002(\005", 147);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "UserTaskClaim.proto", &protobuf_RegisterTypes);
  UserTaskClaim::default_instance_ = new UserTaskClaim();
  UserTaskClaim::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_UserTaskClaim_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_UserTaskClaim_2eproto {
  StaticDescriptorInitializer_UserTaskClaim_2eproto() {
    protobuf_AddDesc_UserTaskClaim_2eproto();
  }
} static_descriptor_initializer_UserTaskClaim_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int UserTaskClaim::kEmailTypeFieldNumber;
const int UserTaskClaim::kUserIdFieldNumber;
const int UserTaskClaim::kTaskIdFieldNumber;
#endif  // !_MSC_VER

UserTaskClaim::UserTaskClaim()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void UserTaskClaim::InitAsDefaultInstance() {
}

UserTaskClaim::UserTaskClaim(const UserTaskClaim& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void UserTaskClaim::SharedCtor() {
  _cached_size_ = 0;
  email_type_ = 2;
  user_id_ = 0;
  task_id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UserTaskClaim::~UserTaskClaim() {
  SharedDtor();
}

void UserTaskClaim::SharedDtor() {
  if (this != default_instance_) {
  }
}

void UserTaskClaim::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UserTaskClaim::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UserTaskClaim_descriptor_;
}

const UserTaskClaim& UserTaskClaim::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_UserTaskClaim_2eproto();  return *default_instance_;
}

UserTaskClaim* UserTaskClaim::default_instance_ = NULL;

UserTaskClaim* UserTaskClaim::New() const {
  return new UserTaskClaim;
}

void UserTaskClaim::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    email_type_ = 2;
    user_id_ = 0;
    task_id_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool UserTaskClaim::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .EmailMessage.Type email_type = 1 [default = UserTaskClaim];
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::EmailMessage_Type_IsValid(value)) {
            set_email_type(static_cast< ::EmailMessage_Type >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_user_id;
        break;
      }
      
      // required int32 user_id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_user_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &user_id_)));
          set_has_user_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_task_id;
        break;
      }
      
      // required int32 task_id = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_task_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &task_id_)));
          set_has_task_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void UserTaskClaim::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .EmailMessage.Type email_type = 1 [default = UserTaskClaim];
  if (has_email_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->email_type(), output);
  }
  
  // required int32 user_id = 2;
  if (has_user_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->user_id(), output);
  }
  
  // required int32 task_id = 3;
  if (has_task_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->task_id(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* UserTaskClaim::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .EmailMessage.Type email_type = 1 [default = UserTaskClaim];
  if (has_email_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->email_type(), target);
  }
  
  // required int32 user_id = 2;
  if (has_user_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->user_id(), target);
  }
  
  // required int32 task_id = 3;
  if (has_task_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->task_id(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int UserTaskClaim::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .EmailMessage.Type email_type = 1 [default = UserTaskClaim];
    if (has_email_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->email_type());
    }
    
    // required int32 user_id = 2;
    if (has_user_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->user_id());
    }
    
    // required int32 task_id = 3;
    if (has_task_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->task_id());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UserTaskClaim::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const UserTaskClaim* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const UserTaskClaim*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void UserTaskClaim::MergeFrom(const UserTaskClaim& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_email_type()) {
      set_email_type(from.email_type());
    }
    if (from.has_user_id()) {
      set_user_id(from.user_id());
    }
    if (from.has_task_id()) {
      set_task_id(from.task_id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void UserTaskClaim::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UserTaskClaim::CopyFrom(const UserTaskClaim& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserTaskClaim::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;
  
  return true;
}

void UserTaskClaim::Swap(UserTaskClaim* other) {
  if (other != this) {
    std::swap(email_type_, other->email_type_);
    std::swap(user_id_, other->user_id_);
    std::swap(task_id_, other->task_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata UserTaskClaim::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = UserTaskClaim_descriptor_;
  metadata.reflection = UserTaskClaim_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
