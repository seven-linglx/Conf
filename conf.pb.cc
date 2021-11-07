// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: conf.proto

#include "conf.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace conf {
constexpr Configuration::Configuration(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : name_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , logfilepath_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , threshold_(0)
  , status_(0)
{}
struct ConfigurationDefaultTypeInternal {
  constexpr ConfigurationDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ConfigurationDefaultTypeInternal() {}
  union {
    Configuration _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ConfigurationDefaultTypeInternal _Configuration_default_instance_;
}  // namespace conf
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_conf_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_conf_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_conf_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_conf_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::conf::Configuration, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::conf::Configuration, name_),
  PROTOBUF_FIELD_OFFSET(::conf::Configuration, logfilepath_),
  PROTOBUF_FIELD_OFFSET(::conf::Configuration, threshold_),
  PROTOBUF_FIELD_OFFSET(::conf::Configuration, status_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::conf::Configuration)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::conf::_Configuration_default_instance_),
};

const char descriptor_table_protodef_conf_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\nconf.proto\022\004conf\"\232\001\n\rConfiguration\022\014\n\004"
  "name\030\001 \001(\t\022\023\n\013logFilePath\030\002 \001(\t\022\021\n\tthres"
  "hold\030\003 \001(\002\022*\n\006status\030\004 \001(\0162\032.conf.Config"
  "uration.Status\"\'\n\006Status\022\t\n\005START\020\000\022\010\n\004S"
  "TOP\020\001\022\010\n\004QUIT\020\002b\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_conf_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_conf_2eproto = {
  false, false, 183, descriptor_table_protodef_conf_2eproto, "conf.proto", 
  &descriptor_table_conf_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_conf_2eproto::offsets,
  file_level_metadata_conf_2eproto, file_level_enum_descriptors_conf_2eproto, file_level_service_descriptors_conf_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_conf_2eproto_getter() {
  return &descriptor_table_conf_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_conf_2eproto(&descriptor_table_conf_2eproto);
namespace conf {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Configuration_Status_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_conf_2eproto);
  return file_level_enum_descriptors_conf_2eproto[0];
}
bool Configuration_Status_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr Configuration_Status Configuration::START;
constexpr Configuration_Status Configuration::STOP;
constexpr Configuration_Status Configuration::QUIT;
constexpr Configuration_Status Configuration::Status_MIN;
constexpr Configuration_Status Configuration::Status_MAX;
constexpr int Configuration::Status_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

class Configuration::_Internal {
 public:
};

Configuration::Configuration(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:conf.Configuration)
}
Configuration::Configuration(const Configuration& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_name().empty()) {
    name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_name(), 
      GetArenaForAllocation());
  }
  logfilepath_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_logfilepath().empty()) {
    logfilepath_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_logfilepath(), 
      GetArenaForAllocation());
  }
  ::memcpy(&threshold_, &from.threshold_,
    static_cast<size_t>(reinterpret_cast<char*>(&status_) -
    reinterpret_cast<char*>(&threshold_)) + sizeof(status_));
  // @@protoc_insertion_point(copy_constructor:conf.Configuration)
}

inline void Configuration::SharedCtor() {
name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
logfilepath_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&threshold_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&status_) -
    reinterpret_cast<char*>(&threshold_)) + sizeof(status_));
}

Configuration::~Configuration() {
  // @@protoc_insertion_point(destructor:conf.Configuration)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Configuration::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  logfilepath_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Configuration::ArenaDtor(void* object) {
  Configuration* _this = reinterpret_cast< Configuration* >(object);
  (void)_this;
}
void Configuration::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Configuration::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Configuration::Clear() {
// @@protoc_insertion_point(message_clear_start:conf.Configuration)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmpty();
  logfilepath_.ClearToEmpty();
  ::memset(&threshold_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&status_) -
      reinterpret_cast<char*>(&threshold_)) + sizeof(status_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Configuration::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "conf.Configuration.name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string logFilePath = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_logfilepath();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "conf.Configuration.logFilePath"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // float threshold = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 29)) {
          threshold_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // .conf.Configuration.Status status = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_status(static_cast<::conf::Configuration_Status>(val));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Configuration::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:conf.Configuration)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "conf.Configuration.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // string logFilePath = 2;
  if (!this->_internal_logfilepath().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_logfilepath().data(), static_cast<int>(this->_internal_logfilepath().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "conf.Configuration.logFilePath");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_logfilepath(), target);
  }

  // float threshold = 3;
  if (!(this->_internal_threshold() <= 0 && this->_internal_threshold() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(3, this->_internal_threshold(), target);
  }

  // .conf.Configuration.Status status = 4;
  if (this->_internal_status() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      4, this->_internal_status(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:conf.Configuration)
  return target;
}

size_t Configuration::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:conf.Configuration)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 1;
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // string logFilePath = 2;
  if (!this->_internal_logfilepath().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_logfilepath());
  }

  // float threshold = 3;
  if (!(this->_internal_threshold() <= 0 && this->_internal_threshold() >= 0)) {
    total_size += 1 + 4;
  }

  // .conf.Configuration.Status status = 4;
  if (this->_internal_status() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_status());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Configuration::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Configuration::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Configuration::GetClassData() const { return &_class_data_; }

void Configuration::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<Configuration *>(to)->MergeFrom(
      static_cast<const Configuration &>(from));
}


void Configuration::MergeFrom(const Configuration& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:conf.Configuration)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_name().empty()) {
    _internal_set_name(from._internal_name());
  }
  if (!from._internal_logfilepath().empty()) {
    _internal_set_logfilepath(from._internal_logfilepath());
  }
  if (!(from._internal_threshold() <= 0 && from._internal_threshold() >= 0)) {
    _internal_set_threshold(from._internal_threshold());
  }
  if (from._internal_status() != 0) {
    _internal_set_status(from._internal_status());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Configuration::CopyFrom(const Configuration& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:conf.Configuration)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Configuration::IsInitialized() const {
  return true;
}

void Configuration::InternalSwap(Configuration* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &name_, GetArenaForAllocation(),
      &other->name_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &logfilepath_, GetArenaForAllocation(),
      &other->logfilepath_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Configuration, status_)
      + sizeof(Configuration::status_)
      - PROTOBUF_FIELD_OFFSET(Configuration, threshold_)>(
          reinterpret_cast<char*>(&threshold_),
          reinterpret_cast<char*>(&other->threshold_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Configuration::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_conf_2eproto_getter, &descriptor_table_conf_2eproto_once,
      file_level_metadata_conf_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace conf
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::conf::Configuration* Arena::CreateMaybeMessage< ::conf::Configuration >(Arena* arena) {
  return Arena::CreateMessageInternal< ::conf::Configuration >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
