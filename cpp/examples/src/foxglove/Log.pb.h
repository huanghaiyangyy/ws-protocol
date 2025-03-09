// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: foxglove/Log.proto

#ifndef PROTOBUF_INCLUDED_foxglove_2fLog_2eproto
#define PROTOBUF_INCLUDED_foxglove_2fLog_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_foxglove_2fLog_2eproto 

namespace protobuf_foxglove_2fLog_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_foxglove_2fLog_2eproto
namespace foxglove {
class Log;
class LogDefaultTypeInternal;
extern LogDefaultTypeInternal _Log_default_instance_;
}  // namespace foxglove
namespace google {
namespace protobuf {
template<> ::foxglove::Log* Arena::CreateMaybeMessage<::foxglove::Log>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace foxglove {

enum Log_Level {
  Log_Level_UNKNOWN = 0,
  Log_Level_DEBUG = 1,
  Log_Level_INFO = 2,
  Log_Level_WARNING = 3,
  Log_Level_ERROR = 4,
  Log_Level_FATAL = 5,
  Log_Level_Log_Level_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Log_Level_Log_Level_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Log_Level_IsValid(int value);
const Log_Level Log_Level_Level_MIN = Log_Level_UNKNOWN;
const Log_Level Log_Level_Level_MAX = Log_Level_FATAL;
const int Log_Level_Level_ARRAYSIZE = Log_Level_Level_MAX + 1;

const ::google::protobuf::EnumDescriptor* Log_Level_descriptor();
inline const ::std::string& Log_Level_Name(Log_Level value) {
  return ::google::protobuf::internal::NameOfEnum(
    Log_Level_descriptor(), value);
}
inline bool Log_Level_Parse(
    const ::std::string& name, Log_Level* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Log_Level>(
    Log_Level_descriptor(), name, value);
}
// ===================================================================

class Log : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:foxglove.Log) */ {
 public:
  Log();
  virtual ~Log();

  Log(const Log& from);

  inline Log& operator=(const Log& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Log(Log&& from) noexcept
    : Log() {
    *this = ::std::move(from);
  }

  inline Log& operator=(Log&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Log& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Log* internal_default_instance() {
    return reinterpret_cast<const Log*>(
               &_Log_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Log* other);
  friend void swap(Log& a, Log& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Log* New() const final {
    return CreateMaybeMessage<Log>(NULL);
  }

  Log* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Log>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Log& from);
  void MergeFrom(const Log& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Log* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Log_Level Level;
  static const Level UNKNOWN =
    Log_Level_UNKNOWN;
  static const Level DEBUG =
    Log_Level_DEBUG;
  static const Level INFO =
    Log_Level_INFO;
  static const Level WARNING =
    Log_Level_WARNING;
  static const Level ERROR =
    Log_Level_ERROR;
  static const Level FATAL =
    Log_Level_FATAL;
  static inline bool Level_IsValid(int value) {
    return Log_Level_IsValid(value);
  }
  static const Level Level_MIN =
    Log_Level_Level_MIN;
  static const Level Level_MAX =
    Log_Level_Level_MAX;
  static const int Level_ARRAYSIZE =
    Log_Level_Level_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Level_descriptor() {
    return Log_Level_descriptor();
  }
  static inline const ::std::string& Level_Name(Level value) {
    return Log_Level_Name(value);
  }
  static inline bool Level_Parse(const ::std::string& name,
      Level* value) {
    return Log_Level_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // string message = 3;
  void clear_message();
  static const int kMessageFieldNumber = 3;
  const ::std::string& message() const;
  void set_message(const ::std::string& value);
  #if LANG_CXX11
  void set_message(::std::string&& value);
  #endif
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  ::std::string* mutable_message();
  ::std::string* release_message();
  void set_allocated_message(::std::string* message);

  // string name = 4;
  void clear_name();
  static const int kNameFieldNumber = 4;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string file = 5;
  void clear_file();
  static const int kFileFieldNumber = 5;
  const ::std::string& file() const;
  void set_file(const ::std::string& value);
  #if LANG_CXX11
  void set_file(::std::string&& value);
  #endif
  void set_file(const char* value);
  void set_file(const char* value, size_t size);
  ::std::string* mutable_file();
  ::std::string* release_file();
  void set_allocated_file(::std::string* file);

  // .google.protobuf.Timestamp timestamp = 1;
  bool has_timestamp() const;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 1;
  private:
  const ::google::protobuf::Timestamp& _internal_timestamp() const;
  public:
  const ::google::protobuf::Timestamp& timestamp() const;
  ::google::protobuf::Timestamp* release_timestamp();
  ::google::protobuf::Timestamp* mutable_timestamp();
  void set_allocated_timestamp(::google::protobuf::Timestamp* timestamp);

  // .foxglove.Log.Level level = 2;
  void clear_level();
  static const int kLevelFieldNumber = 2;
  ::foxglove::Log_Level level() const;
  void set_level(::foxglove::Log_Level value);

  // fixed32 line = 6;
  void clear_line();
  static const int kLineFieldNumber = 6;
  ::google::protobuf::uint32 line() const;
  void set_line(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:foxglove.Log)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr message_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr file_;
  ::google::protobuf::Timestamp* timestamp_;
  int level_;
  ::google::protobuf::uint32 line_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_foxglove_2fLog_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Log

// .google.protobuf.Timestamp timestamp = 1;
inline bool Log::has_timestamp() const {
  return this != internal_default_instance() && timestamp_ != NULL;
}
inline const ::google::protobuf::Timestamp& Log::_internal_timestamp() const {
  return *timestamp_;
}
inline const ::google::protobuf::Timestamp& Log::timestamp() const {
  const ::google::protobuf::Timestamp* p = timestamp_;
  // @@protoc_insertion_point(field_get:foxglove.Log.timestamp)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::Timestamp*>(
      &::google::protobuf::_Timestamp_default_instance_);
}
inline ::google::protobuf::Timestamp* Log::release_timestamp() {
  // @@protoc_insertion_point(field_release:foxglove.Log.timestamp)
  
  ::google::protobuf::Timestamp* temp = timestamp_;
  timestamp_ = NULL;
  return temp;
}
inline ::google::protobuf::Timestamp* Log::mutable_timestamp() {
  
  if (timestamp_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::Timestamp>(GetArenaNoVirtual());
    timestamp_ = p;
  }
  // @@protoc_insertion_point(field_mutable:foxglove.Log.timestamp)
  return timestamp_;
}
inline void Log::set_allocated_timestamp(::google::protobuf::Timestamp* timestamp) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(timestamp_);
  }
  if (timestamp) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(timestamp)->GetArena();
    if (message_arena != submessage_arena) {
      timestamp = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, timestamp, submessage_arena);
    }
    
  } else {
    
  }
  timestamp_ = timestamp;
  // @@protoc_insertion_point(field_set_allocated:foxglove.Log.timestamp)
}

// .foxglove.Log.Level level = 2;
inline void Log::clear_level() {
  level_ = 0;
}
inline ::foxglove::Log_Level Log::level() const {
  // @@protoc_insertion_point(field_get:foxglove.Log.level)
  return static_cast< ::foxglove::Log_Level >(level_);
}
inline void Log::set_level(::foxglove::Log_Level value) {
  
  level_ = value;
  // @@protoc_insertion_point(field_set:foxglove.Log.level)
}

// string message = 3;
inline void Log::clear_message() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Log::message() const {
  // @@protoc_insertion_point(field_get:foxglove.Log.message)
  return message_.GetNoArena();
}
inline void Log::set_message(const ::std::string& value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:foxglove.Log.message)
}
#if LANG_CXX11
inline void Log::set_message(::std::string&& value) {
  
  message_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:foxglove.Log.message)
}
#endif
inline void Log::set_message(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:foxglove.Log.message)
}
inline void Log::set_message(const char* value, size_t size) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:foxglove.Log.message)
}
inline ::std::string* Log::mutable_message() {
  
  // @@protoc_insertion_point(field_mutable:foxglove.Log.message)
  return message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Log::release_message() {
  // @@protoc_insertion_point(field_release:foxglove.Log.message)
  
  return message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Log::set_allocated_message(::std::string* message) {
  if (message != NULL) {
    
  } else {
    
  }
  message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:foxglove.Log.message)
}

// string name = 4;
inline void Log::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Log::name() const {
  // @@protoc_insertion_point(field_get:foxglove.Log.name)
  return name_.GetNoArena();
}
inline void Log::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:foxglove.Log.name)
}
#if LANG_CXX11
inline void Log::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:foxglove.Log.name)
}
#endif
inline void Log::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:foxglove.Log.name)
}
inline void Log::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:foxglove.Log.name)
}
inline ::std::string* Log::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:foxglove.Log.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Log::release_name() {
  // @@protoc_insertion_point(field_release:foxglove.Log.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Log::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:foxglove.Log.name)
}

