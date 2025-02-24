// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_MODEL_LIBTEXTCLASSIFIER3_SAFT_FBS_H_
#define FLATBUFFERS_GENERATED_MODEL_LIBTEXTCLASSIFIER3_SAFT_FBS_H_

#include "flatbuffers/flatbuffers.h"

namespace libtextclassifier3 {
namespace saft_fbs {

struct ModelParameter;
struct ModelParameterBuilder;
struct ModelParameterT;

struct ModelInput;
struct ModelInputBuilder;
struct ModelInputT;

struct Model;
struct ModelBuilder;
struct ModelT;

struct ModelParameterT : public flatbuffers::NativeTable {
  typedef ModelParameter TableType;
  std::string name;
  std::string value;
  ModelParameterT() {
  }
};

struct ModelParameter FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ModelParameterT NativeTableType;
  typedef ModelParameterBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NAME = 4,
    VT_VALUE = 6
  };
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  const flatbuffers::String *value() const {
    return GetPointer<const flatbuffers::String *>(VT_VALUE);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyOffset(verifier, VT_VALUE) &&
           verifier.VerifyString(value()) &&
           verifier.EndTable();
  }
  ModelParameterT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(ModelParameterT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<ModelParameter> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ModelParameterT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct ModelParameterBuilder {
  typedef ModelParameter Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(ModelParameter::VT_NAME, name);
  }
  void add_value(flatbuffers::Offset<flatbuffers::String> value) {
    fbb_.AddOffset(ModelParameter::VT_VALUE, value);
  }
  explicit ModelParameterBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ModelParameterBuilder &operator=(const ModelParameterBuilder &);
  flatbuffers::Offset<ModelParameter> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ModelParameter>(end);
    return o;
  }
};

inline flatbuffers::Offset<ModelParameter> CreateModelParameter(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<flatbuffers::String> value = 0) {
  ModelParameterBuilder builder_(_fbb);
  builder_.add_value(value);
  builder_.add_name(name);
  return builder_.Finish();
}

inline flatbuffers::Offset<ModelParameter> CreateModelParameterDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    const char *value = nullptr) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  auto value__ = value ? _fbb.CreateString(value) : 0;
  return libtextclassifier3::saft_fbs::CreateModelParameter(
      _fbb,
      name__,
      value__);
}

flatbuffers::Offset<ModelParameter> CreateModelParameter(flatbuffers::FlatBufferBuilder &_fbb, const ModelParameterT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct ModelInputT : public flatbuffers::NativeTable {
  typedef ModelInput TableType;
  std::string name;
  std::string type;
  std::string sub_type;
  std::vector<uint8_t> data;
  ModelInputT() {
  }
};

struct ModelInput FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ModelInputT NativeTableType;
  typedef ModelInputBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NAME = 4,
    VT_TYPE = 6,
    VT_SUB_TYPE = 8,
    VT_DATA = 10
  };
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  const flatbuffers::String *type() const {
    return GetPointer<const flatbuffers::String *>(VT_TYPE);
  }
  const flatbuffers::String *sub_type() const {
    return GetPointer<const flatbuffers::String *>(VT_SUB_TYPE);
  }
  const flatbuffers::Vector<uint8_t> *data() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_DATA);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyOffset(verifier, VT_TYPE) &&
           verifier.VerifyString(type()) &&
           VerifyOffset(verifier, VT_SUB_TYPE) &&
           verifier.VerifyString(sub_type()) &&
           VerifyOffset(verifier, VT_DATA) &&
           verifier.VerifyVector(data()) &&
           verifier.EndTable();
  }
  ModelInputT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(ModelInputT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<ModelInput> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ModelInputT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct ModelInputBuilder {
  typedef ModelInput Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(ModelInput::VT_NAME, name);
  }
  void add_type(flatbuffers::Offset<flatbuffers::String> type) {
    fbb_.AddOffset(ModelInput::VT_TYPE, type);
  }
  void add_sub_type(flatbuffers::Offset<flatbuffers::String> sub_type) {
    fbb_.AddOffset(ModelInput::VT_SUB_TYPE, sub_type);
  }
  void add_data(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> data) {
    fbb_.AddOffset(ModelInput::VT_DATA, data);
  }
  explicit ModelInputBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ModelInputBuilder &operator=(const ModelInputBuilder &);
  flatbuffers::Offset<ModelInput> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ModelInput>(end);
    return o;
  }
};

