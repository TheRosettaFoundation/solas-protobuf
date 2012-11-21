// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: OrgMembershipAccepted.proto

#ifndef PROTOBUF_OrgMembershipAccepted_2eproto__INCLUDED
#define PROTOBUF_OrgMembershipAccepted_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include "EmailMessage.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_OrgMembershipAccepted_2eproto();
void protobuf_AssignDesc_OrgMembershipAccepted_2eproto();
void protobuf_ShutdownFile_OrgMembershipAccepted_2eproto();

class OrgMembershipAccepted;

// ===================================================================

class OrgMembershipAccepted : public ::google::protobuf::Message {
 public:
  OrgMembershipAccepted();
  virtual ~OrgMembershipAccepted();
  
  OrgMembershipAccepted(const OrgMembershipAccepted& from);
  
  inline OrgMembershipAccepted& operator=(const OrgMembershipAccepted& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const OrgMembershipAccepted& default_instance();
  
  void Swap(OrgMembershipAccepted* other);
  
  // implements Message ----------------------------------------------
  
  OrgMembershipAccepted* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const OrgMembershipAccepted& from);
  void MergeFrom(const OrgMembershipAccepted& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required .EmailMessage.Type email_type = 1 [default = OrgMembershipAccepted];
  inline bool has_email_type() const;
  inline void clear_email_type();
  static const int kEmailTypeFieldNumber = 1;
  inline ::EmailMessage_Type email_type() const;
  inline void set_email_type(::EmailMessage_Type value);
  
  // required int32 user_id = 2;
  inline bool has_user_id() const;
  inline void clear_user_id();
  static const int kUserIdFieldNumber = 2;
  inline ::google::protobuf::int32 user_id() const;
  inline void set_user_id(::google::protobuf::int32 value);
  
  // required int32 org_id = 3;
  inline bool has_org_id() const;
  inline void clear_org_id();
  static const int kOrgIdFieldNumber = 3;
  inline ::google::protobuf::int32 org_id() const;
  inline void set_org_id(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:OrgMembershipAccepted)
 private:
  inline void set_has_email_type();
  inline void clear_has_email_type();
  inline void set_has_user_id();
  inline void clear_has_user_id();
  inline void set_has_org_id();
  inline void clear_has_org_id();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  int email_type_;
  ::google::protobuf::int32 user_id_;
  ::google::protobuf::int32 org_id_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_OrgMembershipAccepted_2eproto();
  friend void protobuf_AssignDesc_OrgMembershipAccepted_2eproto();
  friend void protobuf_ShutdownFile_OrgMembershipAccepted_2eproto();
  
  void InitAsDefaultInstance();
  static OrgMembershipAccepted* default_instance_;
};
// ===================================================================


// ===================================================================

// OrgMembershipAccepted

// required .EmailMessage.Type email_type = 1 [default = OrgMembershipAccepted];
inline bool OrgMembershipAccepted::has_email_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void OrgMembershipAccepted::set_has_email_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void OrgMembershipAccepted::clear_has_email_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void OrgMembershipAccepted::clear_email_type() {
  email_type_ = 3;
  clear_has_email_type();
}
inline ::EmailMessage_Type OrgMembershipAccepted::email_type() const {
  return static_cast< ::EmailMessage_Type >(email_type_);
}
inline void OrgMembershipAccepted::set_email_type(::EmailMessage_Type value) {
  GOOGLE_DCHECK(::EmailMessage_Type_IsValid(value));
  set_has_email_type();
  email_type_ = value;
}

// required int32 user_id = 2;
inline bool OrgMembershipAccepted::has_user_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void OrgMembershipAccepted::set_has_user_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void OrgMembershipAccepted::clear_has_user_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void OrgMembershipAccepted::clear_user_id() {
  user_id_ = 0;
  clear_has_user_id();
}
inline ::google::protobuf::int32 OrgMembershipAccepted::user_id() const {
  return user_id_;
}
inline void OrgMembershipAccepted::set_user_id(::google::protobuf::int32 value) {
  set_has_user_id();
  user_id_ = value;
}

// required int32 org_id = 3;
inline bool OrgMembershipAccepted::has_org_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void OrgMembershipAccepted::set_has_org_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void OrgMembershipAccepted::clear_has_org_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void OrgMembershipAccepted::clear_org_id() {
  org_id_ = 0;
  clear_has_org_id();
}
inline ::google::protobuf::int32 OrgMembershipAccepted::org_id() const {
  return org_id_;
}
inline void OrgMembershipAccepted::set_org_id(::google::protobuf::int32 value) {
  set_has_org_id();
  org_id_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_OrgMembershipAccepted_2eproto__INCLUDED
