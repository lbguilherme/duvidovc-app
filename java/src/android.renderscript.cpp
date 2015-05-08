#include "java-core.hpp"
#include <memory>
#include "android.content.Context.hpp"
#include "android.content.res.AssetManager.hpp"
#include "android.content.res.Resources.hpp"
#include "android.graphics.Bitmap.hpp"
#include "android.graphics.SurfaceTexture.hpp"
#include "android.renderscript.Allocation.hpp"
#include "android.renderscript.AllocationAdapter.hpp"
#include "android.renderscript.BaseObj.hpp"
#include "android.renderscript.Byte2.hpp"
#include "android.renderscript.Byte3.hpp"
#include "android.renderscript.Byte4.hpp"
#include "android.renderscript.Double2.hpp"
#include "android.renderscript.Double3.hpp"
#include "android.renderscript.Double4.hpp"
#include "android.renderscript.Element.hpp"
#include "android.renderscript.FieldPacker.hpp"
#include "android.renderscript.FileA3D.hpp"
#include "android.renderscript.Float2.hpp"
#include "android.renderscript.Float3.hpp"
#include "android.renderscript.Float4.hpp"
#include "android.renderscript.Font.hpp"
#include "android.renderscript.Int2.hpp"
#include "android.renderscript.Int3.hpp"
#include "android.renderscript.Int4.hpp"
#include "android.renderscript.Long2.hpp"
#include "android.renderscript.Long3.hpp"
#include "android.renderscript.Long4.hpp"
#include "android.renderscript.Matrix2f.hpp"
#include "android.renderscript.Matrix3f.hpp"
#include "android.renderscript.Matrix4f.hpp"
#include "android.renderscript.Mesh.hpp"
#include "android.renderscript.Program.hpp"
#include "android.renderscript.ProgramFragment.hpp"
#include "android.renderscript.ProgramFragmentFixedFunction.hpp"
#include "android.renderscript.ProgramRaster.hpp"
#include "android.renderscript.ProgramStore.hpp"
#include "android.renderscript.ProgramVertex.hpp"
#include "android.renderscript.ProgramVertexFixedFunction.hpp"
#include "android.renderscript.RSDriverException.hpp"
#include "android.renderscript.RSIllegalArgumentException.hpp"
#include "android.renderscript.RSInvalidStateException.hpp"
#include "android.renderscript.RSRuntimeException.hpp"
#include "android.renderscript.RSSurfaceView.hpp"
#include "android.renderscript.RSTextureView.hpp"
#include "android.renderscript.RenderScript.hpp"
#include "android.renderscript.RenderScriptGL.hpp"
#include "android.renderscript.Sampler.hpp"
#include "android.renderscript.Script.hpp"
#include "android.renderscript.ScriptC.hpp"
#include "android.renderscript.Short2.hpp"
#include "android.renderscript.Short3.hpp"
#include "android.renderscript.Short4.hpp"
#include "android.renderscript.Type.hpp"
#include "android.util.AttributeSet.hpp"
#include "android.view.SurfaceHolder.hpp"
#include "java.io.File.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"

jclass android::renderscript::BaseObj::_class = nullptr;
jclass android::renderscript::Mesh_Primitive::_class = nullptr;
jclass android::renderscript::ProgramRaster_Builder::_class = nullptr;
jclass android::renderscript::Matrix3f::_class = nullptr;
jclass android::renderscript::ProgramRaster::_class = nullptr;
jclass android::renderscript::RenderScript_Priority::_class = nullptr;
jclass android::renderscript::ProgramVertex::_class = nullptr;
jclass android::renderscript::Element::_class = nullptr;
jclass android::renderscript::Sampler_Value::_class = nullptr;
jclass android::renderscript::ProgramStore_BlendDstFunc::_class = nullptr;
jclass android::renderscript::Sampler_Builder::_class = nullptr;
jclass android::renderscript::Int2::_class = nullptr;
jclass android::renderscript::RSIllegalArgumentException::_class = nullptr;
jclass android::renderscript::ProgramVertexFixedFunction::_class = nullptr;
jclass android::renderscript::Font::_class = nullptr;
jclass android::renderscript::FileA3D_EntryType::_class = nullptr;
jclass android::renderscript::Double4::_class = nullptr;
jclass android::renderscript::Program_BaseProgramBuilder::_class = nullptr;
jclass android::renderscript::ProgramStore_BlendSrcFunc::_class = nullptr;
jclass android::renderscript::ProgramFragmentFixedFunction_Builder::_class = nullptr;
jclass android::renderscript::ProgramRaster_CullMode::_class = nullptr;
jclass android::renderscript::Byte3::_class = nullptr;
jclass android::renderscript::Element_DataType::_class = nullptr;
jclass android::renderscript::Element_DataKind::_class = nullptr;
jclass android::renderscript::ProgramFragment::_class = nullptr;
jclass android::renderscript::Mesh_Builder::_class = nullptr;
jclass android::renderscript::ProgramVertexFixedFunction_Constants::_class = nullptr;
jclass android::renderscript::Mesh_TriangleMeshBuilder::_class = nullptr;
jclass android::renderscript::ProgramStore_DepthFunc::_class = nullptr;
jclass android::renderscript::RSDriverException::_class = nullptr;
jclass android::renderscript::Byte4::_class = nullptr;
jclass android::renderscript::Int4::_class = nullptr;
jclass android::renderscript::ProgramFragment_Builder::_class = nullptr;
jclass android::renderscript::RSInvalidStateException::_class = nullptr;
jclass android::renderscript::Script_FieldBase::_class = nullptr;
jclass android::renderscript::Program_TextureType::_class = nullptr;
jclass android::renderscript::Short4::_class = nullptr;
jclass android::renderscript::ProgramVertex_Builder::_class = nullptr;
jclass android::renderscript::RenderScriptGL::_class = nullptr;
jclass android::renderscript::RenderScript::_class = nullptr;
jclass android::renderscript::Element_Builder::_class = nullptr;
jclass android::renderscript::Type::_class = nullptr;
jclass android::renderscript::Allocation::_class = nullptr;
jclass android::renderscript::Double3::_class = nullptr;
jclass android::renderscript::Int3::_class = nullptr;
jclass android::renderscript::ProgramFragmentFixedFunction_Builder_EnvMode::_class = nullptr;
jclass android::renderscript::ScriptC::_class = nullptr;
jclass android::renderscript::Long3::_class = nullptr;
jclass android::renderscript::Sampler::_class = nullptr;
jclass android::renderscript::Matrix2f::_class = nullptr;
jclass android::renderscript::RSTextureView::_class = nullptr;
jclass android::renderscript::RenderScriptGL_SurfaceConfig::_class = nullptr;
jclass android::renderscript::Script_Builder::_class = nullptr;
jclass android::renderscript::AllocationAdapter::_class = nullptr;
jclass android::renderscript::Type_CubemapFace::_class = nullptr;
jclass android::renderscript::Short3::_class = nullptr;
jclass android::renderscript::Long2::_class = nullptr;
jclass android::renderscript::ProgramStore::_class = nullptr;
jclass android::renderscript::Long4::_class = nullptr;
jclass android::renderscript::Short2::_class = nullptr;
jclass android::renderscript::Type_Builder::_class = nullptr;
jclass android::renderscript::RenderScript_RSErrorHandler::_class = nullptr;
jclass android::renderscript::ProgramStore_Builder::_class = nullptr;
jclass android::renderscript::FileA3D_IndexEntry::_class = nullptr;
jclass android::renderscript::Matrix4f::_class = nullptr;
jclass android::renderscript::RenderScript_RSMessageHandler::_class = nullptr;
jclass android::renderscript::RSRuntimeException::_class = nullptr;
jclass android::renderscript::Float2::_class = nullptr;
jclass android::renderscript::Allocation_MipmapControl::_class = nullptr;
jclass android::renderscript::Float4::_class = nullptr;
jclass android::renderscript::Byte2::_class = nullptr;
jclass android::renderscript::Program::_class = nullptr;
jclass android::renderscript::ProgramVertexFixedFunction_Builder::_class = nullptr;
jclass android::renderscript::Font_Style::_class = nullptr;
jclass android::renderscript::Mesh_AllocationBuilder::_class = nullptr;
jclass android::renderscript::ProgramFragmentFixedFunction_Builder_Format::_class = nullptr;
jclass android::renderscript::Double2::_class = nullptr;
jclass android::renderscript::Script::_class = nullptr;
jclass android::renderscript::Float3::_class = nullptr;
jclass android::renderscript::FileA3D::_class = nullptr;
jclass android::renderscript::Mesh::_class = nullptr;
jclass android::renderscript::FieldPacker::_class = nullptr;
jclass android::renderscript::RSSurfaceView::_class = nullptr;
jclass android::renderscript::ProgramFragmentFixedFunction::_class = nullptr;

