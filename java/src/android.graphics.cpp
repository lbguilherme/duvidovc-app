#include "java-core.hpp"
#include <memory>
#include "android.content.res.AssetManager.hpp"
#include "android.content.res.Resources.hpp"
#include "android.graphics.AvoidXfermode.hpp"
#include "android.graphics.Bitmap.hpp"
#include "android.graphics.BitmapFactory.hpp"
#include "android.graphics.BitmapRegionDecoder.hpp"
#include "android.graphics.BitmapShader.hpp"
#include "android.graphics.BlurMaskFilter.hpp"
#include "android.graphics.Camera.hpp"
#include "android.graphics.Canvas.hpp"
#include "android.graphics.Color.hpp"
#include "android.graphics.ColorFilter.hpp"
#include "android.graphics.ColorMatrix.hpp"
#include "android.graphics.ColorMatrixColorFilter.hpp"
#include "android.graphics.ComposePathEffect.hpp"
#include "android.graphics.ComposeShader.hpp"
#include "android.graphics.CornerPathEffect.hpp"
#include "android.graphics.DashPathEffect.hpp"
#include "android.graphics.DiscretePathEffect.hpp"
#include "android.graphics.DrawFilter.hpp"
#include "android.graphics.EmbossMaskFilter.hpp"
#include "android.graphics.ImageFormat.hpp"
#include "android.graphics.Interpolator.hpp"
#include "android.graphics.LayerRasterizer.hpp"
#include "android.graphics.LightingColorFilter.hpp"
#include "android.graphics.LinearGradient.hpp"
#include "android.graphics.MaskFilter.hpp"
#include "android.graphics.Matrix.hpp"
#include "android.graphics.Movie.hpp"
#include "android.graphics.NinePatch.hpp"
#include "android.graphics.Paint.hpp"
#include "android.graphics.PaintFlagsDrawFilter.hpp"
#include "android.graphics.Path.hpp"
#include "android.graphics.PathDashPathEffect.hpp"
#include "android.graphics.PathEffect.hpp"
#include "android.graphics.PathMeasure.hpp"
#include "android.graphics.Picture.hpp"
#include "android.graphics.PixelFormat.hpp"
#include "android.graphics.PixelXorXfermode.hpp"
#include "android.graphics.Point.hpp"
#include "android.graphics.PointF.hpp"
#include "android.graphics.PorterDuff.hpp"
#include "android.graphics.PorterDuffColorFilter.hpp"
#include "android.graphics.PorterDuffXfermode.hpp"
#include "android.graphics.RadialGradient.hpp"
#include "android.graphics.Rasterizer.hpp"
#include "android.graphics.Rect.hpp"
#include "android.graphics.RectF.hpp"
#include "android.graphics.Region.hpp"
#include "android.graphics.RegionIterator.hpp"
#include "android.graphics.Shader.hpp"
#include "android.graphics.SumPathEffect.hpp"
#include "android.graphics.SurfaceTexture.hpp"
#include "android.graphics.SweepGradient.hpp"
#include "android.graphics.Typeface.hpp"
#include "android.graphics.Xfermode.hpp"
#include "android.graphics.YuvImage.hpp"
#include "android.os.Parcel.hpp"
#include "android.util.DisplayMetrics.hpp"
#include "android.util.TypedValue.hpp"
#include "java.io.File.hpp"
#include "java.io.FileDescriptor.hpp"
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.nio.Buffer.hpp"

