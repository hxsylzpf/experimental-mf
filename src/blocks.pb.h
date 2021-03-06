// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: blocks.proto

#ifndef PROTOBUF_blocks_2eproto__INCLUDED
#define PROTOBUF_blocks_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace mf {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_blocks_2eproto();
void protobuf_AssignDesc_blocks_2eproto();
void protobuf_ShutdownFile_blocks_2eproto();

class User;
class User_Record;
class Block;
class Blocks;

// ===================================================================

class User_Record : public ::google::protobuf::Message {
 public:
  User_Record();
  virtual ~User_Record();

  User_Record(const User_Record& from);

  inline User_Record& operator=(const User_Record& from) {
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
  static const User_Record& default_instance();

  void Swap(User_Record* other);

  // implements Message ----------------------------------------------

  User_Record* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const User_Record& from);
  void MergeFrom(const User_Record& from);
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

  // required int32 vid = 1;
  inline bool has_vid() const;
  inline void clear_vid();
  static const int kVidFieldNumber = 1;
  inline ::google::protobuf::int32 vid() const;
  inline void set_vid(::google::protobuf::int32 value);

  // required float rating = 2;
  inline bool has_rating() const;
  inline void clear_rating();
  static const int kRatingFieldNumber = 2;
  inline float rating() const;
  inline void set_rating(float value);

  // @@protoc_insertion_point(class_scope:mf.User.Record)
 private:
  inline void set_has_vid();
  inline void clear_has_vid();
  inline void set_has_rating();
  inline void clear_has_rating();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 vid_;
  float rating_;
  friend void  protobuf_AddDesc_blocks_2eproto();
  friend void protobuf_AssignDesc_blocks_2eproto();
  friend void protobuf_ShutdownFile_blocks_2eproto();

  void InitAsDefaultInstance();
  static User_Record* default_instance_;
};
// -------------------------------------------------------------------

class User : public ::google::protobuf::Message {
 public:
  User();
  virtual ~User();

  User(const User& from);

  inline User& operator=(const User& from) {
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
  static const User& default_instance();

  void Swap(User* other);

  // implements Message ----------------------------------------------

  User* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const User& from);
  void MergeFrom(const User& from);
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

  typedef User_Record Record;

  // accessors -------------------------------------------------------

  // required int32 uid = 1;
  inline bool has_uid() const;
  inline void clear_uid();
  static const int kUidFieldNumber = 1;
  inline ::google::protobuf::int32 uid() const;
  inline void set_uid(::google::protobuf::int32 value);

  // repeated .mf.User.Record record = 2;
  inline int record_size() const;
  inline void clear_record();
  static const int kRecordFieldNumber = 2;
  inline const ::mf::User_Record& record(int index) const;
  inline ::mf::User_Record* mutable_record(int index);
  inline ::mf::User_Record* add_record();
  inline const ::google::protobuf::RepeatedPtrField< ::mf::User_Record >&
      record() const;
  inline ::google::protobuf::RepeatedPtrField< ::mf::User_Record >*
      mutable_record();

  // @@protoc_insertion_point(class_scope:mf.User)
 private:
  inline void set_has_uid();
  inline void clear_has_uid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::mf::User_Record > record_;
  ::google::protobuf::int32 uid_;
  friend void  protobuf_AddDesc_blocks_2eproto();
  friend void protobuf_AssignDesc_blocks_2eproto();
  friend void protobuf_ShutdownFile_blocks_2eproto();

  void InitAsDefaultInstance();
  static User* default_instance_;
};
// -------------------------------------------------------------------

class Block : public ::google::protobuf::Message {
 public:
  Block();
  virtual ~Block();

  Block(const Block& from);

  inline Block& operator=(const Block& from) {
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
  static const Block& default_instance();

  void Swap(Block* other);

  // implements Message ----------------------------------------------

  Block* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Block& from);
  void MergeFrom(const Block& from);
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

  // repeated .mf.User user = 1;
  inline int user_size() const;
  inline void clear_user();
  static const int kUserFieldNumber = 1;
  inline const ::mf::User& user(int index) const;
  inline ::mf::User* mutable_user(int index);
  inline ::mf::User* add_user();
  inline const ::google::protobuf::RepeatedPtrField< ::mf::User >&
      user() const;
  inline ::google::protobuf::RepeatedPtrField< ::mf::User >*
      mutable_user();

  // @@protoc_insertion_point(class_scope:mf.Block)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::mf::User > user_;
  friend void  protobuf_AddDesc_blocks_2eproto();
  friend void protobuf_AssignDesc_blocks_2eproto();
  friend void protobuf_ShutdownFile_blocks_2eproto();

  void InitAsDefaultInstance();
  static Block* default_instance_;
};
// -------------------------------------------------------------------

class Blocks : public ::google::protobuf::Message {
 public:
  Blocks();
  virtual ~Blocks();

  Blocks(const Blocks& from);

  inline Blocks& operator=(const Blocks& from) {
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
  static const Blocks& default_instance();

  void Swap(Blocks* other);

  // implements Message ----------------------------------------------

  Blocks* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Blocks& from);
  void MergeFrom(const Blocks& from);
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

  // repeated .mf.Block block = 1;
  inline int block_size() const;
  inline void clear_block();
  static const int kBlockFieldNumber = 1;
  inline const ::mf::Block& block(int index) const;
  inline ::mf::Block* mutable_block(int index);
  inline ::mf::Block* add_block();
  inline const ::google::protobuf::RepeatedPtrField< ::mf::Block >&
      block() const;
  inline ::google::protobuf::RepeatedPtrField< ::mf::Block >*
      mutable_block();

