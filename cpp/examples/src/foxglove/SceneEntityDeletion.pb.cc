// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: foxglove/SceneEntityDeletion.proto

#include "foxglove/SceneEntityDeletion.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_google_2fprotobuf_2ftimestamp_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fprotobuf_2ftimestamp_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Timestamp;
}  // namespace protobuf_google_2fprotobuf_2ftimestamp_2eproto
namespace foxglove {
class SceneEntityDeletionDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SceneEntityDeletion>
      _instance;
} _SceneEntityDeletion_default_instance_;
}  // namespace foxglove
namespace protobuf_foxglove_2fSceneEntityDeletion_2eproto {
static void InitDefaultsSceneEntityDeletion() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::foxglove::_SceneEntityDeletion_default_instance_;
    new (ptr) ::foxglove::SceneEntityDeletion();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::foxglove::SceneEntityDeletion::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_SceneEntityDeletion =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsSceneEntityDeletion}, {
      &protobuf_google_2fprotobuf_2ftimestamp_2eproto::scc_info_Timestamp.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_SceneEntityDeletion.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::foxglove::SceneEntityDeletion, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::foxglove::SceneEntityDeletion, timestamp_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::foxglove::SceneEntityDeletion, type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::foxglove::SceneEntityDeletion, id_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::foxglove::SceneEntityDeletion)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::foxglove::_SceneEntityDeletion_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "foxglove/SceneEntityDeletion.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\"foxglove/SceneEntityDeletion.proto\022\010fo"
      "xglove\032\037google/protobuf/timestamp.proto\""
      "\244\001\n\023SceneEntityDeletion\022-\n\ttimestamp\030\001 \001"
      "(\0132\032.google.protobuf.Timestamp\0220\n\004type\030\002"
      " \001(\0162\".foxglove.SceneEntityDeletion.Type"
      "\022\n\n\002id\030\003 \001(\t\" \n\004Type\022\017\n\013MATCHING_ID\020\000\022\007\n"
      "\003ALL\020\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 254);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "foxglove/SceneEntityDeletion.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fprotobuf_2ftimestamp_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_foxglove_2fSceneEntityDeletion_2eproto
namespace foxglove {
const ::google::protobuf::EnumDescriptor* SceneEntityDeletion_Type_descriptor() {
  protobuf_foxglove_2fSceneEntityDeletion_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_foxglove_2fSceneEntityDeletion_2eproto::file_level_enum_descriptors[0];
}
bool SceneEntityDeletion_Type_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const SceneEntityDeletion_Type SceneEntityDeletion::MATCHING_ID;
const SceneEntityDeletion_Type SceneEntityDeletion::ALL;
const SceneEntityDeletion_Type SceneEntityDeletion::Type_MIN;
const SceneEntityDeletion_Type SceneEntityDeletion::Type_MAX;
const int SceneEntityDeletion::Type_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void SceneEntityDeletion::InitAsDefaultInstance() {
  ::foxglove::_SceneEntityDeletion_default_instance_._instance.get_mutable()->timestamp_ = const_cast< ::google::protobuf::Timestamp*>(
      ::google::protobuf::Timestamp::internal_default_instance());
}
void SceneEntityDeletion::clear_timestamp() {
  if (GetArenaNoVirtual() == NULL && timestamp_ != NULL) {
    delete timestamp_;
  }
  timestamp_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SceneEntityDeletion::kTimestampFieldNumber;
const int SceneEntityDeletion::kTypeFieldNumber;
const int SceneEntityDeletion::kIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SceneEntityDeletion::SceneEntityDeletion()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_foxglove_2fSceneEntityDeletion_2eproto::scc_info_SceneEntityDeletion.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:foxglove.SceneEntityDeletion)
}
SceneEntityDeletion::SceneEntityDeletion(const SceneEntityDeletion& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.id().size() > 0) {
    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  if (from.has_timestamp()) {
    timestamp_ = new ::google::protobuf::Timestamp(*from.timestamp_);
  } else {
    timestamp_ = NULL;
  }
  type_ = from.type_;
  // @@protoc_insertion_point(copy_constructor:foxglove.SceneEntityDeletion)
}

void SceneEntityDeletion::SharedCtor() {
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&timestamp_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&timestamp_)) + sizeof(type_));
}

