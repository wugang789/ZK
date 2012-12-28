// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ZKM.proto

#ifndef PROTOBUF_ZKM_2eproto__INCLUDED
#define PROTOBUF_ZKM_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace zk {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ZKM_2eproto();
void protobuf_AssignDesc_ZKM_2eproto();
void protobuf_ShutdownFile_ZKM_2eproto();

class ZKM;

// ===================================================================

class ZKM : public ::google::protobuf::Message {
 public:
  ZKM();
  virtual ~ZKM();
  
  ZKM(const ZKM& from);
  
  inline ZKM& operator=(const ZKM& from) {
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
  static const ZKM& default_instance();
  
  void Swap(ZKM* other);
  
  // implements Message ----------------------------------------------
  
  ZKM* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ZKM& from);
  void MergeFrom(const ZKM& from);
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
  
  // optional string key = 1;
  inline bool has_key() const;
  inline void clear_key();
  static const int kKeyFieldNumber = 1;
  inline const ::std::string& key() const;
  inline void set_key(const ::std::string& value);
  inline void set_key(const char* value);
  inline void set_key(const char* value, size_t size);
  inline ::std::string* mutable_key();
  inline ::std::string* release_key();
  
  // optional string hwid = 2;
  inline bool has_hwid() const;
  inline void clear_hwid();
  static const int kHwidFieldNumber = 2;
  inline const ::std::string& hwid() const;
  inline void set_hwid(const ::std::string& value);
  inline void set_hwid(const char* value);
  inline void set_hwid(const char* value, size_t size);
  inline ::std::string* mutable_hwid();
  inline ::std::string* release_hwid();
  
  // optional int32 type = 3;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 3;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);
  
  // repeated string options = 4;
  inline int options_size() const;
  inline void clear_options();
  static const int kOptionsFieldNumber = 4;
  inline const ::std::string& options(int index) const;
  inline ::std::string* mutable_options(int index);
  inline void set_options(int index, const ::std::string& value);
  inline void set_options(int index, const char* value);
  inline void set_options(int index, const char* value, size_t size);
  inline ::std::string* add_options();
  inline void add_options(const ::std::string& value);
  inline void add_options(const char* value);
  inline void add_options(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& options() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_options();
  
  // @@protoc_insertion_point(class_scope:zk.ZKM)
 private:
  inline void set_has_key();
  inline void clear_has_key();
  inline void set_has_hwid();
  inline void clear_has_hwid();
  inline void set_has_type();
  inline void clear_has_type();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* key_;
  ::std::string* hwid_;
  ::google::protobuf::RepeatedPtrField< ::std::string> options_;
  ::google::protobuf::int32 type_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  friend void  protobuf_AddDesc_ZKM_2eproto();
  friend void protobuf_AssignDesc_ZKM_2eproto();
  friend void protobuf_ShutdownFile_ZKM_2eproto();
  
  void InitAsDefaultInstance();
  static ZKM* default_instance_;
};
// ===================================================================


// ===================================================================

// ZKM

// optional string key = 1;
inline bool ZKM::has_key() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ZKM::set_has_key() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ZKM::clear_has_key() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ZKM::clear_key() {
  if (key_ != &::google::protobuf::internal::kEmptyString) {
    key_->clear();
  }
  clear_has_key();
}
inline const ::std::string& ZKM::key() const {
  return *key_;
}
inline void ZKM::set_key(const ::std::string& value) {
  set_has_key();
  if (key_ == &::google::protobuf::internal::kEmptyString) {
    key_ = new ::std::string;
  }
  key_->assign(value);
}
inline void ZKM::set_key(const char* value) {
  set_has_key();
  if (key_ == &::google::protobuf::internal::kEmptyString) {
    key_ = new ::std::string;
  }
  key_->assign(value);
}
inline void ZKM::set_key(const char* value, size_t size) {
  set_has_key();
  if (key_ == &::google::protobuf::internal::kEmptyString) {
    key_ = new ::std::string;
  }
  key_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ZKM::mutable_key() {
  set_has_key();
  if (key_ == &::google::protobuf::internal::kEmptyString) {
    key_ = new ::std::string;
  }
  return key_;
}
inline ::std::string* ZKM::release_key() {
  clear_has_key();
  if (key_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = key_;
    key_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string hwid = 2;
inline bool ZKM::has_hwid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ZKM::set_has_hwid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ZKM::clear_has_hwid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ZKM::clear_hwid() {
  if (hwid_ != &::google::protobuf::internal::kEmptyString) {
    hwid_->clear();
  }
  clear_has_hwid();
}
inline const ::std::string& ZKM::hwid() const {
  return *hwid_;
}
inline void ZKM::set_hwid(const ::std::string& value) {
  set_has_hwid();
  if (hwid_ == &::google::protobuf::internal::kEmptyString) {
    hwid_ = new ::std::string;
  }
  hwid_->assign(value);
}
inline void ZKM::set_hwid(const char* value) {
  set_has_hwid();
  if (hwid_ == &::google::protobuf::internal::kEmptyString) {
    hwid_ = new ::std::string;
  }
  hwid_->assign(value);
}
inline void ZKM::set_hwid(const char* value, size_t size) {
  set_has_hwid();
  if (hwid_ == &::google::protobuf::internal::kEmptyString) {
    hwid_ = new ::std::string;
  }
  hwid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ZKM::mutable_hwid() {
  set_has_hwid();
  if (hwid_ == &::google::protobuf::internal::kEmptyString) {
    hwid_ = new ::std::string;
  }
  return hwid_;
}
inline ::std::string* ZKM::release_hwid() {
  clear_has_hwid();
  if (hwid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = hwid_;
    hwid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional int32 type = 3;
inline bool ZKM::has_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ZKM::set_has_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ZKM::clear_has_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ZKM::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 ZKM::type() const {
  return type_;
}
inline void ZKM::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
}

// repeated string options = 4;
inline int ZKM::options_size() const {
  return options_.size();
}
inline void ZKM::clear_options() {
  options_.Clear();
}
inline const ::std::string& ZKM::options(int index) const {
  return options_.Get(index);
}
inline ::std::string* ZKM::mutable_options(int index) {
  return options_.Mutable(index);
}
inline void ZKM::set_options(int index, const ::std::string& value) {
  options_.Mutable(index)->assign(value);
}
inline void ZKM::set_options(int index, const char* value) {
  options_.Mutable(index)->assign(value);
}
inline void ZKM::set_options(int index, const char* value, size_t size) {
  options_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ZKM::add_options() {
  return options_.Add();
}
inline void ZKM::add_options(const ::std::string& value) {
  options_.Add()->assign(value);
}
inline void ZKM::add_options(const char* value) {
  options_.Add()->assign(value);
}
inline void ZKM::add_options(const char* value, size_t size) {
  options_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
ZKM::options() const {
  return options_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
ZKM::mutable_options() {
  return &options_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace zk

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ZKM_2eproto__INCLUDED