inline flatbuffers::Offset<ModelInput> CreateModelInput(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<flatbuffers::String> type = 0,
    flatbuffers::Offset<flatbuffers::String> sub_type = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> data = 0) {
  ModelInputBuilder builder_(_fbb);
  builder_.add_data(data);
  builder_.add_sub_type(sub_type);
  builder_.add_type(type);
  builder_.add_name(name);
  return builder_.Finish();
}

inline flatbuffers::Offset<ModelInput> CreateModelInputDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    const char *type = nullptr,
    const char *sub_type = nullptr,
    const std::vector<uint8_t> *data = nullptr) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  auto type__ = type ? _fbb.CreateString(type) : 0;
  auto sub_type__ = sub_type ? _fbb.CreateString(sub_type) : 0;
  if (data) { _fbb.ForceVectorAlignment(data->size(), sizeof(uint8_t), 16); }
  auto data__ = data ? _fbb.CreateVector<uint8_t>(*data) : 0;
  return libtextclassifier3::saft_fbs::CreateModelInput(
      _fbb,
      name__,
      type__,
      sub_type__,
      data__);
}

flatbuffers::Offset<ModelInput> CreateModelInput(flatbuffers::FlatBufferBuilder &_fbb, const ModelInputT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct ModelT : public flatbuffers::NativeTable {
  typedef Model TableType;
  std::vector<std::unique_ptr<libtextclassifier3::saft_fbs::ModelParameterT>> parameters;
  std::vector<std::unique_ptr<libtextclassifier3::saft_fbs::ModelInputT>> inputs;
  uint32_t crc32;
  ModelT()
      : crc32(0) {
  }
};

struct Model FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ModelT NativeTableType;
  typedef ModelBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_PARAMETERS = 4,
    VT_INPUTS = 6,
    VT_CRC32 = 8
  };
  const flatbuffers::Vector<flatbuffers::Offset<libtextclassifier3::saft_fbs::ModelParameter>> *parameters() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<libtextclassifier3::saft_fbs::ModelParameter>> *>(VT_PARAMETERS);
  }
  const flatbuffers::Vector<flatbuffers::Offset<libtextclassifier3::saft_fbs::ModelInput>> *inputs() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<libtextclassifier3::saft_fbs::ModelInput>> *>(VT_INPUTS);
  }
  uint32_t crc32() const {
    return GetField<uint32_t>(VT_CRC32, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_PARAMETERS) &&
           verifier.VerifyVector(parameters()) &&
           verifier.VerifyVectorOfTables(parameters()) &&
           VerifyOffset(verifier, VT_INPUTS) &&
           verifier.VerifyVector(inputs()) &&
           verifier.VerifyVectorOfTables(inputs()) &&
           VerifyField<uint32_t>(verifier, VT_CRC32) &&
           verifier.EndTable();
  }
  ModelT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(ModelT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<Model> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ModelT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct ModelBuilder {
  typedef Model Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_parameters(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<libtextclassifier3::saft_fbs::ModelParameter>>> parameters) {
    fbb_.AddOffset(Model::VT_PARAMETERS, parameters);
  }
  void add_inputs(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<libtextclassifier3::saft_fbs::ModelInput>>> inputs) {
    fbb_.AddOffset(Model::VT_INPUTS, inputs);
  }
  void add_crc32(uint32_t crc32) {
    fbb_.AddElement<uint32_t>(Model::VT_CRC32, crc32, 0);
  }
  explicit ModelBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ModelBuilder &operator=(const ModelBuilder &);
  flatbuffers::Offset<Model> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Model>(end);
    return o;
  }
};