SceneEntityDeletion::~SceneEntityDeletion() {
  // @@protoc_insertion_point(destructor:foxglove.SceneEntityDeletion)
  SharedDtor();
}

void SceneEntityDeletion::SharedDtor() {
  id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete timestamp_;
}

void SceneEntityDeletion::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* SceneEntityDeletion::descriptor() {
  ::protobuf_foxglove_2fSceneEntityDeletion_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_foxglove_2fSceneEntityDeletion_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SceneEntityDeletion& SceneEntityDeletion::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_foxglove_2fSceneEntityDeletion_2eproto::scc_info_SceneEntityDeletion.base);
  return *internal_default_instance();
}


void SceneEntityDeletion::Clear() {
// @@protoc_insertion_point(message_clear_start:foxglove.SceneEntityDeletion)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && timestamp_ != NULL) {
    delete timestamp_;
  }
  timestamp_ = NULL;
  type_ = 0;
  _internal_metadata_.Clear();
}

bool SceneEntityDeletion::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:foxglove.SceneEntityDeletion)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .google.protobuf.Timestamp timestamp = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_timestamp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .foxglove.SceneEntityDeletion.Type type = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_type(static_cast< ::foxglove::SceneEntityDeletion_Type >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string id = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->id().data(), static_cast<int>(this->id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "foxglove.SceneEntityDeletion.id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:foxglove.SceneEntityDeletion)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:foxglove.SceneEntityDeletion)
  return false;
#undef DO_
}

void SceneEntityDeletion::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:foxglove.SceneEntityDeletion)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.protobuf.Timestamp timestamp = 1;
  if (this->has_timestamp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_timestamp(), output);
  }

  // .foxglove.SceneEntityDeletion.Type type = 2;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->type(), output);
  }

  // string id = 3;
  if (this->id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->id().data(), static_cast<int>(this->id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "foxglove.SceneEntityDeletion.id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:foxglove.SceneEntityDeletion)
}

::google::protobuf::uint8* SceneEntityDeletion::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:foxglove.SceneEntityDeletion)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.protobuf.Timestamp timestamp = 1;
  if (this->has_timestamp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_timestamp(), deterministic, target);
  }

  // .foxglove.SceneEntityDeletion.Type type = 2;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->type(), target);
  }

  // string id = 3;
  if (this->id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->id().data(), static_cast<int>(this->id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "foxglove.SceneEntityDeletion.id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:foxglove.SceneEntityDeletion)
  return target;
}

size_t SceneEntityDeletion::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:foxglove.SceneEntityDeletion)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string id = 3;
  if (this->id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->id());
  }

  // .google.protobuf.Timestamp timestamp = 1;
  if (this->has_timestamp()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *timestamp_);
  }

  // .foxglove.SceneEntityDeletion.Type type = 2;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SceneEntityDeletion::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:foxglove.SceneEntityDeletion)
  GOOGLE_DCHECK_NE(&from, this);
  const SceneEntityDeletion* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SceneEntityDeletion>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:foxglove.SceneEntityDeletion)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:foxglove.SceneEntityDeletion)
    MergeFrom(*source);
  }
}

void SceneEntityDeletion::MergeFrom(const SceneEntityDeletion& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:foxglove.SceneEntityDeletion)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.id().size() > 0) {

    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  if (from.has_timestamp()) {
    mutable_timestamp()->::google::protobuf::Timestamp::MergeFrom(from.timestamp());
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
}

void SceneEntityDeletion::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:foxglove.SceneEntityDeletion)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SceneEntityDeletion::CopyFrom(const SceneEntityDeletion& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:foxglove.SceneEntityDeletion)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SceneEntityDeletion::IsInitialized() const {
  return true;
}

void SceneEntityDeletion::Swap(SceneEntityDeletion* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SceneEntityDeletion::InternalSwap(SceneEntityDeletion* other) {
  using std::swap;
  id_.Swap(&other->id_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(timestamp_, other->timestamp_);
  swap(type_, other->type_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata SceneEntityDeletion::GetMetadata() const {
  protobuf_foxglove_2fSceneEntityDeletion_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_foxglove_2fSceneEntityDeletion_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace foxglove
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::foxglove::SceneEntityDeletion* Arena::CreateMaybeMessage< ::foxglove::SceneEntityDeletion >(Arena* arena) {
  return Arena::CreateInternal< ::foxglove::SceneEntityDeletion >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
