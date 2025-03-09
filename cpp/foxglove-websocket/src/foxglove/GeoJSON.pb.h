// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: foxglove/GeoJSON.proto

#ifndef PROTOBUF_INCLUDED_foxglove_2fGeoJSON_2eproto
#define PROTOBUF_INCLUDED_foxglove_2fGeoJSON_2eproto

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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_foxglove_2fGeoJSON_2eproto 

namespace protobuf_foxglove_2fGeoJSON_2eproto {
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
}  // namespace protobuf_foxglove_2fGeoJSON_2eproto
namespace foxglove {
class GeoJSON;
class GeoJSONDefaultTypeInternal;
extern GeoJSONDefaultTypeInternal _GeoJSON_default_instance_;
}  // namespace foxglove
namespace google {
namespace protobuf {
template<> ::foxglove::GeoJSON* Arena::CreateMaybeMessage<::foxglove::GeoJSON>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace foxglove {

// ===================================================================

class GeoJSON : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:foxglove.GeoJSON) */ {
 public:
  GeoJSON();
  virtual ~GeoJSON();

  GeoJSON(const GeoJSON& from);

  inline GeoJSON& operator=(const GeoJSON& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GeoJSON(GeoJSON&& from) noexcept
    : GeoJSON() {
    *this = ::std::move(from);
  }

  inline GeoJSON& operator=(GeoJSON&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const GeoJSON& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GeoJSON* internal_default_instance() {
    return reinterpret_cast<const GeoJSON*>(
               &_GeoJSON_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(GeoJSON* other);
  friend void swap(GeoJSON& a, GeoJSON& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GeoJSON* New() const final {
    return CreateMaybeMessage<GeoJSON>(NULL);
  }

  GeoJSON* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GeoJSON>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GeoJSON& from);
  void MergeFrom(const GeoJSON& from);
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
  void InternalSwap(GeoJSON* other);
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

  // accessors -------------------------------------------------------

  // string geojson = 1;
  void clear_geojson();
  static const int kGeojsonFieldNumber = 1;
  const ::std::string& geojson() const;
  void set_geojson(const ::std::string& value);
  #if LANG_CXX11
  void set_geojson(::std::string&& value);
  #endif
  void set_geojson(const char* value);
  void set_geojson(const char* value, size_t size);
  ::std::string* mutable_geojson();
  ::std::string* release_geojson();
  void set_allocated_geojson(::std::string* geojson);

  // @@protoc_insertion_point(class_scope:foxglove.GeoJSON)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr geojson_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_foxglove_2fGeoJSON_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GeoJSON

// string geojson = 1;
inline void GeoJSON::clear_geojson() {
  geojson_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& GeoJSON::geojson() const {
  // @@protoc_insertion_point(field_get:foxglove.GeoJSON.geojson)
  return geojson_.GetNoArena();
}
inline void GeoJSON::set_geojson(const ::std::string& value) {
  
  geojson_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:foxglove.GeoJSON.geojson)
}
#if LANG_CXX11
inline void GeoJSON::set_geojson(::std::string&& value) {
  
  geojson_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:foxglove.GeoJSON.geojson)
}
#endif
inline void GeoJSON::set_geojson(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  geojson_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:foxglove.GeoJSON.geojson)
}
inline void GeoJSON::set_geojson(const char* value, size_t size) {
  
  geojson_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:foxglove.GeoJSON.geojson)
}
inline ::std::string* GeoJSON::mutable_geojson() {
  
  // @@protoc_insertion_point(field_mutable:foxglove.GeoJSON.geojson)
  return geojson_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GeoJSON::release_geojson() {
  // @@protoc_insertion_point(field_release:foxglove.GeoJSON.geojson)
  
  return geojson_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GeoJSON::set_allocated_geojson(::std::string* geojson) {
  if (geojson != NULL) {
    
  } else {
    
  }
  geojson_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), geojson);
  // @@protoc_insertion_point(field_set_allocated:foxglove.GeoJSON.geojson)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace foxglove

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_foxglove_2fGeoJSON_2eproto