inline flatbuffers::Offset<Model> CreateModel(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<libtextclassifier3::saft_fbs::ModelParameter>>> parameters = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<libtextclassifier3::saft_fbs::ModelInput>>> inputs = 0,
    uint32_t crc32 = 0) {
  ModelBuilder builder_(_fbb);
  builder_.add_crc32(crc32);
  builder_.add_inputs(inputs);
  builder_.add_parameters(parameters);
  return builder_.Finish();
}

inline flatbuffers::Offset<Model> CreateModelDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<libtextclassifier3::saft_fbs::ModelParameter>> *parameters = nullptr,
    const std::vector<flatbuffers::Offset<libtextclassifier3::saft_fbs::ModelInput>> *inputs = nullptr,
    uint32_t crc32 = 0) {
  auto parameters__ = parameters ? _fbb.CreateVector<flatbuffers::Offset<libtextclassifier3::saft_fbs::ModelParameter>>(*parameters) : 0;
  auto inputs__ = inputs ? _fbb.CreateVector<flatbuffers::Offset<libtextclassifier3::saft_fbs::ModelInput>>(*inputs) : 0;
  return libtextclassifier3::saft_fbs::CreateModel(
      _fbb,
      parameters__,
      inputs__,
      crc32);
}

flatbuffers::Offset<Model> CreateModel(flatbuffers::FlatBufferBuilder &_fbb, const ModelT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline ModelParameterT *ModelParameter::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  std::unique_ptr<libtextclassifier3::saft_fbs::ModelParameterT> _o = std::unique_ptr<libtextclassifier3::saft_fbs::ModelParameterT>(new ModelParameterT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void ModelParameter::UnPackTo(ModelParameterT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = name(); if (_e) _o->name = _e->str(); }
  { auto _e = value(); if (_e) _o->value = _e->str(); }
}

inline flatbuffers::Offset<ModelParameter> ModelParameter::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ModelParameterT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateModelParameter(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<ModelParameter> CreateModelParameter(flatbuffers::FlatBufferBuilder &_fbb, const ModelParameterT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ModelParameterT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _name = _o->name.empty() ? 0 : _fbb.CreateString(_o->name);
  auto _value = _o->value.empty() ? 0 : _fbb.CreateString(_o->value);
  return libtextclassifier3::saft_fbs::CreateModelParameter(
      _fbb,
      _name,
      _value);
}

inline ModelInputT *ModelInput::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  std::unique_ptr<libtextclassifier3::saft_fbs::ModelInputT> _o = std::unique_ptr<libtextclassifier3::saft_fbs::ModelInputT>(new ModelInputT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void ModelInput::UnPackTo(ModelInputT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = name(); if (_e) _o->name = _e->str(); }
  { auto _e = type(); if (_e) _o->type = _e->str(); }
  { auto _e = sub_type(); if (_e) _o->sub_type = _e->str(); }
  { auto _e = data(); if (_e) { _o->data.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->data[_i] = _e->Get(_i); } } }
}

inline flatbuffers::Offset<ModelInput> ModelInput::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ModelInputT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateModelInput(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<ModelInput> CreateModelInput(flatbuffers::FlatBufferBuilder &_fbb, const ModelInputT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ModelInputT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _name = _o->name.empty() ? 0 : _fbb.CreateString(_o->name);
  auto _type = _o->type.empty() ? 0 : _fbb.CreateString(_o->type);
  auto _sub_type = _o->sub_type.empty() ? 0 : _fbb.CreateString(_o->sub_type);
  _fbb.ForceVectorAlignment(_o->data.size(), sizeof(uint8_t), 16);
  auto _data = _o->data.size() ? _fbb.CreateVector(_o->data) : 0;
  return libtextclassifier3::saft_fbs::CreateModelInput(
      _fbb,
      _name,
      _type,
      _sub_type,
      _data);
}

inline ModelT *Model::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  std::unique_ptr<libtextclassifier3::saft_fbs::ModelT> _o = std::unique_ptr<libtextclassifier3::saft_fbs::ModelT>(new ModelT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void Model::UnPackTo(ModelT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = parameters(); if (_e) { _o->parameters.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->parameters[_i] = std::unique_ptr<libtextclassifier3::saft_fbs::ModelParameterT>(_e->Get(_i)->UnPack(_resolver)); } } }
  { auto _e = inputs(); if (_e) { _o->inputs.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->inputs[_i] = std::unique_ptr<libtextclassifier3::saft_fbs::ModelInputT>(_e->Get(_i)->UnPack(_resolver)); } } }
  { auto _e = crc32(); _o->crc32 = _e; }
}