jclass android::graphics::BitmapFactory_Options::_class = nullptr;
jclass android::graphics::Paint_Style::_class = nullptr;
jclass android::graphics::ComposeShader::_class = nullptr;
jclass android::graphics::PorterDuff::_class = nullptr;
jclass android::graphics::LinearGradient::_class = nullptr;
jclass android::graphics::DiscretePathEffect::_class = nullptr;
jclass android::graphics::Path::_class = nullptr;
jclass android::graphics::ComposePathEffect::_class = nullptr;
jclass android::graphics::LayerRasterizer::_class = nullptr;
jclass android::graphics::Picture::_class = nullptr;
jclass android::graphics::Paint_Join::_class = nullptr;
jclass android::graphics::BitmapShader::_class = nullptr;
jclass android::graphics::Paint::_class = nullptr;
jclass android::graphics::ImageFormat::_class = nullptr;
jclass android::graphics::NinePatch::_class = nullptr;
jclass android::graphics::Canvas::_class = nullptr;
jclass android::graphics::PathEffect::_class = nullptr;
jclass android::graphics::Movie::_class = nullptr;
jclass android::graphics::SurfaceTexture_OnFrameAvailableListener::_class = nullptr;
jclass android::graphics::BlurMaskFilter::_class = nullptr;
jclass android::graphics::Path_Direction::_class = nullptr;
jclass android::graphics::Region::_class = nullptr;
jclass android::graphics::Typeface::_class = nullptr;
jclass android::graphics::Canvas_VertexMode::_class = nullptr;
jclass android::graphics::Region_Op::_class = nullptr;
jclass android::graphics::PixelFormat::_class = nullptr;
jclass android::graphics::Matrix::_class = nullptr;
jclass android::graphics::AvoidXfermode_Mode::_class = nullptr;
jclass android::graphics::AvoidXfermode::_class = nullptr;
jclass android::graphics::PaintFlagsDrawFilter::_class = nullptr;
jclass android::graphics::Camera::_class = nullptr;
jclass android::graphics::SweepGradient::_class = nullptr;
jclass android::graphics::Paint_Align::_class = nullptr;
jclass android::graphics::RegionIterator::_class = nullptr;
jclass android::graphics::BitmapRegionDecoder::_class = nullptr;
jclass android::graphics::Xfermode::_class = nullptr;
jclass android::graphics::Shader::_class = nullptr;
jclass android::graphics::MaskFilter::_class = nullptr;
jclass android::graphics::Paint_Cap::_class = nullptr;
jclass android::graphics::Rect::_class = nullptr;
jclass android::graphics::ColorFilter::_class = nullptr;
jclass android::graphics::Paint_FontMetrics::_class = nullptr;
jclass android::graphics::YuvImage::_class = nullptr;
jclass android::graphics::SurfaceTexture_OutOfResourcesException::_class = nullptr;
jclass android::graphics::PointF::_class = nullptr;
jclass android::graphics::CornerPathEffect::_class = nullptr;
jclass android::graphics::DrawFilter::_class = nullptr;
jclass android::graphics::BlurMaskFilter_Blur::_class = nullptr;
jclass android::graphics::DashPathEffect::_class = nullptr;
jclass android::graphics::Bitmap_CompressFormat::_class = nullptr;
jclass android::graphics::Shader_TileMode::_class = nullptr;
jclass android::graphics::SumPathEffect::_class = nullptr;
jclass android::graphics::PorterDuff_Mode::_class = nullptr;
jclass android::graphics::Rasterizer::_class = nullptr;
jclass android::graphics::Matrix_ScaleToFit::_class = nullptr;
jclass android::graphics::BitmapFactory::_class = nullptr;
jclass android::graphics::Point::_class = nullptr;
jclass android::graphics::RadialGradient::_class = nullptr;
jclass android::graphics::PathDashPathEffect_Style::_class = nullptr;
jclass android::graphics::Bitmap_Config::_class = nullptr;
jclass android::graphics::PathMeasure::_class = nullptr;
jclass android::graphics::Color::_class = nullptr;
jclass android::graphics::PixelXorXfermode::_class = nullptr;
jclass android::graphics::Paint_FontMetricsInt::_class = nullptr;
jclass android::graphics::LightingColorFilter::_class = nullptr;
jclass android::graphics::RectF::_class = nullptr;
jclass android::graphics::Canvas_EdgeType::_class = nullptr;
jclass android::graphics::Bitmap::_class = nullptr;
jclass android::graphics::EmbossMaskFilter::_class = nullptr;
jclass android::graphics::PorterDuffXfermode::_class = nullptr;
jclass android::graphics::PathDashPathEffect::_class = nullptr;
jclass android::graphics::PorterDuffColorFilter::_class = nullptr;
jclass android::graphics::ColorMatrixColorFilter::_class = nullptr;
jclass android::graphics::Interpolator_Result::_class = nullptr;
jclass android::graphics::ColorMatrix::_class = nullptr;
jclass android::graphics::SurfaceTexture::_class = nullptr;
jclass android::graphics::Interpolator::_class = nullptr;
jclass android::graphics::Path_FillType::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::BitmapFactory_Options::BitmapFactory_Options() : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::BitmapFactory_Options::_class) ::android::graphics::BitmapFactory_Options::_class = java::fetch_class("android/graphics/BitmapFactory$Options");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::graphics::BitmapFactory_Options::requestCancelDecode() const {
    if (!::android::graphics::BitmapFactory_Options::_class) ::android::graphics::BitmapFactory_Options::_class = java::fetch_class("android/graphics/BitmapFactory$Options");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestCancelDecode", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

std::vector< ::android::graphics::Paint_Style> android::graphics::Paint_Style::values(){
    if (!::android::graphics::Paint_Style::_class) ::android::graphics::Paint_Style::_class = java::fetch_class("android/graphics/Paint$Style");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/graphics/Paint$Style;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::graphics::Paint_Style> _ret(rets, ::android::graphics::Paint_Style((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::graphics::Paint_Style retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::graphics::Paint_Style android::graphics::Paint_Style::valueOf(const ::java::lang::String& arg0){
    if (!::android::graphics::Paint_Style::_class) ::android::graphics::Paint_Style::_class = java::fetch_class("android/graphics/Paint$Style");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/graphics/Paint$Style;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::Paint_Style _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::ComposeShader::ComposeShader(const ::android::graphics::Shader& arg0, const ::android::graphics::Shader& arg1, const ::android::graphics::Xfermode& arg2) : ::java::lang::Object((jobject)0), ::android::graphics::Shader((jobject)0) {
    if (!::android::graphics::ComposeShader::_class) ::android::graphics::ComposeShader::_class = java::fetch_class("android/graphics/ComposeShader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/Shader;Landroid/graphics/Shader;Landroid/graphics/Xfermode;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::ComposeShader::ComposeShader(const ::android::graphics::Shader& arg0, const ::android::graphics::Shader& arg1, const ::android::graphics::PorterDuff_Mode& arg2) : ::java::lang::Object((jobject)0), ::android::graphics::Shader((jobject)0) {
    if (!::android::graphics::ComposeShader::_class) ::android::graphics::ComposeShader::_class = java::fetch_class("android/graphics/ComposeShader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/Shader;Landroid/graphics/Shader;Landroid/graphics/PorterDuff$Mode;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::PorterDuff::PorterDuff() : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::PorterDuff::_class) ::android::graphics::PorterDuff::_class = java::fetch_class("android/graphics/PorterDuff");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::LinearGradient::LinearGradient(float arg0, float arg1, float arg2, float arg3, const std::vector< int32_t>& arg4, const std::vector< float>& arg5, const ::android::graphics::Shader_TileMode& arg6) : ::java::lang::Object((jobject)0), ::android::graphics::Shader((jobject)0) {
    if (!::android::graphics::LinearGradient::_class) ::android::graphics::LinearGradient::_class = java::fetch_class("android/graphics/LinearGradient");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(FFFF[I[FLandroid/graphics/Shader$TileMode;)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    jintArray _arg4 = java::jni->NewIntArray(arg4.size());
    java::jni->SetIntArrayRegion(_arg4, 0, arg4.size(), arg4.data());
    jfloatArray _arg5 = java::jni->NewFloatArray(arg5.size());
    java::jni->SetFloatArrayRegion(_arg5, 0, arg5.size(), arg5.data());
    jobject _arg6 = arg6.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::LinearGradient::LinearGradient(float arg0, float arg1, float arg2, float arg3, int32_t arg4, int32_t arg5, const ::android::graphics::Shader_TileMode& arg6) : ::java::lang::Object((jobject)0), ::android::graphics::Shader((jobject)0) {
    if (!::android::graphics::LinearGradient::_class) ::android::graphics::LinearGradient::_class = java::fetch_class("android/graphics/LinearGradient");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(FFFFIILandroid/graphics/Shader$TileMode;)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    jobject _arg6 = arg6.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::DiscretePathEffect::DiscretePathEffect(float arg0, float arg1) : ::java::lang::Object((jobject)0), ::android::graphics::PathEffect((jobject)0) {
    if (!::android::graphics::DiscretePathEffect::_class) ::android::graphics::DiscretePathEffect::_class = java::fetch_class("android/graphics/DiscretePathEffect");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::Path::Path() : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::graphics::Path::reset() const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::graphics::Path::rewind() const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "rewind", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::graphics::Path::set(const ::android::graphics::Path& arg0) const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(Landroid/graphics/Path;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::Path_FillType android::graphics::Path::getFillType() const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFillType", "()Landroid/graphics/Path$FillType;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Path_FillType _ret(ret);
    return _ret;
}

void android::graphics::Path::setFillType(const ::android::graphics::Path_FillType& arg0) const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFillType", "(Landroid/graphics/Path$FillType;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::graphics::Path::isInverseFillType() const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "isInverseFillType", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::graphics::Path::toggleInverseFillType() const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "toggleInverseFillType", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::graphics::Path::isEmpty() const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::graphics::Path::isRect(const ::android::graphics::RectF& arg0) const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRect", "(Landroid/graphics/RectF;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::graphics::Path::computeBounds(const ::android::graphics::RectF& arg0, bool arg1) const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "computeBounds", "(Landroid/graphics/RectF;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Path::incReserve(int32_t arg0) const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "incReserve", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::Path::moveTo(float arg0, float arg1) const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "moveTo", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Path::rMoveTo(float arg0, float arg1) const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "rMoveTo", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Path::lineTo(float arg0, float arg1) const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "lineTo", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Path::rLineTo(float arg0, float arg1) const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "rLineTo", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Path::quadTo(float arg0, float arg1, float arg2, float arg3) const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "quadTo", "(FFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::Path::rQuadTo(float arg0, float arg1, float arg2, float arg3) const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "rQuadTo", "(FFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::Path::cubicTo(float arg0, float arg1, float arg2, float arg3, float arg4, float arg5) const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "cubicTo", "(FFFFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    float _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::graphics::Path::rCubicTo(float arg0, float arg1, float arg2, float arg3, float arg4, float arg5) const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "rCubicTo", "(FFFFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    float _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::graphics::Path::arcTo(const ::android::graphics::RectF& arg0, float arg1, float arg2, bool arg3) const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "arcTo", "(Landroid/graphics/RectF;FFZ)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    bool _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::Path::arcTo(const ::android::graphics::RectF& arg0, float arg1, float arg2) const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "arcTo", "(Landroid/graphics/RectF;FF)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::graphics::Path::close() const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::graphics::Path::addRect(const ::android::graphics::RectF& arg0, const ::android::graphics::Path_Direction& arg1) const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "addRect", "(Landroid/graphics/RectF;Landroid/graphics/Path$Direction;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Path::addRect(float arg0, float arg1, float arg2, float arg3, const ::android::graphics::Path_Direction& arg4) const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "addRect", "(FFFFLandroid/graphics/Path$Direction;)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::graphics::Path::addOval(const ::android::graphics::RectF& arg0, const ::android::graphics::Path_Direction& arg1) const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "addOval", "(Landroid/graphics/RectF;Landroid/graphics/Path$Direction;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Path::addCircle(float arg0, float arg1, float arg2, const ::android::graphics::Path_Direction& arg3) const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "addCircle", "(FFFLandroid/graphics/Path$Direction;)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::Path::addArc(const ::android::graphics::RectF& arg0, float arg1, float arg2) const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "addArc", "(Landroid/graphics/RectF;FF)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::graphics::Path::addRoundRect(const ::android::graphics::RectF& arg0, float arg1, float arg2, const ::android::graphics::Path_Direction& arg3) const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "addRoundRect", "(Landroid/graphics/RectF;FFLandroid/graphics/Path$Direction;)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::Path::addRoundRect(const ::android::graphics::RectF& arg0, const std::vector< float>& arg1, const ::android::graphics::Path_Direction& arg2) const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "addRoundRect", "(Landroid/graphics/RectF;[FLandroid/graphics/Path$Direction;)V");
    jobject _arg0 = arg0.obj;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::graphics::Path::addPath(const ::android::graphics::Path& arg0, float arg1, float arg2) const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPath", "(Landroid/graphics/Path;FF)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::graphics::Path::addPath(const ::android::graphics::Path& arg0) const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPath", "(Landroid/graphics/Path;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::Path::addPath(const ::android::graphics::Path& arg0, const ::android::graphics::Matrix& arg1) const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPath", "(Landroid/graphics/Path;Landroid/graphics/Matrix;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Path::offset(float arg0, float arg1, const ::android::graphics::Path& arg2) const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "offset", "(FFLandroid/graphics/Path;)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::graphics::Path::offset(float arg0, float arg1) const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "offset", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Path::setLastPoint(float arg0, float arg1) const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLastPoint", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Path::transform(const ::android::graphics::Matrix& arg0, const ::android::graphics::Path& arg1) const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "transform", "(Landroid/graphics/Matrix;Landroid/graphics/Path;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Path::transform(const ::android::graphics::Matrix& arg0) const {
    if (!::android::graphics::Path::_class) ::android::graphics::Path::_class = java::fetch_class("android/graphics/Path");
    static jmethodID mid = java::jni->GetMethodID(_class, "transform", "(Landroid/graphics/Matrix;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::ComposePathEffect::ComposePathEffect(const ::android::graphics::PathEffect& arg0, const ::android::graphics::PathEffect& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::PathEffect((jobject)0) {
    if (!::android::graphics::ComposePathEffect::_class) ::android::graphics::ComposePathEffect::_class = java::fetch_class("android/graphics/ComposePathEffect");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/PathEffect;Landroid/graphics/PathEffect;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::LayerRasterizer::LayerRasterizer() : ::java::lang::Object((jobject)0), ::android::graphics::Rasterizer((jobject)0) {
    if (!::android::graphics::LayerRasterizer::_class) ::android::graphics::LayerRasterizer::_class = java::fetch_class("android/graphics/LayerRasterizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::graphics::LayerRasterizer::addLayer(const ::android::graphics::Paint& arg0, float arg1, float arg2) const {
    if (!::android::graphics::LayerRasterizer::_class) ::android::graphics::LayerRasterizer::_class = java::fetch_class("android/graphics/LayerRasterizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "addLayer", "(Landroid/graphics/Paint;FF)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::graphics::LayerRasterizer::addLayer(const ::android::graphics::Paint& arg0) const {
    if (!::android::graphics::LayerRasterizer::_class) ::android::graphics::LayerRasterizer::_class = java::fetch_class("android/graphics/LayerRasterizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "addLayer", "(Landroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::Picture::Picture() : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::Picture::_class) ::android::graphics::Picture::_class = java::fetch_class("android/graphics/Picture");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::graphics::Canvas android::graphics::Picture::beginRecording(int32_t arg0, int32_t arg1) const {
    if (!::android::graphics::Picture::_class) ::android::graphics::Picture::_class = java::fetch_class("android/graphics/Picture");
    static jmethodID mid = java::jni->GetMethodID(_class, "beginRecording", "(II)Landroid/graphics/Canvas;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::graphics::Canvas _ret(ret);
    return _ret;
}

void android::graphics::Picture::endRecording() const {
    if (!::android::graphics::Picture::_class) ::android::graphics::Picture::_class = java::fetch_class("android/graphics/Picture");
    static jmethodID mid = java::jni->GetMethodID(_class, "endRecording", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::graphics::Picture::getWidth() const {
    if (!::android::graphics::Picture::_class) ::android::graphics::Picture::_class = java::fetch_class("android/graphics/Picture");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::Picture::getHeight() const {
    if (!::android::graphics::Picture::_class) ::android::graphics::Picture::_class = java::fetch_class("android/graphics/Picture");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::Picture::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::graphics::Picture::_class) ::android::graphics::Picture::_class = java::fetch_class("android/graphics/Picture");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::Picture android::graphics::Picture::createFromStream(const ::java::io::InputStream& arg0){
    if (!::android::graphics::Picture::_class) ::android::graphics::Picture::_class = java::fetch_class("android/graphics/Picture");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createFromStream", "(Ljava/io/InputStream;)Landroid/graphics/Picture;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::Picture _ret(ret);
    return _ret;
}

void android::graphics::Picture::writeToStream(const ::java::io::OutputStream& arg0) const {
    if (!::android::graphics::Picture::_class) ::android::graphics::Picture::_class = java::fetch_class("android/graphics/Picture");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToStream", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::android::graphics::Paint_Join> android::graphics::Paint_Join::values(){
    if (!::android::graphics::Paint_Join::_class) ::android::graphics::Paint_Join::_class = java::fetch_class("android/graphics/Paint$Join");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/graphics/Paint$Join;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::graphics::Paint_Join> _ret(rets, ::android::graphics::Paint_Join((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::graphics::Paint_Join retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::graphics::Paint_Join android::graphics::Paint_Join::valueOf(const ::java::lang::String& arg0){
    if (!::android::graphics::Paint_Join::_class) ::android::graphics::Paint_Join::_class = java::fetch_class("android/graphics/Paint$Join");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/graphics/Paint$Join;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::Paint_Join _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::BitmapShader::BitmapShader(const ::android::graphics::Bitmap& arg0, const ::android::graphics::Shader_TileMode& arg1, const ::android::graphics::Shader_TileMode& arg2) : ::java::lang::Object((jobject)0), ::android::graphics::Shader((jobject)0) {
    if (!::android::graphics::BitmapShader::_class) ::android::graphics::BitmapShader::_class = java::fetch_class("android/graphics/BitmapShader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/Bitmap;Landroid/graphics/Shader$TileMode;Landroid/graphics/Shader$TileMode;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::Paint::Paint() : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::Paint::Paint(int32_t arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::graphics::Paint::reset() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::graphics::Paint::set(const ::android::graphics::Paint& arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(Landroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::Paint::getFlags() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFlags", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::Paint::setFlags(int32_t arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFlags", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::Paint::getHinting() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHinting", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::Paint::setHinting(int32_t arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHinting", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::graphics::Paint::isAntiAlias() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAntiAlias", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::graphics::Paint::setAntiAlias(bool arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAntiAlias", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::graphics::Paint::isDither() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDither", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::graphics::Paint::setDither(bool arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDither", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::graphics::Paint::isLinearText() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLinearText", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::graphics::Paint::setLinearText(bool arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLinearText", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::graphics::Paint::isSubpixelText() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSubpixelText", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::graphics::Paint::setSubpixelText(bool arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSubpixelText", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::graphics::Paint::isUnderlineText() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "isUnderlineText", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::graphics::Paint::setUnderlineText(bool arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUnderlineText", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::graphics::Paint::isStrikeThruText() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStrikeThruText", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::graphics::Paint::setStrikeThruText(bool arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStrikeThruText", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::graphics::Paint::isFakeBoldText() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFakeBoldText", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::graphics::Paint::setFakeBoldText(bool arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFakeBoldText", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::graphics::Paint::isFilterBitmap() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFilterBitmap", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::graphics::Paint::setFilterBitmap(bool arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFilterBitmap", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::Paint_Style android::graphics::Paint::getStyle() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStyle", "()Landroid/graphics/Paint$Style;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Paint_Style _ret(ret);
    return _ret;
}

void android::graphics::Paint::setStyle(const ::android::graphics::Paint_Style& arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStyle", "(Landroid/graphics/Paint$Style;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::Paint::getColor() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColor", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::Paint::setColor(int32_t arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::Paint::getAlpha() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlpha", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::Paint::setAlpha(int32_t arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAlpha", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::Paint::setARGB(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "setARGB", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

float android::graphics::Paint::getStrokeWidth() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStrokeWidth", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::graphics::Paint::setStrokeWidth(float arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStrokeWidth", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::graphics::Paint::getStrokeMiter() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStrokeMiter", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::graphics::Paint::setStrokeMiter(float arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStrokeMiter", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::Paint_Cap android::graphics::Paint::getStrokeCap() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStrokeCap", "()Landroid/graphics/Paint$Cap;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Paint_Cap _ret(ret);
    return _ret;
}

void android::graphics::Paint::setStrokeCap(const ::android::graphics::Paint_Cap& arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStrokeCap", "(Landroid/graphics/Paint$Cap;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::Paint_Join android::graphics::Paint::getStrokeJoin() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStrokeJoin", "()Landroid/graphics/Paint$Join;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Paint_Join _ret(ret);
    return _ret;
}

void android::graphics::Paint::setStrokeJoin(const ::android::graphics::Paint_Join& arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStrokeJoin", "(Landroid/graphics/Paint$Join;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::graphics::Paint::getFillPath(const ::android::graphics::Path& arg0, const ::android::graphics::Path& arg1) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFillPath", "(Landroid/graphics/Path;Landroid/graphics/Path;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::android::graphics::Shader android::graphics::Paint::getShader() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShader", "()Landroid/graphics/Shader;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Shader _ret(ret);
    return _ret;
}

::android::graphics::Shader android::graphics::Paint::setShader(const ::android::graphics::Shader& arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShader", "(Landroid/graphics/Shader;)Landroid/graphics/Shader;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::Shader _ret(ret);
    return _ret;
}

::android::graphics::ColorFilter android::graphics::Paint::getColorFilter() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColorFilter", "()Landroid/graphics/ColorFilter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::ColorFilter _ret(ret);
    return _ret;
}

::android::graphics::ColorFilter android::graphics::Paint::setColorFilter(const ::android::graphics::ColorFilter& arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorFilter", "(Landroid/graphics/ColorFilter;)Landroid/graphics/ColorFilter;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::ColorFilter _ret(ret);
    return _ret;
}

::android::graphics::Xfermode android::graphics::Paint::getXfermode() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getXfermode", "()Landroid/graphics/Xfermode;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Xfermode _ret(ret);
    return _ret;
}

::android::graphics::Xfermode android::graphics::Paint::setXfermode(const ::android::graphics::Xfermode& arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "setXfermode", "(Landroid/graphics/Xfermode;)Landroid/graphics/Xfermode;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::Xfermode _ret(ret);
    return _ret;
}

::android::graphics::PathEffect android::graphics::Paint::getPathEffect() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPathEffect", "()Landroid/graphics/PathEffect;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::PathEffect _ret(ret);
    return _ret;
}

::android::graphics::PathEffect android::graphics::Paint::setPathEffect(const ::android::graphics::PathEffect& arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPathEffect", "(Landroid/graphics/PathEffect;)Landroid/graphics/PathEffect;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::PathEffect _ret(ret);
    return _ret;
}

::android::graphics::MaskFilter android::graphics::Paint::getMaskFilter() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaskFilter", "()Landroid/graphics/MaskFilter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::MaskFilter _ret(ret);
    return _ret;
}

::android::graphics::MaskFilter android::graphics::Paint::setMaskFilter(const ::android::graphics::MaskFilter& arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaskFilter", "(Landroid/graphics/MaskFilter;)Landroid/graphics/MaskFilter;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::MaskFilter _ret(ret);
    return _ret;
}

::android::graphics::Typeface android::graphics::Paint::getTypeface() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTypeface", "()Landroid/graphics/Typeface;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Typeface _ret(ret);
    return _ret;
}

::android::graphics::Typeface android::graphics::Paint::setTypeface(const ::android::graphics::Typeface& arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTypeface", "(Landroid/graphics/Typeface;)Landroid/graphics/Typeface;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::Typeface _ret(ret);
    return _ret;
}

::android::graphics::Rasterizer android::graphics::Paint::getRasterizer() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRasterizer", "()Landroid/graphics/Rasterizer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Rasterizer _ret(ret);
    return _ret;
}

::android::graphics::Rasterizer android::graphics::Paint::setRasterizer(const ::android::graphics::Rasterizer& arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRasterizer", "(Landroid/graphics/Rasterizer;)Landroid/graphics/Rasterizer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::Rasterizer _ret(ret);
    return _ret;
}

void android::graphics::Paint::setShadowLayer(float arg0, float arg1, float arg2, int32_t arg3) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShadowLayer", "(FFFI)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::Paint::clearShadowLayer() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearShadowLayer", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::graphics::Paint_Align android::graphics::Paint::getTextAlign() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextAlign", "()Landroid/graphics/Paint$Align;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Paint_Align _ret(ret);
    return _ret;
}

void android::graphics::Paint::setTextAlign(const ::android::graphics::Paint_Align& arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTextAlign", "(Landroid/graphics/Paint$Align;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::graphics::Paint::getTextSize() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextSize", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::graphics::Paint::setTextSize(float arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTextSize", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::graphics::Paint::getTextScaleX() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextScaleX", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::graphics::Paint::setTextScaleX(float arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTextScaleX", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::graphics::Paint::getTextSkewX() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextSkewX", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::graphics::Paint::setTextSkewX(float arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTextSkewX", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::graphics::Paint::ascent() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "ascent", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::graphics::Paint::descent() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "descent", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::graphics::Paint::getFontMetrics(const ::android::graphics::Paint_FontMetrics& arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFontMetrics", "(Landroid/graphics/Paint$FontMetrics;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

::android::graphics::Paint_FontMetrics android::graphics::Paint::getFontMetrics() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFontMetrics", "()Landroid/graphics/Paint$FontMetrics;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Paint_FontMetrics _ret(ret);
    return _ret;
}

int32_t android::graphics::Paint::getFontMetricsInt(const ::android::graphics::Paint_FontMetricsInt& arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFontMetricsInt", "(Landroid/graphics/Paint$FontMetricsInt;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::graphics::Paint_FontMetricsInt android::graphics::Paint::getFontMetricsInt() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFontMetricsInt", "()Landroid/graphics/Paint$FontMetricsInt;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Paint_FontMetricsInt _ret(ret);
    return _ret;
}

float android::graphics::Paint::getFontSpacing() const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFontSpacing", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::graphics::Paint::measureText(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "measureText", "([CII)F");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1, _arg2);
}

float android::graphics::Paint::measureText(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "measureText", "(Ljava/lang/String;II)F");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1, _arg2);
}

float android::graphics::Paint::measureText(const ::java::lang::String& arg0) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "measureText", "(Ljava/lang/String;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::graphics::Paint::measureText(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "measureText", "(Ljava/lang/CharSequence;II)F");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::graphics::Paint::breakText(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2, float arg3, const std::vector< float>& arg4) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "breakText", "([CIIF[F)I");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    float _arg3 = arg3;
    jfloatArray _arg4 = java::jni->NewFloatArray(arg4.size());
    java::jni->SetFloatArrayRegion(_arg4, 0, arg4.size(), arg4.data());
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

int32_t android::graphics::Paint::breakText(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2, bool arg3, float arg4, const std::vector< float>& arg5) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "breakText", "(Ljava/lang/CharSequence;IIZF[F)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    bool _arg3 = arg3;
    float _arg4 = arg4;
    jfloatArray _arg5 = java::jni->NewFloatArray(arg5.size());
    java::jni->SetFloatArrayRegion(_arg5, 0, arg5.size(), arg5.data());
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

int32_t android::graphics::Paint::breakText(const ::java::lang::String& arg0, bool arg1, float arg2, const std::vector< float>& arg3) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "breakText", "(Ljava/lang/String;ZF[F)I");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    float _arg2 = arg2;
    jfloatArray _arg3 = java::jni->NewFloatArray(arg3.size());
    java::jni->SetFloatArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::graphics::Paint::getTextWidths(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2, const std::vector< float>& arg3) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextWidths", "([CII[F)I");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jfloatArray _arg3 = java::jni->NewFloatArray(arg3.size());
    java::jni->SetFloatArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::graphics::Paint::getTextWidths(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2, const std::vector< float>& arg3) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextWidths", "(Ljava/lang/CharSequence;II[F)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jfloatArray _arg3 = java::jni->NewFloatArray(arg3.size());
    java::jni->SetFloatArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::graphics::Paint::getTextWidths(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2, const std::vector< float>& arg3) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextWidths", "(Ljava/lang/String;II[F)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jfloatArray _arg3 = java::jni->NewFloatArray(arg3.size());
    java::jni->SetFloatArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::graphics::Paint::getTextWidths(const ::java::lang::String& arg0, const std::vector< float>& arg1) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextWidths", "(Ljava/lang/String;[F)I");
    jobject _arg0 = arg0.obj;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Paint::getTextPath(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2, float arg3, float arg4, const ::android::graphics::Path& arg5) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextPath", "([CIIFFLandroid/graphics/Path;)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::graphics::Paint::getTextPath(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2, float arg3, float arg4, const ::android::graphics::Path& arg5) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextPath", "(Ljava/lang/String;IIFFLandroid/graphics/Path;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::graphics::Paint::getTextBounds(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2, const ::android::graphics::Rect& arg3) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextBounds", "(Ljava/lang/String;IILandroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::Paint::getTextBounds(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2, const ::android::graphics::Rect& arg3) const {
    if (!::android::graphics::Paint::_class) ::android::graphics::Paint::_class = java::fetch_class("android/graphics/Paint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextBounds", "([CIILandroid/graphics/Rect;)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::ImageFormat::ImageFormat() : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::ImageFormat::_class) ::android::graphics::ImageFormat::_class = java::fetch_class("android/graphics/ImageFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::graphics::ImageFormat::getBitsPerPixel(int32_t arg0){
    if (!::android::graphics::ImageFormat::_class) ::android::graphics::ImageFormat::_class = java::fetch_class("android/graphics/ImageFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getBitsPerPixel", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::NinePatch::NinePatch(const ::android::graphics::Bitmap& arg0, const std::vector< int8_t>& arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::NinePatch::_class) ::android::graphics::NinePatch::_class = java::fetch_class("android/graphics/NinePatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/Bitmap;[BLjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::graphics::NinePatch::setPaint(const ::android::graphics::Paint& arg0) const {
    if (!::android::graphics::NinePatch::_class) ::android::graphics::NinePatch::_class = java::fetch_class("android/graphics/NinePatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPaint", "(Landroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::NinePatch::draw(const ::android::graphics::Canvas& arg0, const ::android::graphics::RectF& arg1) const {
    if (!::android::graphics::NinePatch::_class) ::android::graphics::NinePatch::_class = java::fetch_class("android/graphics/NinePatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;Landroid/graphics/RectF;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::NinePatch::draw(const ::android::graphics::Canvas& arg0, const ::android::graphics::Rect& arg1) const {
    if (!::android::graphics::NinePatch::_class) ::android::graphics::NinePatch::_class = java::fetch_class("android/graphics/NinePatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::NinePatch::draw(const ::android::graphics::Canvas& arg0, const ::android::graphics::Rect& arg1, const ::android::graphics::Paint& arg2) const {
    if (!::android::graphics::NinePatch::_class) ::android::graphics::NinePatch::_class = java::fetch_class("android/graphics/NinePatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;Landroid/graphics/Rect;Landroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::graphics::NinePatch::getDensity() const {
    if (!::android::graphics::NinePatch::_class) ::android::graphics::NinePatch::_class = java::fetch_class("android/graphics/NinePatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDensity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::NinePatch::getWidth() const {
    if (!::android::graphics::NinePatch::_class) ::android::graphics::NinePatch::_class = java::fetch_class("android/graphics/NinePatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::NinePatch::getHeight() const {
    if (!::android::graphics::NinePatch::_class) ::android::graphics::NinePatch::_class = java::fetch_class("android/graphics/NinePatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::graphics::NinePatch::hasAlpha() const {
    if (!::android::graphics::NinePatch::_class) ::android::graphics::NinePatch::_class = java::fetch_class("android/graphics/NinePatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasAlpha", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::graphics::Region android::graphics::NinePatch::getTransparentRegion(const ::android::graphics::Rect& arg0) const {
    if (!::android::graphics::NinePatch::_class) ::android::graphics::NinePatch::_class = java::fetch_class("android/graphics/NinePatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTransparentRegion", "(Landroid/graphics/Rect;)Landroid/graphics/Region;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::Region _ret(ret);
    return _ret;
}

bool android::graphics::NinePatch::isNinePatchChunk(const std::vector< int8_t>& arg0){
    if (!::android::graphics::NinePatch::_class) ::android::graphics::NinePatch::_class = java::fetch_class("android/graphics/NinePatch");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isNinePatchChunk", "([B)Z");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::Canvas::Canvas() : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::Canvas::Canvas(const ::android::graphics::Bitmap& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/Bitmap;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool android::graphics::Canvas::isHardwareAccelerated() const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "isHardwareAccelerated", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::graphics::Canvas::setBitmap(const ::android::graphics::Bitmap& arg0) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBitmap", "(Landroid/graphics/Bitmap;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::graphics::Canvas::isOpaque() const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOpaque", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::graphics::Canvas::getWidth() const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::Canvas::getHeight() const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::Canvas::getDensity() const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDensity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::Canvas::setDensity(int32_t arg0) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDensity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::Canvas::getMaximumBitmapWidth() const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaximumBitmapWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::Canvas::getMaximumBitmapHeight() const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaximumBitmapHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::Canvas::save() const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "save", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::Canvas::save(int32_t arg0) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "save", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::graphics::Canvas::saveLayer(const ::android::graphics::RectF& arg0, const ::android::graphics::Paint& arg1, int32_t arg2) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "saveLayer", "(Landroid/graphics/RectF;Landroid/graphics/Paint;I)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::graphics::Canvas::saveLayer(float arg0, float arg1, float arg2, float arg3, const ::android::graphics::Paint& arg4, int32_t arg5) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "saveLayer", "(FFFFLandroid/graphics/Paint;I)I");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    int32_t _arg5 = arg5;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

int32_t android::graphics::Canvas::saveLayerAlpha(const ::android::graphics::RectF& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "saveLayerAlpha", "(Landroid/graphics/RectF;II)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::graphics::Canvas::saveLayerAlpha(float arg0, float arg1, float arg2, float arg3, int32_t arg4, int32_t arg5) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "saveLayerAlpha", "(FFFFII)I");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::graphics::Canvas::restore() const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "restore", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::graphics::Canvas::getSaveCount() const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSaveCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::Canvas::restoreToCount(int32_t arg0) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "restoreToCount", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::Canvas::translate(float arg0, float arg1) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "translate", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Canvas::scale(float arg0, float arg1) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "scale", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Canvas::scale(float arg0, float arg1, float arg2, float arg3) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "scale", "(FFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::Canvas::rotate(float arg0) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotate", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::Canvas::rotate(float arg0, float arg1, float arg2) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotate", "(FFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::graphics::Canvas::skew(float arg0, float arg1) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "skew", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Canvas::concat(const ::android::graphics::Matrix& arg0) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "concat", "(Landroid/graphics/Matrix;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::Canvas::setMatrix(const ::android::graphics::Matrix& arg0) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMatrix", "(Landroid/graphics/Matrix;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::Canvas::getMatrix(const ::android::graphics::Matrix& arg0) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMatrix", "(Landroid/graphics/Matrix;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::Matrix android::graphics::Canvas::getMatrix() const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMatrix", "()Landroid/graphics/Matrix;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Matrix _ret(ret);
    return _ret;
}

bool android::graphics::Canvas::clipRect(const ::android::graphics::RectF& arg0, const ::android::graphics::Region_Op& arg1) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "clipRect", "(Landroid/graphics/RectF;Landroid/graphics/Region$Op;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::Canvas::clipRect(const ::android::graphics::Rect& arg0, const ::android::graphics::Region_Op& arg1) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "clipRect", "(Landroid/graphics/Rect;Landroid/graphics/Region$Op;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::Canvas::clipRect(const ::android::graphics::RectF& arg0) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "clipRect", "(Landroid/graphics/RectF;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::graphics::Canvas::clipRect(const ::android::graphics::Rect& arg0) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "clipRect", "(Landroid/graphics/Rect;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::graphics::Canvas::clipRect(float arg0, float arg1, float arg2, float arg3, const ::android::graphics::Region_Op& arg4) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "clipRect", "(FFFFLandroid/graphics/Region$Op;)Z");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

bool android::graphics::Canvas::clipRect(float arg0, float arg1, float arg2, float arg3) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "clipRect", "(FFFF)Z");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::graphics::Canvas::clipRect(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "clipRect", "(IIII)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::graphics::Canvas::clipPath(const ::android::graphics::Path& arg0, const ::android::graphics::Region_Op& arg1) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "clipPath", "(Landroid/graphics/Path;Landroid/graphics/Region$Op;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::Canvas::clipPath(const ::android::graphics::Path& arg0) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "clipPath", "(Landroid/graphics/Path;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::graphics::Canvas::clipRegion(const ::android::graphics::Region& arg0, const ::android::graphics::Region_Op& arg1) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "clipRegion", "(Landroid/graphics/Region;Landroid/graphics/Region$Op;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::Canvas::clipRegion(const ::android::graphics::Region& arg0) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "clipRegion", "(Landroid/graphics/Region;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::graphics::DrawFilter android::graphics::Canvas::getDrawFilter() const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDrawFilter", "()Landroid/graphics/DrawFilter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::DrawFilter _ret(ret);
    return _ret;
}

void android::graphics::Canvas::setDrawFilter(const ::android::graphics::DrawFilter& arg0) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDrawFilter", "(Landroid/graphics/DrawFilter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::graphics::Canvas::quickReject(const ::android::graphics::RectF& arg0, const ::android::graphics::Canvas_EdgeType& arg1) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "quickReject", "(Landroid/graphics/RectF;Landroid/graphics/Canvas$EdgeType;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::Canvas::quickReject(const ::android::graphics::Path& arg0, const ::android::graphics::Canvas_EdgeType& arg1) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "quickReject", "(Landroid/graphics/Path;Landroid/graphics/Canvas$EdgeType;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::Canvas::quickReject(float arg0, float arg1, float arg2, float arg3, const ::android::graphics::Canvas_EdgeType& arg4) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "quickReject", "(FFFFLandroid/graphics/Canvas$EdgeType;)Z");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

bool android::graphics::Canvas::getClipBounds(const ::android::graphics::Rect& arg0) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClipBounds", "(Landroid/graphics/Rect;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::graphics::Rect android::graphics::Canvas::getClipBounds() const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClipBounds", "()Landroid/graphics/Rect;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Rect _ret(ret);
    return _ret;
}

void android::graphics::Canvas::drawRGB(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawRGB", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::graphics::Canvas::drawARGB(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawARGB", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::Canvas::drawColor(int32_t arg0) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawColor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::Canvas::drawColor(int32_t arg0, const ::android::graphics::PorterDuff_Mode& arg1) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawColor", "(ILandroid/graphics/PorterDuff$Mode;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Canvas::drawPaint(const ::android::graphics::Paint& arg0) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawPaint", "(Landroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::Canvas::drawPoints(const std::vector< float>& arg0, int32_t arg1, int32_t arg2, const ::android::graphics::Paint& arg3) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawPoints", "([FIILandroid/graphics/Paint;)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::Canvas::drawPoints(const std::vector< float>& arg0, const ::android::graphics::Paint& arg1) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawPoints", "([FLandroid/graphics/Paint;)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Canvas::drawPoint(float arg0, float arg1, const ::android::graphics::Paint& arg2) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawPoint", "(FFLandroid/graphics/Paint;)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::graphics::Canvas::drawLine(float arg0, float arg1, float arg2, float arg3, const ::android::graphics::Paint& arg4) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawLine", "(FFFFLandroid/graphics/Paint;)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::graphics::Canvas::drawLines(const std::vector< float>& arg0, int32_t arg1, int32_t arg2, const ::android::graphics::Paint& arg3) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawLines", "([FIILandroid/graphics/Paint;)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::Canvas::drawLines(const std::vector< float>& arg0, const ::android::graphics::Paint& arg1) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawLines", "([FLandroid/graphics/Paint;)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Canvas::drawRect(const ::android::graphics::RectF& arg0, const ::android::graphics::Paint& arg1) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawRect", "(Landroid/graphics/RectF;Landroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Canvas::drawRect(const ::android::graphics::Rect& arg0, const ::android::graphics::Paint& arg1) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawRect", "(Landroid/graphics/Rect;Landroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Canvas::drawRect(float arg0, float arg1, float arg2, float arg3, const ::android::graphics::Paint& arg4) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawRect", "(FFFFLandroid/graphics/Paint;)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::graphics::Canvas::drawOval(const ::android::graphics::RectF& arg0, const ::android::graphics::Paint& arg1) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawOval", "(Landroid/graphics/RectF;Landroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Canvas::drawCircle(float arg0, float arg1, float arg2, const ::android::graphics::Paint& arg3) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawCircle", "(FFFLandroid/graphics/Paint;)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::Canvas::drawArc(const ::android::graphics::RectF& arg0, float arg1, float arg2, bool arg3, const ::android::graphics::Paint& arg4) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawArc", "(Landroid/graphics/RectF;FFZLandroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    bool _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::graphics::Canvas::drawRoundRect(const ::android::graphics::RectF& arg0, float arg1, float arg2, const ::android::graphics::Paint& arg3) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawRoundRect", "(Landroid/graphics/RectF;FFLandroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::Canvas::drawPath(const ::android::graphics::Path& arg0, const ::android::graphics::Paint& arg1) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawPath", "(Landroid/graphics/Path;Landroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Canvas::drawBitmap(const ::android::graphics::Bitmap& arg0, float arg1, float arg2, const ::android::graphics::Paint& arg3) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawBitmap", "(Landroid/graphics/Bitmap;FFLandroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::Canvas::drawBitmap(const ::android::graphics::Bitmap& arg0, const ::android::graphics::Rect& arg1, const ::android::graphics::RectF& arg2, const ::android::graphics::Paint& arg3) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawBitmap", "(Landroid/graphics/Bitmap;Landroid/graphics/Rect;Landroid/graphics/RectF;Landroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::Canvas::drawBitmap(const ::android::graphics::Bitmap& arg0, const ::android::graphics::Rect& arg1, const ::android::graphics::Rect& arg2, const ::android::graphics::Paint& arg3) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawBitmap", "(Landroid/graphics/Bitmap;Landroid/graphics/Rect;Landroid/graphics/Rect;Landroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::Canvas::drawBitmap(const std::vector< int32_t>& arg0, int32_t arg1, int32_t arg2, float arg3, float arg4, int32_t arg5, int32_t arg6, bool arg7, const ::android::graphics::Paint& arg8) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawBitmap", "([IIIFFIIZLandroid/graphics/Paint;)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    bool _arg7 = arg7;
    jobject _arg8 = arg8.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
}

void android::graphics::Canvas::drawBitmap(const std::vector< int32_t>& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, bool arg7, const ::android::graphics::Paint& arg8) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawBitmap", "([IIIIIIIZLandroid/graphics/Paint;)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    bool _arg7 = arg7;
    jobject _arg8 = arg8.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
}

void android::graphics::Canvas::drawBitmap(const ::android::graphics::Bitmap& arg0, const ::android::graphics::Matrix& arg1, const ::android::graphics::Paint& arg2) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawBitmap", "(Landroid/graphics/Bitmap;Landroid/graphics/Matrix;Landroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::graphics::Canvas::drawBitmapMesh(const ::android::graphics::Bitmap& arg0, int32_t arg1, int32_t arg2, const std::vector< float>& arg3, int32_t arg4, const std::vector< int32_t>& arg5, int32_t arg6, const ::android::graphics::Paint& arg7) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawBitmapMesh", "(Landroid/graphics/Bitmap;II[FI[IILandroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jfloatArray _arg3 = java::jni->NewFloatArray(arg3.size());
    java::jni->SetFloatArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    int32_t _arg4 = arg4;
    jintArray _arg5 = java::jni->NewIntArray(arg5.size());
    java::jni->SetIntArrayRegion(_arg5, 0, arg5.size(), arg5.data());
    int32_t _arg6 = arg6;
    jobject _arg7 = arg7.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
}

void android::graphics::Canvas::drawVertices(const ::android::graphics::Canvas_VertexMode& arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3, const std::vector< float>& arg4, int32_t arg5, const std::vector< int32_t>& arg6, int32_t arg7, const std::vector< int16_t>& arg8, int32_t arg9, int32_t arg10, const ::android::graphics::Paint& arg11) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawVertices", "(Landroid/graphics/Canvas$VertexMode;I[FI[FI[II[SIILandroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    jfloatArray _arg4 = java::jni->NewFloatArray(arg4.size());
    java::jni->SetFloatArrayRegion(_arg4, 0, arg4.size(), arg4.data());
    int32_t _arg5 = arg5;
    jintArray _arg6 = java::jni->NewIntArray(arg6.size());
    java::jni->SetIntArrayRegion(_arg6, 0, arg6.size(), arg6.data());
    int32_t _arg7 = arg7;
    jshortArray _arg8 = java::jni->NewShortArray(arg8.size());
    java::jni->SetShortArrayRegion(_arg8, 0, arg8.size(), arg8.data());
    int32_t _arg9 = arg9;
    int32_t _arg10 = arg10;
    jobject _arg11 = arg11.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9, _arg10, _arg11);
}

void android::graphics::Canvas::drawText(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2, float arg3, float arg4, const ::android::graphics::Paint& arg5) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawText", "([CIIFFLandroid/graphics/Paint;)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::graphics::Canvas::drawText(const ::java::lang::String& arg0, float arg1, float arg2, const ::android::graphics::Paint& arg3) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawText", "(Ljava/lang/String;FFLandroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::Canvas::drawText(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2, float arg3, float arg4, const ::android::graphics::Paint& arg5) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawText", "(Ljava/lang/String;IIFFLandroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::graphics::Canvas::drawText(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2, float arg3, float arg4, const ::android::graphics::Paint& arg5) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawText", "(Ljava/lang/CharSequence;IIFFLandroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::graphics::Canvas::drawPosText(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2, const std::vector< float>& arg3, const ::android::graphics::Paint& arg4) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawPosText", "([CII[FLandroid/graphics/Paint;)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jfloatArray _arg3 = java::jni->NewFloatArray(arg3.size());
    java::jni->SetFloatArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::graphics::Canvas::drawPosText(const ::java::lang::String& arg0, const std::vector< float>& arg1, const ::android::graphics::Paint& arg2) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawPosText", "(Ljava/lang/String;[FLandroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::graphics::Canvas::drawTextOnPath(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2, const ::android::graphics::Path& arg3, float arg4, float arg5, const ::android::graphics::Paint& arg6) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawTextOnPath", "([CIILandroid/graphics/Path;FFLandroid/graphics/Paint;)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    float _arg4 = arg4;
    float _arg5 = arg5;
    jobject _arg6 = arg6.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}

void android::graphics::Canvas::drawTextOnPath(const ::java::lang::String& arg0, const ::android::graphics::Path& arg1, float arg2, float arg3, const ::android::graphics::Paint& arg4) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawTextOnPath", "(Ljava/lang/String;Landroid/graphics/Path;FFLandroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    float _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::graphics::Canvas::drawPicture(const ::android::graphics::Picture& arg0) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawPicture", "(Landroid/graphics/Picture;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::Canvas::drawPicture(const ::android::graphics::Picture& arg0, const ::android::graphics::RectF& arg1) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawPicture", "(Landroid/graphics/Picture;Landroid/graphics/RectF;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Canvas::drawPicture(const ::android::graphics::Picture& arg0, const ::android::graphics::Rect& arg1) const {
    if (!::android::graphics::Canvas::_class) ::android::graphics::Canvas::_class = java::fetch_class("android/graphics/Canvas");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawPicture", "(Landroid/graphics/Picture;Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::PathEffect::PathEffect() : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::PathEffect::_class) ::android::graphics::PathEffect::_class = java::fetch_class("android/graphics/PathEffect");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::graphics::Movie::width() const {
    if (!::android::graphics::Movie::_class) ::android::graphics::Movie::_class = java::fetch_class("android/graphics/Movie");
    static jmethodID mid = java::jni->GetMethodID(_class, "width", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::Movie::height() const {
    if (!::android::graphics::Movie::_class) ::android::graphics::Movie::_class = java::fetch_class("android/graphics/Movie");
    static jmethodID mid = java::jni->GetMethodID(_class, "height", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::graphics::Movie::isOpaque() const {
    if (!::android::graphics::Movie::_class) ::android::graphics::Movie::_class = java::fetch_class("android/graphics/Movie");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOpaque", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::graphics::Movie::duration() const {
    if (!::android::graphics::Movie::_class) ::android::graphics::Movie::_class = java::fetch_class("android/graphics/Movie");
    static jmethodID mid = java::jni->GetMethodID(_class, "duration", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::graphics::Movie::setTime(int32_t arg0) const {
    if (!::android::graphics::Movie::_class) ::android::graphics::Movie::_class = java::fetch_class("android/graphics/Movie");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTime", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::graphics::Movie::draw(const ::android::graphics::Canvas& arg0, float arg1, float arg2, const ::android::graphics::Paint& arg3) const {
    if (!::android::graphics::Movie::_class) ::android::graphics::Movie::_class = java::fetch_class("android/graphics/Movie");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;FFLandroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::Movie::draw(const ::android::graphics::Canvas& arg0, float arg1, float arg2) const {
    if (!::android::graphics::Movie::_class) ::android::graphics::Movie::_class = java::fetch_class("android/graphics/Movie");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;FF)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::graphics::Movie android::graphics::Movie::decodeStream(const ::java::io::InputStream& arg0){
    if (!::android::graphics::Movie::_class) ::android::graphics::Movie::_class = java::fetch_class("android/graphics/Movie");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "decodeStream", "(Ljava/io/InputStream;)Landroid/graphics/Movie;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::Movie _ret(ret);
    return _ret;
}

::android::graphics::Movie android::graphics::Movie::decodeByteArray(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2){
    if (!::android::graphics::Movie::_class) ::android::graphics::Movie::_class = java::fetch_class("android/graphics/Movie");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "decodeByteArray", "([BII)Landroid/graphics/Movie;");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::graphics::Movie _ret(ret);
    return _ret;
}

::android::graphics::Movie android::graphics::Movie::decodeFile(const ::java::lang::String& arg0){
    if (!::android::graphics::Movie::_class) ::android::graphics::Movie::_class = java::fetch_class("android/graphics/Movie");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "decodeFile", "(Ljava/lang/String;)Landroid/graphics/Movie;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::Movie _ret(ret);
    return _ret;
}

void android::graphics::SurfaceTexture_OnFrameAvailableListener::onFrameAvailable(const ::android::graphics::SurfaceTexture& arg0) const {
    if (!::android::graphics::SurfaceTexture_OnFrameAvailableListener::_class) ::android::graphics::SurfaceTexture_OnFrameAvailableListener::_class = java::fetch_class("android/graphics/SurfaceTexture$OnFrameAvailableListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onFrameAvailable", "(Landroid/graphics/SurfaceTexture;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::BlurMaskFilter::BlurMaskFilter(float arg0, const ::android::graphics::BlurMaskFilter_Blur& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::MaskFilter((jobject)0) {
    if (!::android::graphics::BlurMaskFilter::_class) ::android::graphics::BlurMaskFilter::_class = java::fetch_class("android/graphics/BlurMaskFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(FLandroid/graphics/BlurMaskFilter$Blur;)V");
    float _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

std::vector< ::android::graphics::Path_Direction> android::graphics::Path_Direction::values(){
    if (!::android::graphics::Path_Direction::_class) ::android::graphics::Path_Direction::_class = java::fetch_class("android/graphics/Path$Direction");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/graphics/Path$Direction;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::graphics::Path_Direction> _ret(rets, ::android::graphics::Path_Direction((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::graphics::Path_Direction retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::graphics::Path_Direction android::graphics::Path_Direction::valueOf(const ::java::lang::String& arg0){
    if (!::android::graphics::Path_Direction::_class) ::android::graphics::Path_Direction::_class = java::fetch_class("android/graphics/Path$Direction");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/graphics/Path$Direction;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::Path_Direction _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::Region::Region() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::Region::Region(const ::android::graphics::Rect& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::Region::Region(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

void android::graphics::Region::setEmpty() const {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEmpty", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::graphics::Region::set(const ::android::graphics::Region& arg0) const {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(Landroid/graphics/Region;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::graphics::Region::set(const ::android::graphics::Rect& arg0) const {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(Landroid/graphics/Rect;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::graphics::Region::set(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(IIII)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::graphics::Region::setPath(const ::android::graphics::Path& arg0, const ::android::graphics::Region& arg1) const {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPath", "(Landroid/graphics/Path;Landroid/graphics/Region;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::Region::isEmpty() const {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::graphics::Region::isRect() const {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRect", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::graphics::Region::isComplex() const {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "isComplex", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::graphics::Rect android::graphics::Region::getBounds() const {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBounds", "()Landroid/graphics/Rect;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Rect _ret(ret);
    return _ret;
}

bool android::graphics::Region::getBounds(const ::android::graphics::Rect& arg0) const {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBounds", "(Landroid/graphics/Rect;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::graphics::Path android::graphics::Region::getBoundaryPath() const {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBoundaryPath", "()Landroid/graphics/Path;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Path _ret(ret);
    return _ret;
}

bool android::graphics::Region::getBoundaryPath(const ::android::graphics::Path& arg0) const {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBoundaryPath", "(Landroid/graphics/Path;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::graphics::Region::contains(int32_t arg0, int32_t arg1) const {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::Region::quickContains(const ::android::graphics::Rect& arg0) const {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "quickContains", "(Landroid/graphics/Rect;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::graphics::Region::quickContains(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "quickContains", "(IIII)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::graphics::Region::quickReject(const ::android::graphics::Rect& arg0) const {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "quickReject", "(Landroid/graphics/Rect;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::graphics::Region::quickReject(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "quickReject", "(IIII)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::graphics::Region::quickReject(const ::android::graphics::Region& arg0) const {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "quickReject", "(Landroid/graphics/Region;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::graphics::Region::translate(int32_t arg0, int32_t arg1) const {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "translate", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Region::translate(int32_t arg0, int32_t arg1, const ::android::graphics::Region& arg2) const {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "translate", "(IILandroid/graphics/Region;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::graphics::Region::union_(const ::android::graphics::Rect& arg0) const {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "union_", "(Landroid/graphics/Rect;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::graphics::Region::op(const ::android::graphics::Rect& arg0, const ::android::graphics::Region_Op& arg1) const {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "op", "(Landroid/graphics/Rect;Landroid/graphics/Region$Op;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::Region::op(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, const ::android::graphics::Region_Op& arg4) const {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "op", "(IIIILandroid/graphics/Region$Op;)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

bool android::graphics::Region::op(const ::android::graphics::Region& arg0, const ::android::graphics::Region_Op& arg1) const {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "op", "(Landroid/graphics/Region;Landroid/graphics/Region$Op;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::Region::op(const ::android::graphics::Rect& arg0, const ::android::graphics::Region& arg1, const ::android::graphics::Region_Op& arg2) const {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "op", "(Landroid/graphics/Rect;Landroid/graphics/Region;Landroid/graphics/Region$Op;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::graphics::Region::op(const ::android::graphics::Region& arg0, const ::android::graphics::Region& arg1, const ::android::graphics::Region_Op& arg2) const {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "op", "(Landroid/graphics/Region;Landroid/graphics/Region;Landroid/graphics/Region$Op;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::String android::graphics::Region::toString() const {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::graphics::Region::describeContents() const {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::Region::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::Region::equals(const ::java::lang::Object& arg0) const {
    if (!::android::graphics::Region::_class) ::android::graphics::Region::_class = java::fetch_class("android/graphics/Region");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::graphics::Typeface::getStyle() const {
    if (!::android::graphics::Typeface::_class) ::android::graphics::Typeface::_class = java::fetch_class("android/graphics/Typeface");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStyle", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::graphics::Typeface::isBold() const {
    if (!::android::graphics::Typeface::_class) ::android::graphics::Typeface::_class = java::fetch_class("android/graphics/Typeface");
    static jmethodID mid = java::jni->GetMethodID(_class, "isBold", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::graphics::Typeface::isItalic() const {
    if (!::android::graphics::Typeface::_class) ::android::graphics::Typeface::_class = java::fetch_class("android/graphics/Typeface");
    static jmethodID mid = java::jni->GetMethodID(_class, "isItalic", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::graphics::Typeface android::graphics::Typeface::create(const ::java::lang::String& arg0, int32_t arg1){
    if (!::android::graphics::Typeface::_class) ::android::graphics::Typeface::_class = java::fetch_class("android/graphics/Typeface");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "create", "(Ljava/lang/String;I)Landroid/graphics/Typeface;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::graphics::Typeface _ret(ret);
    return _ret;
}

::android::graphics::Typeface android::graphics::Typeface::create(const ::android::graphics::Typeface& arg0, int32_t arg1){
    if (!::android::graphics::Typeface::_class) ::android::graphics::Typeface::_class = java::fetch_class("android/graphics/Typeface");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "create", "(Landroid/graphics/Typeface;I)Landroid/graphics/Typeface;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::graphics::Typeface _ret(ret);
    return _ret;
}

::android::graphics::Typeface android::graphics::Typeface::defaultFromStyle(int32_t arg0){
    if (!::android::graphics::Typeface::_class) ::android::graphics::Typeface::_class = java::fetch_class("android/graphics/Typeface");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "defaultFromStyle", "(I)Landroid/graphics/Typeface;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::Typeface _ret(ret);
    return _ret;
}

::android::graphics::Typeface android::graphics::Typeface::createFromAsset(const ::android::content::res::AssetManager& arg0, const ::java::lang::String& arg1){
    if (!::android::graphics::Typeface::_class) ::android::graphics::Typeface::_class = java::fetch_class("android/graphics/Typeface");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createFromAsset", "(Landroid/content/res/AssetManager;Ljava/lang/String;)Landroid/graphics/Typeface;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::graphics::Typeface _ret(ret);
    return _ret;
}

::android::graphics::Typeface android::graphics::Typeface::createFromFile(const ::java::io::File& arg0){
    if (!::android::graphics::Typeface::_class) ::android::graphics::Typeface::_class = java::fetch_class("android/graphics/Typeface");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createFromFile", "(Ljava/io/File;)Landroid/graphics/Typeface;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::Typeface _ret(ret);
    return _ret;
}

::android::graphics::Typeface android::graphics::Typeface::createFromFile(const ::java::lang::String& arg0){
    if (!::android::graphics::Typeface::_class) ::android::graphics::Typeface::_class = java::fetch_class("android/graphics/Typeface");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createFromFile", "(Ljava/lang/String;)Landroid/graphics/Typeface;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::Typeface _ret(ret);
    return _ret;
}

std::vector< ::android::graphics::Canvas_VertexMode> android::graphics::Canvas_VertexMode::values(){
    if (!::android::graphics::Canvas_VertexMode::_class) ::android::graphics::Canvas_VertexMode::_class = java::fetch_class("android/graphics/Canvas$VertexMode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/graphics/Canvas$VertexMode;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::graphics::Canvas_VertexMode> _ret(rets, ::android::graphics::Canvas_VertexMode((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::graphics::Canvas_VertexMode retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::graphics::Canvas_VertexMode android::graphics::Canvas_VertexMode::valueOf(const ::java::lang::String& arg0){
    if (!::android::graphics::Canvas_VertexMode::_class) ::android::graphics::Canvas_VertexMode::_class = java::fetch_class("android/graphics/Canvas$VertexMode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/graphics/Canvas$VertexMode;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::Canvas_VertexMode _ret(ret);
    return _ret;
}

std::vector< ::android::graphics::Region_Op> android::graphics::Region_Op::values(){
    if (!::android::graphics::Region_Op::_class) ::android::graphics::Region_Op::_class = java::fetch_class("android/graphics/Region$Op");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/graphics/Region$Op;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::graphics::Region_Op> _ret(rets, ::android::graphics::Region_Op((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::graphics::Region_Op retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::graphics::Region_Op android::graphics::Region_Op::valueOf(const ::java::lang::String& arg0){
    if (!::android::graphics::Region_Op::_class) ::android::graphics::Region_Op::_class = java::fetch_class("android/graphics/Region$Op");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/graphics/Region$Op;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::Region_Op _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::PixelFormat::PixelFormat() : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::PixelFormat::_class) ::android::graphics::PixelFormat::_class = java::fetch_class("android/graphics/PixelFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::graphics::PixelFormat::getPixelFormatInfo(int32_t arg0, const ::android::graphics::PixelFormat& arg1){
    if (!::android::graphics::PixelFormat::_class) ::android::graphics::PixelFormat::_class = java::fetch_class("android/graphics/PixelFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getPixelFormatInfo", "(ILandroid/graphics/PixelFormat;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

bool android::graphics::PixelFormat::formatHasAlpha(int32_t arg0){
    if (!::android::graphics::PixelFormat::_class) ::android::graphics::PixelFormat::_class = java::fetch_class("android/graphics/PixelFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "formatHasAlpha", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::Matrix::Matrix() : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::graphics::Matrix::isIdentity() const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "isIdentity", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::graphics::Matrix::rectStaysRect() const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "rectStaysRect", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::graphics::Matrix::set(const ::android::graphics::Matrix& arg0) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(Landroid/graphics/Matrix;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::graphics::Matrix::equals(const ::java::lang::Object& arg0) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::graphics::Matrix::reset() const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::graphics::Matrix::setTranslate(float arg0, float arg1) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTranslate", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Matrix::setScale(float arg0, float arg1, float arg2, float arg3) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScale", "(FFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::Matrix::setScale(float arg0, float arg1) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScale", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Matrix::setRotate(float arg0, float arg1, float arg2) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRotate", "(FFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::graphics::Matrix::setRotate(float arg0) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRotate", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::Matrix::setSinCos(float arg0, float arg1, float arg2, float arg3) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSinCos", "(FFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::Matrix::setSinCos(float arg0, float arg1) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSinCos", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Matrix::setSkew(float arg0, float arg1, float arg2, float arg3) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSkew", "(FFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::Matrix::setSkew(float arg0, float arg1) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSkew", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::Matrix::setConcat(const ::android::graphics::Matrix& arg0, const ::android::graphics::Matrix& arg1) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "setConcat", "(Landroid/graphics/Matrix;Landroid/graphics/Matrix;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::Matrix::preTranslate(float arg0, float arg1) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "preTranslate", "(FF)Z");
    float _arg0 = arg0;
    float _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::Matrix::preScale(float arg0, float arg1, float arg2, float arg3) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "preScale", "(FFFF)Z");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::graphics::Matrix::preScale(float arg0, float arg1) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "preScale", "(FF)Z");
    float _arg0 = arg0;
    float _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::Matrix::preRotate(float arg0, float arg1, float arg2) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "preRotate", "(FFF)Z");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::graphics::Matrix::preRotate(float arg0) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "preRotate", "(F)Z");
    float _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::graphics::Matrix::preSkew(float arg0, float arg1, float arg2, float arg3) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "preSkew", "(FFFF)Z");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::graphics::Matrix::preSkew(float arg0, float arg1) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "preSkew", "(FF)Z");
    float _arg0 = arg0;
    float _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::Matrix::preConcat(const ::android::graphics::Matrix& arg0) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "preConcat", "(Landroid/graphics/Matrix;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::graphics::Matrix::postTranslate(float arg0, float arg1) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "postTranslate", "(FF)Z");
    float _arg0 = arg0;
    float _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::Matrix::postScale(float arg0, float arg1, float arg2, float arg3) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "postScale", "(FFFF)Z");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::graphics::Matrix::postScale(float arg0, float arg1) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "postScale", "(FF)Z");
    float _arg0 = arg0;
    float _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::Matrix::postRotate(float arg0, float arg1, float arg2) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "postRotate", "(FFF)Z");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::graphics::Matrix::postRotate(float arg0) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "postRotate", "(F)Z");
    float _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::graphics::Matrix::postSkew(float arg0, float arg1, float arg2, float arg3) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "postSkew", "(FFFF)Z");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::graphics::Matrix::postSkew(float arg0, float arg1) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "postSkew", "(FF)Z");
    float _arg0 = arg0;
    float _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::Matrix::postConcat(const ::android::graphics::Matrix& arg0) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "postConcat", "(Landroid/graphics/Matrix;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::graphics::Matrix::setRectToRect(const ::android::graphics::RectF& arg0, const ::android::graphics::RectF& arg1, const ::android::graphics::Matrix_ScaleToFit& arg2) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRectToRect", "(Landroid/graphics/RectF;Landroid/graphics/RectF;Landroid/graphics/Matrix$ScaleToFit;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::graphics::Matrix::setPolyToPoly(const std::vector< float>& arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPolyToPoly", "([FI[FII)Z");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

bool android::graphics::Matrix::invert(const ::android::graphics::Matrix& arg0) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "invert", "(Landroid/graphics/Matrix;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::graphics::Matrix::mapPoints(const std::vector< float>& arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "mapPoints", "([FI[FII)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::graphics::Matrix::mapVectors(const std::vector< float>& arg0, int32_t arg1, const std::vector< float>& arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "mapVectors", "([FI[FII)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::graphics::Matrix::mapPoints(const std::vector< float>& arg0, const std::vector< float>& arg1) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "mapPoints", "([F[F)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Matrix::mapVectors(const std::vector< float>& arg0, const std::vector< float>& arg1) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "mapVectors", "([F[F)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Matrix::mapPoints(const std::vector< float>& arg0) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "mapPoints", "([F)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::Matrix::mapVectors(const std::vector< float>& arg0) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "mapVectors", "([F)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::graphics::Matrix::mapRect(const ::android::graphics::RectF& arg0, const ::android::graphics::RectF& arg1) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "mapRect", "(Landroid/graphics/RectF;Landroid/graphics/RectF;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::Matrix::mapRect(const ::android::graphics::RectF& arg0) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "mapRect", "(Landroid/graphics/RectF;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

float android::graphics::Matrix::mapRadius(float arg0) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "mapRadius", "(F)F");
    float _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

void android::graphics::Matrix::getValues(const std::vector< float>& arg0) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValues", "([F)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::Matrix::setValues(const std::vector< float>& arg0) const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "setValues", "([F)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::graphics::Matrix::toString() const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::graphics::Matrix::toShortString() const {
    if (!::android::graphics::Matrix::_class) ::android::graphics::Matrix::_class = java::fetch_class("android/graphics/Matrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "toShortString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::android::graphics::AvoidXfermode_Mode> android::graphics::AvoidXfermode_Mode::values(){
    if (!::android::graphics::AvoidXfermode_Mode::_class) ::android::graphics::AvoidXfermode_Mode::_class = java::fetch_class("android/graphics/AvoidXfermode$Mode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/graphics/AvoidXfermode$Mode;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::graphics::AvoidXfermode_Mode> _ret(rets, ::android::graphics::AvoidXfermode_Mode((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::graphics::AvoidXfermode_Mode retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::graphics::AvoidXfermode_Mode android::graphics::AvoidXfermode_Mode::valueOf(const ::java::lang::String& arg0){
    if (!::android::graphics::AvoidXfermode_Mode::_class) ::android::graphics::AvoidXfermode_Mode::_class = java::fetch_class("android/graphics/AvoidXfermode$Mode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/graphics/AvoidXfermode$Mode;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::AvoidXfermode_Mode _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::AvoidXfermode::AvoidXfermode(int32_t arg0, int32_t arg1, const ::android::graphics::AvoidXfermode_Mode& arg2) : ::java::lang::Object((jobject)0), ::android::graphics::Xfermode((jobject)0) {
    if (!::android::graphics::AvoidXfermode::_class) ::android::graphics::AvoidXfermode::_class = java::fetch_class("android/graphics/AvoidXfermode");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IILandroid/graphics/AvoidXfermode$Mode;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::PaintFlagsDrawFilter::PaintFlagsDrawFilter(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::graphics::DrawFilter((jobject)0) {
    if (!::android::graphics::PaintFlagsDrawFilter::_class) ::android::graphics::PaintFlagsDrawFilter::_class = java::fetch_class("android/graphics/PaintFlagsDrawFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::Camera::Camera() : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::Camera::_class) ::android::graphics::Camera::_class = java::fetch_class("android/graphics/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::graphics::Camera::save() const {
    if (!::android::graphics::Camera::_class) ::android::graphics::Camera::_class = java::fetch_class("android/graphics/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "save", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::graphics::Camera::restore() const {
    if (!::android::graphics::Camera::_class) ::android::graphics::Camera::_class = java::fetch_class("android/graphics/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "restore", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::graphics::Camera::translate(float arg0, float arg1, float arg2) const {
    if (!::android::graphics::Camera::_class) ::android::graphics::Camera::_class = java::fetch_class("android/graphics/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "translate", "(FFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::graphics::Camera::rotateX(float arg0) const {
    if (!::android::graphics::Camera::_class) ::android::graphics::Camera::_class = java::fetch_class("android/graphics/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotateX", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::Camera::rotateY(float arg0) const {
    if (!::android::graphics::Camera::_class) ::android::graphics::Camera::_class = java::fetch_class("android/graphics/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotateY", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::Camera::rotateZ(float arg0) const {
    if (!::android::graphics::Camera::_class) ::android::graphics::Camera::_class = java::fetch_class("android/graphics/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotateZ", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::Camera::rotate(float arg0, float arg1, float arg2) const {
    if (!::android::graphics::Camera::_class) ::android::graphics::Camera::_class = java::fetch_class("android/graphics/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotate", "(FFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::graphics::Camera::setLocation(float arg0, float arg1, float arg2) const {
    if (!::android::graphics::Camera::_class) ::android::graphics::Camera::_class = java::fetch_class("android/graphics/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLocation", "(FFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::graphics::Camera::getMatrix(const ::android::graphics::Matrix& arg0) const {
    if (!::android::graphics::Camera::_class) ::android::graphics::Camera::_class = java::fetch_class("android/graphics/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMatrix", "(Landroid/graphics/Matrix;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::Camera::applyToCanvas(const ::android::graphics::Canvas& arg0) const {
    if (!::android::graphics::Camera::_class) ::android::graphics::Camera::_class = java::fetch_class("android/graphics/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "applyToCanvas", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::graphics::Camera::dotWithNormal(float arg0, float arg1, float arg2) const {
    if (!::android::graphics::Camera::_class) ::android::graphics::Camera::_class = java::fetch_class("android/graphics/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "dotWithNormal", "(FFF)F");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::SweepGradient::SweepGradient(float arg0, float arg1, const std::vector< int32_t>& arg2, const std::vector< float>& arg3) : ::java::lang::Object((jobject)0), ::android::graphics::Shader((jobject)0) {
    if (!::android::graphics::SweepGradient::_class) ::android::graphics::SweepGradient::_class = java::fetch_class("android/graphics/SweepGradient");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(FF[I[F)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    jfloatArray _arg3 = java::jni->NewFloatArray(arg3.size());
    java::jni->SetFloatArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::SweepGradient::SweepGradient(float arg0, float arg1, int32_t arg2, int32_t arg3) : ::java::lang::Object((jobject)0), ::android::graphics::Shader((jobject)0) {
    if (!::android::graphics::SweepGradient::_class) ::android::graphics::SweepGradient::_class = java::fetch_class("android/graphics/SweepGradient");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(FFII)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

std::vector< ::android::graphics::Paint_Align> android::graphics::Paint_Align::values(){
    if (!::android::graphics::Paint_Align::_class) ::android::graphics::Paint_Align::_class = java::fetch_class("android/graphics/Paint$Align");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/graphics/Paint$Align;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::graphics::Paint_Align> _ret(rets, ::android::graphics::Paint_Align((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::graphics::Paint_Align retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::graphics::Paint_Align android::graphics::Paint_Align::valueOf(const ::java::lang::String& arg0){
    if (!::android::graphics::Paint_Align::_class) ::android::graphics::Paint_Align::_class = java::fetch_class("android/graphics/Paint$Align");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/graphics/Paint$Align;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::Paint_Align _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::RegionIterator::RegionIterator(const ::android::graphics::Region& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::RegionIterator::_class) ::android::graphics::RegionIterator::_class = java::fetch_class("android/graphics/RegionIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/Region;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool android::graphics::RegionIterator::next(const ::android::graphics::Rect& arg0) const {
    if (!::android::graphics::RegionIterator::_class) ::android::graphics::RegionIterator::_class = java::fetch_class("android/graphics/RegionIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "next", "(Landroid/graphics/Rect;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::graphics::BitmapRegionDecoder android::graphics::BitmapRegionDecoder::newInstance(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2, bool arg3){
    if (!::android::graphics::BitmapRegionDecoder::_class) ::android::graphics::BitmapRegionDecoder::_class = java::fetch_class("android/graphics/BitmapRegionDecoder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInstance", "([BIIZ)Landroid/graphics/BitmapRegionDecoder;");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    bool _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::graphics::BitmapRegionDecoder _ret(ret);
    return _ret;
}

::android::graphics::BitmapRegionDecoder android::graphics::BitmapRegionDecoder::newInstance(const ::java::io::FileDescriptor& arg0, bool arg1){
    if (!::android::graphics::BitmapRegionDecoder::_class) ::android::graphics::BitmapRegionDecoder::_class = java::fetch_class("android/graphics/BitmapRegionDecoder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInstance", "(Ljava/io/FileDescriptor;Z)Landroid/graphics/BitmapRegionDecoder;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::graphics::BitmapRegionDecoder _ret(ret);
    return _ret;
}

::android::graphics::BitmapRegionDecoder android::graphics::BitmapRegionDecoder::newInstance(const ::java::io::InputStream& arg0, bool arg1){
    if (!::android::graphics::BitmapRegionDecoder::_class) ::android::graphics::BitmapRegionDecoder::_class = java::fetch_class("android/graphics/BitmapRegionDecoder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInstance", "(Ljava/io/InputStream;Z)Landroid/graphics/BitmapRegionDecoder;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::graphics::BitmapRegionDecoder _ret(ret);
    return _ret;
}

::android::graphics::BitmapRegionDecoder android::graphics::BitmapRegionDecoder::newInstance(const ::java::lang::String& arg0, bool arg1){
    if (!::android::graphics::BitmapRegionDecoder::_class) ::android::graphics::BitmapRegionDecoder::_class = java::fetch_class("android/graphics/BitmapRegionDecoder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInstance", "(Ljava/lang/String;Z)Landroid/graphics/BitmapRegionDecoder;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::graphics::BitmapRegionDecoder _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::graphics::BitmapRegionDecoder::decodeRegion(const ::android::graphics::Rect& arg0, const ::android::graphics::BitmapFactory_Options& arg1) const {
    if (!::android::graphics::BitmapRegionDecoder::_class) ::android::graphics::BitmapRegionDecoder::_class = java::fetch_class("android/graphics/BitmapRegionDecoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "decodeRegion", "(Landroid/graphics/Rect;Landroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

int32_t android::graphics::BitmapRegionDecoder::getWidth() const {
    if (!::android::graphics::BitmapRegionDecoder::_class) ::android::graphics::BitmapRegionDecoder::_class = java::fetch_class("android/graphics/BitmapRegionDecoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::BitmapRegionDecoder::getHeight() const {
    if (!::android::graphics::BitmapRegionDecoder::_class) ::android::graphics::BitmapRegionDecoder::_class = java::fetch_class("android/graphics/BitmapRegionDecoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::BitmapRegionDecoder::recycle() const {
    if (!::android::graphics::BitmapRegionDecoder::_class) ::android::graphics::BitmapRegionDecoder::_class = java::fetch_class("android/graphics/BitmapRegionDecoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "recycle", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::graphics::BitmapRegionDecoder::isRecycled() const {
    if (!::android::graphics::BitmapRegionDecoder::_class) ::android::graphics::BitmapRegionDecoder::_class = java::fetch_class("android/graphics/BitmapRegionDecoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRecycled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::Xfermode::Xfermode() : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::Xfermode::_class) ::android::graphics::Xfermode::_class = java::fetch_class("android/graphics/Xfermode");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::Shader::Shader() : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::Shader::_class) ::android::graphics::Shader::_class = java::fetch_class("android/graphics/Shader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::graphics::Shader::getLocalMatrix(const ::android::graphics::Matrix& arg0) const {
    if (!::android::graphics::Shader::_class) ::android::graphics::Shader::_class = java::fetch_class("android/graphics/Shader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalMatrix", "(Landroid/graphics/Matrix;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::graphics::Shader::setLocalMatrix(const ::android::graphics::Matrix& arg0) const {
    if (!::android::graphics::Shader::_class) ::android::graphics::Shader::_class = java::fetch_class("android/graphics/Shader");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLocalMatrix", "(Landroid/graphics/Matrix;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::MaskFilter::MaskFilter() : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::MaskFilter::_class) ::android::graphics::MaskFilter::_class = java::fetch_class("android/graphics/MaskFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

std::vector< ::android::graphics::Paint_Cap> android::graphics::Paint_Cap::values(){
    if (!::android::graphics::Paint_Cap::_class) ::android::graphics::Paint_Cap::_class = java::fetch_class("android/graphics/Paint$Cap");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/graphics/Paint$Cap;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::graphics::Paint_Cap> _ret(rets, ::android::graphics::Paint_Cap((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::graphics::Paint_Cap retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::graphics::Paint_Cap android::graphics::Paint_Cap::valueOf(const ::java::lang::String& arg0){
    if (!::android::graphics::Paint_Cap::_class) ::android::graphics::Paint_Cap::_class = java::fetch_class("android/graphics/Paint$Cap");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/graphics/Paint$Cap;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::Paint_Cap _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::Rect::Rect() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::Rect::Rect(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

bool android::graphics::Rect::equals(const ::java::lang::Object& arg0) const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::graphics::Rect::toString() const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::graphics::Rect::toShortString() const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "toShortString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::graphics::Rect::flattenToString() const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "flattenToString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::graphics::Rect android::graphics::Rect::unflattenFromString(const ::java::lang::String& arg0){
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "unflattenFromString", "(Ljava/lang/String;)Landroid/graphics/Rect;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::Rect _ret(ret);
    return _ret;
}

bool android::graphics::Rect::isEmpty() const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::graphics::Rect::width() const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "width", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::Rect::height() const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "height", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::Rect::centerX() const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "centerX", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::Rect::centerY() const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "centerY", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

float android::graphics::Rect::exactCenterX() const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "exactCenterX", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::graphics::Rect::exactCenterY() const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "exactCenterY", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::graphics::Rect::setEmpty() const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEmpty", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::graphics::Rect::set(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::Rect::set(const ::android::graphics::Rect& arg0) const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::Rect::offset(int32_t arg0, int32_t arg1) const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "offset", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Rect::offsetTo(int32_t arg0, int32_t arg1) const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "offsetTo", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Rect::inset(int32_t arg0, int32_t arg1) const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "inset", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::Rect::contains(int32_t arg0, int32_t arg1) const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::Rect::contains(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(IIII)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::graphics::Rect::contains(const ::android::graphics::Rect& arg0) const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Landroid/graphics/Rect;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::graphics::Rect::intersect(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "intersect", "(IIII)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::graphics::Rect::intersect(const ::android::graphics::Rect& arg0) const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "intersect", "(Landroid/graphics/Rect;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::graphics::Rect::setIntersect(const ::android::graphics::Rect& arg0, const ::android::graphics::Rect& arg1) const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIntersect", "(Landroid/graphics/Rect;Landroid/graphics/Rect;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::Rect::intersects(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "intersects", "(IIII)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::graphics::Rect::intersects(const ::android::graphics::Rect& arg0, const ::android::graphics::Rect& arg1){
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "intersects", "(Landroid/graphics/Rect;Landroid/graphics/Rect;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

void android::graphics::Rect::union_(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "union_", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::Rect::union_(const ::android::graphics::Rect& arg0) const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "union_", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::Rect::union_(int32_t arg0, int32_t arg1) const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "union_", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Rect::sort() const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "sort", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::graphics::Rect::describeContents() const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::Rect::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Rect::readFromParcel(const ::android::os::Parcel& arg0) const {
    if (!::android::graphics::Rect::_class) ::android::graphics::Rect::_class = java::fetch_class("android/graphics/Rect");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFromParcel", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::ColorFilter::ColorFilter() : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::ColorFilter::_class) ::android::graphics::ColorFilter::_class = java::fetch_class("android/graphics/ColorFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::Paint_FontMetrics::Paint_FontMetrics() : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::Paint_FontMetrics::_class) ::android::graphics::Paint_FontMetrics::_class = java::fetch_class("android/graphics/Paint$FontMetrics");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::YuvImage::YuvImage(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2, int32_t arg3, const std::vector< int32_t>& arg4) : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::YuvImage::_class) ::android::graphics::YuvImage::_class = java::fetch_class("android/graphics/YuvImage");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([BIII[I)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jintArray _arg4 = java::jni->NewIntArray(arg4.size());
    java::jni->SetIntArrayRegion(_arg4, 0, arg4.size(), arg4.data());
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

bool android::graphics::YuvImage::compressToJpeg(const ::android::graphics::Rect& arg0, int32_t arg1, const ::java::io::OutputStream& arg2) const {
    if (!::android::graphics::YuvImage::_class) ::android::graphics::YuvImage::_class = java::fetch_class("android/graphics/YuvImage");
    static jmethodID mid = java::jni->GetMethodID(_class, "compressToJpeg", "(Landroid/graphics/Rect;ILjava/io/OutputStream;)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

std::vector< int8_t> android::graphics::YuvImage::getYuvData() const {
    if (!::android::graphics::YuvImage::_class) ::android::graphics::YuvImage::_class = java::fetch_class("android/graphics/YuvImage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getYuvData", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t android::graphics::YuvImage::getYuvFormat() const {
    if (!::android::graphics::YuvImage::_class) ::android::graphics::YuvImage::_class = java::fetch_class("android/graphics/YuvImage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getYuvFormat", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< int32_t> android::graphics::YuvImage::getStrides() const {
    if (!::android::graphics::YuvImage::_class) ::android::graphics::YuvImage::_class = java::fetch_class("android/graphics/YuvImage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStrides", "()[I");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t android::graphics::YuvImage::getWidth() const {
    if (!::android::graphics::YuvImage::_class) ::android::graphics::YuvImage::_class = java::fetch_class("android/graphics/YuvImage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::YuvImage::getHeight() const {
    if (!::android::graphics::YuvImage::_class) ::android::graphics::YuvImage::_class = java::fetch_class("android/graphics/YuvImage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::SurfaceTexture_OutOfResourcesException::SurfaceTexture_OutOfResourcesException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::graphics::SurfaceTexture_OutOfResourcesException::_class) ::android::graphics::SurfaceTexture_OutOfResourcesException::_class = java::fetch_class("android/graphics/SurfaceTexture$OutOfResourcesException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::SurfaceTexture_OutOfResourcesException::SurfaceTexture_OutOfResourcesException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::graphics::SurfaceTexture_OutOfResourcesException::_class) ::android::graphics::SurfaceTexture_OutOfResourcesException::_class = java::fetch_class("android/graphics/SurfaceTexture$OutOfResourcesException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::PointF::PointF() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::graphics::PointF::_class) ::android::graphics::PointF::_class = java::fetch_class("android/graphics/PointF");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::PointF::PointF(float arg0, float arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::graphics::PointF::_class) ::android::graphics::PointF::_class = java::fetch_class("android/graphics/PointF");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::PointF::PointF(const ::android::graphics::Point& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::graphics::PointF::_class) ::android::graphics::PointF::_class = java::fetch_class("android/graphics/PointF");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/Point;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::graphics::PointF::set(float arg0, float arg1) const {
    if (!::android::graphics::PointF::_class) ::android::graphics::PointF::_class = java::fetch_class("android/graphics/PointF");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::PointF::set(const ::android::graphics::PointF& arg0) const {
    if (!::android::graphics::PointF::_class) ::android::graphics::PointF::_class = java::fetch_class("android/graphics/PointF");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(Landroid/graphics/PointF;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::PointF::negate() const {
    if (!::android::graphics::PointF::_class) ::android::graphics::PointF::_class = java::fetch_class("android/graphics/PointF");
    static jmethodID mid = java::jni->GetMethodID(_class, "negate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::graphics::PointF::offset(float arg0, float arg1) const {
    if (!::android::graphics::PointF::_class) ::android::graphics::PointF::_class = java::fetch_class("android/graphics/PointF");
    static jmethodID mid = java::jni->GetMethodID(_class, "offset", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::PointF::equals(float arg0, float arg1) const {
    if (!::android::graphics::PointF::_class) ::android::graphics::PointF::_class = java::fetch_class("android/graphics/PointF");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(FF)Z");
    float _arg0 = arg0;
    float _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

float android::graphics::PointF::length() const {
    if (!::android::graphics::PointF::_class) ::android::graphics::PointF::_class = java::fetch_class("android/graphics/PointF");
    static jmethodID mid = java::jni->GetMethodID(_class, "length", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::graphics::PointF::length(float arg0, float arg1){
    if (!::android::graphics::PointF::_class) ::android::graphics::PointF::_class = java::fetch_class("android/graphics/PointF");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "length", "(FF)F");
    float _arg0 = arg0;
    float _arg1 = arg1;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0, _arg1);
}

int32_t android::graphics::PointF::describeContents() const {
    if (!::android::graphics::PointF::_class) ::android::graphics::PointF::_class = java::fetch_class("android/graphics/PointF");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::PointF::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::graphics::PointF::_class) ::android::graphics::PointF::_class = java::fetch_class("android/graphics/PointF");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::PointF::readFromParcel(const ::android::os::Parcel& arg0) const {
    if (!::android::graphics::PointF::_class) ::android::graphics::PointF::_class = java::fetch_class("android/graphics/PointF");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFromParcel", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::CornerPathEffect::CornerPathEffect(float arg0) : ::java::lang::Object((jobject)0), ::android::graphics::PathEffect((jobject)0) {
    if (!::android::graphics::CornerPathEffect::_class) ::android::graphics::CornerPathEffect::_class = java::fetch_class("android/graphics/CornerPathEffect");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(F)V");
    float _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::DrawFilter::DrawFilter() : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::DrawFilter::_class) ::android::graphics::DrawFilter::_class = java::fetch_class("android/graphics/DrawFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

std::vector< ::android::graphics::BlurMaskFilter_Blur> android::graphics::BlurMaskFilter_Blur::values(){
    if (!::android::graphics::BlurMaskFilter_Blur::_class) ::android::graphics::BlurMaskFilter_Blur::_class = java::fetch_class("android/graphics/BlurMaskFilter$Blur");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/graphics/BlurMaskFilter$Blur;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::graphics::BlurMaskFilter_Blur> _ret(rets, ::android::graphics::BlurMaskFilter_Blur((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::graphics::BlurMaskFilter_Blur retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::graphics::BlurMaskFilter_Blur android::graphics::BlurMaskFilter_Blur::valueOf(const ::java::lang::String& arg0){
    if (!::android::graphics::BlurMaskFilter_Blur::_class) ::android::graphics::BlurMaskFilter_Blur::_class = java::fetch_class("android/graphics/BlurMaskFilter$Blur");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/graphics/BlurMaskFilter$Blur;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::BlurMaskFilter_Blur _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::DashPathEffect::DashPathEffect(const std::vector< float>& arg0, float arg1) : ::java::lang::Object((jobject)0), ::android::graphics::PathEffect((jobject)0) {
    if (!::android::graphics::DashPathEffect::_class) ::android::graphics::DashPathEffect::_class = java::fetch_class("android/graphics/DashPathEffect");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([FF)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    float _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

std::vector< ::android::graphics::Bitmap_CompressFormat> android::graphics::Bitmap_CompressFormat::values(){
    if (!::android::graphics::Bitmap_CompressFormat::_class) ::android::graphics::Bitmap_CompressFormat::_class = java::fetch_class("android/graphics/Bitmap$CompressFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/graphics/Bitmap$CompressFormat;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::graphics::Bitmap_CompressFormat> _ret(rets, ::android::graphics::Bitmap_CompressFormat((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::graphics::Bitmap_CompressFormat retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::graphics::Bitmap_CompressFormat android::graphics::Bitmap_CompressFormat::valueOf(const ::java::lang::String& arg0){
    if (!::android::graphics::Bitmap_CompressFormat::_class) ::android::graphics::Bitmap_CompressFormat::_class = java::fetch_class("android/graphics/Bitmap$CompressFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/graphics/Bitmap$CompressFormat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::Bitmap_CompressFormat _ret(ret);
    return _ret;
}

std::vector< ::android::graphics::Shader_TileMode> android::graphics::Shader_TileMode::values(){
    if (!::android::graphics::Shader_TileMode::_class) ::android::graphics::Shader_TileMode::_class = java::fetch_class("android/graphics/Shader$TileMode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/graphics/Shader$TileMode;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::graphics::Shader_TileMode> _ret(rets, ::android::graphics::Shader_TileMode((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::graphics::Shader_TileMode retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::graphics::Shader_TileMode android::graphics::Shader_TileMode::valueOf(const ::java::lang::String& arg0){
    if (!::android::graphics::Shader_TileMode::_class) ::android::graphics::Shader_TileMode::_class = java::fetch_class("android/graphics/Shader$TileMode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/graphics/Shader$TileMode;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::Shader_TileMode _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::SumPathEffect::SumPathEffect(const ::android::graphics::PathEffect& arg0, const ::android::graphics::PathEffect& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::PathEffect((jobject)0) {
    if (!::android::graphics::SumPathEffect::_class) ::android::graphics::SumPathEffect::_class = java::fetch_class("android/graphics/SumPathEffect");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/PathEffect;Landroid/graphics/PathEffect;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

std::vector< ::android::graphics::PorterDuff_Mode> android::graphics::PorterDuff_Mode::values(){
    if (!::android::graphics::PorterDuff_Mode::_class) ::android::graphics::PorterDuff_Mode::_class = java::fetch_class("android/graphics/PorterDuff$Mode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/graphics/PorterDuff$Mode;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::graphics::PorterDuff_Mode> _ret(rets, ::android::graphics::PorterDuff_Mode((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::graphics::PorterDuff_Mode retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::graphics::PorterDuff_Mode android::graphics::PorterDuff_Mode::valueOf(const ::java::lang::String& arg0){
    if (!::android::graphics::PorterDuff_Mode::_class) ::android::graphics::PorterDuff_Mode::_class = java::fetch_class("android/graphics/PorterDuff$Mode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/graphics/PorterDuff$Mode;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::PorterDuff_Mode _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::Rasterizer::Rasterizer() : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::Rasterizer::_class) ::android::graphics::Rasterizer::_class = java::fetch_class("android/graphics/Rasterizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

std::vector< ::android::graphics::Matrix_ScaleToFit> android::graphics::Matrix_ScaleToFit::values(){
    if (!::android::graphics::Matrix_ScaleToFit::_class) ::android::graphics::Matrix_ScaleToFit::_class = java::fetch_class("android/graphics/Matrix$ScaleToFit");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/graphics/Matrix$ScaleToFit;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::graphics::Matrix_ScaleToFit> _ret(rets, ::android::graphics::Matrix_ScaleToFit((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::graphics::Matrix_ScaleToFit retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::graphics::Matrix_ScaleToFit android::graphics::Matrix_ScaleToFit::valueOf(const ::java::lang::String& arg0){
    if (!::android::graphics::Matrix_ScaleToFit::_class) ::android::graphics::Matrix_ScaleToFit::_class = java::fetch_class("android/graphics/Matrix$ScaleToFit");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/graphics/Matrix$ScaleToFit;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::Matrix_ScaleToFit _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::BitmapFactory::BitmapFactory() : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::BitmapFactory::_class) ::android::graphics::BitmapFactory::_class = java::fetch_class("android/graphics/BitmapFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::graphics::Bitmap android::graphics::BitmapFactory::decodeFile(const ::java::lang::String& arg0, const ::android::graphics::BitmapFactory_Options& arg1){
    if (!::android::graphics::BitmapFactory::_class) ::android::graphics::BitmapFactory::_class = java::fetch_class("android/graphics/BitmapFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "decodeFile", "(Ljava/lang/String;Landroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::graphics::BitmapFactory::decodeFile(const ::java::lang::String& arg0){
    if (!::android::graphics::BitmapFactory::_class) ::android::graphics::BitmapFactory::_class = java::fetch_class("android/graphics/BitmapFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "decodeFile", "(Ljava/lang/String;)Landroid/graphics/Bitmap;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::graphics::BitmapFactory::decodeResourceStream(const ::android::content::res::Resources& arg0, const ::android::util::TypedValue& arg1, const ::java::io::InputStream& arg2, const ::android::graphics::Rect& arg3, const ::android::graphics::BitmapFactory_Options& arg4){
    if (!::android::graphics::BitmapFactory::_class) ::android::graphics::BitmapFactory::_class = java::fetch_class("android/graphics/BitmapFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "decodeResourceStream", "(Landroid/content/res/Resources;Landroid/util/TypedValue;Ljava/io/InputStream;Landroid/graphics/Rect;Landroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::graphics::BitmapFactory::decodeResource(const ::android::content::res::Resources& arg0, int32_t arg1, const ::android::graphics::BitmapFactory_Options& arg2){
    if (!::android::graphics::BitmapFactory::_class) ::android::graphics::BitmapFactory::_class = java::fetch_class("android/graphics/BitmapFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "decodeResource", "(Landroid/content/res/Resources;ILandroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::graphics::BitmapFactory::decodeResource(const ::android::content::res::Resources& arg0, int32_t arg1){
    if (!::android::graphics::BitmapFactory::_class) ::android::graphics::BitmapFactory::_class = java::fetch_class("android/graphics/BitmapFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "decodeResource", "(Landroid/content/res/Resources;I)Landroid/graphics/Bitmap;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::graphics::BitmapFactory::decodeByteArray(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2, const ::android::graphics::BitmapFactory_Options& arg3){
    if (!::android::graphics::BitmapFactory::_class) ::android::graphics::BitmapFactory::_class = java::fetch_class("android/graphics/BitmapFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "decodeByteArray", "([BIILandroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::graphics::BitmapFactory::decodeByteArray(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2){
    if (!::android::graphics::BitmapFactory::_class) ::android::graphics::BitmapFactory::_class = java::fetch_class("android/graphics/BitmapFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "decodeByteArray", "([BII)Landroid/graphics/Bitmap;");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::graphics::BitmapFactory::decodeStream(const ::java::io::InputStream& arg0, const ::android::graphics::Rect& arg1, const ::android::graphics::BitmapFactory_Options& arg2){
    if (!::android::graphics::BitmapFactory::_class) ::android::graphics::BitmapFactory::_class = java::fetch_class("android/graphics/BitmapFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "decodeStream", "(Ljava/io/InputStream;Landroid/graphics/Rect;Landroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::graphics::BitmapFactory::decodeStream(const ::java::io::InputStream& arg0){
    if (!::android::graphics::BitmapFactory::_class) ::android::graphics::BitmapFactory::_class = java::fetch_class("android/graphics/BitmapFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "decodeStream", "(Ljava/io/InputStream;)Landroid/graphics/Bitmap;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::graphics::BitmapFactory::decodeFileDescriptor(const ::java::io::FileDescriptor& arg0, const ::android::graphics::Rect& arg1, const ::android::graphics::BitmapFactory_Options& arg2){
    if (!::android::graphics::BitmapFactory::_class) ::android::graphics::BitmapFactory::_class = java::fetch_class("android/graphics/BitmapFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "decodeFileDescriptor", "(Ljava/io/FileDescriptor;Landroid/graphics/Rect;Landroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::graphics::BitmapFactory::decodeFileDescriptor(const ::java::io::FileDescriptor& arg0){
    if (!::android::graphics::BitmapFactory::_class) ::android::graphics::BitmapFactory::_class = java::fetch_class("android/graphics/BitmapFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "decodeFileDescriptor", "(Ljava/io/FileDescriptor;)Landroid/graphics/Bitmap;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::Point::Point() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::graphics::Point::_class) ::android::graphics::Point::_class = java::fetch_class("android/graphics/Point");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::Point::Point(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::graphics::Point::_class) ::android::graphics::Point::_class = java::fetch_class("android/graphics/Point");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::graphics::Point::set(int32_t arg0, int32_t arg1) const {
    if (!::android::graphics::Point::_class) ::android::graphics::Point::_class = java::fetch_class("android/graphics/Point");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Point::negate() const {
    if (!::android::graphics::Point::_class) ::android::graphics::Point::_class = java::fetch_class("android/graphics/Point");
    static jmethodID mid = java::jni->GetMethodID(_class, "negate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::graphics::Point::offset(int32_t arg0, int32_t arg1) const {
    if (!::android::graphics::Point::_class) ::android::graphics::Point::_class = java::fetch_class("android/graphics/Point");
    static jmethodID mid = java::jni->GetMethodID(_class, "offset", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::Point::equals(int32_t arg0, int32_t arg1) const {
    if (!::android::graphics::Point::_class) ::android::graphics::Point::_class = java::fetch_class("android/graphics/Point");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::Point::equals(const ::java::lang::Object& arg0) const {
    if (!::android::graphics::Point::_class) ::android::graphics::Point::_class = java::fetch_class("android/graphics/Point");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::graphics::Point::hashCode() const {
    if (!::android::graphics::Point::_class) ::android::graphics::Point::_class = java::fetch_class("android/graphics/Point");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::graphics::Point::toString() const {
    if (!::android::graphics::Point::_class) ::android::graphics::Point::_class = java::fetch_class("android/graphics/Point");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::graphics::Point::describeContents() const {
    if (!::android::graphics::Point::_class) ::android::graphics::Point::_class = java::fetch_class("android/graphics/Point");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::Point::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::graphics::Point::_class) ::android::graphics::Point::_class = java::fetch_class("android/graphics/Point");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Point::readFromParcel(const ::android::os::Parcel& arg0) const {
    if (!::android::graphics::Point::_class) ::android::graphics::Point::_class = java::fetch_class("android/graphics/Point");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFromParcel", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::RadialGradient::RadialGradient(float arg0, float arg1, float arg2, const std::vector< int32_t>& arg3, const std::vector< float>& arg4, const ::android::graphics::Shader_TileMode& arg5) : ::java::lang::Object((jobject)0), ::android::graphics::Shader((jobject)0) {
    if (!::android::graphics::RadialGradient::_class) ::android::graphics::RadialGradient::_class = java::fetch_class("android/graphics/RadialGradient");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(FFF[I[FLandroid/graphics/Shader$TileMode;)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    jintArray _arg3 = java::jni->NewIntArray(arg3.size());
    java::jni->SetIntArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    jfloatArray _arg4 = java::jni->NewFloatArray(arg4.size());
    java::jni->SetFloatArrayRegion(_arg4, 0, arg4.size(), arg4.data());
    jobject _arg5 = arg5.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::RadialGradient::RadialGradient(float arg0, float arg1, float arg2, int32_t arg3, int32_t arg4, const ::android::graphics::Shader_TileMode& arg5) : ::java::lang::Object((jobject)0), ::android::graphics::Shader((jobject)0) {
    if (!::android::graphics::RadialGradient::_class) ::android::graphics::RadialGradient::_class = java::fetch_class("android/graphics/RadialGradient");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(FFFIILandroid/graphics/Shader$TileMode;)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}
#pragma GCC diagnostic pop

std::vector< ::android::graphics::PathDashPathEffect_Style> android::graphics::PathDashPathEffect_Style::values(){
    if (!::android::graphics::PathDashPathEffect_Style::_class) ::android::graphics::PathDashPathEffect_Style::_class = java::fetch_class("android/graphics/PathDashPathEffect$Style");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/graphics/PathDashPathEffect$Style;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::graphics::PathDashPathEffect_Style> _ret(rets, ::android::graphics::PathDashPathEffect_Style((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::graphics::PathDashPathEffect_Style retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::graphics::PathDashPathEffect_Style android::graphics::PathDashPathEffect_Style::valueOf(const ::java::lang::String& arg0){
    if (!::android::graphics::PathDashPathEffect_Style::_class) ::android::graphics::PathDashPathEffect_Style::_class = java::fetch_class("android/graphics/PathDashPathEffect$Style");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/graphics/PathDashPathEffect$Style;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::PathDashPathEffect_Style _ret(ret);
    return _ret;
}

std::vector< ::android::graphics::Bitmap_Config> android::graphics::Bitmap_Config::values(){
    if (!::android::graphics::Bitmap_Config::_class) ::android::graphics::Bitmap_Config::_class = java::fetch_class("android/graphics/Bitmap$Config");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/graphics/Bitmap$Config;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::graphics::Bitmap_Config> _ret(rets, ::android::graphics::Bitmap_Config((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::graphics::Bitmap_Config retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::graphics::Bitmap_Config android::graphics::Bitmap_Config::valueOf(const ::java::lang::String& arg0){
    if (!::android::graphics::Bitmap_Config::_class) ::android::graphics::Bitmap_Config::_class = java::fetch_class("android/graphics/Bitmap$Config");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/graphics/Bitmap$Config;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::Bitmap_Config _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::PathMeasure::PathMeasure() : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::PathMeasure::_class) ::android::graphics::PathMeasure::_class = java::fetch_class("android/graphics/PathMeasure");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::PathMeasure::PathMeasure(const ::android::graphics::Path& arg0, bool arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::PathMeasure::_class) ::android::graphics::PathMeasure::_class = java::fetch_class("android/graphics/PathMeasure");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/Path;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::graphics::PathMeasure::setPath(const ::android::graphics::Path& arg0, bool arg1) const {
    if (!::android::graphics::PathMeasure::_class) ::android::graphics::PathMeasure::_class = java::fetch_class("android/graphics/PathMeasure");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPath", "(Landroid/graphics/Path;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

float android::graphics::PathMeasure::getLength() const {
    if (!::android::graphics::PathMeasure::_class) ::android::graphics::PathMeasure::_class = java::fetch_class("android/graphics/PathMeasure");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLength", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

bool android::graphics::PathMeasure::getPosTan(float arg0, const std::vector< float>& arg1, const std::vector< float>& arg2) const {
    if (!::android::graphics::PathMeasure::_class) ::android::graphics::PathMeasure::_class = java::fetch_class("android/graphics/PathMeasure");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPosTan", "(F[F[F)Z");
    float _arg0 = arg0;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::graphics::PathMeasure::getMatrix(float arg0, const ::android::graphics::Matrix& arg1, int32_t arg2) const {
    if (!::android::graphics::PathMeasure::_class) ::android::graphics::PathMeasure::_class = java::fetch_class("android/graphics/PathMeasure");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMatrix", "(FLandroid/graphics/Matrix;I)Z");
    float _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::graphics::PathMeasure::getSegment(float arg0, float arg1, const ::android::graphics::Path& arg2, bool arg3) const {
    if (!::android::graphics::PathMeasure::_class) ::android::graphics::PathMeasure::_class = java::fetch_class("android/graphics/PathMeasure");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSegment", "(FFLandroid/graphics/Path;Z)Z");
    float _arg0 = arg0;
    float _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    bool _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::graphics::PathMeasure::isClosed() const {
    if (!::android::graphics::PathMeasure::_class) ::android::graphics::PathMeasure::_class = java::fetch_class("android/graphics/PathMeasure");
    static jmethodID mid = java::jni->GetMethodID(_class, "isClosed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::graphics::PathMeasure::nextContour() const {
    if (!::android::graphics::PathMeasure::_class) ::android::graphics::PathMeasure::_class = java::fetch_class("android/graphics/PathMeasure");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextContour", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::Color::Color() : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::Color::_class) ::android::graphics::Color::_class = java::fetch_class("android/graphics/Color");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::graphics::Color::alpha(int32_t arg0){
    if (!::android::graphics::Color::_class) ::android::graphics::Color::_class = java::fetch_class("android/graphics/Color");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "alpha", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::graphics::Color::red(int32_t arg0){
    if (!::android::graphics::Color::_class) ::android::graphics::Color::_class = java::fetch_class("android/graphics/Color");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "red", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::graphics::Color::green(int32_t arg0){
    if (!::android::graphics::Color::_class) ::android::graphics::Color::_class = java::fetch_class("android/graphics/Color");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "green", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::graphics::Color::blue(int32_t arg0){
    if (!::android::graphics::Color::_class) ::android::graphics::Color::_class = java::fetch_class("android/graphics/Color");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "blue", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::graphics::Color::rgb(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::graphics::Color::_class) ::android::graphics::Color::_class = java::fetch_class("android/graphics/Color");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "rgb", "(III)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2);
}

int32_t android::graphics::Color::argb(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::graphics::Color::_class) ::android::graphics::Color::_class = java::fetch_class("android/graphics/Color");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "argb", "(IIII)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::graphics::Color::parseColor(const ::java::lang::String& arg0){
    if (!::android::graphics::Color::_class) ::android::graphics::Color::_class = java::fetch_class("android/graphics/Color");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parseColor", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void android::graphics::Color::RGBToHSV(int32_t arg0, int32_t arg1, int32_t arg2, const std::vector< float>& arg3){
    if (!::android::graphics::Color::_class) ::android::graphics::Color::_class = java::fetch_class("android/graphics/Color");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "RGBToHSV", "(III[F)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jfloatArray _arg3 = java::jni->NewFloatArray(arg3.size());
    java::jni->SetFloatArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::Color::colorToHSV(int32_t arg0, const std::vector< float>& arg1){
    if (!::android::graphics::Color::_class) ::android::graphics::Color::_class = java::fetch_class("android/graphics/Color");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "colorToHSV", "(I[F)V");
    int32_t _arg0 = arg0;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

int32_t android::graphics::Color::HSVToColor(const std::vector< float>& arg0){
    if (!::android::graphics::Color::_class) ::android::graphics::Color::_class = java::fetch_class("android/graphics/Color");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "HSVToColor", "([F)I");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::graphics::Color::HSVToColor(int32_t arg0, const std::vector< float>& arg1){
    if (!::android::graphics::Color::_class) ::android::graphics::Color::_class = java::fetch_class("android/graphics/Color");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "HSVToColor", "(I[F)I");
    int32_t _arg0 = arg0;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::PixelXorXfermode::PixelXorXfermode(int32_t arg0) : ::java::lang::Object((jobject)0), ::android::graphics::Xfermode((jobject)0) {
    if (!::android::graphics::PixelXorXfermode::_class) ::android::graphics::PixelXorXfermode::_class = java::fetch_class("android/graphics/PixelXorXfermode");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::Paint_FontMetricsInt::Paint_FontMetricsInt() : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::Paint_FontMetricsInt::_class) ::android::graphics::Paint_FontMetricsInt::_class = java::fetch_class("android/graphics/Paint$FontMetricsInt");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::graphics::Paint_FontMetricsInt::toString() const {
    if (!::android::graphics::Paint_FontMetricsInt::_class) ::android::graphics::Paint_FontMetricsInt::_class = java::fetch_class("android/graphics/Paint$FontMetricsInt");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::LightingColorFilter::LightingColorFilter(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::graphics::ColorFilter((jobject)0) {
    if (!::android::graphics::LightingColorFilter::_class) ::android::graphics::LightingColorFilter::_class = java::fetch_class("android/graphics/LightingColorFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::RectF::RectF() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::RectF::RectF(float arg0, float arg1, float arg2, float arg3) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
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
::android::graphics::RectF::RectF(const ::android::graphics::Rect& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String android::graphics::RectF::toString() const {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::graphics::RectF::toShortString() const {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "toShortString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::graphics::RectF::isEmpty() const {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

float android::graphics::RectF::width() const {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "width", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::graphics::RectF::height() const {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "height", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::graphics::RectF::centerX() const {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "centerX", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::graphics::RectF::centerY() const {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "centerY", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::graphics::RectF::setEmpty() const {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEmpty", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::graphics::RectF::set(float arg0, float arg1, float arg2, float arg3) const {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(FFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::RectF::set(const ::android::graphics::RectF& arg0) const {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(Landroid/graphics/RectF;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::RectF::set(const ::android::graphics::Rect& arg0) const {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::RectF::offset(float arg0, float arg1) const {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "offset", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::RectF::offsetTo(float arg0, float arg1) const {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "offsetTo", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::RectF::inset(float arg0, float arg1) const {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "inset", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::RectF::contains(float arg0, float arg1) const {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(FF)Z");
    float _arg0 = arg0;
    float _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::RectF::contains(float arg0, float arg1, float arg2, float arg3) const {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(FFFF)Z");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::graphics::RectF::contains(const ::android::graphics::RectF& arg0) const {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Landroid/graphics/RectF;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::graphics::RectF::intersect(float arg0, float arg1, float arg2, float arg3) const {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "intersect", "(FFFF)Z");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::graphics::RectF::intersect(const ::android::graphics::RectF& arg0) const {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "intersect", "(Landroid/graphics/RectF;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::graphics::RectF::setIntersect(const ::android::graphics::RectF& arg0, const ::android::graphics::RectF& arg1) const {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIntersect", "(Landroid/graphics/RectF;Landroid/graphics/RectF;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::RectF::intersects(float arg0, float arg1, float arg2, float arg3) const {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "intersects", "(FFFF)Z");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::graphics::RectF::intersects(const ::android::graphics::RectF& arg0, const ::android::graphics::RectF& arg1){
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "intersects", "(Landroid/graphics/RectF;Landroid/graphics/RectF;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

void android::graphics::RectF::round(const ::android::graphics::Rect& arg0) const {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "round", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::RectF::roundOut(const ::android::graphics::Rect& arg0) const {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "roundOut", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::RectF::union_(float arg0, float arg1, float arg2, float arg3) const {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "union_", "(FFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::RectF::union_(const ::android::graphics::RectF& arg0) const {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "union_", "(Landroid/graphics/RectF;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::RectF::union_(float arg0, float arg1) const {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "union_", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::RectF::sort() const {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "sort", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::graphics::RectF::describeContents() const {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::RectF::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::RectF::readFromParcel(const ::android::os::Parcel& arg0) const {
    if (!::android::graphics::RectF::_class) ::android::graphics::RectF::_class = java::fetch_class("android/graphics/RectF");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFromParcel", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::android::graphics::Canvas_EdgeType> android::graphics::Canvas_EdgeType::values(){
    if (!::android::graphics::Canvas_EdgeType::_class) ::android::graphics::Canvas_EdgeType::_class = java::fetch_class("android/graphics/Canvas$EdgeType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/graphics/Canvas$EdgeType;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::graphics::Canvas_EdgeType> _ret(rets, ::android::graphics::Canvas_EdgeType((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::graphics::Canvas_EdgeType retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::graphics::Canvas_EdgeType android::graphics::Canvas_EdgeType::valueOf(const ::java::lang::String& arg0){
    if (!::android::graphics::Canvas_EdgeType::_class) ::android::graphics::Canvas_EdgeType::_class = java::fetch_class("android/graphics/Canvas$EdgeType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/graphics/Canvas$EdgeType;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::Canvas_EdgeType _ret(ret);
    return _ret;
}

int32_t android::graphics::Bitmap::getDensity() const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDensity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::Bitmap::setDensity(int32_t arg0) const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDensity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::Bitmap::recycle() const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "recycle", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::graphics::Bitmap::isRecycled() const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRecycled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::graphics::Bitmap::getGenerationId() const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGenerationId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::Bitmap::copyPixelsToBuffer(const ::java::nio::Buffer& arg0) const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyPixelsToBuffer", "(Ljava/nio/Buffer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::Bitmap::copyPixelsFromBuffer(const ::java::nio::Buffer& arg0) const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyPixelsFromBuffer", "(Ljava/nio/Buffer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::Bitmap android::graphics::Bitmap::copy(const ::android::graphics::Bitmap_Config& arg0, bool arg1) const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "copy", "(Landroid/graphics/Bitmap$Config;Z)Landroid/graphics/Bitmap;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::graphics::Bitmap::createScaledBitmap(const ::android::graphics::Bitmap& arg0, int32_t arg1, int32_t arg2, bool arg3){
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createScaledBitmap", "(Landroid/graphics/Bitmap;IIZ)Landroid/graphics/Bitmap;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    bool _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::graphics::Bitmap::createBitmap(const ::android::graphics::Bitmap& arg0){
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createBitmap", "(Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::graphics::Bitmap::createBitmap(const ::android::graphics::Bitmap& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4){
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createBitmap", "(Landroid/graphics/Bitmap;IIII)Landroid/graphics/Bitmap;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::graphics::Bitmap::createBitmap(const ::android::graphics::Bitmap& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, const ::android::graphics::Matrix& arg5, bool arg6){
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createBitmap", "(Landroid/graphics/Bitmap;IIIILandroid/graphics/Matrix;Z)Landroid/graphics/Bitmap;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    bool _arg6 = arg6;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::graphics::Bitmap::createBitmap(int32_t arg0, int32_t arg1, const ::android::graphics::Bitmap_Config& arg2){
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createBitmap", "(IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::graphics::Bitmap::createBitmap(const std::vector< int32_t>& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, const ::android::graphics::Bitmap_Config& arg5){
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createBitmap", "([IIIIILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::graphics::Bitmap::createBitmap(const std::vector< int32_t>& arg0, int32_t arg1, int32_t arg2, const ::android::graphics::Bitmap_Config& arg3){
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createBitmap", "([IIILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

std::vector< int8_t> android::graphics::Bitmap::getNinePatchChunk() const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNinePatchChunk", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

bool android::graphics::Bitmap::compress(const ::android::graphics::Bitmap_CompressFormat& arg0, int32_t arg1, const ::java::io::OutputStream& arg2) const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "compress", "(Landroid/graphics/Bitmap$CompressFormat;ILjava/io/OutputStream;)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::graphics::Bitmap::isMutable() const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMutable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::graphics::Bitmap::getWidth() const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::Bitmap::getHeight() const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::Bitmap::getScaledWidth(const ::android::graphics::Canvas& arg0) const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaledWidth", "(Landroid/graphics/Canvas;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::graphics::Bitmap::getScaledHeight(const ::android::graphics::Canvas& arg0) const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaledHeight", "(Landroid/graphics/Canvas;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::graphics::Bitmap::getScaledWidth(const ::android::util::DisplayMetrics& arg0) const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaledWidth", "(Landroid/util/DisplayMetrics;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::graphics::Bitmap::getScaledHeight(const ::android::util::DisplayMetrics& arg0) const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaledHeight", "(Landroid/util/DisplayMetrics;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::graphics::Bitmap::getScaledWidth(int32_t arg0) const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaledWidth", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::graphics::Bitmap::getScaledHeight(int32_t arg0) const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaledHeight", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::graphics::Bitmap::getRowBytes() const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRowBytes", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::Bitmap::getByteCount() const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getByteCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::graphics::Bitmap_Config android::graphics::Bitmap::getConfig() const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConfig", "()Landroid/graphics/Bitmap$Config;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Bitmap_Config _ret(ret);
    return _ret;
}

bool android::graphics::Bitmap::hasAlpha() const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasAlpha", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::graphics::Bitmap::setHasAlpha(bool arg0) const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHasAlpha", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::Bitmap::eraseColor(int32_t arg0) const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "eraseColor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::Bitmap::getPixel(int32_t arg0, int32_t arg1) const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPixel", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::Bitmap::getPixels(const std::vector< int32_t>& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6) const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPixels", "([IIIIIII)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}

void android::graphics::Bitmap::setPixel(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPixel", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::graphics::Bitmap::setPixels(const std::vector< int32_t>& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6) const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPixels", "([IIIIIII)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}

int32_t android::graphics::Bitmap::describeContents() const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::Bitmap::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::graphics::Bitmap android::graphics::Bitmap::extractAlpha() const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "extractAlpha", "()Landroid/graphics/Bitmap;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::graphics::Bitmap::extractAlpha(const ::android::graphics::Paint& arg0, const std::vector< int32_t>& arg1) const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "extractAlpha", "(Landroid/graphics/Paint;[I)Landroid/graphics/Bitmap;");
    jobject _arg0 = arg0.obj;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

bool android::graphics::Bitmap::sameAs(const ::android::graphics::Bitmap& arg0) const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "sameAs", "(Landroid/graphics/Bitmap;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::graphics::Bitmap::prepareToDraw() const {
    if (!::android::graphics::Bitmap::_class) ::android::graphics::Bitmap::_class = java::fetch_class("android/graphics/Bitmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "prepareToDraw", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::EmbossMaskFilter::EmbossMaskFilter(const std::vector< float>& arg0, float arg1, float arg2, float arg3) : ::java::lang::Object((jobject)0), ::android::graphics::MaskFilter((jobject)0) {
    if (!::android::graphics::EmbossMaskFilter::_class) ::android::graphics::EmbossMaskFilter::_class = java::fetch_class("android/graphics/EmbossMaskFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([FFFF)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::PorterDuffXfermode::PorterDuffXfermode(const ::android::graphics::PorterDuff_Mode& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::Xfermode((jobject)0) {
    if (!::android::graphics::PorterDuffXfermode::_class) ::android::graphics::PorterDuffXfermode::_class = java::fetch_class("android/graphics/PorterDuffXfermode");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/PorterDuff$Mode;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::PathDashPathEffect::PathDashPathEffect(const ::android::graphics::Path& arg0, float arg1, float arg2, const ::android::graphics::PathDashPathEffect_Style& arg3) : ::java::lang::Object((jobject)0), ::android::graphics::PathEffect((jobject)0) {
    if (!::android::graphics::PathDashPathEffect::_class) ::android::graphics::PathDashPathEffect::_class = java::fetch_class("android/graphics/PathDashPathEffect");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/Path;FFLandroid/graphics/PathDashPathEffect$Style;)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::PorterDuffColorFilter::PorterDuffColorFilter(int32_t arg0, const ::android::graphics::PorterDuff_Mode& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::ColorFilter((jobject)0) {
    if (!::android::graphics::PorterDuffColorFilter::_class) ::android::graphics::PorterDuffColorFilter::_class = java::fetch_class("android/graphics/PorterDuffColorFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILandroid/graphics/PorterDuff$Mode;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::ColorMatrixColorFilter::ColorMatrixColorFilter(const ::android::graphics::ColorMatrix& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::ColorFilter((jobject)0) {
    if (!::android::graphics::ColorMatrixColorFilter::_class) ::android::graphics::ColorMatrixColorFilter::_class = java::fetch_class("android/graphics/ColorMatrixColorFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/ColorMatrix;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::ColorMatrixColorFilter::ColorMatrixColorFilter(const std::vector< float>& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::ColorFilter((jobject)0) {
    if (!::android::graphics::ColorMatrixColorFilter::_class) ::android::graphics::ColorMatrixColorFilter::_class = java::fetch_class("android/graphics/ColorMatrixColorFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([F)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

std::vector< ::android::graphics::Interpolator_Result> android::graphics::Interpolator_Result::values(){
    if (!::android::graphics::Interpolator_Result::_class) ::android::graphics::Interpolator_Result::_class = java::fetch_class("android/graphics/Interpolator$Result");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/graphics/Interpolator$Result;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::graphics::Interpolator_Result> _ret(rets, ::android::graphics::Interpolator_Result((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::graphics::Interpolator_Result retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::graphics::Interpolator_Result android::graphics::Interpolator_Result::valueOf(const ::java::lang::String& arg0){
    if (!::android::graphics::Interpolator_Result::_class) ::android::graphics::Interpolator_Result::_class = java::fetch_class("android/graphics/Interpolator$Result");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/graphics/Interpolator$Result;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::Interpolator_Result _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::ColorMatrix::ColorMatrix() : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::ColorMatrix::_class) ::android::graphics::ColorMatrix::_class = java::fetch_class("android/graphics/ColorMatrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::ColorMatrix::ColorMatrix(const std::vector< float>& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::ColorMatrix::_class) ::android::graphics::ColorMatrix::_class = java::fetch_class("android/graphics/ColorMatrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([F)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

std::vector< float> android::graphics::ColorMatrix::getArray() const {
    if (!::android::graphics::ColorMatrix::_class) ::android::graphics::ColorMatrix::_class = java::fetch_class("android/graphics/ColorMatrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "getArray", "()[F");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jfloat* reta = java::jni->GetFloatArrayElements((jfloatArray)ret, nullptr);
    std::vector< float> _ret(reta, reta+rets);
    java::jni->ReleaseFloatArrayElements((jfloatArray)ret, reta, JNI_ABORT);
    return _ret;
}

void android::graphics::ColorMatrix::reset() const {
    if (!::android::graphics::ColorMatrix::_class) ::android::graphics::ColorMatrix::_class = java::fetch_class("android/graphics/ColorMatrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::graphics::ColorMatrix::set(const ::android::graphics::ColorMatrix& arg0) const {
    if (!::android::graphics::ColorMatrix::_class) ::android::graphics::ColorMatrix::_class = java::fetch_class("android/graphics/ColorMatrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(Landroid/graphics/ColorMatrix;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::ColorMatrix::set(const std::vector< float>& arg0) const {
    if (!::android::graphics::ColorMatrix::_class) ::android::graphics::ColorMatrix::_class = java::fetch_class("android/graphics/ColorMatrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "([F)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::ColorMatrix::setScale(float arg0, float arg1, float arg2, float arg3) const {
    if (!::android::graphics::ColorMatrix::_class) ::android::graphics::ColorMatrix::_class = java::fetch_class("android/graphics/ColorMatrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScale", "(FFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::ColorMatrix::setRotate(int32_t arg0, float arg1) const {
    if (!::android::graphics::ColorMatrix::_class) ::android::graphics::ColorMatrix::_class = java::fetch_class("android/graphics/ColorMatrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRotate", "(IF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::ColorMatrix::setConcat(const ::android::graphics::ColorMatrix& arg0, const ::android::graphics::ColorMatrix& arg1) const {
    if (!::android::graphics::ColorMatrix::_class) ::android::graphics::ColorMatrix::_class = java::fetch_class("android/graphics/ColorMatrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "setConcat", "(Landroid/graphics/ColorMatrix;Landroid/graphics/ColorMatrix;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::ColorMatrix::preConcat(const ::android::graphics::ColorMatrix& arg0) const {
    if (!::android::graphics::ColorMatrix::_class) ::android::graphics::ColorMatrix::_class = java::fetch_class("android/graphics/ColorMatrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "preConcat", "(Landroid/graphics/ColorMatrix;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::ColorMatrix::postConcat(const ::android::graphics::ColorMatrix& arg0) const {
    if (!::android::graphics::ColorMatrix::_class) ::android::graphics::ColorMatrix::_class = java::fetch_class("android/graphics/ColorMatrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "postConcat", "(Landroid/graphics/ColorMatrix;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::ColorMatrix::setSaturation(float arg0) const {
    if (!::android::graphics::ColorMatrix::_class) ::android::graphics::ColorMatrix::_class = java::fetch_class("android/graphics/ColorMatrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSaturation", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::ColorMatrix::setRGB2YUV() const {
    if (!::android::graphics::ColorMatrix::_class) ::android::graphics::ColorMatrix::_class = java::fetch_class("android/graphics/ColorMatrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRGB2YUV", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::graphics::ColorMatrix::setYUV2RGB() const {
    if (!::android::graphics::ColorMatrix::_class) ::android::graphics::ColorMatrix::_class = java::fetch_class("android/graphics/ColorMatrix");
    static jmethodID mid = java::jni->GetMethodID(_class, "setYUV2RGB", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::SurfaceTexture::SurfaceTexture(int32_t arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::SurfaceTexture::_class) ::android::graphics::SurfaceTexture::_class = java::fetch_class("android/graphics/SurfaceTexture");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::graphics::SurfaceTexture::setOnFrameAvailableListener(const ::android::graphics::SurfaceTexture_OnFrameAvailableListener& arg0) const {
    if (!::android::graphics::SurfaceTexture::_class) ::android::graphics::SurfaceTexture::_class = java::fetch_class("android/graphics/SurfaceTexture");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnFrameAvailableListener", "(Landroid/graphics/SurfaceTexture$OnFrameAvailableListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::SurfaceTexture::setDefaultBufferSize(int32_t arg0, int32_t arg1) const {
    if (!::android::graphics::SurfaceTexture::_class) ::android::graphics::SurfaceTexture::_class = java::fetch_class("android/graphics/SurfaceTexture");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDefaultBufferSize", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::SurfaceTexture::updateTexImage() const {
    if (!::android::graphics::SurfaceTexture::_class) ::android::graphics::SurfaceTexture::_class = java::fetch_class("android/graphics/SurfaceTexture");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateTexImage", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::graphics::SurfaceTexture::getTransformMatrix(const std::vector< float>& arg0) const {
    if (!::android::graphics::SurfaceTexture::_class) ::android::graphics::SurfaceTexture::_class = java::fetch_class("android/graphics/SurfaceTexture");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTransformMatrix", "([F)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int64_t android::graphics::SurfaceTexture::getTimestamp() const {
    if (!::android::graphics::SurfaceTexture::_class) ::android::graphics::SurfaceTexture::_class = java::fetch_class("android/graphics/SurfaceTexture");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimestamp", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void android::graphics::SurfaceTexture::release() const {
    if (!::android::graphics::SurfaceTexture::_class) ::android::graphics::SurfaceTexture::_class = java::fetch_class("android/graphics/SurfaceTexture");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::Interpolator::Interpolator(int32_t arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::Interpolator::_class) ::android::graphics::Interpolator::_class = java::fetch_class("android/graphics/Interpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::Interpolator::Interpolator(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::Interpolator::_class) ::android::graphics::Interpolator::_class = java::fetch_class("android/graphics/Interpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::graphics::Interpolator::reset(int32_t arg0) const {
    if (!::android::graphics::Interpolator::_class) ::android::graphics::Interpolator::_class = java::fetch_class("android/graphics/Interpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::Interpolator::reset(int32_t arg0, int32_t arg1) const {
    if (!::android::graphics::Interpolator::_class) ::android::graphics::Interpolator::_class = java::fetch_class("android/graphics/Interpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::graphics::Interpolator::getKeyFrameCount() const {
    if (!::android::graphics::Interpolator::_class) ::android::graphics::Interpolator::_class = java::fetch_class("android/graphics/Interpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeyFrameCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::Interpolator::getValueCount() const {
    if (!::android::graphics::Interpolator::_class) ::android::graphics::Interpolator::_class = java::fetch_class("android/graphics/Interpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValueCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::Interpolator::setKeyFrame(int32_t arg0, int32_t arg1, const std::vector< float>& arg2) const {
    if (!::android::graphics::Interpolator::_class) ::android::graphics::Interpolator::_class = java::fetch_class("android/graphics/Interpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setKeyFrame", "(II[F)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::graphics::Interpolator::setKeyFrame(int32_t arg0, int32_t arg1, const std::vector< float>& arg2, const std::vector< float>& arg3) const {
    if (!::android::graphics::Interpolator::_class) ::android::graphics::Interpolator::_class = java::fetch_class("android/graphics/Interpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setKeyFrame", "(II[F[F)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    jfloatArray _arg3 = java::jni->NewFloatArray(arg3.size());
    java::jni->SetFloatArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::Interpolator::setRepeatMirror(float arg0, bool arg1) const {
    if (!::android::graphics::Interpolator::_class) ::android::graphics::Interpolator::_class = java::fetch_class("android/graphics/Interpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRepeatMirror", "(FZ)V");
    float _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::graphics::Interpolator_Result android::graphics::Interpolator::timeToValues(const std::vector< float>& arg0) const {
    if (!::android::graphics::Interpolator::_class) ::android::graphics::Interpolator::_class = java::fetch_class("android/graphics/Interpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "timeToValues", "([F)Landroid/graphics/Interpolator$Result;");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::Interpolator_Result _ret(ret);
    return _ret;
}

::android::graphics::Interpolator_Result android::graphics::Interpolator::timeToValues(int32_t arg0, const std::vector< float>& arg1) const {
    if (!::android::graphics::Interpolator::_class) ::android::graphics::Interpolator::_class = java::fetch_class("android/graphics/Interpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "timeToValues", "(I[F)Landroid/graphics/Interpolator$Result;");
    int32_t _arg0 = arg0;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::graphics::Interpolator_Result _ret(ret);
    return _ret;
}

std::vector< ::android::graphics::Path_FillType> android::graphics::Path_FillType::values(){
    if (!::android::graphics::Path_FillType::_class) ::android::graphics::Path_FillType::_class = java::fetch_class("android/graphics/Path$FillType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/graphics/Path$FillType;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::graphics::Path_FillType> _ret(rets, ::android::graphics::Path_FillType((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::graphics::Path_FillType retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::graphics::Path_FillType android::graphics::Path_FillType::valueOf(const ::java::lang::String& arg0){
    if (!::android::graphics::Path_FillType::_class) ::android::graphics::Path_FillType::_class = java::fetch_class("android/graphics/Path$FillType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/graphics/Path$FillType;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::Path_FillType _ret(ret);
    return _ret;
}