void android::renderscript::BaseObj::setName(const ::java::lang::String& arg0) const {
    if (!::android::renderscript::BaseObj::_class) ::android::renderscript::BaseObj::_class = java::fetch_class("android/renderscript/BaseObj");
    static jmethodID mid = java::jni->GetMethodID(_class, "setName", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::renderscript::BaseObj::getName() const {
    if (!::android::renderscript::BaseObj::_class) ::android::renderscript::BaseObj::_class = java::fetch_class("android/renderscript/BaseObj");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::renderscript::BaseObj::destroy() const {
    if (!::android::renderscript::BaseObj::_class) ::android::renderscript::BaseObj::_class = java::fetch_class("android/renderscript/BaseObj");
    static jmethodID mid = java::jni->GetMethodID(_class, "destroy", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::renderscript::BaseObj::hashCode() const {
    if (!::android::renderscript::BaseObj::_class) ::android::renderscript::BaseObj::_class = java::fetch_class("android/renderscript/BaseObj");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::renderscript::BaseObj::equals(const ::java::lang::Object& arg0) const {
    if (!::android::renderscript::BaseObj::_class) ::android::renderscript::BaseObj::_class = java::fetch_class("android/renderscript/BaseObj");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

std::vector< ::android::renderscript::Mesh_Primitive> android::renderscript::Mesh_Primitive::values(){
    if (!::android::renderscript::Mesh_Primitive::_class) ::android::renderscript::Mesh_Primitive::_class = java::fetch_class("android/renderscript/Mesh$Primitive");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/renderscript/Mesh$Primitive;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::renderscript::Mesh_Primitive> _ret(rets, ::android::renderscript::Mesh_Primitive((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::renderscript::Mesh_Primitive retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::renderscript::Mesh_Primitive android::renderscript::Mesh_Primitive::valueOf(const ::java::lang::String& arg0){
    if (!::android::renderscript::Mesh_Primitive::_class) ::android::renderscript::Mesh_Primitive::_class = java::fetch_class("android/renderscript/Mesh$Primitive");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/renderscript/Mesh$Primitive;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Mesh_Primitive _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::ProgramRaster_Builder::ProgramRaster_Builder(const ::android::renderscript::RenderScript& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::ProgramRaster_Builder::_class) ::android::renderscript::ProgramRaster_Builder::_class = java::fetch_class("android/renderscript/ProgramRaster$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/renderscript/RenderScript;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::renderscript::ProgramRaster_Builder android::renderscript::ProgramRaster_Builder::setPointSpriteEnabled(bool arg0) const {
    if (!::android::renderscript::ProgramRaster_Builder::_class) ::android::renderscript::ProgramRaster_Builder::_class = java::fetch_class("android/renderscript/ProgramRaster$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPointSpriteEnabled", "(Z)Landroid/renderscript/ProgramRaster$Builder;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::renderscript::ProgramRaster_Builder _ret(ret);
    return _ret;
}

::android::renderscript::ProgramRaster_Builder android::renderscript::ProgramRaster_Builder::setCullMode(const ::android::renderscript::ProgramRaster_CullMode& arg0) const {
    if (!::android::renderscript::ProgramRaster_Builder::_class) ::android::renderscript::ProgramRaster_Builder::_class = java::fetch_class("android/renderscript/ProgramRaster$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCullMode", "(Landroid/renderscript/ProgramRaster$CullMode;)Landroid/renderscript/ProgramRaster$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::renderscript::ProgramRaster_Builder _ret(ret);
    return _ret;
}

::android::renderscript::ProgramRaster android::renderscript::ProgramRaster_Builder::create() const {
    if (!::android::renderscript::ProgramRaster_Builder::_class) ::android::renderscript::ProgramRaster_Builder::_class = java::fetch_class("android/renderscript/ProgramRaster$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "create", "()Landroid/renderscript/ProgramRaster;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::renderscript::ProgramRaster _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Matrix3f::Matrix3f() : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Matrix3f::_class) ::android::renderscript::Matrix3f::_class = java::fetch_class("android/renderscript/Matrix3f");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Matrix3f::Matrix3f(const std::vector< float>& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Matrix3f::_class) ::android::renderscript::Matrix3f::_class = java::fetch_class("android/renderscript/Matrix3f");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([F)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

std::vector< float> android::renderscript::Matrix3f::getArray() const {
    if (!::android::renderscript::Matrix3f::_class) ::android::renderscript::Matrix3f::_class = java::fetch_class("android/renderscript/Matrix3f");
    static jmethodID mid = java::jni->GetMethodID(_class, "getArray", "()[F");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jfloat* reta = java::jni->GetFloatArrayElements((jfloatArray)ret, nullptr);
    std::vector< float> _ret(reta, reta+rets);
    java::jni->ReleaseFloatArrayElements((jfloatArray)ret, reta, JNI_ABORT);
    return _ret;
}

float android::renderscript::Matrix3f::get(int32_t arg0, int32_t arg1) const {
    if (!::android::renderscript::Matrix3f::_class) ::android::renderscript::Matrix3f::_class = java::fetch_class("android/renderscript/Matrix3f");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(II)F");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

void android::renderscript::Matrix3f::set(int32_t arg0, int32_t arg1, float arg2) const {
    if (!::android::renderscript::Matrix3f::_class) ::android::renderscript::Matrix3f::_class = java::fetch_class("android/renderscript/Matrix3f");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(IIF)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::renderscript::Matrix3f::loadIdentity() const {
    if (!::android::renderscript::Matrix3f::_class) ::android::renderscript::Matrix3f::_class = java::fetch_class("android/renderscript/Matrix3f");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadIdentity", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::renderscript::Matrix3f::load(const ::android::renderscript::Matrix3f& arg0) const {
    if (!::android::renderscript::Matrix3f::_class) ::android::renderscript::Matrix3f::_class = java::fetch_class("android/renderscript/Matrix3f");
    static jmethodID mid = java::jni->GetMethodID(_class, "load", "(Landroid/renderscript/Matrix3f;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::Matrix3f::loadRotate(float arg0, float arg1, float arg2, float arg3) const {
    if (!::android::renderscript::Matrix3f::_class) ::android::renderscript::Matrix3f::_class = java::fetch_class("android/renderscript/Matrix3f");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadRotate", "(FFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::renderscript::Matrix3f::loadRotate(float arg0) const {
    if (!::android::renderscript::Matrix3f::_class) ::android::renderscript::Matrix3f::_class = java::fetch_class("android/renderscript/Matrix3f");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadRotate", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::Matrix3f::loadScale(float arg0, float arg1) const {
    if (!::android::renderscript::Matrix3f::_class) ::android::renderscript::Matrix3f::_class = java::fetch_class("android/renderscript/Matrix3f");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadScale", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::renderscript::Matrix3f::loadScale(float arg0, float arg1, float arg2) const {
    if (!::android::renderscript::Matrix3f::_class) ::android::renderscript::Matrix3f::_class = java::fetch_class("android/renderscript/Matrix3f");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadScale", "(FFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::renderscript::Matrix3f::loadTranslate(float arg0, float arg1) const {
    if (!::android::renderscript::Matrix3f::_class) ::android::renderscript::Matrix3f::_class = java::fetch_class("android/renderscript/Matrix3f");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadTranslate", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::renderscript::Matrix3f::loadMultiply(const ::android::renderscript::Matrix3f& arg0, const ::android::renderscript::Matrix3f& arg1) const {
    if (!::android::renderscript::Matrix3f::_class) ::android::renderscript::Matrix3f::_class = java::fetch_class("android/renderscript/Matrix3f");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadMultiply", "(Landroid/renderscript/Matrix3f;Landroid/renderscript/Matrix3f;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::renderscript::Matrix3f::multiply(const ::android::renderscript::Matrix3f& arg0) const {
    if (!::android::renderscript::Matrix3f::_class) ::android::renderscript::Matrix3f::_class = java::fetch_class("android/renderscript/Matrix3f");
    static jmethodID mid = java::jni->GetMethodID(_class, "multiply", "(Landroid/renderscript/Matrix3f;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::Matrix3f::rotate(float arg0, float arg1, float arg2, float arg3) const {
    if (!::android::renderscript::Matrix3f::_class) ::android::renderscript::Matrix3f::_class = java::fetch_class("android/renderscript/Matrix3f");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotate", "(FFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::renderscript::Matrix3f::rotate(float arg0) const {
    if (!::android::renderscript::Matrix3f::_class) ::android::renderscript::Matrix3f::_class = java::fetch_class("android/renderscript/Matrix3f");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotate", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::Matrix3f::scale(float arg0, float arg1) const {
    if (!::android::renderscript::Matrix3f::_class) ::android::renderscript::Matrix3f::_class = java::fetch_class("android/renderscript/Matrix3f");
    static jmethodID mid = java::jni->GetMethodID(_class, "scale", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::renderscript::Matrix3f::scale(float arg0, float arg1, float arg2) const {
    if (!::android::renderscript::Matrix3f::_class) ::android::renderscript::Matrix3f::_class = java::fetch_class("android/renderscript/Matrix3f");
    static jmethodID mid = java::jni->GetMethodID(_class, "scale", "(FFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::renderscript::Matrix3f::translate(float arg0, float arg1) const {
    if (!::android::renderscript::Matrix3f::_class) ::android::renderscript::Matrix3f::_class = java::fetch_class("android/renderscript/Matrix3f");
    static jmethodID mid = java::jni->GetMethodID(_class, "translate", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::renderscript::Matrix3f::transpose() const {
    if (!::android::renderscript::Matrix3f::_class) ::android::renderscript::Matrix3f::_class = java::fetch_class("android/renderscript/Matrix3f");
    static jmethodID mid = java::jni->GetMethodID(_class, "transpose", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::renderscript::ProgramRaster android::renderscript::ProgramRaster::CULL_BACK(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::ProgramRaster::_class) ::android::renderscript::ProgramRaster::_class = java::fetch_class("android/renderscript/ProgramRaster");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "CULL_BACK", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/ProgramRaster;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::ProgramRaster _ret(ret);
    return _ret;
}

::android::renderscript::ProgramRaster android::renderscript::ProgramRaster::CULL_FRONT(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::ProgramRaster::_class) ::android::renderscript::ProgramRaster::_class = java::fetch_class("android/renderscript/ProgramRaster");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "CULL_FRONT", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/ProgramRaster;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::ProgramRaster _ret(ret);
    return _ret;
}

::android::renderscript::ProgramRaster android::renderscript::ProgramRaster::CULL_NONE(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::ProgramRaster::_class) ::android::renderscript::ProgramRaster::_class = java::fetch_class("android/renderscript/ProgramRaster");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "CULL_NONE", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/ProgramRaster;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::ProgramRaster _ret(ret);
    return _ret;
}

std::vector< ::android::renderscript::RenderScript_Priority> android::renderscript::RenderScript_Priority::values(){
    if (!::android::renderscript::RenderScript_Priority::_class) ::android::renderscript::RenderScript_Priority::_class = java::fetch_class("android/renderscript/RenderScript$Priority");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/renderscript/RenderScript$Priority;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::renderscript::RenderScript_Priority> _ret(rets, ::android::renderscript::RenderScript_Priority((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::renderscript::RenderScript_Priority retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::renderscript::RenderScript_Priority android::renderscript::RenderScript_Priority::valueOf(const ::java::lang::String& arg0){
    if (!::android::renderscript::RenderScript_Priority::_class) ::android::renderscript::RenderScript_Priority::_class = java::fetch_class("android/renderscript/RenderScript$Priority");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/renderscript/RenderScript$Priority;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::RenderScript_Priority _ret(ret);
    return _ret;
}

bool android::renderscript::Element::isComplex() const {
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "isComplex", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::renderscript::Element android::renderscript::Element::BOOLEAN(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "BOOLEAN", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::U8(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "U8", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::I8(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "I8", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::U16(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "U16", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::I16(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "I16", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::U32(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "U32", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::I32(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "I32", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::U64(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "U64", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::I64(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "I64", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::F32(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "F32", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::F64(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "F64", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::ELEMENT(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ELEMENT", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::TYPE(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "TYPE", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::ALLOCATION(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ALLOCATION", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::SAMPLER(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "SAMPLER", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::SCRIPT(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "SCRIPT", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::MESH(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "MESH", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::PROGRAM_FRAGMENT(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "PROGRAM_FRAGMENT", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::PROGRAM_VERTEX(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "PROGRAM_VERTEX", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::PROGRAM_RASTER(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "PROGRAM_RASTER", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::PROGRAM_STORE(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "PROGRAM_STORE", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::A_8(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "A_8", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::RGB_565(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "RGB_565", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::RGB_888(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "RGB_888", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::RGBA_5551(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "RGBA_5551", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::RGBA_4444(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "RGBA_4444", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::RGBA_8888(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "RGBA_8888", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::F32_2(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "F32_2", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::F32_3(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "F32_3", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::F32_4(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "F32_4", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::F64_2(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "F64_2", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::F64_3(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "F64_3", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::F64_4(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "F64_4", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::U8_2(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "U8_2", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::U8_3(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "U8_3", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::U8_4(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "U8_4", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::I8_2(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "I8_2", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::I8_3(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "I8_3", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::I8_4(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "I8_4", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::U16_2(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "U16_2", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::U16_3(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "U16_3", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::U16_4(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "U16_4", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::I16_2(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "I16_2", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::I16_3(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "I16_3", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::I16_4(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "I16_4", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::U32_2(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "U32_2", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::U32_3(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "U32_3", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::U32_4(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "U32_4", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::I32_2(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "I32_2", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::I32_3(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "I32_3", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::I32_4(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "I32_4", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::U64_2(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "U64_2", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::U64_3(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "U64_3", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::U64_4(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "U64_4", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::I64_2(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "I64_2", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::I64_3(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "I64_3", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::I64_4(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "I64_4", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::MATRIX_4X4(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "MATRIX_4X4", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::MATRIX4X4(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "MATRIX4X4", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::MATRIX_3X3(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "MATRIX_3X3", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::MATRIX_2X2(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "MATRIX_2X2", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::createVector(const ::android::renderscript::RenderScript& arg0, const ::android::renderscript::Element_DataType& arg1, int32_t arg2){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createVector", "(Landroid/renderscript/RenderScript;Landroid/renderscript/Element$DataType;I)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element::createPixel(const ::android::renderscript::RenderScript& arg0, const ::android::renderscript::Element_DataType& arg1, const ::android::renderscript::Element_DataKind& arg2){
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createPixel", "(Landroid/renderscript/RenderScript;Landroid/renderscript/Element$DataType;Landroid/renderscript/Element$DataKind;)Landroid/renderscript/Element;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

bool android::renderscript::Element::isCompatible(const ::android::renderscript::Element& arg0) const {
    if (!::android::renderscript::Element::_class) ::android::renderscript::Element::_class = java::fetch_class("android/renderscript/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCompatible", "(Landroid/renderscript/Element;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

std::vector< ::android::renderscript::Sampler_Value> android::renderscript::Sampler_Value::values(){
    if (!::android::renderscript::Sampler_Value::_class) ::android::renderscript::Sampler_Value::_class = java::fetch_class("android/renderscript/Sampler$Value");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/renderscript/Sampler$Value;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::renderscript::Sampler_Value> _ret(rets, ::android::renderscript::Sampler_Value((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::renderscript::Sampler_Value retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::renderscript::Sampler_Value android::renderscript::Sampler_Value::valueOf(const ::java::lang::String& arg0){
    if (!::android::renderscript::Sampler_Value::_class) ::android::renderscript::Sampler_Value::_class = java::fetch_class("android/renderscript/Sampler$Value");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/renderscript/Sampler$Value;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Sampler_Value _ret(ret);
    return _ret;
}

std::vector< ::android::renderscript::ProgramStore_BlendDstFunc> android::renderscript::ProgramStore_BlendDstFunc::values(){
    if (!::android::renderscript::ProgramStore_BlendDstFunc::_class) ::android::renderscript::ProgramStore_BlendDstFunc::_class = java::fetch_class("android/renderscript/ProgramStore$BlendDstFunc");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/renderscript/ProgramStore$BlendDstFunc;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::renderscript::ProgramStore_BlendDstFunc> _ret(rets, ::android::renderscript::ProgramStore_BlendDstFunc((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::renderscript::ProgramStore_BlendDstFunc retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::renderscript::ProgramStore_BlendDstFunc android::renderscript::ProgramStore_BlendDstFunc::valueOf(const ::java::lang::String& arg0){
    if (!::android::renderscript::ProgramStore_BlendDstFunc::_class) ::android::renderscript::ProgramStore_BlendDstFunc::_class = java::fetch_class("android/renderscript/ProgramStore$BlendDstFunc");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/renderscript/ProgramStore$BlendDstFunc;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::ProgramStore_BlendDstFunc _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Sampler_Builder::Sampler_Builder(const ::android::renderscript::RenderScript& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Sampler_Builder::_class) ::android::renderscript::Sampler_Builder::_class = java::fetch_class("android/renderscript/Sampler$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/renderscript/RenderScript;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::renderscript::Sampler_Builder::setMinification(const ::android::renderscript::Sampler_Value& arg0) const {
    if (!::android::renderscript::Sampler_Builder::_class) ::android::renderscript::Sampler_Builder::_class = java::fetch_class("android/renderscript/Sampler$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMinification", "(Landroid/renderscript/Sampler$Value;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::Sampler_Builder::setMagnification(const ::android::renderscript::Sampler_Value& arg0) const {
    if (!::android::renderscript::Sampler_Builder::_class) ::android::renderscript::Sampler_Builder::_class = java::fetch_class("android/renderscript/Sampler$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMagnification", "(Landroid/renderscript/Sampler$Value;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::Sampler_Builder::setWrapS(const ::android::renderscript::Sampler_Value& arg0) const {
    if (!::android::renderscript::Sampler_Builder::_class) ::android::renderscript::Sampler_Builder::_class = java::fetch_class("android/renderscript/Sampler$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWrapS", "(Landroid/renderscript/Sampler$Value;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::Sampler_Builder::setWrapT(const ::android::renderscript::Sampler_Value& arg0) const {
    if (!::android::renderscript::Sampler_Builder::_class) ::android::renderscript::Sampler_Builder::_class = java::fetch_class("android/renderscript/Sampler$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWrapT", "(Landroid/renderscript/Sampler$Value;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::Sampler_Builder::setAnisotropy(float arg0) const {
    if (!::android::renderscript::Sampler_Builder::_class) ::android::renderscript::Sampler_Builder::_class = java::fetch_class("android/renderscript/Sampler$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAnisotropy", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::renderscript::Sampler android::renderscript::Sampler_Builder::create() const {
    if (!::android::renderscript::Sampler_Builder::_class) ::android::renderscript::Sampler_Builder::_class = java::fetch_class("android/renderscript/Sampler$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "create", "()Landroid/renderscript/Sampler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::renderscript::Sampler _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Int2::Int2() : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Int2::_class) ::android::renderscript::Int2::_class = java::fetch_class("android/renderscript/Int2");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Int2::Int2(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Int2::_class) ::android::renderscript::Int2::_class = java::fetch_class("android/renderscript/Int2");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::RSIllegalArgumentException::RSIllegalArgumentException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::renderscript::RSRuntimeException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::renderscript::RSIllegalArgumentException::_class) ::android::renderscript::RSIllegalArgumentException::_class = java::fetch_class("android/renderscript/RSIllegalArgumentException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::renderscript::ProgramVertexFixedFunction::bindConstants(const ::android::renderscript::ProgramVertexFixedFunction_Constants& arg0) const {
    if (!::android::renderscript::ProgramVertexFixedFunction::_class) ::android::renderscript::ProgramVertexFixedFunction::_class = java::fetch_class("android/renderscript/ProgramVertexFixedFunction");
    static jmethodID mid = java::jni->GetMethodID(_class, "bindConstants", "(Landroid/renderscript/ProgramVertexFixedFunction$Constants;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::renderscript::Font android::renderscript::Font::createFromFile(const ::android::renderscript::RenderScript& arg0, const ::android::content::res::Resources& arg1, const ::java::lang::String& arg2, float arg3){
    if (!::android::renderscript::Font::_class) ::android::renderscript::Font::_class = java::fetch_class("android/renderscript/Font");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createFromFile", "(Landroid/renderscript/RenderScript;Landroid/content/res/Resources;Ljava/lang/String;F)Landroid/renderscript/Font;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    float _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::renderscript::Font _ret(ret);
    return _ret;
}

::android::renderscript::Font android::renderscript::Font::createFromFile(const ::android::renderscript::RenderScript& arg0, const ::android::content::res::Resources& arg1, const ::java::io::File& arg2, float arg3){
    if (!::android::renderscript::Font::_class) ::android::renderscript::Font::_class = java::fetch_class("android/renderscript/Font");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createFromFile", "(Landroid/renderscript/RenderScript;Landroid/content/res/Resources;Ljava/io/File;F)Landroid/renderscript/Font;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    float _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::renderscript::Font _ret(ret);
    return _ret;
}

::android::renderscript::Font android::renderscript::Font::createFromAsset(const ::android::renderscript::RenderScript& arg0, const ::android::content::res::Resources& arg1, const ::java::lang::String& arg2, float arg3){
    if (!::android::renderscript::Font::_class) ::android::renderscript::Font::_class = java::fetch_class("android/renderscript/Font");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createFromAsset", "(Landroid/renderscript/RenderScript;Landroid/content/res/Resources;Ljava/lang/String;F)Landroid/renderscript/Font;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    float _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::renderscript::Font _ret(ret);
    return _ret;
}

::android::renderscript::Font android::renderscript::Font::createFromResource(const ::android::renderscript::RenderScript& arg0, const ::android::content::res::Resources& arg1, int32_t arg2, float arg3){
    if (!::android::renderscript::Font::_class) ::android::renderscript::Font::_class = java::fetch_class("android/renderscript/Font");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createFromResource", "(Landroid/renderscript/RenderScript;Landroid/content/res/Resources;IF)Landroid/renderscript/Font;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    float _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::renderscript::Font _ret(ret);
    return _ret;
}

::android::renderscript::Font android::renderscript::Font::create(const ::android::renderscript::RenderScript& arg0, const ::android::content::res::Resources& arg1, const ::java::lang::String& arg2, const ::android::renderscript::Font_Style& arg3, float arg4){
    if (!::android::renderscript::Font::_class) ::android::renderscript::Font::_class = java::fetch_class("android/renderscript/Font");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "create", "(Landroid/renderscript/RenderScript;Landroid/content/res/Resources;Ljava/lang/String;Landroid/renderscript/Font$Style;F)Landroid/renderscript/Font;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    float _arg4 = arg4;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::renderscript::Font _ret(ret);
    return _ret;
}

std::vector< ::android::renderscript::FileA3D_EntryType> android::renderscript::FileA3D_EntryType::values(){
    if (!::android::renderscript::FileA3D_EntryType::_class) ::android::renderscript::FileA3D_EntryType::_class = java::fetch_class("android/renderscript/FileA3D$EntryType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/renderscript/FileA3D$EntryType;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::renderscript::FileA3D_EntryType> _ret(rets, ::android::renderscript::FileA3D_EntryType((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::renderscript::FileA3D_EntryType retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::renderscript::FileA3D_EntryType android::renderscript::FileA3D_EntryType::valueOf(const ::java::lang::String& arg0){
    if (!::android::renderscript::FileA3D_EntryType::_class) ::android::renderscript::FileA3D_EntryType::_class = java::fetch_class("android/renderscript/FileA3D$EntryType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/renderscript/FileA3D$EntryType;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::FileA3D_EntryType _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Double4::Double4() : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Double4::_class) ::android::renderscript::Double4::_class = java::fetch_class("android/renderscript/Double4");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Double4::Double4(double arg0, double arg1, double arg2, double arg3) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Double4::_class) ::android::renderscript::Double4::_class = java::fetch_class("android/renderscript/Double4");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(DDDD)V");
    double _arg0 = arg0;
    double _arg1 = arg1;
    double _arg2 = arg2;
    double _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::android::renderscript::Program_BaseProgramBuilder android::renderscript::Program_BaseProgramBuilder::setShader(const ::java::lang::String& arg0) const {
    if (!::android::renderscript::Program_BaseProgramBuilder::_class) ::android::renderscript::Program_BaseProgramBuilder::_class = java::fetch_class("android/renderscript/Program$BaseProgramBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShader", "(Ljava/lang/String;)Landroid/renderscript/Program$BaseProgramBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::renderscript::Program_BaseProgramBuilder _ret(ret);
    return _ret;
}

::android::renderscript::Program_BaseProgramBuilder android::renderscript::Program_BaseProgramBuilder::setShader(const ::android::content::res::Resources& arg0, int32_t arg1) const {
    if (!::android::renderscript::Program_BaseProgramBuilder::_class) ::android::renderscript::Program_BaseProgramBuilder::_class = java::fetch_class("android/renderscript/Program$BaseProgramBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShader", "(Landroid/content/res/Resources;I)Landroid/renderscript/Program$BaseProgramBuilder;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::renderscript::Program_BaseProgramBuilder _ret(ret);
    return _ret;
}

int32_t android::renderscript::Program_BaseProgramBuilder::getCurrentConstantIndex() const {
    if (!::android::renderscript::Program_BaseProgramBuilder::_class) ::android::renderscript::Program_BaseProgramBuilder::_class = java::fetch_class("android/renderscript/Program$BaseProgramBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentConstantIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::renderscript::Program_BaseProgramBuilder::getCurrentTextureIndex() const {
    if (!::android::renderscript::Program_BaseProgramBuilder::_class) ::android::renderscript::Program_BaseProgramBuilder::_class = java::fetch_class("android/renderscript/Program$BaseProgramBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentTextureIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::renderscript::Program_BaseProgramBuilder android::renderscript::Program_BaseProgramBuilder::addConstant(const ::android::renderscript::Type& arg0) const {
    if (!::android::renderscript::Program_BaseProgramBuilder::_class) ::android::renderscript::Program_BaseProgramBuilder::_class = java::fetch_class("android/renderscript/Program$BaseProgramBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addConstant", "(Landroid/renderscript/Type;)Landroid/renderscript/Program$BaseProgramBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::renderscript::Program_BaseProgramBuilder _ret(ret);
    return _ret;
}

::android::renderscript::Program_BaseProgramBuilder android::renderscript::Program_BaseProgramBuilder::addTexture(const ::android::renderscript::Program_TextureType& arg0) const {
    if (!::android::renderscript::Program_BaseProgramBuilder::_class) ::android::renderscript::Program_BaseProgramBuilder::_class = java::fetch_class("android/renderscript/Program$BaseProgramBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addTexture", "(Landroid/renderscript/Program$TextureType;)Landroid/renderscript/Program$BaseProgramBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::renderscript::Program_BaseProgramBuilder _ret(ret);
    return _ret;
}

std::vector< ::android::renderscript::ProgramStore_BlendSrcFunc> android::renderscript::ProgramStore_BlendSrcFunc::values(){
    if (!::android::renderscript::ProgramStore_BlendSrcFunc::_class) ::android::renderscript::ProgramStore_BlendSrcFunc::_class = java::fetch_class("android/renderscript/ProgramStore$BlendSrcFunc");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/renderscript/ProgramStore$BlendSrcFunc;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::renderscript::ProgramStore_BlendSrcFunc> _ret(rets, ::android::renderscript::ProgramStore_BlendSrcFunc((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::renderscript::ProgramStore_BlendSrcFunc retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::renderscript::ProgramStore_BlendSrcFunc android::renderscript::ProgramStore_BlendSrcFunc::valueOf(const ::java::lang::String& arg0){
    if (!::android::renderscript::ProgramStore_BlendSrcFunc::_class) ::android::renderscript::ProgramStore_BlendSrcFunc::_class = java::fetch_class("android/renderscript/ProgramStore$BlendSrcFunc");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/renderscript/ProgramStore$BlendSrcFunc;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::ProgramStore_BlendSrcFunc _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::ProgramFragmentFixedFunction_Builder::ProgramFragmentFixedFunction_Builder(const ::android::renderscript::RenderScript& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::ProgramFragmentFixedFunction_Builder::_class) ::android::renderscript::ProgramFragmentFixedFunction_Builder::_class = java::fetch_class("android/renderscript/ProgramFragmentFixedFunction$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/renderscript/RenderScript;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::renderscript::ProgramFragmentFixedFunction_Builder android::renderscript::ProgramFragmentFixedFunction_Builder::setTexture(const ::android::renderscript::ProgramFragmentFixedFunction_Builder_EnvMode& arg0, const ::android::renderscript::ProgramFragmentFixedFunction_Builder_Format& arg1, int32_t arg2) const {
    if (!::android::renderscript::ProgramFragmentFixedFunction_Builder::_class) ::android::renderscript::ProgramFragmentFixedFunction_Builder::_class = java::fetch_class("android/renderscript/ProgramFragmentFixedFunction$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTexture", "(Landroid/renderscript/ProgramFragmentFixedFunction$Builder$EnvMode;Landroid/renderscript/ProgramFragmentFixedFunction$Builder$Format;I)Landroid/renderscript/ProgramFragmentFixedFunction$Builder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::renderscript::ProgramFragmentFixedFunction_Builder _ret(ret);
    return _ret;
}

::android::renderscript::ProgramFragmentFixedFunction_Builder android::renderscript::ProgramFragmentFixedFunction_Builder::setPointSpriteTexCoordinateReplacement(bool arg0) const {
    if (!::android::renderscript::ProgramFragmentFixedFunction_Builder::_class) ::android::renderscript::ProgramFragmentFixedFunction_Builder::_class = java::fetch_class("android/renderscript/ProgramFragmentFixedFunction$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPointSpriteTexCoordinateReplacement", "(Z)Landroid/renderscript/ProgramFragmentFixedFunction$Builder;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::renderscript::ProgramFragmentFixedFunction_Builder _ret(ret);
    return _ret;
}

::android::renderscript::ProgramFragmentFixedFunction_Builder android::renderscript::ProgramFragmentFixedFunction_Builder::setVaryingColor(bool arg0) const {
    if (!::android::renderscript::ProgramFragmentFixedFunction_Builder::_class) ::android::renderscript::ProgramFragmentFixedFunction_Builder::_class = java::fetch_class("android/renderscript/ProgramFragmentFixedFunction$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVaryingColor", "(Z)Landroid/renderscript/ProgramFragmentFixedFunction$Builder;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::renderscript::ProgramFragmentFixedFunction_Builder _ret(ret);
    return _ret;
}

::android::renderscript::ProgramFragmentFixedFunction android::renderscript::ProgramFragmentFixedFunction_Builder::create() const {
    if (!::android::renderscript::ProgramFragmentFixedFunction_Builder::_class) ::android::renderscript::ProgramFragmentFixedFunction_Builder::_class = java::fetch_class("android/renderscript/ProgramFragmentFixedFunction$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "create", "()Landroid/renderscript/ProgramFragmentFixedFunction;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::renderscript::ProgramFragmentFixedFunction _ret(ret);
    return _ret;
}

std::vector< ::android::renderscript::ProgramRaster_CullMode> android::renderscript::ProgramRaster_CullMode::values(){
    if (!::android::renderscript::ProgramRaster_CullMode::_class) ::android::renderscript::ProgramRaster_CullMode::_class = java::fetch_class("android/renderscript/ProgramRaster$CullMode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/renderscript/ProgramRaster$CullMode;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::renderscript::ProgramRaster_CullMode> _ret(rets, ::android::renderscript::ProgramRaster_CullMode((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::renderscript::ProgramRaster_CullMode retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::renderscript::ProgramRaster_CullMode android::renderscript::ProgramRaster_CullMode::valueOf(const ::java::lang::String& arg0){
    if (!::android::renderscript::ProgramRaster_CullMode::_class) ::android::renderscript::ProgramRaster_CullMode::_class = java::fetch_class("android/renderscript/ProgramRaster$CullMode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/renderscript/ProgramRaster$CullMode;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::ProgramRaster_CullMode _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Byte3::Byte3() : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Byte3::_class) ::android::renderscript::Byte3::_class = java::fetch_class("android/renderscript/Byte3");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Byte3::Byte3(int8_t arg0, int8_t arg1, int8_t arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Byte3::_class) ::android::renderscript::Byte3::_class = java::fetch_class("android/renderscript/Byte3");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(BBB)V");
    int8_t _arg0 = arg0;
    int8_t _arg1 = arg1;
    int8_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

std::vector< ::android::renderscript::Element_DataType> android::renderscript::Element_DataType::values(){
    if (!::android::renderscript::Element_DataType::_class) ::android::renderscript::Element_DataType::_class = java::fetch_class("android/renderscript/Element$DataType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/renderscript/Element$DataType;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::renderscript::Element_DataType> _ret(rets, ::android::renderscript::Element_DataType((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::renderscript::Element_DataType retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::renderscript::Element_DataType android::renderscript::Element_DataType::valueOf(const ::java::lang::String& arg0){
    if (!::android::renderscript::Element_DataType::_class) ::android::renderscript::Element_DataType::_class = java::fetch_class("android/renderscript/Element$DataType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/renderscript/Element$DataType;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element_DataType _ret(ret);
    return _ret;
}

std::vector< ::android::renderscript::Element_DataKind> android::renderscript::Element_DataKind::values(){
    if (!::android::renderscript::Element_DataKind::_class) ::android::renderscript::Element_DataKind::_class = java::fetch_class("android/renderscript/Element$DataKind");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/renderscript/Element$DataKind;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::renderscript::Element_DataKind> _ret(rets, ::android::renderscript::Element_DataKind((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::renderscript::Element_DataKind retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::renderscript::Element_DataKind android::renderscript::Element_DataKind::valueOf(const ::java::lang::String& arg0){
    if (!::android::renderscript::Element_DataKind::_class) ::android::renderscript::Element_DataKind::_class = java::fetch_class("android/renderscript/Element$DataKind");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/renderscript/Element$DataKind;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Element_DataKind _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Mesh_Builder::Mesh_Builder(const ::android::renderscript::RenderScript& arg0, int32_t arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Mesh_Builder::_class) ::android::renderscript::Mesh_Builder::_class = java::fetch_class("android/renderscript/Mesh$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/renderscript/RenderScript;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

int32_t android::renderscript::Mesh_Builder::getCurrentVertexTypeIndex() const {
    if (!::android::renderscript::Mesh_Builder::_class) ::android::renderscript::Mesh_Builder::_class = java::fetch_class("android/renderscript/Mesh$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentVertexTypeIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::renderscript::Mesh_Builder::getCurrentIndexSetIndex() const {
    if (!::android::renderscript::Mesh_Builder::_class) ::android::renderscript::Mesh_Builder::_class = java::fetch_class("android/renderscript/Mesh$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentIndexSetIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::renderscript::Mesh_Builder android::renderscript::Mesh_Builder::addVertexType(const ::android::renderscript::Type& arg0) const {
    if (!::android::renderscript::Mesh_Builder::_class) ::android::renderscript::Mesh_Builder::_class = java::fetch_class("android/renderscript/Mesh$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addVertexType", "(Landroid/renderscript/Type;)Landroid/renderscript/Mesh$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::renderscript::Mesh_Builder _ret(ret);
    return _ret;
}

::android::renderscript::Mesh_Builder android::renderscript::Mesh_Builder::addVertexType(const ::android::renderscript::Element& arg0, int32_t arg1) const {
    if (!::android::renderscript::Mesh_Builder::_class) ::android::renderscript::Mesh_Builder::_class = java::fetch_class("android/renderscript/Mesh$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addVertexType", "(Landroid/renderscript/Element;I)Landroid/renderscript/Mesh$Builder;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::renderscript::Mesh_Builder _ret(ret);
    return _ret;
}

::android::renderscript::Mesh_Builder android::renderscript::Mesh_Builder::addIndexSetType(const ::android::renderscript::Type& arg0, const ::android::renderscript::Mesh_Primitive& arg1) const {
    if (!::android::renderscript::Mesh_Builder::_class) ::android::renderscript::Mesh_Builder::_class = java::fetch_class("android/renderscript/Mesh$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addIndexSetType", "(Landroid/renderscript/Type;Landroid/renderscript/Mesh$Primitive;)Landroid/renderscript/Mesh$Builder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::renderscript::Mesh_Builder _ret(ret);
    return _ret;
}

::android::renderscript::Mesh_Builder android::renderscript::Mesh_Builder::addIndexSetType(const ::android::renderscript::Mesh_Primitive& arg0) const {
    if (!::android::renderscript::Mesh_Builder::_class) ::android::renderscript::Mesh_Builder::_class = java::fetch_class("android/renderscript/Mesh$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addIndexSetType", "(Landroid/renderscript/Mesh$Primitive;)Landroid/renderscript/Mesh$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::renderscript::Mesh_Builder _ret(ret);
    return _ret;
}

::android::renderscript::Mesh_Builder android::renderscript::Mesh_Builder::addIndexSetType(const ::android::renderscript::Element& arg0, int32_t arg1, const ::android::renderscript::Mesh_Primitive& arg2) const {
    if (!::android::renderscript::Mesh_Builder::_class) ::android::renderscript::Mesh_Builder::_class = java::fetch_class("android/renderscript/Mesh$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addIndexSetType", "(Landroid/renderscript/Element;ILandroid/renderscript/Mesh$Primitive;)Landroid/renderscript/Mesh$Builder;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::renderscript::Mesh_Builder _ret(ret);
    return _ret;
}

::android::renderscript::Mesh android::renderscript::Mesh_Builder::create() const {
    if (!::android::renderscript::Mesh_Builder::_class) ::android::renderscript::Mesh_Builder::_class = java::fetch_class("android/renderscript/Mesh$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "create", "()Landroid/renderscript/Mesh;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::renderscript::Mesh _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::ProgramVertexFixedFunction_Constants::ProgramVertexFixedFunction_Constants(const ::android::renderscript::RenderScript& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::ProgramVertexFixedFunction_Constants::_class) ::android::renderscript::ProgramVertexFixedFunction_Constants::_class = java::fetch_class("android/renderscript/ProgramVertexFixedFunction$Constants");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/renderscript/RenderScript;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::renderscript::ProgramVertexFixedFunction_Constants::destroy() const {
    if (!::android::renderscript::ProgramVertexFixedFunction_Constants::_class) ::android::renderscript::ProgramVertexFixedFunction_Constants::_class = java::fetch_class("android/renderscript/ProgramVertexFixedFunction$Constants");
    static jmethodID mid = java::jni->GetMethodID(_class, "destroy", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::renderscript::ProgramVertexFixedFunction_Constants::setModelview(const ::android::renderscript::Matrix4f& arg0) const {
    if (!::android::renderscript::ProgramVertexFixedFunction_Constants::_class) ::android::renderscript::ProgramVertexFixedFunction_Constants::_class = java::fetch_class("android/renderscript/ProgramVertexFixedFunction$Constants");
    static jmethodID mid = java::jni->GetMethodID(_class, "setModelview", "(Landroid/renderscript/Matrix4f;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::ProgramVertexFixedFunction_Constants::setProjection(const ::android::renderscript::Matrix4f& arg0) const {
    if (!::android::renderscript::ProgramVertexFixedFunction_Constants::_class) ::android::renderscript::ProgramVertexFixedFunction_Constants::_class = java::fetch_class("android/renderscript/ProgramVertexFixedFunction$Constants");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProjection", "(Landroid/renderscript/Matrix4f;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::ProgramVertexFixedFunction_Constants::setTexture(const ::android::renderscript::Matrix4f& arg0) const {
    if (!::android::renderscript::ProgramVertexFixedFunction_Constants::_class) ::android::renderscript::ProgramVertexFixedFunction_Constants::_class = java::fetch_class("android/renderscript/ProgramVertexFixedFunction$Constants");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTexture", "(Landroid/renderscript/Matrix4f;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Mesh_TriangleMeshBuilder::Mesh_TriangleMeshBuilder(const ::android::renderscript::RenderScript& arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Mesh_TriangleMeshBuilder::_class) ::android::renderscript::Mesh_TriangleMeshBuilder::_class = java::fetch_class("android/renderscript/Mesh$TriangleMeshBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/renderscript/RenderScript;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::android::renderscript::Mesh_TriangleMeshBuilder android::renderscript::Mesh_TriangleMeshBuilder::addVertex(float arg0, float arg1) const {
    if (!::android::renderscript::Mesh_TriangleMeshBuilder::_class) ::android::renderscript::Mesh_TriangleMeshBuilder::_class = java::fetch_class("android/renderscript/Mesh$TriangleMeshBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addVertex", "(FF)Landroid/renderscript/Mesh$TriangleMeshBuilder;");
    float _arg0 = arg0;
    float _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::renderscript::Mesh_TriangleMeshBuilder _ret(ret);
    return _ret;
}

::android::renderscript::Mesh_TriangleMeshBuilder android::renderscript::Mesh_TriangleMeshBuilder::addVertex(float arg0, float arg1, float arg2) const {
    if (!::android::renderscript::Mesh_TriangleMeshBuilder::_class) ::android::renderscript::Mesh_TriangleMeshBuilder::_class = java::fetch_class("android/renderscript/Mesh$TriangleMeshBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addVertex", "(FFF)Landroid/renderscript/Mesh$TriangleMeshBuilder;");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::renderscript::Mesh_TriangleMeshBuilder _ret(ret);
    return _ret;
}

::android::renderscript::Mesh_TriangleMeshBuilder android::renderscript::Mesh_TriangleMeshBuilder::setTexture(float arg0, float arg1) const {
    if (!::android::renderscript::Mesh_TriangleMeshBuilder::_class) ::android::renderscript::Mesh_TriangleMeshBuilder::_class = java::fetch_class("android/renderscript/Mesh$TriangleMeshBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTexture", "(FF)Landroid/renderscript/Mesh$TriangleMeshBuilder;");
    float _arg0 = arg0;
    float _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::renderscript::Mesh_TriangleMeshBuilder _ret(ret);
    return _ret;
}

::android::renderscript::Mesh_TriangleMeshBuilder android::renderscript::Mesh_TriangleMeshBuilder::setNormal(float arg0, float arg1, float arg2) const {
    if (!::android::renderscript::Mesh_TriangleMeshBuilder::_class) ::android::renderscript::Mesh_TriangleMeshBuilder::_class = java::fetch_class("android/renderscript/Mesh$TriangleMeshBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNormal", "(FFF)Landroid/renderscript/Mesh$TriangleMeshBuilder;");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::renderscript::Mesh_TriangleMeshBuilder _ret(ret);
    return _ret;
}

::android::renderscript::Mesh_TriangleMeshBuilder android::renderscript::Mesh_TriangleMeshBuilder::setColor(float arg0, float arg1, float arg2, float arg3) const {
    if (!::android::renderscript::Mesh_TriangleMeshBuilder::_class) ::android::renderscript::Mesh_TriangleMeshBuilder::_class = java::fetch_class("android/renderscript/Mesh$TriangleMeshBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColor", "(FFFF)Landroid/renderscript/Mesh$TriangleMeshBuilder;");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::renderscript::Mesh_TriangleMeshBuilder _ret(ret);
    return _ret;
}

::android::renderscript::Mesh_TriangleMeshBuilder android::renderscript::Mesh_TriangleMeshBuilder::addTriangle(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::renderscript::Mesh_TriangleMeshBuilder::_class) ::android::renderscript::Mesh_TriangleMeshBuilder::_class = java::fetch_class("android/renderscript/Mesh$TriangleMeshBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addTriangle", "(III)Landroid/renderscript/Mesh$TriangleMeshBuilder;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::renderscript::Mesh_TriangleMeshBuilder _ret(ret);
    return _ret;
}

::android::renderscript::Mesh android::renderscript::Mesh_TriangleMeshBuilder::create(bool arg0) const {
    if (!::android::renderscript::Mesh_TriangleMeshBuilder::_class) ::android::renderscript::Mesh_TriangleMeshBuilder::_class = java::fetch_class("android/renderscript/Mesh$TriangleMeshBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "create", "(Z)Landroid/renderscript/Mesh;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::renderscript::Mesh _ret(ret);
    return _ret;
}

std::vector< ::android::renderscript::ProgramStore_DepthFunc> android::renderscript::ProgramStore_DepthFunc::values(){
    if (!::android::renderscript::ProgramStore_DepthFunc::_class) ::android::renderscript::ProgramStore_DepthFunc::_class = java::fetch_class("android/renderscript/ProgramStore$DepthFunc");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/renderscript/ProgramStore$DepthFunc;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::renderscript::ProgramStore_DepthFunc> _ret(rets, ::android::renderscript::ProgramStore_DepthFunc((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::renderscript::ProgramStore_DepthFunc retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::renderscript::ProgramStore_DepthFunc android::renderscript::ProgramStore_DepthFunc::valueOf(const ::java::lang::String& arg0){
    if (!::android::renderscript::ProgramStore_DepthFunc::_class) ::android::renderscript::ProgramStore_DepthFunc::_class = java::fetch_class("android/renderscript/ProgramStore$DepthFunc");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/renderscript/ProgramStore$DepthFunc;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::ProgramStore_DepthFunc _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::RSDriverException::RSDriverException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::renderscript::RSRuntimeException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::renderscript::RSDriverException::_class) ::android::renderscript::RSDriverException::_class = java::fetch_class("android/renderscript/RSDriverException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Byte4::Byte4() : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Byte4::_class) ::android::renderscript::Byte4::_class = java::fetch_class("android/renderscript/Byte4");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Byte4::Byte4(int8_t arg0, int8_t arg1, int8_t arg2, int8_t arg3) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Byte4::_class) ::android::renderscript::Byte4::_class = java::fetch_class("android/renderscript/Byte4");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(BBBB)V");
    int8_t _arg0 = arg0;
    int8_t _arg1 = arg1;
    int8_t _arg2 = arg2;
    int8_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Int4::Int4() : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Int4::_class) ::android::renderscript::Int4::_class = java::fetch_class("android/renderscript/Int4");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Int4::Int4(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Int4::_class) ::android::renderscript::Int4::_class = java::fetch_class("android/renderscript/Int4");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::ProgramFragment_Builder::ProgramFragment_Builder(const ::android::renderscript::RenderScript& arg0) : ::java::lang::Object((jobject)0), ::android::renderscript::Program_BaseProgramBuilder((jobject)0) {
    if (!::android::renderscript::ProgramFragment_Builder::_class) ::android::renderscript::ProgramFragment_Builder::_class = java::fetch_class("android/renderscript/ProgramFragment$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/renderscript/RenderScript;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::renderscript::ProgramFragment android::renderscript::ProgramFragment_Builder::create() const {
    if (!::android::renderscript::ProgramFragment_Builder::_class) ::android::renderscript::ProgramFragment_Builder::_class = java::fetch_class("android/renderscript/ProgramFragment$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "create", "()Landroid/renderscript/ProgramFragment;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::renderscript::ProgramFragment _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::RSInvalidStateException::RSInvalidStateException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::renderscript::RSRuntimeException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::renderscript::RSInvalidStateException::_class) ::android::renderscript::RSInvalidStateException::_class = java::fetch_class("android/renderscript/RSInvalidStateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::renderscript::Element android::renderscript::Script_FieldBase::getElement() const {
    if (!::android::renderscript::Script_FieldBase::_class) ::android::renderscript::Script_FieldBase::_class = java::fetch_class("android/renderscript/Script$FieldBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getElement", "()Landroid/renderscript/Element;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Type android::renderscript::Script_FieldBase::getType() const {
    if (!::android::renderscript::Script_FieldBase::_class) ::android::renderscript::Script_FieldBase::_class = java::fetch_class("android/renderscript/Script$FieldBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()Landroid/renderscript/Type;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::renderscript::Type _ret(ret);
    return _ret;
}

::android::renderscript::Allocation android::renderscript::Script_FieldBase::getAllocation() const {
    if (!::android::renderscript::Script_FieldBase::_class) ::android::renderscript::Script_FieldBase::_class = java::fetch_class("android/renderscript/Script$FieldBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAllocation", "()Landroid/renderscript/Allocation;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::renderscript::Allocation _ret(ret);
    return _ret;
}

void android::renderscript::Script_FieldBase::updateAllocation() const {
    if (!::android::renderscript::Script_FieldBase::_class) ::android::renderscript::Script_FieldBase::_class = java::fetch_class("android/renderscript/Script$FieldBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateAllocation", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

std::vector< ::android::renderscript::Program_TextureType> android::renderscript::Program_TextureType::values(){
    if (!::android::renderscript::Program_TextureType::_class) ::android::renderscript::Program_TextureType::_class = java::fetch_class("android/renderscript/Program$TextureType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/renderscript/Program$TextureType;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::renderscript::Program_TextureType> _ret(rets, ::android::renderscript::Program_TextureType((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::renderscript::Program_TextureType retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::renderscript::Program_TextureType android::renderscript::Program_TextureType::valueOf(const ::java::lang::String& arg0){
    if (!::android::renderscript::Program_TextureType::_class) ::android::renderscript::Program_TextureType::_class = java::fetch_class("android/renderscript/Program$TextureType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/renderscript/Program$TextureType;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Program_TextureType _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Short4::Short4() : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Short4::_class) ::android::renderscript::Short4::_class = java::fetch_class("android/renderscript/Short4");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Short4::Short4(int16_t arg0, int16_t arg1, int16_t arg2, int16_t arg3) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Short4::_class) ::android::renderscript::Short4::_class = java::fetch_class("android/renderscript/Short4");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(SSSS)V");
    int16_t _arg0 = arg0;
    int16_t _arg1 = arg1;
    int16_t _arg2 = arg2;
    int16_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::ProgramVertex_Builder::ProgramVertex_Builder(const ::android::renderscript::RenderScript& arg0) : ::java::lang::Object((jobject)0), ::android::renderscript::Program_BaseProgramBuilder((jobject)0) {
    if (!::android::renderscript::ProgramVertex_Builder::_class) ::android::renderscript::ProgramVertex_Builder::_class = java::fetch_class("android/renderscript/ProgramVertex$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/renderscript/RenderScript;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::renderscript::ProgramVertex_Builder android::renderscript::ProgramVertex_Builder::addInput(const ::android::renderscript::Element& arg0) const {
    if (!::android::renderscript::ProgramVertex_Builder::_class) ::android::renderscript::ProgramVertex_Builder::_class = java::fetch_class("android/renderscript/ProgramVertex$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addInput", "(Landroid/renderscript/Element;)Landroid/renderscript/ProgramVertex$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::renderscript::ProgramVertex_Builder _ret(ret);
    return _ret;
}

::android::renderscript::ProgramVertex android::renderscript::ProgramVertex_Builder::create() const {
    if (!::android::renderscript::ProgramVertex_Builder::_class) ::android::renderscript::ProgramVertex_Builder::_class = java::fetch_class("android/renderscript/ProgramVertex$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "create", "()Landroid/renderscript/ProgramVertex;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::renderscript::ProgramVertex _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::RenderScriptGL::RenderScriptGL(const ::android::content::Context& arg0, const ::android::renderscript::RenderScriptGL_SurfaceConfig& arg1) : ::java::lang::Object((jobject)0), ::android::renderscript::RenderScript((jobject)0) {
    if (!::android::renderscript::RenderScriptGL::_class) ::android::renderscript::RenderScriptGL::_class = java::fetch_class("android/renderscript/RenderScriptGL");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/renderscript/RenderScriptGL$SurfaceConfig;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::renderscript::RenderScriptGL::setSurface(const ::android::view::SurfaceHolder& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::renderscript::RenderScriptGL::_class) ::android::renderscript::RenderScriptGL::_class = java::fetch_class("android/renderscript/RenderScriptGL");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSurface", "(Landroid/view/SurfaceHolder;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::renderscript::RenderScriptGL::setSurfaceTexture(const ::android::graphics::SurfaceTexture& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::renderscript::RenderScriptGL::_class) ::android::renderscript::RenderScriptGL::_class = java::fetch_class("android/renderscript/RenderScriptGL");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSurfaceTexture", "(Landroid/graphics/SurfaceTexture;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::renderscript::RenderScriptGL::getHeight() const {
    if (!::android::renderscript::RenderScriptGL::_class) ::android::renderscript::RenderScriptGL::_class = java::fetch_class("android/renderscript/RenderScriptGL");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::renderscript::RenderScriptGL::getWidth() const {
    if (!::android::renderscript::RenderScriptGL::_class) ::android::renderscript::RenderScriptGL::_class = java::fetch_class("android/renderscript/RenderScriptGL");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::renderscript::RenderScriptGL::pause() const {
    if (!::android::renderscript::RenderScriptGL::_class) ::android::renderscript::RenderScriptGL::_class = java::fetch_class("android/renderscript/RenderScriptGL");
    static jmethodID mid = java::jni->GetMethodID(_class, "pause", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::renderscript::RenderScriptGL::resume() const {
    if (!::android::renderscript::RenderScriptGL::_class) ::android::renderscript::RenderScriptGL::_class = java::fetch_class("android/renderscript/RenderScriptGL");
    static jmethodID mid = java::jni->GetMethodID(_class, "resume", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::renderscript::RenderScriptGL::bindRootScript(const ::android::renderscript::Script& arg0) const {
    if (!::android::renderscript::RenderScriptGL::_class) ::android::renderscript::RenderScriptGL::_class = java::fetch_class("android/renderscript/RenderScriptGL");
    static jmethodID mid = java::jni->GetMethodID(_class, "bindRootScript", "(Landroid/renderscript/Script;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::RenderScriptGL::bindProgramStore(const ::android::renderscript::ProgramStore& arg0) const {
    if (!::android::renderscript::RenderScriptGL::_class) ::android::renderscript::RenderScriptGL::_class = java::fetch_class("android/renderscript/RenderScriptGL");
    static jmethodID mid = java::jni->GetMethodID(_class, "bindProgramStore", "(Landroid/renderscript/ProgramStore;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::RenderScriptGL::bindProgramFragment(const ::android::renderscript::ProgramFragment& arg0) const {
    if (!::android::renderscript::RenderScriptGL::_class) ::android::renderscript::RenderScriptGL::_class = java::fetch_class("android/renderscript/RenderScriptGL");
    static jmethodID mid = java::jni->GetMethodID(_class, "bindProgramFragment", "(Landroid/renderscript/ProgramFragment;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::RenderScriptGL::bindProgramRaster(const ::android::renderscript::ProgramRaster& arg0) const {
    if (!::android::renderscript::RenderScriptGL::_class) ::android::renderscript::RenderScriptGL::_class = java::fetch_class("android/renderscript/RenderScriptGL");
    static jmethodID mid = java::jni->GetMethodID(_class, "bindProgramRaster", "(Landroid/renderscript/ProgramRaster;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::RenderScriptGL::bindProgramVertex(const ::android::renderscript::ProgramVertex& arg0) const {
    if (!::android::renderscript::RenderScriptGL::_class) ::android::renderscript::RenderScriptGL::_class = java::fetch_class("android/renderscript/RenderScriptGL");
    static jmethodID mid = java::jni->GetMethodID(_class, "bindProgramVertex", "(Landroid/renderscript/ProgramVertex;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::RenderScript::setMessageHandler(const ::android::renderscript::RenderScript_RSMessageHandler& arg0) const {
    if (!::android::renderscript::RenderScript::_class) ::android::renderscript::RenderScript::_class = java::fetch_class("android/renderscript/RenderScript");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMessageHandler", "(Landroid/renderscript/RenderScript$RSMessageHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::renderscript::RenderScript_RSMessageHandler android::renderscript::RenderScript::getMessageHandler() const {
    if (!::android::renderscript::RenderScript::_class) ::android::renderscript::RenderScript::_class = java::fetch_class("android/renderscript/RenderScript");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessageHandler", "()Landroid/renderscript/RenderScript$RSMessageHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::renderscript::RenderScript_RSMessageHandler _ret(ret);
    return _ret;
}

void android::renderscript::RenderScript::setErrorHandler(const ::android::renderscript::RenderScript_RSErrorHandler& arg0) const {
    if (!::android::renderscript::RenderScript::_class) ::android::renderscript::RenderScript::_class = java::fetch_class("android/renderscript/RenderScript");
    static jmethodID mid = java::jni->GetMethodID(_class, "setErrorHandler", "(Landroid/renderscript/RenderScript$RSErrorHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::renderscript::RenderScript_RSErrorHandler android::renderscript::RenderScript::getErrorHandler() const {
    if (!::android::renderscript::RenderScript::_class) ::android::renderscript::RenderScript::_class = java::fetch_class("android/renderscript/RenderScript");
    static jmethodID mid = java::jni->GetMethodID(_class, "getErrorHandler", "()Landroid/renderscript/RenderScript$RSErrorHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::renderscript::RenderScript_RSErrorHandler _ret(ret);
    return _ret;
}

void android::renderscript::RenderScript::setPriority(const ::android::renderscript::RenderScript_Priority& arg0) const {
    if (!::android::renderscript::RenderScript::_class) ::android::renderscript::RenderScript::_class = java::fetch_class("android/renderscript/RenderScript");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPriority", "(Landroid/renderscript/RenderScript$Priority;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::Context android::renderscript::RenderScript::getApplicationContext() const {
    if (!::android::renderscript::RenderScript::_class) ::android::renderscript::RenderScript::_class = java::fetch_class("android/renderscript/RenderScript");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplicationContext", "()Landroid/content/Context;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Context _ret(ret);
    return _ret;
}

::android::renderscript::RenderScript android::renderscript::RenderScript::create(const ::android::content::Context& arg0){
    if (!::android::renderscript::RenderScript::_class) ::android::renderscript::RenderScript::_class = java::fetch_class("android/renderscript/RenderScript");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "create", "(Landroid/content/Context;)Landroid/renderscript/RenderScript;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::RenderScript _ret(ret);
    return _ret;
}

void android::renderscript::RenderScript::contextDump() const {
    if (!::android::renderscript::RenderScript::_class) ::android::renderscript::RenderScript::_class = java::fetch_class("android/renderscript/RenderScript");
    static jmethodID mid = java::jni->GetMethodID(_class, "contextDump", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::renderscript::RenderScript::finish() const {
    if (!::android::renderscript::RenderScript::_class) ::android::renderscript::RenderScript::_class = java::fetch_class("android/renderscript/RenderScript");
    static jmethodID mid = java::jni->GetMethodID(_class, "finish", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::renderscript::RenderScript::destroy() const {
    if (!::android::renderscript::RenderScript::_class) ::android::renderscript::RenderScript::_class = java::fetch_class("android/renderscript/RenderScript");
    static jmethodID mid = java::jni->GetMethodID(_class, "destroy", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Element_Builder::Element_Builder(const ::android::renderscript::RenderScript& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Element_Builder::_class) ::android::renderscript::Element_Builder::_class = java::fetch_class("android/renderscript/Element$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/renderscript/RenderScript;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::renderscript::Element_Builder android::renderscript::Element_Builder::add(const ::android::renderscript::Element& arg0, const ::java::lang::String& arg1, int32_t arg2) const {
    if (!::android::renderscript::Element_Builder::_class) ::android::renderscript::Element_Builder::_class = java::fetch_class("android/renderscript/Element$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Landroid/renderscript/Element;Ljava/lang/String;I)Landroid/renderscript/Element$Builder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::renderscript::Element_Builder _ret(ret);
    return _ret;
}

::android::renderscript::Element_Builder android::renderscript::Element_Builder::add(const ::android::renderscript::Element& arg0, const ::java::lang::String& arg1) const {
    if (!::android::renderscript::Element_Builder::_class) ::android::renderscript::Element_Builder::_class = java::fetch_class("android/renderscript/Element$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Landroid/renderscript/Element;Ljava/lang/String;)Landroid/renderscript/Element$Builder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::renderscript::Element_Builder _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Element_Builder::create() const {
    if (!::android::renderscript::Element_Builder::_class) ::android::renderscript::Element_Builder::_class = java::fetch_class("android/renderscript/Element$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "create", "()Landroid/renderscript/Element;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

::android::renderscript::Element android::renderscript::Type::getElement() const {
    if (!::android::renderscript::Type::_class) ::android::renderscript::Type::_class = java::fetch_class("android/renderscript/Type");
    static jmethodID mid = java::jni->GetMethodID(_class, "getElement", "()Landroid/renderscript/Element;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::renderscript::Element _ret(ret);
    return _ret;
}

int32_t android::renderscript::Type::getX() const {
    if (!::android::renderscript::Type::_class) ::android::renderscript::Type::_class = java::fetch_class("android/renderscript/Type");
    static jmethodID mid = java::jni->GetMethodID(_class, "getX", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::renderscript::Type::getY() const {
    if (!::android::renderscript::Type::_class) ::android::renderscript::Type::_class = java::fetch_class("android/renderscript/Type");
    static jmethodID mid = java::jni->GetMethodID(_class, "getY", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::renderscript::Type::getZ() const {
    if (!::android::renderscript::Type::_class) ::android::renderscript::Type::_class = java::fetch_class("android/renderscript/Type");
    static jmethodID mid = java::jni->GetMethodID(_class, "getZ", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::renderscript::Type::hasMipmaps() const {
    if (!::android::renderscript::Type::_class) ::android::renderscript::Type::_class = java::fetch_class("android/renderscript/Type");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasMipmaps", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::renderscript::Type::hasFaces() const {
    if (!::android::renderscript::Type::_class) ::android::renderscript::Type::_class = java::fetch_class("android/renderscript/Type");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasFaces", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::renderscript::Type::getCount() const {
    if (!::android::renderscript::Type::_class) ::android::renderscript::Type::_class = java::fetch_class("android/renderscript/Type");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::renderscript::Type android::renderscript::Allocation::getType() const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()Landroid/renderscript/Type;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::renderscript::Type _ret(ret);
    return _ret;
}

void android::renderscript::Allocation::syncAll(int32_t arg0) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "syncAll", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::Allocation::copyFrom(const std::vector< ::android::renderscript::BaseObj>& arg0) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyFrom", "([Landroid/renderscript/BaseObj;)V");
    unsigned arg0s = arg0.size();
    if (!::android::renderscript::BaseObj::_class) ::android::renderscript::BaseObj::_class = java::fetch_class("android/renderscript/BaseObj");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::renderscript::BaseObj::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::renderscript::BaseObj& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::Allocation::copyFromUnchecked(const std::vector< int32_t>& arg0) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyFromUnchecked", "([I)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::Allocation::copyFromUnchecked(const std::vector< int16_t>& arg0) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyFromUnchecked", "([S)V");
    jshortArray _arg0 = java::jni->NewShortArray(arg0.size());
    java::jni->SetShortArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::Allocation::copyFromUnchecked(const std::vector< int8_t>& arg0) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyFromUnchecked", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::Allocation::copyFromUnchecked(const std::vector< float>& arg0) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyFromUnchecked", "([F)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::Allocation::copyFrom(const std::vector< int32_t>& arg0) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyFrom", "([I)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::Allocation::copyFrom(const std::vector< int16_t>& arg0) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyFrom", "([S)V");
    jshortArray _arg0 = java::jni->NewShortArray(arg0.size());
    java::jni->SetShortArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::Allocation::copyFrom(const std::vector< int8_t>& arg0) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyFrom", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::Allocation::copyFrom(const std::vector< float>& arg0) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyFrom", "([F)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::Allocation::copyFrom(const ::android::graphics::Bitmap& arg0) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyFrom", "(Landroid/graphics/Bitmap;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::Allocation::setFromFieldPacker(int32_t arg0, const ::android::renderscript::FieldPacker& arg1) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFromFieldPacker", "(ILandroid/renderscript/FieldPacker;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::renderscript::Allocation::setFromFieldPacker(int32_t arg0, int32_t arg1, const ::android::renderscript::FieldPacker& arg2) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFromFieldPacker", "(IILandroid/renderscript/FieldPacker;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::renderscript::Allocation::generateMipmaps() const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateMipmaps", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::renderscript::Allocation::copy1DRangeFromUnchecked(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "copy1DRangeFromUnchecked", "(II[I)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::renderscript::Allocation::copy1DRangeFromUnchecked(int32_t arg0, int32_t arg1, const std::vector< int16_t>& arg2) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "copy1DRangeFromUnchecked", "(II[S)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jshortArray _arg2 = java::jni->NewShortArray(arg2.size());
    java::jni->SetShortArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::renderscript::Allocation::copy1DRangeFromUnchecked(int32_t arg0, int32_t arg1, const std::vector< int8_t>& arg2) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "copy1DRangeFromUnchecked", "(II[B)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jbyteArray _arg2 = java::jni->NewByteArray(arg2.size());
    java::jni->SetByteArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::renderscript::Allocation::copy1DRangeFromUnchecked(int32_t arg0, int32_t arg1, const std::vector< float>& arg2) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "copy1DRangeFromUnchecked", "(II[F)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::renderscript::Allocation::copy1DRangeFrom(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "copy1DRangeFrom", "(II[I)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::renderscript::Allocation::copy1DRangeFrom(int32_t arg0, int32_t arg1, const std::vector< int16_t>& arg2) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "copy1DRangeFrom", "(II[S)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jshortArray _arg2 = java::jni->NewShortArray(arg2.size());
    java::jni->SetShortArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::renderscript::Allocation::copy1DRangeFrom(int32_t arg0, int32_t arg1, const std::vector< int8_t>& arg2) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "copy1DRangeFrom", "(II[B)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jbyteArray _arg2 = java::jni->NewByteArray(arg2.size());
    java::jni->SetByteArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::renderscript::Allocation::copy1DRangeFrom(int32_t arg0, int32_t arg1, const std::vector< float>& arg2) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "copy1DRangeFrom", "(II[F)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::renderscript::Allocation::copy1DRangeFrom(int32_t arg0, int32_t arg1, const ::android::renderscript::Allocation& arg2, int32_t arg3) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "copy1DRangeFrom", "(IILandroid/renderscript/Allocation;I)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::renderscript::Allocation::copy2DRangeFrom(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, const std::vector< int8_t>& arg4) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "copy2DRangeFrom", "(IIII[B)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jbyteArray _arg4 = java::jni->NewByteArray(arg4.size());
    java::jni->SetByteArrayRegion(_arg4, 0, arg4.size(), arg4.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::renderscript::Allocation::copy2DRangeFrom(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, const std::vector< int16_t>& arg4) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "copy2DRangeFrom", "(IIII[S)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jshortArray _arg4 = java::jni->NewShortArray(arg4.size());
    java::jni->SetShortArrayRegion(_arg4, 0, arg4.size(), arg4.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::renderscript::Allocation::copy2DRangeFrom(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, const std::vector< int32_t>& arg4) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "copy2DRangeFrom", "(IIII[I)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jintArray _arg4 = java::jni->NewIntArray(arg4.size());
    java::jni->SetIntArrayRegion(_arg4, 0, arg4.size(), arg4.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::renderscript::Allocation::copy2DRangeFrom(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, const std::vector< float>& arg4) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "copy2DRangeFrom", "(IIII[F)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jfloatArray _arg4 = java::jni->NewFloatArray(arg4.size());
    java::jni->SetFloatArrayRegion(_arg4, 0, arg4.size(), arg4.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::renderscript::Allocation::copy2DRangeFrom(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, const ::android::renderscript::Allocation& arg4, int32_t arg5, int32_t arg6) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "copy2DRangeFrom", "(IIIILandroid/renderscript/Allocation;II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}

void android::renderscript::Allocation::copy2DRangeFrom(int32_t arg0, int32_t arg1, const ::android::graphics::Bitmap& arg2) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "copy2DRangeFrom", "(IILandroid/graphics/Bitmap;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::renderscript::Allocation::copyTo(const ::android::graphics::Bitmap& arg0) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyTo", "(Landroid/graphics/Bitmap;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::Allocation::copyTo(const std::vector< int8_t>& arg0) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyTo", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::Allocation::copyTo(const std::vector< int16_t>& arg0) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyTo", "([S)V");
    jshortArray _arg0 = java::jni->NewShortArray(arg0.size());
    java::jni->SetShortArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::Allocation::copyTo(const std::vector< int32_t>& arg0) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyTo", "([I)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::Allocation::copyTo(const std::vector< float>& arg0) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyTo", "([F)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::Allocation::resize(int32_t arg0) const {
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetMethodID(_class, "resize", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::renderscript::Allocation android::renderscript::Allocation::createTyped(const ::android::renderscript::RenderScript& arg0, const ::android::renderscript::Type& arg1, const ::android::renderscript::Allocation_MipmapControl& arg2, int32_t arg3){
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createTyped", "(Landroid/renderscript/RenderScript;Landroid/renderscript/Type;Landroid/renderscript/Allocation$MipmapControl;I)Landroid/renderscript/Allocation;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::renderscript::Allocation _ret(ret);
    return _ret;
}

::android::renderscript::Allocation android::renderscript::Allocation::createTyped(const ::android::renderscript::RenderScript& arg0, const ::android::renderscript::Type& arg1, int32_t arg2){
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createTyped", "(Landroid/renderscript/RenderScript;Landroid/renderscript/Type;I)Landroid/renderscript/Allocation;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::renderscript::Allocation _ret(ret);
    return _ret;
}

::android::renderscript::Allocation android::renderscript::Allocation::createTyped(const ::android::renderscript::RenderScript& arg0, const ::android::renderscript::Type& arg1){
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createTyped", "(Landroid/renderscript/RenderScript;Landroid/renderscript/Type;)Landroid/renderscript/Allocation;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::renderscript::Allocation _ret(ret);
    return _ret;
}

::android::renderscript::Allocation android::renderscript::Allocation::createSized(const ::android::renderscript::RenderScript& arg0, const ::android::renderscript::Element& arg1, int32_t arg2, int32_t arg3){
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createSized", "(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;II)Landroid/renderscript/Allocation;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::renderscript::Allocation _ret(ret);
    return _ret;
}

::android::renderscript::Allocation android::renderscript::Allocation::createSized(const ::android::renderscript::RenderScript& arg0, const ::android::renderscript::Element& arg1, int32_t arg2){
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createSized", "(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;I)Landroid/renderscript/Allocation;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::renderscript::Allocation _ret(ret);
    return _ret;
}

::android::renderscript::Allocation android::renderscript::Allocation::createFromBitmap(const ::android::renderscript::RenderScript& arg0, const ::android::graphics::Bitmap& arg1, const ::android::renderscript::Allocation_MipmapControl& arg2, int32_t arg3){
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createFromBitmap", "(Landroid/renderscript/RenderScript;Landroid/graphics/Bitmap;Landroid/renderscript/Allocation$MipmapControl;I)Landroid/renderscript/Allocation;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::renderscript::Allocation _ret(ret);
    return _ret;
}

::android::renderscript::Allocation android::renderscript::Allocation::createFromBitmap(const ::android::renderscript::RenderScript& arg0, const ::android::graphics::Bitmap& arg1){
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createFromBitmap", "(Landroid/renderscript/RenderScript;Landroid/graphics/Bitmap;)Landroid/renderscript/Allocation;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::renderscript::Allocation _ret(ret);
    return _ret;
}

::android::renderscript::Allocation android::renderscript::Allocation::createCubemapFromBitmap(const ::android::renderscript::RenderScript& arg0, const ::android::graphics::Bitmap& arg1, const ::android::renderscript::Allocation_MipmapControl& arg2, int32_t arg3){
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createCubemapFromBitmap", "(Landroid/renderscript/RenderScript;Landroid/graphics/Bitmap;Landroid/renderscript/Allocation$MipmapControl;I)Landroid/renderscript/Allocation;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::renderscript::Allocation _ret(ret);
    return _ret;
}

::android::renderscript::Allocation android::renderscript::Allocation::createCubemapFromBitmap(const ::android::renderscript::RenderScript& arg0, const ::android::graphics::Bitmap& arg1){
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createCubemapFromBitmap", "(Landroid/renderscript/RenderScript;Landroid/graphics/Bitmap;)Landroid/renderscript/Allocation;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::renderscript::Allocation _ret(ret);
    return _ret;
}

::android::renderscript::Allocation android::renderscript::Allocation::createCubemapFromCubeFaces(const ::android::renderscript::RenderScript& arg0, const ::android::graphics::Bitmap& arg1, const ::android::graphics::Bitmap& arg2, const ::android::graphics::Bitmap& arg3, const ::android::graphics::Bitmap& arg4, const ::android::graphics::Bitmap& arg5, const ::android::graphics::Bitmap& arg6, const ::android::renderscript::Allocation_MipmapControl& arg7, int32_t arg8){
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createCubemapFromCubeFaces", "(Landroid/renderscript/RenderScript;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;Landroid/renderscript/Allocation$MipmapControl;I)Landroid/renderscript/Allocation;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject _arg6 = arg6.obj;
    jobject _arg7 = arg7.obj;
    int32_t _arg8 = arg8;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    ::android::renderscript::Allocation _ret(ret);
    return _ret;
}

::android::renderscript::Allocation android::renderscript::Allocation::createCubemapFromCubeFaces(const ::android::renderscript::RenderScript& arg0, const ::android::graphics::Bitmap& arg1, const ::android::graphics::Bitmap& arg2, const ::android::graphics::Bitmap& arg3, const ::android::graphics::Bitmap& arg4, const ::android::graphics::Bitmap& arg5, const ::android::graphics::Bitmap& arg6){
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createCubemapFromCubeFaces", "(Landroid/renderscript/RenderScript;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;)Landroid/renderscript/Allocation;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject _arg6 = arg6.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    ::android::renderscript::Allocation _ret(ret);
    return _ret;
}

::android::renderscript::Allocation android::renderscript::Allocation::createFromBitmapResource(const ::android::renderscript::RenderScript& arg0, const ::android::content::res::Resources& arg1, int32_t arg2, const ::android::renderscript::Allocation_MipmapControl& arg3, int32_t arg4){
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createFromBitmapResource", "(Landroid/renderscript/RenderScript;Landroid/content/res/Resources;ILandroid/renderscript/Allocation$MipmapControl;I)Landroid/renderscript/Allocation;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    int32_t _arg4 = arg4;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::renderscript::Allocation _ret(ret);
    return _ret;
}

::android::renderscript::Allocation android::renderscript::Allocation::createFromBitmapResource(const ::android::renderscript::RenderScript& arg0, const ::android::content::res::Resources& arg1, int32_t arg2){
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createFromBitmapResource", "(Landroid/renderscript/RenderScript;Landroid/content/res/Resources;I)Landroid/renderscript/Allocation;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::renderscript::Allocation _ret(ret);
    return _ret;
}

::android::renderscript::Allocation android::renderscript::Allocation::createFromString(const ::android::renderscript::RenderScript& arg0, const ::java::lang::String& arg1, int32_t arg2){
    if (!::android::renderscript::Allocation::_class) ::android::renderscript::Allocation::_class = java::fetch_class("android/renderscript/Allocation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createFromString", "(Landroid/renderscript/RenderScript;Ljava/lang/String;I)Landroid/renderscript/Allocation;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::renderscript::Allocation _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Double3::Double3() : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Double3::_class) ::android::renderscript::Double3::_class = java::fetch_class("android/renderscript/Double3");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Double3::Double3(double arg0, double arg1, double arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Double3::_class) ::android::renderscript::Double3::_class = java::fetch_class("android/renderscript/Double3");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(DDD)V");
    double _arg0 = arg0;
    double _arg1 = arg1;
    double _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Int3::Int3() : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Int3::_class) ::android::renderscript::Int3::_class = java::fetch_class("android/renderscript/Int3");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Int3::Int3(int32_t arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Int3::_class) ::android::renderscript::Int3::_class = java::fetch_class("android/renderscript/Int3");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

std::vector< ::android::renderscript::ProgramFragmentFixedFunction_Builder_EnvMode> android::renderscript::ProgramFragmentFixedFunction_Builder_EnvMode::values(){
    if (!::android::renderscript::ProgramFragmentFixedFunction_Builder_EnvMode::_class) ::android::renderscript::ProgramFragmentFixedFunction_Builder_EnvMode::_class = java::fetch_class("android/renderscript/ProgramFragmentFixedFunction$Builder$EnvMode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/renderscript/ProgramFragmentFixedFunction$Builder$EnvMode;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::renderscript::ProgramFragmentFixedFunction_Builder_EnvMode> _ret(rets, ::android::renderscript::ProgramFragmentFixedFunction_Builder_EnvMode((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::renderscript::ProgramFragmentFixedFunction_Builder_EnvMode retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::renderscript::ProgramFragmentFixedFunction_Builder_EnvMode android::renderscript::ProgramFragmentFixedFunction_Builder_EnvMode::valueOf(const ::java::lang::String& arg0){
    if (!::android::renderscript::ProgramFragmentFixedFunction_Builder_EnvMode::_class) ::android::renderscript::ProgramFragmentFixedFunction_Builder_EnvMode::_class = java::fetch_class("android/renderscript/ProgramFragmentFixedFunction$Builder$EnvMode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/renderscript/ProgramFragmentFixedFunction$Builder$EnvMode;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::ProgramFragmentFixedFunction_Builder_EnvMode _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Long3::Long3() : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Long3::_class) ::android::renderscript::Long3::_class = java::fetch_class("android/renderscript/Long3");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Long3::Long3(int64_t arg0, int64_t arg1, int64_t arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Long3::_class) ::android::renderscript::Long3::_class = java::fetch_class("android/renderscript/Long3");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(JJJ)V");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::android::renderscript::Sampler android::renderscript::Sampler::CLAMP_NEAREST(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Sampler::_class) ::android::renderscript::Sampler::_class = java::fetch_class("android/renderscript/Sampler");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "CLAMP_NEAREST", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Sampler _ret(ret);
    return _ret;
}

::android::renderscript::Sampler android::renderscript::Sampler::CLAMP_LINEAR(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Sampler::_class) ::android::renderscript::Sampler::_class = java::fetch_class("android/renderscript/Sampler");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "CLAMP_LINEAR", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Sampler _ret(ret);
    return _ret;
}

::android::renderscript::Sampler android::renderscript::Sampler::CLAMP_LINEAR_MIP_LINEAR(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Sampler::_class) ::android::renderscript::Sampler::_class = java::fetch_class("android/renderscript/Sampler");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "CLAMP_LINEAR_MIP_LINEAR", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Sampler _ret(ret);
    return _ret;
}

::android::renderscript::Sampler android::renderscript::Sampler::WRAP_NEAREST(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Sampler::_class) ::android::renderscript::Sampler::_class = java::fetch_class("android/renderscript/Sampler");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "WRAP_NEAREST", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Sampler _ret(ret);
    return _ret;
}

::android::renderscript::Sampler android::renderscript::Sampler::WRAP_LINEAR(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Sampler::_class) ::android::renderscript::Sampler::_class = java::fetch_class("android/renderscript/Sampler");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "WRAP_LINEAR", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Sampler _ret(ret);
    return _ret;
}

::android::renderscript::Sampler android::renderscript::Sampler::WRAP_LINEAR_MIP_LINEAR(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::Sampler::_class) ::android::renderscript::Sampler::_class = java::fetch_class("android/renderscript/Sampler");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "WRAP_LINEAR_MIP_LINEAR", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Sampler _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Matrix2f::Matrix2f() : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Matrix2f::_class) ::android::renderscript::Matrix2f::_class = java::fetch_class("android/renderscript/Matrix2f");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Matrix2f::Matrix2f(const std::vector< float>& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Matrix2f::_class) ::android::renderscript::Matrix2f::_class = java::fetch_class("android/renderscript/Matrix2f");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([F)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

std::vector< float> android::renderscript::Matrix2f::getArray() const {
    if (!::android::renderscript::Matrix2f::_class) ::android::renderscript::Matrix2f::_class = java::fetch_class("android/renderscript/Matrix2f");
    static jmethodID mid = java::jni->GetMethodID(_class, "getArray", "()[F");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jfloat* reta = java::jni->GetFloatArrayElements((jfloatArray)ret, nullptr);
    std::vector< float> _ret(reta, reta+rets);
    java::jni->ReleaseFloatArrayElements((jfloatArray)ret, reta, JNI_ABORT);
    return _ret;
}

float android::renderscript::Matrix2f::get(int32_t arg0, int32_t arg1) const {
    if (!::android::renderscript::Matrix2f::_class) ::android::renderscript::Matrix2f::_class = java::fetch_class("android/renderscript/Matrix2f");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(II)F");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

void android::renderscript::Matrix2f::set(int32_t arg0, int32_t arg1, float arg2) const {
    if (!::android::renderscript::Matrix2f::_class) ::android::renderscript::Matrix2f::_class = java::fetch_class("android/renderscript/Matrix2f");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(IIF)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::renderscript::Matrix2f::loadIdentity() const {
    if (!::android::renderscript::Matrix2f::_class) ::android::renderscript::Matrix2f::_class = java::fetch_class("android/renderscript/Matrix2f");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadIdentity", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::renderscript::Matrix2f::load(const ::android::renderscript::Matrix2f& arg0) const {
    if (!::android::renderscript::Matrix2f::_class) ::android::renderscript::Matrix2f::_class = java::fetch_class("android/renderscript/Matrix2f");
    static jmethodID mid = java::jni->GetMethodID(_class, "load", "(Landroid/renderscript/Matrix2f;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::Matrix2f::loadRotate(float arg0) const {
    if (!::android::renderscript::Matrix2f::_class) ::android::renderscript::Matrix2f::_class = java::fetch_class("android/renderscript/Matrix2f");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadRotate", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::Matrix2f::loadScale(float arg0, float arg1) const {
    if (!::android::renderscript::Matrix2f::_class) ::android::renderscript::Matrix2f::_class = java::fetch_class("android/renderscript/Matrix2f");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadScale", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::renderscript::Matrix2f::loadMultiply(const ::android::renderscript::Matrix2f& arg0, const ::android::renderscript::Matrix2f& arg1) const {
    if (!::android::renderscript::Matrix2f::_class) ::android::renderscript::Matrix2f::_class = java::fetch_class("android/renderscript/Matrix2f");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadMultiply", "(Landroid/renderscript/Matrix2f;Landroid/renderscript/Matrix2f;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::renderscript::Matrix2f::multiply(const ::android::renderscript::Matrix2f& arg0) const {
    if (!::android::renderscript::Matrix2f::_class) ::android::renderscript::Matrix2f::_class = java::fetch_class("android/renderscript/Matrix2f");
    static jmethodID mid = java::jni->GetMethodID(_class, "multiply", "(Landroid/renderscript/Matrix2f;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::Matrix2f::rotate(float arg0) const {
    if (!::android::renderscript::Matrix2f::_class) ::android::renderscript::Matrix2f::_class = java::fetch_class("android/renderscript/Matrix2f");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotate", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::Matrix2f::scale(float arg0, float arg1) const {
    if (!::android::renderscript::Matrix2f::_class) ::android::renderscript::Matrix2f::_class = java::fetch_class("android/renderscript/Matrix2f");
    static jmethodID mid = java::jni->GetMethodID(_class, "scale", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::renderscript::Matrix2f::transpose() const {
    if (!::android::renderscript::Matrix2f::_class) ::android::renderscript::Matrix2f::_class = java::fetch_class("android/renderscript/Matrix2f");
    static jmethodID mid = java::jni->GetMethodID(_class, "transpose", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::RSTextureView::RSTextureView(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::TextureView((jobject)0), ::android::view::TextureView_SurfaceTextureListener((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::renderscript::RSTextureView::_class) ::android::renderscript::RSTextureView::_class = java::fetch_class("android/renderscript/RSTextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::RSTextureView::RSTextureView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::TextureView((jobject)0), ::android::view::TextureView_SurfaceTextureListener((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::renderscript::RSTextureView::_class) ::android::renderscript::RSTextureView::_class = java::fetch_class("android/renderscript/RSTextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::renderscript::RSTextureView::onSurfaceTextureAvailable(const ::android::graphics::SurfaceTexture& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::renderscript::RSTextureView::_class) ::android::renderscript::RSTextureView::_class = java::fetch_class("android/renderscript/RSTextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSurfaceTextureAvailable", "(Landroid/graphics/SurfaceTexture;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::renderscript::RSTextureView::onSurfaceTextureSizeChanged(const ::android::graphics::SurfaceTexture& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::renderscript::RSTextureView::_class) ::android::renderscript::RSTextureView::_class = java::fetch_class("android/renderscript/RSTextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSurfaceTextureSizeChanged", "(Landroid/graphics/SurfaceTexture;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::renderscript::RSTextureView::onSurfaceTextureDestroyed(const ::android::graphics::SurfaceTexture& arg0) const {
    if (!::android::renderscript::RSTextureView::_class) ::android::renderscript::RSTextureView::_class = java::fetch_class("android/renderscript/RSTextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSurfaceTextureDestroyed", "(Landroid/graphics/SurfaceTexture;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::renderscript::RSTextureView::onSurfaceTextureUpdated(const ::android::graphics::SurfaceTexture& arg0) const {
    if (!::android::renderscript::RSTextureView::_class) ::android::renderscript::RSTextureView::_class = java::fetch_class("android/renderscript/RSTextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSurfaceTextureUpdated", "(Landroid/graphics/SurfaceTexture;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::RSTextureView::pause() const {
    if (!::android::renderscript::RSTextureView::_class) ::android::renderscript::RSTextureView::_class = java::fetch_class("android/renderscript/RSTextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "pause", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::renderscript::RSTextureView::resume() const {
    if (!::android::renderscript::RSTextureView::_class) ::android::renderscript::RSTextureView::_class = java::fetch_class("android/renderscript/RSTextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "resume", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::renderscript::RenderScriptGL android::renderscript::RSTextureView::createRenderScriptGL(const ::android::renderscript::RenderScriptGL_SurfaceConfig& arg0) const {
    if (!::android::renderscript::RSTextureView::_class) ::android::renderscript::RSTextureView::_class = java::fetch_class("android/renderscript/RSTextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "createRenderScriptGL", "(Landroid/renderscript/RenderScriptGL$SurfaceConfig;)Landroid/renderscript/RenderScriptGL;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::renderscript::RenderScriptGL _ret(ret);
    return _ret;
}

void android::renderscript::RSTextureView::destroyRenderScriptGL() const {
    if (!::android::renderscript::RSTextureView::_class) ::android::renderscript::RSTextureView::_class = java::fetch_class("android/renderscript/RSTextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "destroyRenderScriptGL", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::renderscript::RSTextureView::setRenderScriptGL(const ::android::renderscript::RenderScriptGL& arg0) const {
    if (!::android::renderscript::RSTextureView::_class) ::android::renderscript::RSTextureView::_class = java::fetch_class("android/renderscript/RSTextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRenderScriptGL", "(Landroid/renderscript/RenderScriptGL;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::renderscript::RenderScriptGL android::renderscript::RSTextureView::getRenderScriptGL() const {
    if (!::android::renderscript::RSTextureView::_class) ::android::renderscript::RSTextureView::_class = java::fetch_class("android/renderscript/RSTextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRenderScriptGL", "()Landroid/renderscript/RenderScriptGL;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::renderscript::RenderScriptGL _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::RenderScriptGL_SurfaceConfig::RenderScriptGL_SurfaceConfig() : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::RenderScriptGL_SurfaceConfig::_class) ::android::renderscript::RenderScriptGL_SurfaceConfig::_class = java::fetch_class("android/renderscript/RenderScriptGL$SurfaceConfig");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::renderscript::RenderScriptGL_SurfaceConfig::setColor(int32_t arg0, int32_t arg1) const {
    if (!::android::renderscript::RenderScriptGL_SurfaceConfig::_class) ::android::renderscript::RenderScriptGL_SurfaceConfig::_class = java::fetch_class("android/renderscript/RenderScriptGL$SurfaceConfig");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColor", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::renderscript::RenderScriptGL_SurfaceConfig::setAlpha(int32_t arg0, int32_t arg1) const {
    if (!::android::renderscript::RenderScriptGL_SurfaceConfig::_class) ::android::renderscript::RenderScriptGL_SurfaceConfig::_class = java::fetch_class("android/renderscript/RenderScriptGL$SurfaceConfig");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAlpha", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::renderscript::RenderScriptGL_SurfaceConfig::setDepth(int32_t arg0, int32_t arg1) const {
    if (!::android::renderscript::RenderScriptGL_SurfaceConfig::_class) ::android::renderscript::RenderScriptGL_SurfaceConfig::_class = java::fetch_class("android/renderscript/RenderScriptGL$SurfaceConfig");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDepth", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::renderscript::RenderScriptGL_SurfaceConfig::setSamples(int32_t arg0, int32_t arg1, float arg2) const {
    if (!::android::renderscript::RenderScriptGL_SurfaceConfig::_class) ::android::renderscript::RenderScriptGL_SurfaceConfig::_class = java::fetch_class("android/renderscript/RenderScriptGL$SurfaceConfig");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSamples", "(IIF)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::renderscript::AllocationAdapter::setLOD(int32_t arg0) const {
    if (!::android::renderscript::AllocationAdapter::_class) ::android::renderscript::AllocationAdapter::_class = java::fetch_class("android/renderscript/AllocationAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLOD", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::AllocationAdapter::setFace(const ::android::renderscript::Type_CubemapFace& arg0) const {
    if (!::android::renderscript::AllocationAdapter::_class) ::android::renderscript::AllocationAdapter::_class = java::fetch_class("android/renderscript/AllocationAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFace", "(Landroid/renderscript/Type$CubemapFace;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::AllocationAdapter::setY(int32_t arg0) const {
    if (!::android::renderscript::AllocationAdapter::_class) ::android::renderscript::AllocationAdapter::_class = java::fetch_class("android/renderscript/AllocationAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setY", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::AllocationAdapter::setZ(int32_t arg0) const {
    if (!::android::renderscript::AllocationAdapter::_class) ::android::renderscript::AllocationAdapter::_class = java::fetch_class("android/renderscript/AllocationAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setZ", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::renderscript::AllocationAdapter android::renderscript::AllocationAdapter::create1D(const ::android::renderscript::RenderScript& arg0, const ::android::renderscript::Allocation& arg1){
    if (!::android::renderscript::AllocationAdapter::_class) ::android::renderscript::AllocationAdapter::_class = java::fetch_class("android/renderscript/AllocationAdapter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "create1D", "(Landroid/renderscript/RenderScript;Landroid/renderscript/Allocation;)Landroid/renderscript/AllocationAdapter;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::renderscript::AllocationAdapter _ret(ret);
    return _ret;
}

::android::renderscript::AllocationAdapter android::renderscript::AllocationAdapter::create2D(const ::android::renderscript::RenderScript& arg0, const ::android::renderscript::Allocation& arg1){
    if (!::android::renderscript::AllocationAdapter::_class) ::android::renderscript::AllocationAdapter::_class = java::fetch_class("android/renderscript/AllocationAdapter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "create2D", "(Landroid/renderscript/RenderScript;Landroid/renderscript/Allocation;)Landroid/renderscript/AllocationAdapter;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::renderscript::AllocationAdapter _ret(ret);
    return _ret;
}

void android::renderscript::AllocationAdapter::resize(int32_t arg0) const {
    if (!::android::renderscript::AllocationAdapter::_class) ::android::renderscript::AllocationAdapter::_class = java::fetch_class("android/renderscript/AllocationAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "resize", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::android::renderscript::Type_CubemapFace> android::renderscript::Type_CubemapFace::values(){
    if (!::android::renderscript::Type_CubemapFace::_class) ::android::renderscript::Type_CubemapFace::_class = java::fetch_class("android/renderscript/Type$CubemapFace");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/renderscript/Type$CubemapFace;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::renderscript::Type_CubemapFace> _ret(rets, ::android::renderscript::Type_CubemapFace((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::renderscript::Type_CubemapFace retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::renderscript::Type_CubemapFace android::renderscript::Type_CubemapFace::valueOf(const ::java::lang::String& arg0){
    if (!::android::renderscript::Type_CubemapFace::_class) ::android::renderscript::Type_CubemapFace::_class = java::fetch_class("android/renderscript/Type$CubemapFace");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/renderscript/Type$CubemapFace;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Type_CubemapFace _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Short3::Short3() : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Short3::_class) ::android::renderscript::Short3::_class = java::fetch_class("android/renderscript/Short3");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Short3::Short3(int16_t arg0, int16_t arg1, int16_t arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Short3::_class) ::android::renderscript::Short3::_class = java::fetch_class("android/renderscript/Short3");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(SSS)V");
    int16_t _arg0 = arg0;
    int16_t _arg1 = arg1;
    int16_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Long2::Long2() : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Long2::_class) ::android::renderscript::Long2::_class = java::fetch_class("android/renderscript/Long2");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Long2::Long2(int64_t arg0, int64_t arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Long2::_class) ::android::renderscript::Long2::_class = java::fetch_class("android/renderscript/Long2");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(JJ)V");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::android::renderscript::ProgramStore android::renderscript::ProgramStore::BLEND_NONE_DEPTH_TEST(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::ProgramStore::_class) ::android::renderscript::ProgramStore::_class = java::fetch_class("android/renderscript/ProgramStore");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "BLEND_NONE_DEPTH_TEST", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/ProgramStore;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::ProgramStore _ret(ret);
    return _ret;
}

::android::renderscript::ProgramStore android::renderscript::ProgramStore::BLEND_NONE_DEPTH_NONE(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::ProgramStore::_class) ::android::renderscript::ProgramStore::_class = java::fetch_class("android/renderscript/ProgramStore");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "BLEND_NONE_DEPTH_NONE", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/ProgramStore;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::ProgramStore _ret(ret);
    return _ret;
}

::android::renderscript::ProgramStore android::renderscript::ProgramStore::BLEND_ALPHA_DEPTH_TEST(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::ProgramStore::_class) ::android::renderscript::ProgramStore::_class = java::fetch_class("android/renderscript/ProgramStore");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "BLEND_ALPHA_DEPTH_TEST", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/ProgramStore;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::ProgramStore _ret(ret);
    return _ret;
}

::android::renderscript::ProgramStore android::renderscript::ProgramStore::BLEND_ALPHA_DEPTH_NONE(const ::android::renderscript::RenderScript& arg0){
    if (!::android::renderscript::ProgramStore::_class) ::android::renderscript::ProgramStore::_class = java::fetch_class("android/renderscript/ProgramStore");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "BLEND_ALPHA_DEPTH_NONE", "(Landroid/renderscript/RenderScript;)Landroid/renderscript/ProgramStore;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::ProgramStore _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Long4::Long4() : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Long4::_class) ::android::renderscript::Long4::_class = java::fetch_class("android/renderscript/Long4");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Long4::Long4(int64_t arg0, int64_t arg1, int64_t arg2, int64_t arg3) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Long4::_class) ::android::renderscript::Long4::_class = java::fetch_class("android/renderscript/Long4");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(JJJJ)V");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    int64_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Short2::Short2() : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Short2::_class) ::android::renderscript::Short2::_class = java::fetch_class("android/renderscript/Short2");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Short2::Short2(int16_t arg0, int16_t arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Short2::_class) ::android::renderscript::Short2::_class = java::fetch_class("android/renderscript/Short2");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(SS)V");
    int16_t _arg0 = arg0;
    int16_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Type_Builder::Type_Builder(const ::android::renderscript::RenderScript& arg0, const ::android::renderscript::Element& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Type_Builder::_class) ::android::renderscript::Type_Builder::_class = java::fetch_class("android/renderscript/Type$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::android::renderscript::Type_Builder android::renderscript::Type_Builder::setX(int32_t arg0) const {
    if (!::android::renderscript::Type_Builder::_class) ::android::renderscript::Type_Builder::_class = java::fetch_class("android/renderscript/Type$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setX", "(I)Landroid/renderscript/Type$Builder;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::renderscript::Type_Builder _ret(ret);
    return _ret;
}

::android::renderscript::Type_Builder android::renderscript::Type_Builder::setY(int32_t arg0) const {
    if (!::android::renderscript::Type_Builder::_class) ::android::renderscript::Type_Builder::_class = java::fetch_class("android/renderscript/Type$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setY", "(I)Landroid/renderscript/Type$Builder;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::renderscript::Type_Builder _ret(ret);
    return _ret;
}

::android::renderscript::Type_Builder android::renderscript::Type_Builder::setMipmaps(bool arg0) const {
    if (!::android::renderscript::Type_Builder::_class) ::android::renderscript::Type_Builder::_class = java::fetch_class("android/renderscript/Type$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMipmaps", "(Z)Landroid/renderscript/Type$Builder;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::renderscript::Type_Builder _ret(ret);
    return _ret;
}

::android::renderscript::Type_Builder android::renderscript::Type_Builder::setFaces(bool arg0) const {
    if (!::android::renderscript::Type_Builder::_class) ::android::renderscript::Type_Builder::_class = java::fetch_class("android/renderscript/Type$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFaces", "(Z)Landroid/renderscript/Type$Builder;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::renderscript::Type_Builder _ret(ret);
    return _ret;
}

::android::renderscript::Type android::renderscript::Type_Builder::create() const {
    if (!::android::renderscript::Type_Builder::_class) ::android::renderscript::Type_Builder::_class = java::fetch_class("android/renderscript/Type$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "create", "()Landroid/renderscript/Type;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::renderscript::Type _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::RenderScript_RSErrorHandler::RenderScript_RSErrorHandler() : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {
    if (!::android::renderscript::RenderScript_RSErrorHandler::_class) ::android::renderscript::RenderScript_RSErrorHandler::_class = java::fetch_class("android/renderscript/RenderScript$RSErrorHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::renderscript::RenderScript_RSErrorHandler::run() const {
    if (!::android::renderscript::RenderScript_RSErrorHandler::_class) ::android::renderscript::RenderScript_RSErrorHandler::_class = java::fetch_class("android/renderscript/RenderScript$RSErrorHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "run", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::ProgramStore_Builder::ProgramStore_Builder(const ::android::renderscript::RenderScript& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::ProgramStore_Builder::_class) ::android::renderscript::ProgramStore_Builder::_class = java::fetch_class("android/renderscript/ProgramStore$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/renderscript/RenderScript;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::renderscript::ProgramStore_Builder android::renderscript::ProgramStore_Builder::setDepthFunc(const ::android::renderscript::ProgramStore_DepthFunc& arg0) const {
    if (!::android::renderscript::ProgramStore_Builder::_class) ::android::renderscript::ProgramStore_Builder::_class = java::fetch_class("android/renderscript/ProgramStore$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDepthFunc", "(Landroid/renderscript/ProgramStore$DepthFunc;)Landroid/renderscript/ProgramStore$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::renderscript::ProgramStore_Builder _ret(ret);
    return _ret;
}

::android::renderscript::ProgramStore_Builder android::renderscript::ProgramStore_Builder::setDepthMaskEnabled(bool arg0) const {
    if (!::android::renderscript::ProgramStore_Builder::_class) ::android::renderscript::ProgramStore_Builder::_class = java::fetch_class("android/renderscript/ProgramStore$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDepthMaskEnabled", "(Z)Landroid/renderscript/ProgramStore$Builder;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::renderscript::ProgramStore_Builder _ret(ret);
    return _ret;
}

::android::renderscript::ProgramStore_Builder android::renderscript::ProgramStore_Builder::setColorMaskEnabled(bool arg0, bool arg1, bool arg2, bool arg3) const {
    if (!::android::renderscript::ProgramStore_Builder::_class) ::android::renderscript::ProgramStore_Builder::_class = java::fetch_class("android/renderscript/ProgramStore$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorMaskEnabled", "(ZZZZ)Landroid/renderscript/ProgramStore$Builder;");
    bool _arg0 = arg0;
    bool _arg1 = arg1;
    bool _arg2 = arg2;
    bool _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::renderscript::ProgramStore_Builder _ret(ret);
    return _ret;
}

::android::renderscript::ProgramStore_Builder android::renderscript::ProgramStore_Builder::setBlendFunc(const ::android::renderscript::ProgramStore_BlendSrcFunc& arg0, const ::android::renderscript::ProgramStore_BlendDstFunc& arg1) const {
    if (!::android::renderscript::ProgramStore_Builder::_class) ::android::renderscript::ProgramStore_Builder::_class = java::fetch_class("android/renderscript/ProgramStore$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBlendFunc", "(Landroid/renderscript/ProgramStore$BlendSrcFunc;Landroid/renderscript/ProgramStore$BlendDstFunc;)Landroid/renderscript/ProgramStore$Builder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::renderscript::ProgramStore_Builder _ret(ret);
    return _ret;
}

::android::renderscript::ProgramStore_Builder android::renderscript::ProgramStore_Builder::setDitherEnabled(bool arg0) const {
    if (!::android::renderscript::ProgramStore_Builder::_class) ::android::renderscript::ProgramStore_Builder::_class = java::fetch_class("android/renderscript/ProgramStore$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDitherEnabled", "(Z)Landroid/renderscript/ProgramStore$Builder;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::renderscript::ProgramStore_Builder _ret(ret);
    return _ret;
}

::android::renderscript::ProgramStore android::renderscript::ProgramStore_Builder::create() const {
    if (!::android::renderscript::ProgramStore_Builder::_class) ::android::renderscript::ProgramStore_Builder::_class = java::fetch_class("android/renderscript/ProgramStore$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "create", "()Landroid/renderscript/ProgramStore;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::renderscript::ProgramStore _ret(ret);
    return _ret;
}

::java::lang::String android::renderscript::FileA3D_IndexEntry::getName() const {
    if (!::android::renderscript::FileA3D_IndexEntry::_class) ::android::renderscript::FileA3D_IndexEntry::_class = java::fetch_class("android/renderscript/FileA3D$IndexEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::renderscript::FileA3D_EntryType android::renderscript::FileA3D_IndexEntry::getEntryType() const {
    if (!::android::renderscript::FileA3D_IndexEntry::_class) ::android::renderscript::FileA3D_IndexEntry::_class = java::fetch_class("android/renderscript/FileA3D$IndexEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEntryType", "()Landroid/renderscript/FileA3D$EntryType;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::renderscript::FileA3D_EntryType _ret(ret);
    return _ret;
}

::android::renderscript::BaseObj android::renderscript::FileA3D_IndexEntry::getObject() const {
    if (!::android::renderscript::FileA3D_IndexEntry::_class) ::android::renderscript::FileA3D_IndexEntry::_class = java::fetch_class("android/renderscript/FileA3D$IndexEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObject", "()Landroid/renderscript/BaseObj;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::renderscript::BaseObj _ret(ret);
    return _ret;
}

::android::renderscript::Mesh android::renderscript::FileA3D_IndexEntry::getMesh() const {
    if (!::android::renderscript::FileA3D_IndexEntry::_class) ::android::renderscript::FileA3D_IndexEntry::_class = java::fetch_class("android/renderscript/FileA3D$IndexEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMesh", "()Landroid/renderscript/Mesh;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::renderscript::Mesh _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Matrix4f::Matrix4f() : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Matrix4f::_class) ::android::renderscript::Matrix4f::_class = java::fetch_class("android/renderscript/Matrix4f");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Matrix4f::Matrix4f(const std::vector< float>& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Matrix4f::_class) ::android::renderscript::Matrix4f::_class = java::fetch_class("android/renderscript/Matrix4f");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([F)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

std::vector< float> android::renderscript::Matrix4f::getArray() const {
    if (!::android::renderscript::Matrix4f::_class) ::android::renderscript::Matrix4f::_class = java::fetch_class("android/renderscript/Matrix4f");
    static jmethodID mid = java::jni->GetMethodID(_class, "getArray", "()[F");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jfloat* reta = java::jni->GetFloatArrayElements((jfloatArray)ret, nullptr);
    std::vector< float> _ret(reta, reta+rets);
    java::jni->ReleaseFloatArrayElements((jfloatArray)ret, reta, JNI_ABORT);
    return _ret;
}

float android::renderscript::Matrix4f::get(int32_t arg0, int32_t arg1) const {
    if (!::android::renderscript::Matrix4f::_class) ::android::renderscript::Matrix4f::_class = java::fetch_class("android/renderscript/Matrix4f");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(II)F");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

void android::renderscript::Matrix4f::set(int32_t arg0, int32_t arg1, float arg2) const {
    if (!::android::renderscript::Matrix4f::_class) ::android::renderscript::Matrix4f::_class = java::fetch_class("android/renderscript/Matrix4f");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(IIF)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::renderscript::Matrix4f::loadIdentity() const {
    if (!::android::renderscript::Matrix4f::_class) ::android::renderscript::Matrix4f::_class = java::fetch_class("android/renderscript/Matrix4f");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadIdentity", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::renderscript::Matrix4f::load(const ::android::renderscript::Matrix4f& arg0) const {
    if (!::android::renderscript::Matrix4f::_class) ::android::renderscript::Matrix4f::_class = java::fetch_class("android/renderscript/Matrix4f");
    static jmethodID mid = java::jni->GetMethodID(_class, "load", "(Landroid/renderscript/Matrix4f;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::Matrix4f::loadRotate(float arg0, float arg1, float arg2, float arg3) const {
    if (!::android::renderscript::Matrix4f::_class) ::android::renderscript::Matrix4f::_class = java::fetch_class("android/renderscript/Matrix4f");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadRotate", "(FFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::renderscript::Matrix4f::loadScale(float arg0, float arg1, float arg2) const {
    if (!::android::renderscript::Matrix4f::_class) ::android::renderscript::Matrix4f::_class = java::fetch_class("android/renderscript/Matrix4f");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadScale", "(FFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::renderscript::Matrix4f::loadTranslate(float arg0, float arg1, float arg2) const {
    if (!::android::renderscript::Matrix4f::_class) ::android::renderscript::Matrix4f::_class = java::fetch_class("android/renderscript/Matrix4f");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadTranslate", "(FFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::renderscript::Matrix4f::loadMultiply(const ::android::renderscript::Matrix4f& arg0, const ::android::renderscript::Matrix4f& arg1) const {
    if (!::android::renderscript::Matrix4f::_class) ::android::renderscript::Matrix4f::_class = java::fetch_class("android/renderscript/Matrix4f");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadMultiply", "(Landroid/renderscript/Matrix4f;Landroid/renderscript/Matrix4f;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::renderscript::Matrix4f::loadOrtho(float arg0, float arg1, float arg2, float arg3, float arg4, float arg5) const {
    if (!::android::renderscript::Matrix4f::_class) ::android::renderscript::Matrix4f::_class = java::fetch_class("android/renderscript/Matrix4f");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadOrtho", "(FFFFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    float _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::renderscript::Matrix4f::loadOrthoWindow(int32_t arg0, int32_t arg1) const {
    if (!::android::renderscript::Matrix4f::_class) ::android::renderscript::Matrix4f::_class = java::fetch_class("android/renderscript/Matrix4f");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadOrthoWindow", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::renderscript::Matrix4f::loadFrustum(float arg0, float arg1, float arg2, float arg3, float arg4, float arg5) const {
    if (!::android::renderscript::Matrix4f::_class) ::android::renderscript::Matrix4f::_class = java::fetch_class("android/renderscript/Matrix4f");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadFrustum", "(FFFFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    float _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::renderscript::Matrix4f::loadPerspective(float arg0, float arg1, float arg2, float arg3) const {
    if (!::android::renderscript::Matrix4f::_class) ::android::renderscript::Matrix4f::_class = java::fetch_class("android/renderscript/Matrix4f");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadPerspective", "(FFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::renderscript::Matrix4f::loadProjectionNormalized(int32_t arg0, int32_t arg1) const {
    if (!::android::renderscript::Matrix4f::_class) ::android::renderscript::Matrix4f::_class = java::fetch_class("android/renderscript/Matrix4f");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadProjectionNormalized", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::renderscript::Matrix4f::multiply(const ::android::renderscript::Matrix4f& arg0) const {
    if (!::android::renderscript::Matrix4f::_class) ::android::renderscript::Matrix4f::_class = java::fetch_class("android/renderscript/Matrix4f");
    static jmethodID mid = java::jni->GetMethodID(_class, "multiply", "(Landroid/renderscript/Matrix4f;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::Matrix4f::rotate(float arg0, float arg1, float arg2, float arg3) const {
    if (!::android::renderscript::Matrix4f::_class) ::android::renderscript::Matrix4f::_class = java::fetch_class("android/renderscript/Matrix4f");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotate", "(FFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::renderscript::Matrix4f::scale(float arg0, float arg1, float arg2) const {
    if (!::android::renderscript::Matrix4f::_class) ::android::renderscript::Matrix4f::_class = java::fetch_class("android/renderscript/Matrix4f");
    static jmethodID mid = java::jni->GetMethodID(_class, "scale", "(FFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::renderscript::Matrix4f::translate(float arg0, float arg1, float arg2) const {
    if (!::android::renderscript::Matrix4f::_class) ::android::renderscript::Matrix4f::_class = java::fetch_class("android/renderscript/Matrix4f");
    static jmethodID mid = java::jni->GetMethodID(_class, "translate", "(FFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::renderscript::Matrix4f::inverse() const {
    if (!::android::renderscript::Matrix4f::_class) ::android::renderscript::Matrix4f::_class = java::fetch_class("android/renderscript/Matrix4f");
    static jmethodID mid = java::jni->GetMethodID(_class, "inverse", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::renderscript::Matrix4f::inverseTranspose() const {
    if (!::android::renderscript::Matrix4f::_class) ::android::renderscript::Matrix4f::_class = java::fetch_class("android/renderscript/Matrix4f");
    static jmethodID mid = java::jni->GetMethodID(_class, "inverseTranspose", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::renderscript::Matrix4f::transpose() const {
    if (!::android::renderscript::Matrix4f::_class) ::android::renderscript::Matrix4f::_class = java::fetch_class("android/renderscript/Matrix4f");
    static jmethodID mid = java::jni->GetMethodID(_class, "transpose", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::RenderScript_RSMessageHandler::RenderScript_RSMessageHandler() : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {
    if (!::android::renderscript::RenderScript_RSMessageHandler::_class) ::android::renderscript::RenderScript_RSMessageHandler::_class = java::fetch_class("android/renderscript/RenderScript$RSMessageHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::renderscript::RenderScript_RSMessageHandler::run() const {
    if (!::android::renderscript::RenderScript_RSMessageHandler::_class) ::android::renderscript::RenderScript_RSMessageHandler::_class = java::fetch_class("android/renderscript/RenderScript$RSMessageHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "run", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::RSRuntimeException::RSRuntimeException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::renderscript::RSRuntimeException::_class) ::android::renderscript::RSRuntimeException::_class = java::fetch_class("android/renderscript/RSRuntimeException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Float2::Float2() : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Float2::_class) ::android::renderscript::Float2::_class = java::fetch_class("android/renderscript/Float2");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Float2::Float2(float arg0, float arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Float2::_class) ::android::renderscript::Float2::_class = java::fetch_class("android/renderscript/Float2");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

std::vector< ::android::renderscript::Allocation_MipmapControl> android::renderscript::Allocation_MipmapControl::values(){
    if (!::android::renderscript::Allocation_MipmapControl::_class) ::android::renderscript::Allocation_MipmapControl::_class = java::fetch_class("android/renderscript/Allocation$MipmapControl");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/renderscript/Allocation$MipmapControl;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::renderscript::Allocation_MipmapControl> _ret(rets, ::android::renderscript::Allocation_MipmapControl((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::renderscript::Allocation_MipmapControl retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::renderscript::Allocation_MipmapControl android::renderscript::Allocation_MipmapControl::valueOf(const ::java::lang::String& arg0){
    if (!::android::renderscript::Allocation_MipmapControl::_class) ::android::renderscript::Allocation_MipmapControl::_class = java::fetch_class("android/renderscript/Allocation$MipmapControl");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/renderscript/Allocation$MipmapControl;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Allocation_MipmapControl _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Float4::Float4() : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Float4::_class) ::android::renderscript::Float4::_class = java::fetch_class("android/renderscript/Float4");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Float4::Float4(float arg0, float arg1, float arg2, float arg3) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Float4::_class) ::android::renderscript::Float4::_class = java::fetch_class("android/renderscript/Float4");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(FFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Byte2::Byte2() : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Byte2::_class) ::android::renderscript::Byte2::_class = java::fetch_class("android/renderscript/Byte2");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Byte2::Byte2(int8_t arg0, int8_t arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Byte2::_class) ::android::renderscript::Byte2::_class = java::fetch_class("android/renderscript/Byte2");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(BB)V");
    int8_t _arg0 = arg0;
    int8_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::renderscript::Program::bindConstants(const ::android::renderscript::Allocation& arg0, int32_t arg1) const {
    if (!::android::renderscript::Program::_class) ::android::renderscript::Program::_class = java::fetch_class("android/renderscript/Program");
    static jmethodID mid = java::jni->GetMethodID(_class, "bindConstants", "(Landroid/renderscript/Allocation;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::renderscript::Program::bindTexture(const ::android::renderscript::Allocation& arg0, int32_t arg1) const {
    if (!::android::renderscript::Program::_class) ::android::renderscript::Program::_class = java::fetch_class("android/renderscript/Program");
    static jmethodID mid = java::jni->GetMethodID(_class, "bindTexture", "(Landroid/renderscript/Allocation;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::renderscript::Program::bindSampler(const ::android::renderscript::Sampler& arg0, int32_t arg1) const {
    if (!::android::renderscript::Program::_class) ::android::renderscript::Program::_class = java::fetch_class("android/renderscript/Program");
    static jmethodID mid = java::jni->GetMethodID(_class, "bindSampler", "(Landroid/renderscript/Sampler;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::ProgramVertexFixedFunction_Builder::ProgramVertexFixedFunction_Builder(const ::android::renderscript::RenderScript& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::ProgramVertexFixedFunction_Builder::_class) ::android::renderscript::ProgramVertexFixedFunction_Builder::_class = java::fetch_class("android/renderscript/ProgramVertexFixedFunction$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/renderscript/RenderScript;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::renderscript::ProgramVertexFixedFunction_Builder android::renderscript::ProgramVertexFixedFunction_Builder::setTextureMatrixEnable(bool arg0) const {
    if (!::android::renderscript::ProgramVertexFixedFunction_Builder::_class) ::android::renderscript::ProgramVertexFixedFunction_Builder::_class = java::fetch_class("android/renderscript/ProgramVertexFixedFunction$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTextureMatrixEnable", "(Z)Landroid/renderscript/ProgramVertexFixedFunction$Builder;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::renderscript::ProgramVertexFixedFunction_Builder _ret(ret);
    return _ret;
}

::android::renderscript::ProgramVertexFixedFunction android::renderscript::ProgramVertexFixedFunction_Builder::create() const {
    if (!::android::renderscript::ProgramVertexFixedFunction_Builder::_class) ::android::renderscript::ProgramVertexFixedFunction_Builder::_class = java::fetch_class("android/renderscript/ProgramVertexFixedFunction$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "create", "()Landroid/renderscript/ProgramVertexFixedFunction;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::renderscript::ProgramVertexFixedFunction _ret(ret);
    return _ret;
}

std::vector< ::android::renderscript::Font_Style> android::renderscript::Font_Style::values(){
    if (!::android::renderscript::Font_Style::_class) ::android::renderscript::Font_Style::_class = java::fetch_class("android/renderscript/Font$Style");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/renderscript/Font$Style;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::renderscript::Font_Style> _ret(rets, ::android::renderscript::Font_Style((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::renderscript::Font_Style retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::renderscript::Font_Style android::renderscript::Font_Style::valueOf(const ::java::lang::String& arg0){
    if (!::android::renderscript::Font_Style::_class) ::android::renderscript::Font_Style::_class = java::fetch_class("android/renderscript/Font$Style");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/renderscript/Font$Style;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::Font_Style _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Mesh_AllocationBuilder::Mesh_AllocationBuilder(const ::android::renderscript::RenderScript& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Mesh_AllocationBuilder::_class) ::android::renderscript::Mesh_AllocationBuilder::_class = java::fetch_class("android/renderscript/Mesh$AllocationBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/renderscript/RenderScript;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::renderscript::Mesh_AllocationBuilder::getCurrentVertexTypeIndex() const {
    if (!::android::renderscript::Mesh_AllocationBuilder::_class) ::android::renderscript::Mesh_AllocationBuilder::_class = java::fetch_class("android/renderscript/Mesh$AllocationBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentVertexTypeIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::renderscript::Mesh_AllocationBuilder::getCurrentIndexSetIndex() const {
    if (!::android::renderscript::Mesh_AllocationBuilder::_class) ::android::renderscript::Mesh_AllocationBuilder::_class = java::fetch_class("android/renderscript/Mesh$AllocationBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentIndexSetIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::renderscript::Mesh_AllocationBuilder android::renderscript::Mesh_AllocationBuilder::addVertexAllocation(const ::android::renderscript::Allocation& arg0) const {
    if (!::android::renderscript::Mesh_AllocationBuilder::_class) ::android::renderscript::Mesh_AllocationBuilder::_class = java::fetch_class("android/renderscript/Mesh$AllocationBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addVertexAllocation", "(Landroid/renderscript/Allocation;)Landroid/renderscript/Mesh$AllocationBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::renderscript::Mesh_AllocationBuilder _ret(ret);
    return _ret;
}

::android::renderscript::Mesh_AllocationBuilder android::renderscript::Mesh_AllocationBuilder::addIndexSetAllocation(const ::android::renderscript::Allocation& arg0, const ::android::renderscript::Mesh_Primitive& arg1) const {
    if (!::android::renderscript::Mesh_AllocationBuilder::_class) ::android::renderscript::Mesh_AllocationBuilder::_class = java::fetch_class("android/renderscript/Mesh$AllocationBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addIndexSetAllocation", "(Landroid/renderscript/Allocation;Landroid/renderscript/Mesh$Primitive;)Landroid/renderscript/Mesh$AllocationBuilder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::renderscript::Mesh_AllocationBuilder _ret(ret);
    return _ret;
}

::android::renderscript::Mesh_AllocationBuilder android::renderscript::Mesh_AllocationBuilder::addIndexSetType(const ::android::renderscript::Mesh_Primitive& arg0) const {
    if (!::android::renderscript::Mesh_AllocationBuilder::_class) ::android::renderscript::Mesh_AllocationBuilder::_class = java::fetch_class("android/renderscript/Mesh$AllocationBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addIndexSetType", "(Landroid/renderscript/Mesh$Primitive;)Landroid/renderscript/Mesh$AllocationBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::renderscript::Mesh_AllocationBuilder _ret(ret);
    return _ret;
}

::android::renderscript::Mesh android::renderscript::Mesh_AllocationBuilder::create() const {
    if (!::android::renderscript::Mesh_AllocationBuilder::_class) ::android::renderscript::Mesh_AllocationBuilder::_class = java::fetch_class("android/renderscript/Mesh$AllocationBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "create", "()Landroid/renderscript/Mesh;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::renderscript::Mesh _ret(ret);
    return _ret;
}

std::vector< ::android::renderscript::ProgramFragmentFixedFunction_Builder_Format> android::renderscript::ProgramFragmentFixedFunction_Builder_Format::values(){
    if (!::android::renderscript::ProgramFragmentFixedFunction_Builder_Format::_class) ::android::renderscript::ProgramFragmentFixedFunction_Builder_Format::_class = java::fetch_class("android/renderscript/ProgramFragmentFixedFunction$Builder$Format");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/renderscript/ProgramFragmentFixedFunction$Builder$Format;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::renderscript::ProgramFragmentFixedFunction_Builder_Format> _ret(rets, ::android::renderscript::ProgramFragmentFixedFunction_Builder_Format((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::renderscript::ProgramFragmentFixedFunction_Builder_Format retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::renderscript::ProgramFragmentFixedFunction_Builder_Format android::renderscript::ProgramFragmentFixedFunction_Builder_Format::valueOf(const ::java::lang::String& arg0){
    if (!::android::renderscript::ProgramFragmentFixedFunction_Builder_Format::_class) ::android::renderscript::ProgramFragmentFixedFunction_Builder_Format::_class = java::fetch_class("android/renderscript/ProgramFragmentFixedFunction$Builder$Format");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/renderscript/ProgramFragmentFixedFunction$Builder$Format;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::renderscript::ProgramFragmentFixedFunction_Builder_Format _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Double2::Double2() : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Double2::_class) ::android::renderscript::Double2::_class = java::fetch_class("android/renderscript/Double2");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Double2::Double2(double arg0, double arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Double2::_class) ::android::renderscript::Double2::_class = java::fetch_class("android/renderscript/Double2");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(DD)V");
    double _arg0 = arg0;
    double _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::renderscript::Script::bindAllocation(const ::android::renderscript::Allocation& arg0, int32_t arg1) const {
    if (!::android::renderscript::Script::_class) ::android::renderscript::Script::_class = java::fetch_class("android/renderscript/Script");
    static jmethodID mid = java::jni->GetMethodID(_class, "bindAllocation", "(Landroid/renderscript/Allocation;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::renderscript::Script::setVar(int32_t arg0, float arg1) const {
    if (!::android::renderscript::Script::_class) ::android::renderscript::Script::_class = java::fetch_class("android/renderscript/Script");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVar", "(IF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::renderscript::Script::setVar(int32_t arg0, double arg1) const {
    if (!::android::renderscript::Script::_class) ::android::renderscript::Script::_class = java::fetch_class("android/renderscript/Script");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVar", "(ID)V");
    int32_t _arg0 = arg0;
    double _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::renderscript::Script::setVar(int32_t arg0, int32_t arg1) const {
    if (!::android::renderscript::Script::_class) ::android::renderscript::Script::_class = java::fetch_class("android/renderscript/Script");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVar", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::renderscript::Script::setVar(int32_t arg0, int64_t arg1) const {
    if (!::android::renderscript::Script::_class) ::android::renderscript::Script::_class = java::fetch_class("android/renderscript/Script");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVar", "(IJ)V");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::renderscript::Script::setVar(int32_t arg0, bool arg1) const {
    if (!::android::renderscript::Script::_class) ::android::renderscript::Script::_class = java::fetch_class("android/renderscript/Script");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVar", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::renderscript::Script::setVar(int32_t arg0, const ::android::renderscript::BaseObj& arg1) const {
    if (!::android::renderscript::Script::_class) ::android::renderscript::Script::_class = java::fetch_class("android/renderscript/Script");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVar", "(ILandroid/renderscript/BaseObj;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::renderscript::Script::setVar(int32_t arg0, const ::android::renderscript::FieldPacker& arg1) const {
    if (!::android::renderscript::Script::_class) ::android::renderscript::Script::_class = java::fetch_class("android/renderscript/Script");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVar", "(ILandroid/renderscript/FieldPacker;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::renderscript::Script::setTimeZone(const ::java::lang::String& arg0) const {
    if (!::android::renderscript::Script::_class) ::android::renderscript::Script::_class = java::fetch_class("android/renderscript/Script");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTimeZone", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Float3::Float3() : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Float3::_class) ::android::renderscript::Float3::_class = java::fetch_class("android/renderscript/Float3");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::Float3::Float3(float arg0, float arg1, float arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::Float3::_class) ::android::renderscript::Float3::_class = java::fetch_class("android/renderscript/Float3");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(FFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

int32_t android::renderscript::FileA3D::getIndexEntryCount() const {
    if (!::android::renderscript::FileA3D::_class) ::android::renderscript::FileA3D::_class = java::fetch_class("android/renderscript/FileA3D");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIndexEntryCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::renderscript::FileA3D_IndexEntry android::renderscript::FileA3D::getIndexEntry(int32_t arg0) const {
    if (!::android::renderscript::FileA3D::_class) ::android::renderscript::FileA3D::_class = java::fetch_class("android/renderscript/FileA3D");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIndexEntry", "(I)Landroid/renderscript/FileA3D$IndexEntry;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::renderscript::FileA3D_IndexEntry _ret(ret);
    return _ret;
}

::android::renderscript::FileA3D android::renderscript::FileA3D::createFromAsset(const ::android::renderscript::RenderScript& arg0, const ::android::content::res::AssetManager& arg1, const ::java::lang::String& arg2){
    if (!::android::renderscript::FileA3D::_class) ::android::renderscript::FileA3D::_class = java::fetch_class("android/renderscript/FileA3D");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createFromAsset", "(Landroid/renderscript/RenderScript;Landroid/content/res/AssetManager;Ljava/lang/String;)Landroid/renderscript/FileA3D;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::renderscript::FileA3D _ret(ret);
    return _ret;
}

::android::renderscript::FileA3D android::renderscript::FileA3D::createFromFile(const ::android::renderscript::RenderScript& arg0, const ::java::lang::String& arg1){
    if (!::android::renderscript::FileA3D::_class) ::android::renderscript::FileA3D::_class = java::fetch_class("android/renderscript/FileA3D");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createFromFile", "(Landroid/renderscript/RenderScript;Ljava/lang/String;)Landroid/renderscript/FileA3D;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::renderscript::FileA3D _ret(ret);
    return _ret;
}

::android::renderscript::FileA3D android::renderscript::FileA3D::createFromFile(const ::android::renderscript::RenderScript& arg0, const ::java::io::File& arg1){
    if (!::android::renderscript::FileA3D::_class) ::android::renderscript::FileA3D::_class = java::fetch_class("android/renderscript/FileA3D");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createFromFile", "(Landroid/renderscript/RenderScript;Ljava/io/File;)Landroid/renderscript/FileA3D;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::renderscript::FileA3D _ret(ret);
    return _ret;
}

::android::renderscript::FileA3D android::renderscript::FileA3D::createFromResource(const ::android::renderscript::RenderScript& arg0, const ::android::content::res::Resources& arg1, int32_t arg2){
    if (!::android::renderscript::FileA3D::_class) ::android::renderscript::FileA3D::_class = java::fetch_class("android/renderscript/FileA3D");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createFromResource", "(Landroid/renderscript/RenderScript;Landroid/content/res/Resources;I)Landroid/renderscript/FileA3D;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::renderscript::FileA3D _ret(ret);
    return _ret;
}

int32_t android::renderscript::Mesh::getVertexAllocationCount() const {
    if (!::android::renderscript::Mesh::_class) ::android::renderscript::Mesh::_class = java::fetch_class("android/renderscript/Mesh");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVertexAllocationCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::renderscript::Allocation android::renderscript::Mesh::getVertexAllocation(int32_t arg0) const {
    if (!::android::renderscript::Mesh::_class) ::android::renderscript::Mesh::_class = java::fetch_class("android/renderscript/Mesh");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVertexAllocation", "(I)Landroid/renderscript/Allocation;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::renderscript::Allocation _ret(ret);
    return _ret;
}

int32_t android::renderscript::Mesh::getPrimitiveCount() const {
    if (!::android::renderscript::Mesh::_class) ::android::renderscript::Mesh::_class = java::fetch_class("android/renderscript/Mesh");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrimitiveCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::renderscript::Allocation android::renderscript::Mesh::getIndexSetAllocation(int32_t arg0) const {
    if (!::android::renderscript::Mesh::_class) ::android::renderscript::Mesh::_class = java::fetch_class("android/renderscript/Mesh");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIndexSetAllocation", "(I)Landroid/renderscript/Allocation;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::renderscript::Allocation _ret(ret);
    return _ret;
}

::android::renderscript::Mesh_Primitive android::renderscript::Mesh::getPrimitive(int32_t arg0) const {
    if (!::android::renderscript::Mesh::_class) ::android::renderscript::Mesh::_class = java::fetch_class("android/renderscript/Mesh");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrimitive", "(I)Landroid/renderscript/Mesh$Primitive;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::renderscript::Mesh_Primitive _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::FieldPacker::FieldPacker(int32_t arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::renderscript::FieldPacker::align(int32_t arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "align", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::reset() const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::renderscript::FieldPacker::reset(int32_t arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::skip(int32_t arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "skip", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addI8(int8_t arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addI8", "(B)V");
    int8_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addI16(int16_t arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addI16", "(S)V");
    int16_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addI32(int32_t arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addI32", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addI64(int64_t arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addI64", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addU8(int16_t arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addU8", "(S)V");
    int16_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addU16(int32_t arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addU16", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addU32(int64_t arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addU32", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addU64(int64_t arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addU64", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addF32(float arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addF32", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addF64(double arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addF64", "(D)V");
    double _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addObj(const ::android::renderscript::BaseObj& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addObj", "(Landroid/renderscript/BaseObj;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addF32(const ::android::renderscript::Float2& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addF32", "(Landroid/renderscript/Float2;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addF32(const ::android::renderscript::Float3& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addF32", "(Landroid/renderscript/Float3;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addF32(const ::android::renderscript::Float4& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addF32", "(Landroid/renderscript/Float4;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addF64(const ::android::renderscript::Double2& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addF64", "(Landroid/renderscript/Double2;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addF64(const ::android::renderscript::Double3& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addF64", "(Landroid/renderscript/Double3;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addF64(const ::android::renderscript::Double4& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addF64", "(Landroid/renderscript/Double4;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addI8(const ::android::renderscript::Byte2& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addI8", "(Landroid/renderscript/Byte2;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addI8(const ::android::renderscript::Byte3& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addI8", "(Landroid/renderscript/Byte3;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addI8(const ::android::renderscript::Byte4& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addI8", "(Landroid/renderscript/Byte4;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addU8(const ::android::renderscript::Short2& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addU8", "(Landroid/renderscript/Short2;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addU8(const ::android::renderscript::Short3& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addU8", "(Landroid/renderscript/Short3;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addU8(const ::android::renderscript::Short4& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addU8", "(Landroid/renderscript/Short4;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addI16(const ::android::renderscript::Short2& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addI16", "(Landroid/renderscript/Short2;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addI16(const ::android::renderscript::Short3& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addI16", "(Landroid/renderscript/Short3;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addI16(const ::android::renderscript::Short4& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addI16", "(Landroid/renderscript/Short4;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addU16(const ::android::renderscript::Int2& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addU16", "(Landroid/renderscript/Int2;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addU16(const ::android::renderscript::Int3& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addU16", "(Landroid/renderscript/Int3;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addU16(const ::android::renderscript::Int4& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addU16", "(Landroid/renderscript/Int4;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addI32(const ::android::renderscript::Int2& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addI32", "(Landroid/renderscript/Int2;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addI32(const ::android::renderscript::Int3& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addI32", "(Landroid/renderscript/Int3;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addI32(const ::android::renderscript::Int4& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addI32", "(Landroid/renderscript/Int4;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addU32(const ::android::renderscript::Long2& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addU32", "(Landroid/renderscript/Long2;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addU32(const ::android::renderscript::Long3& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addU32", "(Landroid/renderscript/Long3;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addU32(const ::android::renderscript::Long4& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addU32", "(Landroid/renderscript/Long4;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addI64(const ::android::renderscript::Long2& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addI64", "(Landroid/renderscript/Long2;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addI64(const ::android::renderscript::Long3& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addI64", "(Landroid/renderscript/Long3;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addI64(const ::android::renderscript::Long4& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addI64", "(Landroid/renderscript/Long4;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addU64(const ::android::renderscript::Long2& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addU64", "(Landroid/renderscript/Long2;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addU64(const ::android::renderscript::Long3& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addU64", "(Landroid/renderscript/Long3;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addU64(const ::android::renderscript::Long4& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addU64", "(Landroid/renderscript/Long4;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addMatrix(const ::android::renderscript::Matrix4f& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addMatrix", "(Landroid/renderscript/Matrix4f;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addMatrix(const ::android::renderscript::Matrix3f& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addMatrix", "(Landroid/renderscript/Matrix3f;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addMatrix(const ::android::renderscript::Matrix2f& arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addMatrix", "(Landroid/renderscript/Matrix2f;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::FieldPacker::addBoolean(bool arg0) const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addBoolean", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< int8_t> android::renderscript::FieldPacker::getData() const {
    if (!::android::renderscript::FieldPacker::_class) ::android::renderscript::FieldPacker::_class = java::fetch_class("android/renderscript/FieldPacker");
    static jmethodID mid = java::jni->GetMethodID(_class, "getData", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::RSSurfaceView::RSSurfaceView(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::SurfaceHolder_Callback((jobject)0), ::android::view::SurfaceView((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::renderscript::RSSurfaceView::_class) ::android::renderscript::RSSurfaceView::_class = java::fetch_class("android/renderscript/RSSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::renderscript::RSSurfaceView::RSSurfaceView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::SurfaceHolder_Callback((jobject)0), ::android::view::SurfaceView((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::renderscript::RSSurfaceView::_class) ::android::renderscript::RSSurfaceView::_class = java::fetch_class("android/renderscript/RSSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::renderscript::RSSurfaceView::surfaceCreated(const ::android::view::SurfaceHolder& arg0) const {
    if (!::android::renderscript::RSSurfaceView::_class) ::android::renderscript::RSSurfaceView::_class = java::fetch_class("android/renderscript/RSSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "surfaceCreated", "(Landroid/view/SurfaceHolder;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::RSSurfaceView::surfaceDestroyed(const ::android::view::SurfaceHolder& arg0) const {
    if (!::android::renderscript::RSSurfaceView::_class) ::android::renderscript::RSSurfaceView::_class = java::fetch_class("android/renderscript/RSSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "surfaceDestroyed", "(Landroid/view/SurfaceHolder;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::renderscript::RSSurfaceView::surfaceChanged(const ::android::view::SurfaceHolder& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::renderscript::RSSurfaceView::_class) ::android::renderscript::RSSurfaceView::_class = java::fetch_class("android/renderscript/RSSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "surfaceChanged", "(Landroid/view/SurfaceHolder;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::renderscript::RSSurfaceView::pause() const {
    if (!::android::renderscript::RSSurfaceView::_class) ::android::renderscript::RSSurfaceView::_class = java::fetch_class("android/renderscript/RSSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "pause", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::renderscript::RSSurfaceView::resume() const {
    if (!::android::renderscript::RSSurfaceView::_class) ::android::renderscript::RSSurfaceView::_class = java::fetch_class("android/renderscript/RSSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "resume", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::renderscript::RenderScriptGL android::renderscript::RSSurfaceView::createRenderScriptGL(const ::android::renderscript::RenderScriptGL_SurfaceConfig& arg0) const {
    if (!::android::renderscript::RSSurfaceView::_class) ::android::renderscript::RSSurfaceView::_class = java::fetch_class("android/renderscript/RSSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "createRenderScriptGL", "(Landroid/renderscript/RenderScriptGL$SurfaceConfig;)Landroid/renderscript/RenderScriptGL;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::renderscript::RenderScriptGL _ret(ret);
    return _ret;
}

void android::renderscript::RSSurfaceView::destroyRenderScriptGL() const {
    if (!::android::renderscript::RSSurfaceView::_class) ::android::renderscript::RSSurfaceView::_class = java::fetch_class("android/renderscript/RSSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "destroyRenderScriptGL", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::renderscript::RSSurfaceView::setRenderScriptGL(const ::android::renderscript::RenderScriptGL& arg0) const {
    if (!::android::renderscript::RSSurfaceView::_class) ::android::renderscript::RSSurfaceView::_class = java::fetch_class("android/renderscript/RSSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRenderScriptGL", "(Landroid/renderscript/RenderScriptGL;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::renderscript::RenderScriptGL android::renderscript::RSSurfaceView::getRenderScriptGL() const {
    if (!::android::renderscript::RSSurfaceView::_class) ::android::renderscript::RSSurfaceView::_class = java::fetch_class("android/renderscript/RSSurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRenderScriptGL", "()Landroid/renderscript/RenderScriptGL;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::renderscript::RenderScriptGL _ret(ret);
    return _ret;
}