inline flatbuffers::Offset<Model> Model::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ModelT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateModel(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<Model> CreateModel(flatbuffers::FlatBufferBuilder &_fbb, const ModelT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ModelT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _parameters = _o->parameters.size() ? _fbb.CreateVector<flatbuffers::Offset<libtextclassifier3::saft_fbs::ModelParameter>> (_o->parameters.size(), [](size_t i, _VectorArgs *__va) { return CreateModelParameter(*__va->__fbb, __va->__o->parameters[i].get(), __va->__rehasher); }, &_va ) : 0;
  auto _inputs = _o->inputs.size() ? _fbb.CreateVector<flatbuffers::Offset<libtextclassifier3::saft_fbs::ModelInput>> (_o->inputs.size(), [](size_t i, _VectorArgs *__va) { return CreateModelInput(*__va->__fbb, __va->__o->inputs[i].get(), __va->__rehasher); }, &_va ) : 0;
  auto _crc32 = _o->crc32;
  return libtextclassifier3::saft_fbs::CreateModel(
      _fbb,
      _parameters,
      _inputs,
      _crc32);
}

inline const libtextclassifier3::saft_fbs::Model *GetModel(const void *buf) {
  return flatbuffers::GetRoot<libtextclassifier3::saft_fbs::Model>(buf);
}

inline const libtextclassifier3::saft_fbs::Model *GetSizePrefixedModel(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<libtextclassifier3::saft_fbs::Model>(buf);
}

inline const char *ModelIdentifier() {
  return "SM00";
}

inline bool ModelBufferHasIdentifier(const void *buf) {
  return flatbuffers::BufferHasIdentifier(
      buf, ModelIdentifier());
}

inline bool VerifyModelBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<libtextclassifier3::saft_fbs::Model>(ModelIdentifier());
}

inline bool VerifySizePrefixedModelBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<libtextclassifier3::saft_fbs::Model>(ModelIdentifier());
}

inline const char *ModelExtension() {
  return "smfb";
}

inline void FinishModelBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<libtextclassifier3::saft_fbs::Model> root) {
  fbb.Finish(root, ModelIdentifier());
}

inline void FinishSizePrefixedModelBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<libtextclassifier3::saft_fbs::Model> root) {
  fbb.FinishSizePrefixed(root, ModelIdentifier());
}

inline std::unique_ptr<libtextclassifier3::saft_fbs::ModelT> UnPackModel(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<libtextclassifier3::saft_fbs::ModelT>(GetModel(buf)->UnPack(res));
}

inline std::unique_ptr<libtextclassifier3::saft_fbs::ModelT> UnPackSizePrefixedModel(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<libtextclassifier3::saft_fbs::ModelT>(GetSizePrefixedModel(buf)->UnPack(res));
}

}  // namespace saft_fbs
}  // namespace libtextclassifier3

#endif  // FLATBUFFERS_GENERATED_MODEL_LIBTEXTCLASSIFIER3_SAFT_FBS_H_