// string file = 5;
inline void Log::clear_file() {
  file_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Log::file() const {
  // @@protoc_insertion_point(field_get:foxglove.Log.file)
  return file_.GetNoArena();
}
inline void Log::set_file(const ::std::string& value) {
  
  file_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:foxglove.Log.file)
}
#if LANG_CXX11
inline void Log::set_file(::std::string&& value) {
  
  file_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:foxglove.Log.file)
}
#endif
inline void Log::set_file(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  file_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:foxglove.Log.file)
}
inline void Log::set_file(const char* value, size_t size) {
  
  file_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:foxglove.Log.file)
}
inline ::std::string* Log::mutable_file() {
  
  // @@protoc_insertion_point(field_mutable:foxglove.Log.file)
  return file_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Log::release_file() {
  // @@protoc_insertion_point(field_release:foxglove.Log.file)
  
  return file_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Log::set_allocated_file(::std::string* file) {
  if (file != NULL) {
    
  } else {
    
  }
  file_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), file);
  // @@protoc_insertion_point(field_set_allocated:foxglove.Log.file)
}

// fixed32 line = 6;
inline void Log::clear_line() {
  line_ = 0u;
}
inline ::google::protobuf::uint32 Log::line() const {
  // @@protoc_insertion_point(field_get:foxglove.Log.line)
  return line_;
}
inline void Log::set_line(::google::protobuf::uint32 value) {
  
  line_ = value;
  // @@protoc_insertion_point(field_set:foxglove.Log.line)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace foxglove

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::foxglove::Log_Level> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::foxglove::Log_Level>() {
  return ::foxglove::Log_Level_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_foxglove_2fLog_2eproto