  // @@protoc_insertion_point(class_scope:mf.Blocks)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::mf::Block > block_;
  friend void  protobuf_AddDesc_blocks_2eproto();
  friend void protobuf_AssignDesc_blocks_2eproto();
  friend void protobuf_ShutdownFile_blocks_2eproto();

  void InitAsDefaultInstance();
  static Blocks* default_instance_;
};
// ===================================================================


// ===================================================================

// User_Record

// required int32 vid = 1;
inline bool User_Record::has_vid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void User_Record::set_has_vid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void User_Record::clear_has_vid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void User_Record::clear_vid() {
  vid_ = 0;
  clear_has_vid();
}
inline ::google::protobuf::int32 User_Record::vid() const {
  // @@protoc_insertion_point(field_get:mf.User.Record.vid)
  return vid_;
}
inline void User_Record::set_vid(::google::protobuf::int32 value) {
  set_has_vid();
  vid_ = value;
  // @@protoc_insertion_point(field_set:mf.User.Record.vid)
}

// required float rating = 2;
inline bool User_Record::has_rating() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void User_Record::set_has_rating() {
  _has_bits_[0] |= 0x00000002u;
}
inline void User_Record::clear_has_rating() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void User_Record::clear_rating() {
  rating_ = 0;
  clear_has_rating();
}
inline float User_Record::rating() const {
  // @@protoc_insertion_point(field_get:mf.User.Record.rating)
  return rating_;
}
inline void User_Record::set_rating(float value) {
  set_has_rating();
  rating_ = value;
  // @@protoc_insertion_point(field_set:mf.User.Record.rating)
}

// -------------------------------------------------------------------

// User

// required int32 uid = 1;
inline bool User::has_uid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void User::set_has_uid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void User::clear_has_uid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void User::clear_uid() {
  uid_ = 0;
  clear_has_uid();
}
inline ::google::protobuf::int32 User::uid() const {
  // @@protoc_insertion_point(field_get:mf.User.uid)
  return uid_;
}
inline void User::set_uid(::google::protobuf::int32 value) {
  set_has_uid();
  uid_ = value;
  // @@protoc_insertion_point(field_set:mf.User.uid)
}

// repeated .mf.User.Record record = 2;
inline int User::record_size() const {
  return record_.size();
}
inline void User::clear_record() {
  record_.Clear();
}
inline const ::mf::User_Record& User::record(int index) const {
  // @@protoc_insertion_point(field_get:mf.User.record)
  return record_.Get(index);
}
inline ::mf::User_Record* User::mutable_record(int index) {
  // @@protoc_insertion_point(field_mutable:mf.User.record)
  return record_.Mutable(index);
}
inline ::mf::User_Record* User::add_record() {
  // @@protoc_insertion_point(field_add:mf.User.record)
  return record_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::mf::User_Record >&
User::record() const {
  // @@protoc_insertion_point(field_list:mf.User.record)
  return record_;
}
inline ::google::protobuf::RepeatedPtrField< ::mf::User_Record >*
User::mutable_record() {
  // @@protoc_insertion_point(field_mutable_list:mf.User.record)
  return &record_;
}

// -------------------------------------------------------------------

// Block

// repeated .mf.User user = 1;
inline int Block::user_size() const {
  return user_.size();
}
inline void Block::clear_user() {
  user_.Clear();
}
inline const ::mf::User& Block::user(int index) const {
  // @@protoc_insertion_point(field_get:mf.Block.user)
  return user_.Get(index);
}
inline ::mf::User* Block::mutable_user(int index) {
  // @@protoc_insertion_point(field_mutable:mf.Block.user)
  return user_.Mutable(index);
}
inline ::mf::User* Block::add_user() {
  // @@protoc_insertion_point(field_add:mf.Block.user)
  return user_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::mf::User >&
Block::user() const {
  // @@protoc_insertion_point(field_list:mf.Block.user)
  return user_;
}
inline ::google::protobuf::RepeatedPtrField< ::mf::User >*
Block::mutable_user() {
  // @@protoc_insertion_point(field_mutable_list:mf.Block.user)
  return &user_;
}

// -------------------------------------------------------------------

// Blocks

// repeated .mf.Block block = 1;
inline int Blocks::block_size() const {
  return block_.size();
}
inline void Blocks::clear_block() {
  block_.Clear();
}
inline const ::mf::Block& Blocks::block(int index) const {
  // @@protoc_insertion_point(field_get:mf.Blocks.block)
  return block_.Get(index);
}
inline ::mf::Block* Blocks::mutable_block(int index) {
  // @@protoc_insertion_point(field_mutable:mf.Blocks.block)
  return block_.Mutable(index);
}
inline ::mf::Block* Blocks::add_block() {
  // @@protoc_insertion_point(field_add:mf.Blocks.block)
  return block_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::mf::Block >&
Blocks::block() const {
  // @@protoc_insertion_point(field_list:mf.Blocks.block)
  return block_;
}
inline ::google::protobuf::RepeatedPtrField< ::mf::Block >*
Blocks::mutable_block() {
  // @@protoc_insertion_point(field_mutable_list:mf.Blocks.block)
  return &block_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace mf

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_blocks_2eproto__INCLUDED
