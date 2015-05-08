#include "java-core.hpp"
#include <memory>
#include "android.content.res.Resources.hpp"
#include "android.graphics.Bitmap.hpp"
#include "android.graphics.BitmapFactory.hpp"
#include "android.graphics.Canvas.hpp"
#include "android.graphics.ColorFilter.hpp"
#include "android.graphics.NinePatch.hpp"
#include "android.graphics.Paint.hpp"
#include "android.graphics.Picture.hpp"
#include "android.graphics.PorterDuff.hpp"
#include "android.graphics.Rect.hpp"
#include "android.graphics.Region.hpp"
#include "android.graphics.Shader.hpp"
#include "android.graphics.drawable.Animatable.hpp"
#include "android.graphics.drawable.AnimationDrawable.hpp"
#include "android.graphics.drawable.BitmapDrawable.hpp"
#include "android.graphics.drawable.ClipDrawable.hpp"
#include "android.graphics.drawable.ColorDrawable.hpp"
#include "android.graphics.drawable.Drawable.hpp"
#include "android.graphics.drawable.DrawableContainer.hpp"
#include "android.graphics.drawable.GradientDrawable.hpp"
#include "android.graphics.drawable.InsetDrawable.hpp"
#include "android.graphics.drawable.LayerDrawable.hpp"
#include "android.graphics.drawable.LevelListDrawable.hpp"
#include "android.graphics.drawable.NinePatchDrawable.hpp"
#include "android.graphics.drawable.PaintDrawable.hpp"
#include "android.graphics.drawable.PictureDrawable.hpp"
#include "android.graphics.drawable.RotateDrawable.hpp"
#include "android.graphics.drawable.ScaleDrawable.hpp"
#include "android.graphics.drawable.ShapeDrawable.hpp"
#include "android.graphics.drawable.StateListDrawable.hpp"
#include "android.graphics.drawable.TransitionDrawable.hpp"
#include "android.graphics.drawable.shapes.Shape.hpp"
#include "android.util.AttributeSet.hpp"
#include "android.util.DisplayMetrics.hpp"
#include "android.util.TypedValue.hpp"
#include "java.io.InputStream.hpp"
#include "java.lang.Runnable.hpp"
#include "java.lang.String.hpp"
#include "org.xmlpull.v1.XmlPullParser.hpp"

jclass android::graphics::drawable::TransitionDrawable::_class = nullptr;
jclass android::graphics::drawable::GradientDrawable::_class = nullptr;
jclass android::graphics::drawable::AnimationDrawable::_class = nullptr;
jclass android::graphics::drawable::Drawable_ConstantState::_class = nullptr;
jclass android::graphics::drawable::ShapeDrawable::_class = nullptr;
jclass android::graphics::drawable::RotateDrawable::_class = nullptr;
jclass android::graphics::drawable::Drawable::_class = nullptr;
jclass android::graphics::drawable::ColorDrawable::_class = nullptr;
jclass android::graphics::drawable::StateListDrawable::_class = nullptr;
jclass android::graphics::drawable::InsetDrawable::_class = nullptr;
jclass android::graphics::drawable::GradientDrawable_Orientation::_class = nullptr;
jclass android::graphics::drawable::BitmapDrawable::_class = nullptr;
jclass android::graphics::drawable::ClipDrawable::_class = nullptr;
jclass android::graphics::drawable::ScaleDrawable::_class = nullptr;
jclass android::graphics::drawable::DrawableContainer::_class = nullptr;
jclass android::graphics::drawable::Drawable_Callback::_class = nullptr;
jclass android::graphics::drawable::NinePatchDrawable::_class = nullptr;
jclass android::graphics::drawable::LayerDrawable::_class = nullptr;
jclass android::graphics::drawable::LevelListDrawable::_class = nullptr;
jclass android::graphics::drawable::DrawableContainer_DrawableContainerState::_class = nullptr;
jclass android::graphics::drawable::PictureDrawable::_class = nullptr;
jclass android::graphics::drawable::PaintDrawable::_class = nullptr;
jclass android::graphics::drawable::Animatable::_class = nullptr;
jclass android::graphics::drawable::ShapeDrawable_ShaderFactory::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::TransitionDrawable::TransitionDrawable(const std::vector< ::android::graphics::drawable::Drawable>& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::graphics::drawable::LayerDrawable((jobject)0) {
    if (!::android::graphics::drawable::TransitionDrawable::_class) ::android::graphics::drawable::TransitionDrawable::_class = java::fetch_class("android/graphics/drawable/TransitionDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([Landroid/graphics/drawable/Drawable;)V");
    unsigned arg0s = arg0.size();
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::graphics::drawable::Drawable::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::graphics::drawable::Drawable& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::graphics::drawable::TransitionDrawable::startTransition(int32_t arg0) const {
    if (!::android::graphics::drawable::TransitionDrawable::_class) ::android::graphics::drawable::TransitionDrawable::_class = java::fetch_class("android/graphics/drawable/TransitionDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "startTransition", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::TransitionDrawable::resetTransition() const {
    if (!::android::graphics::drawable::TransitionDrawable::_class) ::android::graphics::drawable::TransitionDrawable::_class = java::fetch_class("android/graphics/drawable/TransitionDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "resetTransition", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::graphics::drawable::TransitionDrawable::reverseTransition(int32_t arg0) const {
    if (!::android::graphics::drawable::TransitionDrawable::_class) ::android::graphics::drawable::TransitionDrawable::_class = java::fetch_class("android/graphics/drawable/TransitionDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "reverseTransition", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::TransitionDrawable::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::graphics::drawable::TransitionDrawable::_class) ::android::graphics::drawable::TransitionDrawable::_class = java::fetch_class("android/graphics/drawable/TransitionDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::TransitionDrawable::setCrossFadeEnabled(bool arg0) const {
    if (!::android::graphics::drawable::TransitionDrawable::_class) ::android::graphics::drawable::TransitionDrawable::_class = java::fetch_class("android/graphics/drawable/TransitionDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCrossFadeEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::graphics::drawable::TransitionDrawable::isCrossFadeEnabled() const {
    if (!::android::graphics::drawable::TransitionDrawable::_class) ::android::graphics::drawable::TransitionDrawable::_class = java::fetch_class("android/graphics/drawable/TransitionDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCrossFadeEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::GradientDrawable::GradientDrawable() : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {
    if (!::android::graphics::drawable::GradientDrawable::_class) ::android::graphics::drawable::GradientDrawable::_class = java::fetch_class("android/graphics/drawable/GradientDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::GradientDrawable::GradientDrawable(const ::android::graphics::drawable::GradientDrawable_Orientation& arg0, const std::vector< int32_t>& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {
    if (!::android::graphics::drawable::GradientDrawable::_class) ::android::graphics::drawable::GradientDrawable::_class = java::fetch_class("android/graphics/drawable/GradientDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/drawable/GradientDrawable$Orientation;[I)V");
    jobject _arg0 = arg0.obj;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool android::graphics::drawable::GradientDrawable::getPadding(const ::android::graphics::Rect& arg0) const {
    if (!::android::graphics::drawable::GradientDrawable::_class) ::android::graphics::drawable::GradientDrawable::_class = java::fetch_class("android/graphics/drawable/GradientDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPadding", "(Landroid/graphics/Rect;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::graphics::drawable::GradientDrawable::setCornerRadii(const std::vector< float>& arg0) const {
    if (!::android::graphics::drawable::GradientDrawable::_class) ::android::graphics::drawable::GradientDrawable::_class = java::fetch_class("android/graphics/drawable/GradientDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCornerRadii", "([F)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::GradientDrawable::setCornerRadius(float arg0) const {
    if (!::android::graphics::drawable::GradientDrawable::_class) ::android::graphics::drawable::GradientDrawable::_class = java::fetch_class("android/graphics/drawable/GradientDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCornerRadius", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::GradientDrawable::setStroke(int32_t arg0, int32_t arg1) const {
    if (!::android::graphics::drawable::GradientDrawable::_class) ::android::graphics::drawable::GradientDrawable::_class = java::fetch_class("android/graphics/drawable/GradientDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStroke", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::drawable::GradientDrawable::setStroke(int32_t arg0, int32_t arg1, float arg2, float arg3) const {
    if (!::android::graphics::drawable::GradientDrawable::_class) ::android::graphics::drawable::GradientDrawable::_class = java::fetch_class("android/graphics/drawable/GradientDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStroke", "(IIFF)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::drawable::GradientDrawable::setSize(int32_t arg0, int32_t arg1) const {
    if (!::android::graphics::drawable::GradientDrawable::_class) ::android::graphics::drawable::GradientDrawable::_class = java::fetch_class("android/graphics/drawable/GradientDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSize", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::drawable::GradientDrawable::setShape(int32_t arg0) const {
    if (!::android::graphics::drawable::GradientDrawable::_class) ::android::graphics::drawable::GradientDrawable::_class = java::fetch_class("android/graphics/drawable/GradientDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShape", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::GradientDrawable::setGradientType(int32_t arg0) const {
    if (!::android::graphics::drawable::GradientDrawable::_class) ::android::graphics::drawable::GradientDrawable::_class = java::fetch_class("android/graphics/drawable/GradientDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGradientType", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::GradientDrawable::setGradientCenter(float arg0, float arg1) const {
    if (!::android::graphics::drawable::GradientDrawable::_class) ::android::graphics::drawable::GradientDrawable::_class = java::fetch_class("android/graphics/drawable/GradientDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGradientCenter", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::drawable::GradientDrawable::setGradientRadius(float arg0) const {
    if (!::android::graphics::drawable::GradientDrawable::_class) ::android::graphics::drawable::GradientDrawable::_class = java::fetch_class("android/graphics/drawable/GradientDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGradientRadius", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::GradientDrawable::setUseLevel(bool arg0) const {
    if (!::android::graphics::drawable::GradientDrawable::_class) ::android::graphics::drawable::GradientDrawable::_class = java::fetch_class("android/graphics/drawable/GradientDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUseLevel", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::GradientDrawable::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::graphics::drawable::GradientDrawable::_class) ::android::graphics::drawable::GradientDrawable::_class = java::fetch_class("android/graphics/drawable/GradientDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::GradientDrawable::setColor(int32_t arg0) const {
    if (!::android::graphics::drawable::GradientDrawable::_class) ::android::graphics::drawable::GradientDrawable::_class = java::fetch_class("android/graphics/drawable/GradientDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::drawable::GradientDrawable::getChangingConfigurations() const {
    if (!::android::graphics::drawable::GradientDrawable::_class) ::android::graphics::drawable::GradientDrawable::_class = java::fetch_class("android/graphics/drawable/GradientDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChangingConfigurations", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::drawable::GradientDrawable::setAlpha(int32_t arg0) const {
    if (!::android::graphics::drawable::GradientDrawable::_class) ::android::graphics::drawable::GradientDrawable::_class = java::fetch_class("android/graphics/drawable/GradientDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAlpha", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::GradientDrawable::setDither(bool arg0) const {
    if (!::android::graphics::drawable::GradientDrawable::_class) ::android::graphics::drawable::GradientDrawable::_class = java::fetch_class("android/graphics/drawable/GradientDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDither", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::GradientDrawable::setColorFilter(const ::android::graphics::ColorFilter& arg0) const {
    if (!::android::graphics::drawable::GradientDrawable::_class) ::android::graphics::drawable::GradientDrawable::_class = java::fetch_class("android/graphics/drawable/GradientDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorFilter", "(Landroid/graphics/ColorFilter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::drawable::GradientDrawable::getOpacity() const {
    if (!::android::graphics::drawable::GradientDrawable::_class) ::android::graphics::drawable::GradientDrawable::_class = java::fetch_class("android/graphics/drawable/GradientDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOpacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::drawable::GradientDrawable::inflate(const ::android::content::res::Resources& arg0, const ::org::xmlpull::v1::XmlPullParser& arg1, const ::android::util::AttributeSet& arg2) const {
    if (!::android::graphics::drawable::GradientDrawable::_class) ::android::graphics::drawable::GradientDrawable::_class = java::fetch_class("android/graphics/drawable/GradientDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "inflate", "(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::graphics::drawable::GradientDrawable::getIntrinsicWidth() const {
    if (!::android::graphics::drawable::GradientDrawable::_class) ::android::graphics::drawable::GradientDrawable::_class = java::fetch_class("android/graphics/drawable/GradientDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntrinsicWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::drawable::GradientDrawable::getIntrinsicHeight() const {
    if (!::android::graphics::drawable::GradientDrawable::_class) ::android::graphics::drawable::GradientDrawable::_class = java::fetch_class("android/graphics/drawable/GradientDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntrinsicHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::graphics::drawable::Drawable_ConstantState android::graphics::drawable::GradientDrawable::getConstantState() const {
    if (!::android::graphics::drawable::GradientDrawable::_class) ::android::graphics::drawable::GradientDrawable::_class = java::fetch_class("android/graphics/drawable/GradientDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConstantState", "()Landroid/graphics/drawable/Drawable$ConstantState;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable_ConstantState _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::graphics::drawable::GradientDrawable::mutate() const {
    if (!::android::graphics::drawable::GradientDrawable::_class) ::android::graphics::drawable::GradientDrawable::_class = java::fetch_class("android/graphics/drawable/GradientDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "mutate", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::AnimationDrawable::AnimationDrawable() : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Animatable((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::graphics::drawable::DrawableContainer((jobject)0), ::java::lang::Runnable((jobject)0) {
    if (!::android::graphics::drawable::AnimationDrawable::_class) ::android::graphics::drawable::AnimationDrawable::_class = java::fetch_class("android/graphics/drawable/AnimationDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::graphics::drawable::AnimationDrawable::setVisible(bool arg0, bool arg1) const {
    if (!::android::graphics::drawable::AnimationDrawable::_class) ::android::graphics::drawable::AnimationDrawable::_class = java::fetch_class("android/graphics/drawable/AnimationDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVisible", "(ZZ)Z");
    bool _arg0 = arg0;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::drawable::AnimationDrawable::start() const {
    if (!::android::graphics::drawable::AnimationDrawable::_class) ::android::graphics::drawable::AnimationDrawable::_class = java::fetch_class("android/graphics/drawable/AnimationDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::graphics::drawable::AnimationDrawable::stop() const {
    if (!::android::graphics::drawable::AnimationDrawable::_class) ::android::graphics::drawable::AnimationDrawable::_class = java::fetch_class("android/graphics/drawable/AnimationDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "stop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::graphics::drawable::AnimationDrawable::isRunning() const {
    if (!::android::graphics::drawable::AnimationDrawable::_class) ::android::graphics::drawable::AnimationDrawable::_class = java::fetch_class("android/graphics/drawable/AnimationDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRunning", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::graphics::drawable::AnimationDrawable::run() const {
    if (!::android::graphics::drawable::AnimationDrawable::_class) ::android::graphics::drawable::AnimationDrawable::_class = java::fetch_class("android/graphics/drawable/AnimationDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "run", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::graphics::drawable::AnimationDrawable::unscheduleSelf(const ::java::lang::Runnable& arg0) const {
    if (!::android::graphics::drawable::AnimationDrawable::_class) ::android::graphics::drawable::AnimationDrawable::_class = java::fetch_class("android/graphics/drawable/AnimationDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "unscheduleSelf", "(Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::drawable::AnimationDrawable::getNumberOfFrames() const {
    if (!::android::graphics::drawable::AnimationDrawable::_class) ::android::graphics::drawable::AnimationDrawable::_class = java::fetch_class("android/graphics/drawable/AnimationDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNumberOfFrames", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::graphics::drawable::Drawable android::graphics::drawable::AnimationDrawable::getFrame(int32_t arg0) const {
    if (!::android::graphics::drawable::AnimationDrawable::_class) ::android::graphics::drawable::AnimationDrawable::_class = java::fetch_class("android/graphics/drawable/AnimationDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFrame", "(I)Landroid/graphics/drawable/Drawable;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

int32_t android::graphics::drawable::AnimationDrawable::getDuration(int32_t arg0) const {
    if (!::android::graphics::drawable::AnimationDrawable::_class) ::android::graphics::drawable::AnimationDrawable::_class = java::fetch_class("android/graphics/drawable/AnimationDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDuration", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::graphics::drawable::AnimationDrawable::isOneShot() const {
    if (!::android::graphics::drawable::AnimationDrawable::_class) ::android::graphics::drawable::AnimationDrawable::_class = java::fetch_class("android/graphics/drawable/AnimationDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOneShot", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::graphics::drawable::AnimationDrawable::setOneShot(bool arg0) const {
    if (!::android::graphics::drawable::AnimationDrawable::_class) ::android::graphics::drawable::AnimationDrawable::_class = java::fetch_class("android/graphics/drawable/AnimationDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOneShot", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::AnimationDrawable::addFrame(const ::android::graphics::drawable::Drawable& arg0, int32_t arg1) const {
    if (!::android::graphics::drawable::AnimationDrawable::_class) ::android::graphics::drawable::AnimationDrawable::_class = java::fetch_class("android/graphics/drawable/AnimationDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "addFrame", "(Landroid/graphics/drawable/Drawable;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::drawable::AnimationDrawable::inflate(const ::android::content::res::Resources& arg0, const ::org::xmlpull::v1::XmlPullParser& arg1, const ::android::util::AttributeSet& arg2) const {
    if (!::android::graphics::drawable::AnimationDrawable::_class) ::android::graphics::drawable::AnimationDrawable::_class = java::fetch_class("android/graphics/drawable/AnimationDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "inflate", "(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::graphics::drawable::Drawable android::graphics::drawable::AnimationDrawable::mutate() const {
    if (!::android::graphics::drawable::AnimationDrawable::_class) ::android::graphics::drawable::AnimationDrawable::_class = java::fetch_class("android/graphics/drawable/AnimationDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "mutate", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::Drawable_ConstantState::Drawable_ConstantState() : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::drawable::Drawable_ConstantState::_class) ::android::graphics::drawable::Drawable_ConstantState::_class = java::fetch_class("android/graphics/drawable/Drawable$ConstantState");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::graphics::drawable::Drawable android::graphics::drawable::Drawable_ConstantState::newDrawable() const {
    if (!::android::graphics::drawable::Drawable_ConstantState::_class) ::android::graphics::drawable::Drawable_ConstantState::_class = java::fetch_class("android/graphics/drawable/Drawable$ConstantState");
    static jmethodID mid = java::jni->GetMethodID(_class, "newDrawable", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::graphics::drawable::Drawable_ConstantState::newDrawable(const ::android::content::res::Resources& arg0) const {
    if (!::android::graphics::drawable::Drawable_ConstantState::_class) ::android::graphics::drawable::Drawable_ConstantState::_class = java::fetch_class("android/graphics/drawable/Drawable$ConstantState");
    static jmethodID mid = java::jni->GetMethodID(_class, "newDrawable", "(Landroid/content/res/Resources;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

int32_t android::graphics::drawable::Drawable_ConstantState::getChangingConfigurations() const {
    if (!::android::graphics::drawable::Drawable_ConstantState::_class) ::android::graphics::drawable::Drawable_ConstantState::_class = java::fetch_class("android/graphics/drawable/Drawable$ConstantState");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChangingConfigurations", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::ShapeDrawable::ShapeDrawable() : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {
    if (!::android::graphics::drawable::ShapeDrawable::_class) ::android::graphics::drawable::ShapeDrawable::_class = java::fetch_class("android/graphics/drawable/ShapeDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::ShapeDrawable::ShapeDrawable(const ::android::graphics::drawable::shapes::Shape& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {
    if (!::android::graphics::drawable::ShapeDrawable::_class) ::android::graphics::drawable::ShapeDrawable::_class = java::fetch_class("android/graphics/drawable/ShapeDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/drawable/shapes/Shape;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::graphics::drawable::shapes::Shape android::graphics::drawable::ShapeDrawable::getShape() const {
    if (!::android::graphics::drawable::ShapeDrawable::_class) ::android::graphics::drawable::ShapeDrawable::_class = java::fetch_class("android/graphics/drawable/ShapeDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShape", "()Landroid/graphics/drawable/shapes/Shape;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::shapes::Shape _ret(ret);
    return _ret;
}

void android::graphics::drawable::ShapeDrawable::setShape(const ::android::graphics::drawable::shapes::Shape& arg0) const {
    if (!::android::graphics::drawable::ShapeDrawable::_class) ::android::graphics::drawable::ShapeDrawable::_class = java::fetch_class("android/graphics/drawable/ShapeDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShape", "(Landroid/graphics/drawable/shapes/Shape;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::ShapeDrawable::setShaderFactory(const ::android::graphics::drawable::ShapeDrawable_ShaderFactory& arg0) const {
    if (!::android::graphics::drawable::ShapeDrawable::_class) ::android::graphics::drawable::ShapeDrawable::_class = java::fetch_class("android/graphics/drawable/ShapeDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShaderFactory", "(Landroid/graphics/drawable/ShapeDrawable$ShaderFactory;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::drawable::ShapeDrawable_ShaderFactory android::graphics::drawable::ShapeDrawable::getShaderFactory() const {
    if (!::android::graphics::drawable::ShapeDrawable::_class) ::android::graphics::drawable::ShapeDrawable::_class = java::fetch_class("android/graphics/drawable/ShapeDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShaderFactory", "()Landroid/graphics/drawable/ShapeDrawable$ShaderFactory;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::ShapeDrawable_ShaderFactory _ret(ret);
    return _ret;
}

::android::graphics::Paint android::graphics::drawable::ShapeDrawable::getPaint() const {
    if (!::android::graphics::drawable::ShapeDrawable::_class) ::android::graphics::drawable::ShapeDrawable::_class = java::fetch_class("android/graphics/drawable/ShapeDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPaint", "()Landroid/graphics/Paint;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Paint _ret(ret);
    return _ret;
}

void android::graphics::drawable::ShapeDrawable::setPadding(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::graphics::drawable::ShapeDrawable::_class) ::android::graphics::drawable::ShapeDrawable::_class = java::fetch_class("android/graphics/drawable/ShapeDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPadding", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::drawable::ShapeDrawable::setPadding(const ::android::graphics::Rect& arg0) const {
    if (!::android::graphics::drawable::ShapeDrawable::_class) ::android::graphics::drawable::ShapeDrawable::_class = java::fetch_class("android/graphics/drawable/ShapeDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPadding", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::ShapeDrawable::setIntrinsicWidth(int32_t arg0) const {
    if (!::android::graphics::drawable::ShapeDrawable::_class) ::android::graphics::drawable::ShapeDrawable::_class = java::fetch_class("android/graphics/drawable/ShapeDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIntrinsicWidth", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::ShapeDrawable::setIntrinsicHeight(int32_t arg0) const {
    if (!::android::graphics::drawable::ShapeDrawable::_class) ::android::graphics::drawable::ShapeDrawable::_class = java::fetch_class("android/graphics/drawable/ShapeDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIntrinsicHeight", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::drawable::ShapeDrawable::getIntrinsicWidth() const {
    if (!::android::graphics::drawable::ShapeDrawable::_class) ::android::graphics::drawable::ShapeDrawable::_class = java::fetch_class("android/graphics/drawable/ShapeDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntrinsicWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::drawable::ShapeDrawable::getIntrinsicHeight() const {
    if (!::android::graphics::drawable::ShapeDrawable::_class) ::android::graphics::drawable::ShapeDrawable::_class = java::fetch_class("android/graphics/drawable/ShapeDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntrinsicHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::graphics::drawable::ShapeDrawable::getPadding(const ::android::graphics::Rect& arg0) const {
    if (!::android::graphics::drawable::ShapeDrawable::_class) ::android::graphics::drawable::ShapeDrawable::_class = java::fetch_class("android/graphics/drawable/ShapeDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPadding", "(Landroid/graphics/Rect;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::graphics::drawable::ShapeDrawable::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::graphics::drawable::ShapeDrawable::_class) ::android::graphics::drawable::ShapeDrawable::_class = java::fetch_class("android/graphics/drawable/ShapeDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::drawable::ShapeDrawable::getChangingConfigurations() const {
    if (!::android::graphics::drawable::ShapeDrawable::_class) ::android::graphics::drawable::ShapeDrawable::_class = java::fetch_class("android/graphics/drawable/ShapeDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChangingConfigurations", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::drawable::ShapeDrawable::setAlpha(int32_t arg0) const {
    if (!::android::graphics::drawable::ShapeDrawable::_class) ::android::graphics::drawable::ShapeDrawable::_class = java::fetch_class("android/graphics/drawable/ShapeDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAlpha", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::ShapeDrawable::setColorFilter(const ::android::graphics::ColorFilter& arg0) const {
    if (!::android::graphics::drawable::ShapeDrawable::_class) ::android::graphics::drawable::ShapeDrawable::_class = java::fetch_class("android/graphics/drawable/ShapeDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorFilter", "(Landroid/graphics/ColorFilter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::drawable::ShapeDrawable::getOpacity() const {
    if (!::android::graphics::drawable::ShapeDrawable::_class) ::android::graphics::drawable::ShapeDrawable::_class = java::fetch_class("android/graphics/drawable/ShapeDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOpacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::drawable::ShapeDrawable::setDither(bool arg0) const {
    if (!::android::graphics::drawable::ShapeDrawable::_class) ::android::graphics::drawable::ShapeDrawable::_class = java::fetch_class("android/graphics/drawable/ShapeDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDither", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::ShapeDrawable::inflate(const ::android::content::res::Resources& arg0, const ::org::xmlpull::v1::XmlPullParser& arg1, const ::android::util::AttributeSet& arg2) const {
    if (!::android::graphics::drawable::ShapeDrawable::_class) ::android::graphics::drawable::ShapeDrawable::_class = java::fetch_class("android/graphics/drawable/ShapeDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "inflate", "(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::graphics::drawable::Drawable_ConstantState android::graphics::drawable::ShapeDrawable::getConstantState() const {
    if (!::android::graphics::drawable::ShapeDrawable::_class) ::android::graphics::drawable::ShapeDrawable::_class = java::fetch_class("android/graphics/drawable/ShapeDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConstantState", "()Landroid/graphics/drawable/Drawable$ConstantState;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable_ConstantState _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::graphics::drawable::ShapeDrawable::mutate() const {
    if (!::android::graphics::drawable::ShapeDrawable::_class) ::android::graphics::drawable::ShapeDrawable::_class = java::fetch_class("android/graphics/drawable/ShapeDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "mutate", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::RotateDrawable::RotateDrawable() : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0) {
    if (!::android::graphics::drawable::RotateDrawable::_class) ::android::graphics::drawable::RotateDrawable::_class = java::fetch_class("android/graphics/drawable/RotateDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::graphics::drawable::RotateDrawable::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::graphics::drawable::RotateDrawable::_class) ::android::graphics::drawable::RotateDrawable::_class = java::fetch_class("android/graphics/drawable/RotateDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::drawable::Drawable android::graphics::drawable::RotateDrawable::getDrawable() const {
    if (!::android::graphics::drawable::RotateDrawable::_class) ::android::graphics::drawable::RotateDrawable::_class = java::fetch_class("android/graphics/drawable/RotateDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDrawable", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

int32_t android::graphics::drawable::RotateDrawable::getChangingConfigurations() const {
    if (!::android::graphics::drawable::RotateDrawable::_class) ::android::graphics::drawable::RotateDrawable::_class = java::fetch_class("android/graphics/drawable/RotateDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChangingConfigurations", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::drawable::RotateDrawable::setAlpha(int32_t arg0) const {
    if (!::android::graphics::drawable::RotateDrawable::_class) ::android::graphics::drawable::RotateDrawable::_class = java::fetch_class("android/graphics/drawable/RotateDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAlpha", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::RotateDrawable::setColorFilter(const ::android::graphics::ColorFilter& arg0) const {
    if (!::android::graphics::drawable::RotateDrawable::_class) ::android::graphics::drawable::RotateDrawable::_class = java::fetch_class("android/graphics/drawable/RotateDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorFilter", "(Landroid/graphics/ColorFilter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::drawable::RotateDrawable::getOpacity() const {
    if (!::android::graphics::drawable::RotateDrawable::_class) ::android::graphics::drawable::RotateDrawable::_class = java::fetch_class("android/graphics/drawable/RotateDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOpacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::drawable::RotateDrawable::invalidateDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::graphics::drawable::RotateDrawable::_class) ::android::graphics::drawable::RotateDrawable::_class = java::fetch_class("android/graphics/drawable/RotateDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidateDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::RotateDrawable::scheduleDrawable(const ::android::graphics::drawable::Drawable& arg0, const ::java::lang::Runnable& arg1, int64_t arg2) const {
    if (!::android::graphics::drawable::RotateDrawable::_class) ::android::graphics::drawable::RotateDrawable::_class = java::fetch_class("android/graphics/drawable/RotateDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "scheduleDrawable", "(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::graphics::drawable::RotateDrawable::unscheduleDrawable(const ::android::graphics::drawable::Drawable& arg0, const ::java::lang::Runnable& arg1) const {
    if (!::android::graphics::drawable::RotateDrawable::_class) ::android::graphics::drawable::RotateDrawable::_class = java::fetch_class("android/graphics/drawable/RotateDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "unscheduleDrawable", "(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::drawable::RotateDrawable::getPadding(const ::android::graphics::Rect& arg0) const {
    if (!::android::graphics::drawable::RotateDrawable::_class) ::android::graphics::drawable::RotateDrawable::_class = java::fetch_class("android/graphics/drawable/RotateDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPadding", "(Landroid/graphics/Rect;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::graphics::drawable::RotateDrawable::setVisible(bool arg0, bool arg1) const {
    if (!::android::graphics::drawable::RotateDrawable::_class) ::android::graphics::drawable::RotateDrawable::_class = java::fetch_class("android/graphics/drawable/RotateDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVisible", "(ZZ)Z");
    bool _arg0 = arg0;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::drawable::RotateDrawable::isStateful() const {
    if (!::android::graphics::drawable::RotateDrawable::_class) ::android::graphics::drawable::RotateDrawable::_class = java::fetch_class("android/graphics/drawable/RotateDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStateful", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::graphics::drawable::RotateDrawable::getIntrinsicWidth() const {
    if (!::android::graphics::drawable::RotateDrawable::_class) ::android::graphics::drawable::RotateDrawable::_class = java::fetch_class("android/graphics/drawable/RotateDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntrinsicWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::drawable::RotateDrawable::getIntrinsicHeight() const {
    if (!::android::graphics::drawable::RotateDrawable::_class) ::android::graphics::drawable::RotateDrawable::_class = java::fetch_class("android/graphics/drawable/RotateDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntrinsicHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::graphics::drawable::Drawable_ConstantState android::graphics::drawable::RotateDrawable::getConstantState() const {
    if (!::android::graphics::drawable::RotateDrawable::_class) ::android::graphics::drawable::RotateDrawable::_class = java::fetch_class("android/graphics/drawable/RotateDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConstantState", "()Landroid/graphics/drawable/Drawable$ConstantState;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable_ConstantState _ret(ret);
    return _ret;
}

void android::graphics::drawable::RotateDrawable::inflate(const ::android::content::res::Resources& arg0, const ::org::xmlpull::v1::XmlPullParser& arg1, const ::android::util::AttributeSet& arg2) const {
    if (!::android::graphics::drawable::RotateDrawable::_class) ::android::graphics::drawable::RotateDrawable::_class = java::fetch_class("android/graphics/drawable/RotateDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "inflate", "(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::graphics::drawable::Drawable android::graphics::drawable::RotateDrawable::mutate() const {
    if (!::android::graphics::drawable::RotateDrawable::_class) ::android::graphics::drawable::RotateDrawable::_class = java::fetch_class("android/graphics/drawable/RotateDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "mutate", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::Drawable::Drawable() : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::graphics::drawable::Drawable::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::Drawable::setBounds(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBounds", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::graphics::drawable::Drawable::setBounds(const ::android::graphics::Rect& arg0) const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBounds", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::Drawable::copyBounds(const ::android::graphics::Rect& arg0) const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyBounds", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::Rect android::graphics::drawable::Drawable::copyBounds() const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyBounds", "()Landroid/graphics/Rect;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Rect _ret(ret);
    return _ret;
}

::android::graphics::Rect android::graphics::drawable::Drawable::getBounds() const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBounds", "()Landroid/graphics/Rect;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Rect _ret(ret);
    return _ret;
}

void android::graphics::drawable::Drawable::setChangingConfigurations(int32_t arg0) const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChangingConfigurations", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::drawable::Drawable::getChangingConfigurations() const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChangingConfigurations", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::drawable::Drawable::setDither(bool arg0) const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDither", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::Drawable::setFilterBitmap(bool arg0) const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFilterBitmap", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::Drawable::setCallback(const ::android::graphics::drawable::Drawable_Callback& arg0) const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCallback", "(Landroid/graphics/drawable/Drawable$Callback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::drawable::Drawable_Callback android::graphics::drawable::Drawable::getCallback() const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCallback", "()Landroid/graphics/drawable/Drawable$Callback;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable_Callback _ret(ret);
    return _ret;
}

void android::graphics::drawable::Drawable::invalidateSelf() const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidateSelf", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::graphics::drawable::Drawable::scheduleSelf(const ::java::lang::Runnable& arg0, int64_t arg1) const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "scheduleSelf", "(Ljava/lang/Runnable;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::drawable::Drawable::unscheduleSelf(const ::java::lang::Runnable& arg0) const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "unscheduleSelf", "(Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::Drawable::setAlpha(int32_t arg0) const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAlpha", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::Drawable::setColorFilter(const ::android::graphics::ColorFilter& arg0) const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorFilter", "(Landroid/graphics/ColorFilter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::Drawable::setColorFilter(int32_t arg0, const ::android::graphics::PorterDuff_Mode& arg1) const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorFilter", "(ILandroid/graphics/PorterDuff$Mode;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::drawable::Drawable::clearColorFilter() const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearColorFilter", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::graphics::drawable::Drawable::isStateful() const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStateful", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::graphics::drawable::Drawable::setState(const std::vector< int32_t>& arg0) const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setState", "([I)Z");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

std::vector< int32_t> android::graphics::drawable::Drawable::getState() const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getState", "()[I");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

void android::graphics::drawable::Drawable::jumpToCurrentState() const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "jumpToCurrentState", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::graphics::drawable::Drawable android::graphics::drawable::Drawable::getCurrent() const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrent", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

bool android::graphics::drawable::Drawable::setLevel(int32_t arg0) const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLevel", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::graphics::drawable::Drawable::getLevel() const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLevel", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::graphics::drawable::Drawable::setVisible(bool arg0, bool arg1) const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVisible", "(ZZ)Z");
    bool _arg0 = arg0;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::drawable::Drawable::isVisible() const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "isVisible", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::graphics::drawable::Drawable::getOpacity() const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOpacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::drawable::Drawable::resolveOpacity(int32_t arg0, int32_t arg1){
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "resolveOpacity", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

::android::graphics::Region android::graphics::drawable::Drawable::getTransparentRegion() const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTransparentRegion", "()Landroid/graphics/Region;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Region _ret(ret);
    return _ret;
}

int32_t android::graphics::drawable::Drawable::getIntrinsicWidth() const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntrinsicWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::drawable::Drawable::getIntrinsicHeight() const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntrinsicHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::drawable::Drawable::getMinimumWidth() const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinimumWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::drawable::Drawable::getMinimumHeight() const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinimumHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::graphics::drawable::Drawable::getPadding(const ::android::graphics::Rect& arg0) const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPadding", "(Landroid/graphics/Rect;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::graphics::drawable::Drawable android::graphics::drawable::Drawable::mutate() const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "mutate", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::graphics::drawable::Drawable::createFromStream(const ::java::io::InputStream& arg0, const ::java::lang::String& arg1){
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createFromStream", "(Ljava/io/InputStream;Ljava/lang/String;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::graphics::drawable::Drawable::createFromResourceStream(const ::android::content::res::Resources& arg0, const ::android::util::TypedValue& arg1, const ::java::io::InputStream& arg2, const ::java::lang::String& arg3){
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createFromResourceStream", "(Landroid/content/res/Resources;Landroid/util/TypedValue;Ljava/io/InputStream;Ljava/lang/String;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::graphics::drawable::Drawable::createFromResourceStream(const ::android::content::res::Resources& arg0, const ::android::util::TypedValue& arg1, const ::java::io::InputStream& arg2, const ::java::lang::String& arg3, const ::android::graphics::BitmapFactory_Options& arg4){
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createFromResourceStream", "(Landroid/content/res/Resources;Landroid/util/TypedValue;Ljava/io/InputStream;Ljava/lang/String;Landroid/graphics/BitmapFactory$Options;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::graphics::drawable::Drawable::createFromXml(const ::android::content::res::Resources& arg0, const ::org::xmlpull::v1::XmlPullParser& arg1){
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createFromXml", "(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::graphics::drawable::Drawable::createFromXmlInner(const ::android::content::res::Resources& arg0, const ::org::xmlpull::v1::XmlPullParser& arg1, const ::android::util::AttributeSet& arg2){
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createFromXmlInner", "(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::graphics::drawable::Drawable::createFromPath(const ::java::lang::String& arg0){
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createFromPath", "(Ljava/lang/String;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

void android::graphics::drawable::Drawable::inflate(const ::android::content::res::Resources& arg0, const ::org::xmlpull::v1::XmlPullParser& arg1, const ::android::util::AttributeSet& arg2) const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "inflate", "(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::graphics::drawable::Drawable_ConstantState android::graphics::drawable::Drawable::getConstantState() const {
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConstantState", "()Landroid/graphics/drawable/Drawable$ConstantState;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable_ConstantState _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::ColorDrawable::ColorDrawable() : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {
    if (!::android::graphics::drawable::ColorDrawable::_class) ::android::graphics::drawable::ColorDrawable::_class = java::fetch_class("android/graphics/drawable/ColorDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::ColorDrawable::ColorDrawable(int32_t arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {
    if (!::android::graphics::drawable::ColorDrawable::_class) ::android::graphics::drawable::ColorDrawable::_class = java::fetch_class("android/graphics/drawable/ColorDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::graphics::drawable::ColorDrawable::getChangingConfigurations() const {
    if (!::android::graphics::drawable::ColorDrawable::_class) ::android::graphics::drawable::ColorDrawable::_class = java::fetch_class("android/graphics/drawable/ColorDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChangingConfigurations", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::drawable::ColorDrawable::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::graphics::drawable::ColorDrawable::_class) ::android::graphics::drawable::ColorDrawable::_class = java::fetch_class("android/graphics/drawable/ColorDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::drawable::ColorDrawable::getColor() const {
    if (!::android::graphics::drawable::ColorDrawable::_class) ::android::graphics::drawable::ColorDrawable::_class = java::fetch_class("android/graphics/drawable/ColorDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColor", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::drawable::ColorDrawable::setColor(int32_t arg0) const {
    if (!::android::graphics::drawable::ColorDrawable::_class) ::android::graphics::drawable::ColorDrawable::_class = java::fetch_class("android/graphics/drawable/ColorDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::drawable::ColorDrawable::getAlpha() const {
    if (!::android::graphics::drawable::ColorDrawable::_class) ::android::graphics::drawable::ColorDrawable::_class = java::fetch_class("android/graphics/drawable/ColorDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlpha", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::drawable::ColorDrawable::setAlpha(int32_t arg0) const {
    if (!::android::graphics::drawable::ColorDrawable::_class) ::android::graphics::drawable::ColorDrawable::_class = java::fetch_class("android/graphics/drawable/ColorDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAlpha", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::ColorDrawable::setColorFilter(const ::android::graphics::ColorFilter& arg0) const {
    if (!::android::graphics::drawable::ColorDrawable::_class) ::android::graphics::drawable::ColorDrawable::_class = java::fetch_class("android/graphics/drawable/ColorDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorFilter", "(Landroid/graphics/ColorFilter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::drawable::ColorDrawable::getOpacity() const {
    if (!::android::graphics::drawable::ColorDrawable::_class) ::android::graphics::drawable::ColorDrawable::_class = java::fetch_class("android/graphics/drawable/ColorDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOpacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::drawable::ColorDrawable::inflate(const ::android::content::res::Resources& arg0, const ::org::xmlpull::v1::XmlPullParser& arg1, const ::android::util::AttributeSet& arg2) const {
    if (!::android::graphics::drawable::ColorDrawable::_class) ::android::graphics::drawable::ColorDrawable::_class = java::fetch_class("android/graphics/drawable/ColorDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "inflate", "(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::graphics::drawable::Drawable_ConstantState android::graphics::drawable::ColorDrawable::getConstantState() const {
    if (!::android::graphics::drawable::ColorDrawable::_class) ::android::graphics::drawable::ColorDrawable::_class = java::fetch_class("android/graphics/drawable/ColorDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConstantState", "()Landroid/graphics/drawable/Drawable$ConstantState;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable_ConstantState _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::StateListDrawable::StateListDrawable() : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::graphics::drawable::DrawableContainer((jobject)0) {
    if (!::android::graphics::drawable::StateListDrawable::_class) ::android::graphics::drawable::StateListDrawable::_class = java::fetch_class("android/graphics/drawable/StateListDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::graphics::drawable::StateListDrawable::addState(const std::vector< int32_t>& arg0, const ::android::graphics::drawable::Drawable& arg1) const {
    if (!::android::graphics::drawable::StateListDrawable::_class) ::android::graphics::drawable::StateListDrawable::_class = java::fetch_class("android/graphics/drawable/StateListDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "addState", "([ILandroid/graphics/drawable/Drawable;)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::drawable::StateListDrawable::isStateful() const {
    if (!::android::graphics::drawable::StateListDrawable::_class) ::android::graphics::drawable::StateListDrawable::_class = java::fetch_class("android/graphics/drawable/StateListDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStateful", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::graphics::drawable::StateListDrawable::inflate(const ::android::content::res::Resources& arg0, const ::org::xmlpull::v1::XmlPullParser& arg1, const ::android::util::AttributeSet& arg2) const {
    if (!::android::graphics::drawable::StateListDrawable::_class) ::android::graphics::drawable::StateListDrawable::_class = java::fetch_class("android/graphics/drawable/StateListDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "inflate", "(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::graphics::drawable::Drawable android::graphics::drawable::StateListDrawable::mutate() const {
    if (!::android::graphics::drawable::StateListDrawable::_class) ::android::graphics::drawable::StateListDrawable::_class = java::fetch_class("android/graphics/drawable/StateListDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "mutate", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::InsetDrawable::InsetDrawable(const ::android::graphics::drawable::Drawable& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0) {
    if (!::android::graphics::drawable::InsetDrawable::_class) ::android::graphics::drawable::InsetDrawable::_class = java::fetch_class("android/graphics/drawable/InsetDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/drawable/Drawable;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::InsetDrawable::InsetDrawable(const ::android::graphics::drawable::Drawable& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0) {
    if (!::android::graphics::drawable::InsetDrawable::_class) ::android::graphics::drawable::InsetDrawable::_class = java::fetch_class("android/graphics/drawable/InsetDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/drawable/Drawable;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

void android::graphics::drawable::InsetDrawable::inflate(const ::android::content::res::Resources& arg0, const ::org::xmlpull::v1::XmlPullParser& arg1, const ::android::util::AttributeSet& arg2) const {
    if (!::android::graphics::drawable::InsetDrawable::_class) ::android::graphics::drawable::InsetDrawable::_class = java::fetch_class("android/graphics/drawable/InsetDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "inflate", "(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::graphics::drawable::InsetDrawable::invalidateDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::graphics::drawable::InsetDrawable::_class) ::android::graphics::drawable::InsetDrawable::_class = java::fetch_class("android/graphics/drawable/InsetDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidateDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::InsetDrawable::scheduleDrawable(const ::android::graphics::drawable::Drawable& arg0, const ::java::lang::Runnable& arg1, int64_t arg2) const {
    if (!::android::graphics::drawable::InsetDrawable::_class) ::android::graphics::drawable::InsetDrawable::_class = java::fetch_class("android/graphics/drawable/InsetDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "scheduleDrawable", "(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::graphics::drawable::InsetDrawable::unscheduleDrawable(const ::android::graphics::drawable::Drawable& arg0, const ::java::lang::Runnable& arg1) const {
    if (!::android::graphics::drawable::InsetDrawable::_class) ::android::graphics::drawable::InsetDrawable::_class = java::fetch_class("android/graphics/drawable/InsetDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "unscheduleDrawable", "(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::drawable::InsetDrawable::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::graphics::drawable::InsetDrawable::_class) ::android::graphics::drawable::InsetDrawable::_class = java::fetch_class("android/graphics/drawable/InsetDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::drawable::InsetDrawable::getChangingConfigurations() const {
    if (!::android::graphics::drawable::InsetDrawable::_class) ::android::graphics::drawable::InsetDrawable::_class = java::fetch_class("android/graphics/drawable/InsetDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChangingConfigurations", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::graphics::drawable::InsetDrawable::getPadding(const ::android::graphics::Rect& arg0) const {
    if (!::android::graphics::drawable::InsetDrawable::_class) ::android::graphics::drawable::InsetDrawable::_class = java::fetch_class("android/graphics/drawable/InsetDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPadding", "(Landroid/graphics/Rect;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::graphics::drawable::InsetDrawable::setVisible(bool arg0, bool arg1) const {
    if (!::android::graphics::drawable::InsetDrawable::_class) ::android::graphics::drawable::InsetDrawable::_class = java::fetch_class("android/graphics/drawable/InsetDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVisible", "(ZZ)Z");
    bool _arg0 = arg0;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::drawable::InsetDrawable::setAlpha(int32_t arg0) const {
    if (!::android::graphics::drawable::InsetDrawable::_class) ::android::graphics::drawable::InsetDrawable::_class = java::fetch_class("android/graphics/drawable/InsetDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAlpha", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::InsetDrawable::setColorFilter(const ::android::graphics::ColorFilter& arg0) const {
    if (!::android::graphics::drawable::InsetDrawable::_class) ::android::graphics::drawable::InsetDrawable::_class = java::fetch_class("android/graphics/drawable/InsetDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorFilter", "(Landroid/graphics/ColorFilter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::drawable::InsetDrawable::getOpacity() const {
    if (!::android::graphics::drawable::InsetDrawable::_class) ::android::graphics::drawable::InsetDrawable::_class = java::fetch_class("android/graphics/drawable/InsetDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOpacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::graphics::drawable::InsetDrawable::isStateful() const {
    if (!::android::graphics::drawable::InsetDrawable::_class) ::android::graphics::drawable::InsetDrawable::_class = java::fetch_class("android/graphics/drawable/InsetDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStateful", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::graphics::drawable::InsetDrawable::getIntrinsicWidth() const {
    if (!::android::graphics::drawable::InsetDrawable::_class) ::android::graphics::drawable::InsetDrawable::_class = java::fetch_class("android/graphics/drawable/InsetDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntrinsicWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::drawable::InsetDrawable::getIntrinsicHeight() const {
    if (!::android::graphics::drawable::InsetDrawable::_class) ::android::graphics::drawable::InsetDrawable::_class = java::fetch_class("android/graphics/drawable/InsetDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntrinsicHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::graphics::drawable::Drawable_ConstantState android::graphics::drawable::InsetDrawable::getConstantState() const {
    if (!::android::graphics::drawable::InsetDrawable::_class) ::android::graphics::drawable::InsetDrawable::_class = java::fetch_class("android/graphics/drawable/InsetDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConstantState", "()Landroid/graphics/drawable/Drawable$ConstantState;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable_ConstantState _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::graphics::drawable::InsetDrawable::mutate() const {
    if (!::android::graphics::drawable::InsetDrawable::_class) ::android::graphics::drawable::InsetDrawable::_class = java::fetch_class("android/graphics/drawable/InsetDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "mutate", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

std::vector< ::android::graphics::drawable::GradientDrawable_Orientation> android::graphics::drawable::GradientDrawable_Orientation::values(){
    if (!::android::graphics::drawable::GradientDrawable_Orientation::_class) ::android::graphics::drawable::GradientDrawable_Orientation::_class = java::fetch_class("android/graphics/drawable/GradientDrawable$Orientation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/graphics/drawable/GradientDrawable$Orientation;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::graphics::drawable::GradientDrawable_Orientation> _ret(rets, ::android::graphics::drawable::GradientDrawable_Orientation((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::graphics::drawable::GradientDrawable_Orientation retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::graphics::drawable::GradientDrawable_Orientation android::graphics::drawable::GradientDrawable_Orientation::valueOf(const ::java::lang::String& arg0){
    if (!::android::graphics::drawable::GradientDrawable_Orientation::_class) ::android::graphics::drawable::GradientDrawable_Orientation::_class = java::fetch_class("android/graphics/drawable/GradientDrawable$Orientation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/graphics/drawable/GradientDrawable$Orientation;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::drawable::GradientDrawable_Orientation _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::BitmapDrawable::BitmapDrawable() : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::BitmapDrawable::BitmapDrawable(const ::android::content::res::Resources& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/res/Resources;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::BitmapDrawable::BitmapDrawable(const ::android::graphics::Bitmap& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/Bitmap;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::BitmapDrawable::BitmapDrawable(const ::android::content::res::Resources& arg0, const ::android::graphics::Bitmap& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/res/Resources;Landroid/graphics/Bitmap;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::BitmapDrawable::BitmapDrawable(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::BitmapDrawable::BitmapDrawable(const ::android::content::res::Resources& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/res/Resources;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::BitmapDrawable::BitmapDrawable(const ::java::io::InputStream& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::BitmapDrawable::BitmapDrawable(const ::android::content::res::Resources& arg0, const ::java::io::InputStream& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/res/Resources;Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::android::graphics::Paint android::graphics::drawable::BitmapDrawable::getPaint() const {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPaint", "()Landroid/graphics/Paint;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Paint _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::graphics::drawable::BitmapDrawable::getBitmap() const {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBitmap", "()Landroid/graphics/Bitmap;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

void android::graphics::drawable::BitmapDrawable::setTargetDensity(const ::android::graphics::Canvas& arg0) const {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTargetDensity", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::BitmapDrawable::setTargetDensity(const ::android::util::DisplayMetrics& arg0) const {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTargetDensity", "(Landroid/util/DisplayMetrics;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::BitmapDrawable::setTargetDensity(int32_t arg0) const {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTargetDensity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::drawable::BitmapDrawable::getGravity() const {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGravity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::drawable::BitmapDrawable::setGravity(int32_t arg0) const {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGravity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::BitmapDrawable::setAntiAlias(bool arg0) const {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAntiAlias", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::BitmapDrawable::setFilterBitmap(bool arg0) const {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFilterBitmap", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::BitmapDrawable::setDither(bool arg0) const {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDither", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::Shader_TileMode android::graphics::drawable::BitmapDrawable::getTileModeX() const {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTileModeX", "()Landroid/graphics/Shader$TileMode;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Shader_TileMode _ret(ret);
    return _ret;
}

::android::graphics::Shader_TileMode android::graphics::drawable::BitmapDrawable::getTileModeY() const {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTileModeY", "()Landroid/graphics/Shader$TileMode;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Shader_TileMode _ret(ret);
    return _ret;
}

void android::graphics::drawable::BitmapDrawable::setTileModeX(const ::android::graphics::Shader_TileMode& arg0) const {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTileModeX", "(Landroid/graphics/Shader$TileMode;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::BitmapDrawable::setTileModeY(const ::android::graphics::Shader_TileMode& arg0) const {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTileModeY", "(Landroid/graphics/Shader$TileMode;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::BitmapDrawable::setTileModeXY(const ::android::graphics::Shader_TileMode& arg0, const ::android::graphics::Shader_TileMode& arg1) const {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTileModeXY", "(Landroid/graphics/Shader$TileMode;Landroid/graphics/Shader$TileMode;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::graphics::drawable::BitmapDrawable::getChangingConfigurations() const {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChangingConfigurations", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::drawable::BitmapDrawable::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::BitmapDrawable::setAlpha(int32_t arg0) const {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAlpha", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::BitmapDrawable::setColorFilter(const ::android::graphics::ColorFilter& arg0) const {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorFilter", "(Landroid/graphics/ColorFilter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::drawable::Drawable android::graphics::drawable::BitmapDrawable::mutate() const {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "mutate", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

void android::graphics::drawable::BitmapDrawable::inflate(const ::android::content::res::Resources& arg0, const ::org::xmlpull::v1::XmlPullParser& arg1, const ::android::util::AttributeSet& arg2) const {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "inflate", "(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::graphics::drawable::BitmapDrawable::getIntrinsicWidth() const {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntrinsicWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::drawable::BitmapDrawable::getIntrinsicHeight() const {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntrinsicHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::drawable::BitmapDrawable::getOpacity() const {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOpacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::graphics::drawable::Drawable_ConstantState android::graphics::drawable::BitmapDrawable::getConstantState() const {
    if (!::android::graphics::drawable::BitmapDrawable::_class) ::android::graphics::drawable::BitmapDrawable::_class = java::fetch_class("android/graphics/drawable/BitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConstantState", "()Landroid/graphics/drawable/Drawable$ConstantState;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable_ConstantState _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::ClipDrawable::ClipDrawable(const ::android::graphics::drawable::Drawable& arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0) {
    if (!::android::graphics::drawable::ClipDrawable::_class) ::android::graphics::drawable::ClipDrawable::_class = java::fetch_class("android/graphics/drawable/ClipDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/drawable/Drawable;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::graphics::drawable::ClipDrawable::inflate(const ::android::content::res::Resources& arg0, const ::org::xmlpull::v1::XmlPullParser& arg1, const ::android::util::AttributeSet& arg2) const {
    if (!::android::graphics::drawable::ClipDrawable::_class) ::android::graphics::drawable::ClipDrawable::_class = java::fetch_class("android/graphics/drawable/ClipDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "inflate", "(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::graphics::drawable::ClipDrawable::invalidateDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::graphics::drawable::ClipDrawable::_class) ::android::graphics::drawable::ClipDrawable::_class = java::fetch_class("android/graphics/drawable/ClipDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidateDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::ClipDrawable::scheduleDrawable(const ::android::graphics::drawable::Drawable& arg0, const ::java::lang::Runnable& arg1, int64_t arg2) const {
    if (!::android::graphics::drawable::ClipDrawable::_class) ::android::graphics::drawable::ClipDrawable::_class = java::fetch_class("android/graphics/drawable/ClipDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "scheduleDrawable", "(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::graphics::drawable::ClipDrawable::unscheduleDrawable(const ::android::graphics::drawable::Drawable& arg0, const ::java::lang::Runnable& arg1) const {
    if (!::android::graphics::drawable::ClipDrawable::_class) ::android::graphics::drawable::ClipDrawable::_class = java::fetch_class("android/graphics/drawable/ClipDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "unscheduleDrawable", "(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::graphics::drawable::ClipDrawable::getChangingConfigurations() const {
    if (!::android::graphics::drawable::ClipDrawable::_class) ::android::graphics::drawable::ClipDrawable::_class = java::fetch_class("android/graphics/drawable/ClipDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChangingConfigurations", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::graphics::drawable::ClipDrawable::getPadding(const ::android::graphics::Rect& arg0) const {
    if (!::android::graphics::drawable::ClipDrawable::_class) ::android::graphics::drawable::ClipDrawable::_class = java::fetch_class("android/graphics/drawable/ClipDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPadding", "(Landroid/graphics/Rect;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::graphics::drawable::ClipDrawable::setVisible(bool arg0, bool arg1) const {
    if (!::android::graphics::drawable::ClipDrawable::_class) ::android::graphics::drawable::ClipDrawable::_class = java::fetch_class("android/graphics/drawable/ClipDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVisible", "(ZZ)Z");
    bool _arg0 = arg0;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::drawable::ClipDrawable::setAlpha(int32_t arg0) const {
    if (!::android::graphics::drawable::ClipDrawable::_class) ::android::graphics::drawable::ClipDrawable::_class = java::fetch_class("android/graphics/drawable/ClipDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAlpha", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::ClipDrawable::setColorFilter(const ::android::graphics::ColorFilter& arg0) const {
    if (!::android::graphics::drawable::ClipDrawable::_class) ::android::graphics::drawable::ClipDrawable::_class = java::fetch_class("android/graphics/drawable/ClipDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorFilter", "(Landroid/graphics/ColorFilter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::drawable::ClipDrawable::getOpacity() const {
    if (!::android::graphics::drawable::ClipDrawable::_class) ::android::graphics::drawable::ClipDrawable::_class = java::fetch_class("android/graphics/drawable/ClipDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOpacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::graphics::drawable::ClipDrawable::isStateful() const {
    if (!::android::graphics::drawable::ClipDrawable::_class) ::android::graphics::drawable::ClipDrawable::_class = java::fetch_class("android/graphics/drawable/ClipDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStateful", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::graphics::drawable::ClipDrawable::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::graphics::drawable::ClipDrawable::_class) ::android::graphics::drawable::ClipDrawable::_class = java::fetch_class("android/graphics/drawable/ClipDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::drawable::ClipDrawable::getIntrinsicWidth() const {
    if (!::android::graphics::drawable::ClipDrawable::_class) ::android::graphics::drawable::ClipDrawable::_class = java::fetch_class("android/graphics/drawable/ClipDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntrinsicWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::drawable::ClipDrawable::getIntrinsicHeight() const {
    if (!::android::graphics::drawable::ClipDrawable::_class) ::android::graphics::drawable::ClipDrawable::_class = java::fetch_class("android/graphics/drawable/ClipDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntrinsicHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::graphics::drawable::Drawable_ConstantState android::graphics::drawable::ClipDrawable::getConstantState() const {
    if (!::android::graphics::drawable::ClipDrawable::_class) ::android::graphics::drawable::ClipDrawable::_class = java::fetch_class("android/graphics/drawable/ClipDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConstantState", "()Landroid/graphics/drawable/Drawable$ConstantState;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable_ConstantState _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::ScaleDrawable::ScaleDrawable(const ::android::graphics::drawable::Drawable& arg0, int32_t arg1, float arg2, float arg3) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0) {
    if (!::android::graphics::drawable::ScaleDrawable::_class) ::android::graphics::drawable::ScaleDrawable::_class = java::fetch_class("android/graphics/drawable/ScaleDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/drawable/Drawable;IFF)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::android::graphics::drawable::Drawable android::graphics::drawable::ScaleDrawable::getDrawable() const {
    if (!::android::graphics::drawable::ScaleDrawable::_class) ::android::graphics::drawable::ScaleDrawable::_class = java::fetch_class("android/graphics/drawable/ScaleDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDrawable", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

void android::graphics::drawable::ScaleDrawable::inflate(const ::android::content::res::Resources& arg0, const ::org::xmlpull::v1::XmlPullParser& arg1, const ::android::util::AttributeSet& arg2) const {
    if (!::android::graphics::drawable::ScaleDrawable::_class) ::android::graphics::drawable::ScaleDrawable::_class = java::fetch_class("android/graphics/drawable/ScaleDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "inflate", "(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::graphics::drawable::ScaleDrawable::invalidateDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::graphics::drawable::ScaleDrawable::_class) ::android::graphics::drawable::ScaleDrawable::_class = java::fetch_class("android/graphics/drawable/ScaleDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidateDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::ScaleDrawable::scheduleDrawable(const ::android::graphics::drawable::Drawable& arg0, const ::java::lang::Runnable& arg1, int64_t arg2) const {
    if (!::android::graphics::drawable::ScaleDrawable::_class) ::android::graphics::drawable::ScaleDrawable::_class = java::fetch_class("android/graphics/drawable/ScaleDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "scheduleDrawable", "(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::graphics::drawable::ScaleDrawable::unscheduleDrawable(const ::android::graphics::drawable::Drawable& arg0, const ::java::lang::Runnable& arg1) const {
    if (!::android::graphics::drawable::ScaleDrawable::_class) ::android::graphics::drawable::ScaleDrawable::_class = java::fetch_class("android/graphics/drawable/ScaleDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "unscheduleDrawable", "(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::drawable::ScaleDrawable::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::graphics::drawable::ScaleDrawable::_class) ::android::graphics::drawable::ScaleDrawable::_class = java::fetch_class("android/graphics/drawable/ScaleDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::drawable::ScaleDrawable::getChangingConfigurations() const {
    if (!::android::graphics::drawable::ScaleDrawable::_class) ::android::graphics::drawable::ScaleDrawable::_class = java::fetch_class("android/graphics/drawable/ScaleDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChangingConfigurations", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::graphics::drawable::ScaleDrawable::getPadding(const ::android::graphics::Rect& arg0) const {
    if (!::android::graphics::drawable::ScaleDrawable::_class) ::android::graphics::drawable::ScaleDrawable::_class = java::fetch_class("android/graphics/drawable/ScaleDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPadding", "(Landroid/graphics/Rect;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::graphics::drawable::ScaleDrawable::setVisible(bool arg0, bool arg1) const {
    if (!::android::graphics::drawable::ScaleDrawable::_class) ::android::graphics::drawable::ScaleDrawable::_class = java::fetch_class("android/graphics/drawable/ScaleDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVisible", "(ZZ)Z");
    bool _arg0 = arg0;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::drawable::ScaleDrawable::setAlpha(int32_t arg0) const {
    if (!::android::graphics::drawable::ScaleDrawable::_class) ::android::graphics::drawable::ScaleDrawable::_class = java::fetch_class("android/graphics/drawable/ScaleDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAlpha", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::ScaleDrawable::setColorFilter(const ::android::graphics::ColorFilter& arg0) const {
    if (!::android::graphics::drawable::ScaleDrawable::_class) ::android::graphics::drawable::ScaleDrawable::_class = java::fetch_class("android/graphics/drawable/ScaleDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorFilter", "(Landroid/graphics/ColorFilter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::drawable::ScaleDrawable::getOpacity() const {
    if (!::android::graphics::drawable::ScaleDrawable::_class) ::android::graphics::drawable::ScaleDrawable::_class = java::fetch_class("android/graphics/drawable/ScaleDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOpacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::graphics::drawable::ScaleDrawable::isStateful() const {
    if (!::android::graphics::drawable::ScaleDrawable::_class) ::android::graphics::drawable::ScaleDrawable::_class = java::fetch_class("android/graphics/drawable/ScaleDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStateful", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::graphics::drawable::ScaleDrawable::getIntrinsicWidth() const {
    if (!::android::graphics::drawable::ScaleDrawable::_class) ::android::graphics::drawable::ScaleDrawable::_class = java::fetch_class("android/graphics/drawable/ScaleDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntrinsicWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::drawable::ScaleDrawable::getIntrinsicHeight() const {
    if (!::android::graphics::drawable::ScaleDrawable::_class) ::android::graphics::drawable::ScaleDrawable::_class = java::fetch_class("android/graphics/drawable/ScaleDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntrinsicHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::graphics::drawable::Drawable_ConstantState android::graphics::drawable::ScaleDrawable::getConstantState() const {
    if (!::android::graphics::drawable::ScaleDrawable::_class) ::android::graphics::drawable::ScaleDrawable::_class = java::fetch_class("android/graphics/drawable/ScaleDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConstantState", "()Landroid/graphics/drawable/Drawable$ConstantState;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable_ConstantState _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::graphics::drawable::ScaleDrawable::mutate() const {
    if (!::android::graphics::drawable::ScaleDrawable::_class) ::android::graphics::drawable::ScaleDrawable::_class = java::fetch_class("android/graphics/drawable/ScaleDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "mutate", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::DrawableContainer::DrawableContainer() : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0) {
    if (!::android::graphics::drawable::DrawableContainer::_class) ::android::graphics::drawable::DrawableContainer::_class = java::fetch_class("android/graphics/drawable/DrawableContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::graphics::drawable::DrawableContainer::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::graphics::drawable::DrawableContainer::_class) ::android::graphics::drawable::DrawableContainer::_class = java::fetch_class("android/graphics/drawable/DrawableContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::drawable::DrawableContainer::getChangingConfigurations() const {
    if (!::android::graphics::drawable::DrawableContainer::_class) ::android::graphics::drawable::DrawableContainer::_class = java::fetch_class("android/graphics/drawable/DrawableContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChangingConfigurations", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::graphics::drawable::DrawableContainer::getPadding(const ::android::graphics::Rect& arg0) const {
    if (!::android::graphics::drawable::DrawableContainer::_class) ::android::graphics::drawable::DrawableContainer::_class = java::fetch_class("android/graphics/drawable/DrawableContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPadding", "(Landroid/graphics/Rect;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::graphics::drawable::DrawableContainer::setAlpha(int32_t arg0) const {
    if (!::android::graphics::drawable::DrawableContainer::_class) ::android::graphics::drawable::DrawableContainer::_class = java::fetch_class("android/graphics/drawable/DrawableContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAlpha", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::DrawableContainer::setDither(bool arg0) const {
    if (!::android::graphics::drawable::DrawableContainer::_class) ::android::graphics::drawable::DrawableContainer::_class = java::fetch_class("android/graphics/drawable/DrawableContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDither", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::DrawableContainer::setColorFilter(const ::android::graphics::ColorFilter& arg0) const {
    if (!::android::graphics::drawable::DrawableContainer::_class) ::android::graphics::drawable::DrawableContainer::_class = java::fetch_class("android/graphics/drawable/DrawableContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorFilter", "(Landroid/graphics/ColorFilter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::DrawableContainer::setEnterFadeDuration(int32_t arg0) const {
    if (!::android::graphics::drawable::DrawableContainer::_class) ::android::graphics::drawable::DrawableContainer::_class = java::fetch_class("android/graphics/drawable/DrawableContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnterFadeDuration", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::DrawableContainer::setExitFadeDuration(int32_t arg0) const {
    if (!::android::graphics::drawable::DrawableContainer::_class) ::android::graphics::drawable::DrawableContainer::_class = java::fetch_class("android/graphics/drawable/DrawableContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExitFadeDuration", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::graphics::drawable::DrawableContainer::isStateful() const {
    if (!::android::graphics::drawable::DrawableContainer::_class) ::android::graphics::drawable::DrawableContainer::_class = java::fetch_class("android/graphics/drawable/DrawableContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStateful", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::graphics::drawable::DrawableContainer::jumpToCurrentState() const {
    if (!::android::graphics::drawable::DrawableContainer::_class) ::android::graphics::drawable::DrawableContainer::_class = java::fetch_class("android/graphics/drawable/DrawableContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "jumpToCurrentState", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::graphics::drawable::DrawableContainer::getIntrinsicWidth() const {
    if (!::android::graphics::drawable::DrawableContainer::_class) ::android::graphics::drawable::DrawableContainer::_class = java::fetch_class("android/graphics/drawable/DrawableContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntrinsicWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::drawable::DrawableContainer::getIntrinsicHeight() const {
    if (!::android::graphics::drawable::DrawableContainer::_class) ::android::graphics::drawable::DrawableContainer::_class = java::fetch_class("android/graphics/drawable/DrawableContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntrinsicHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::drawable::DrawableContainer::getMinimumWidth() const {
    if (!::android::graphics::drawable::DrawableContainer::_class) ::android::graphics::drawable::DrawableContainer::_class = java::fetch_class("android/graphics/drawable/DrawableContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinimumWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::drawable::DrawableContainer::getMinimumHeight() const {
    if (!::android::graphics::drawable::DrawableContainer::_class) ::android::graphics::drawable::DrawableContainer::_class = java::fetch_class("android/graphics/drawable/DrawableContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinimumHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::drawable::DrawableContainer::invalidateDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::graphics::drawable::DrawableContainer::_class) ::android::graphics::drawable::DrawableContainer::_class = java::fetch_class("android/graphics/drawable/DrawableContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidateDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::DrawableContainer::scheduleDrawable(const ::android::graphics::drawable::Drawable& arg0, const ::java::lang::Runnable& arg1, int64_t arg2) const {
    if (!::android::graphics::drawable::DrawableContainer::_class) ::android::graphics::drawable::DrawableContainer::_class = java::fetch_class("android/graphics/drawable/DrawableContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "scheduleDrawable", "(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::graphics::drawable::DrawableContainer::unscheduleDrawable(const ::android::graphics::drawable::Drawable& arg0, const ::java::lang::Runnable& arg1) const {
    if (!::android::graphics::drawable::DrawableContainer::_class) ::android::graphics::drawable::DrawableContainer::_class = java::fetch_class("android/graphics/drawable/DrawableContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "unscheduleDrawable", "(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::drawable::DrawableContainer::setVisible(bool arg0, bool arg1) const {
    if (!::android::graphics::drawable::DrawableContainer::_class) ::android::graphics::drawable::DrawableContainer::_class = java::fetch_class("android/graphics/drawable/DrawableContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVisible", "(ZZ)Z");
    bool _arg0 = arg0;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

int32_t android::graphics::drawable::DrawableContainer::getOpacity() const {
    if (!::android::graphics::drawable::DrawableContainer::_class) ::android::graphics::drawable::DrawableContainer::_class = java::fetch_class("android/graphics/drawable/DrawableContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOpacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::graphics::drawable::DrawableContainer::selectDrawable(int32_t arg0) const {
    if (!::android::graphics::drawable::DrawableContainer::_class) ::android::graphics::drawable::DrawableContainer::_class = java::fetch_class("android/graphics/drawable/DrawableContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "selectDrawable", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::graphics::drawable::Drawable android::graphics::drawable::DrawableContainer::getCurrent() const {
    if (!::android::graphics::drawable::DrawableContainer::_class) ::android::graphics::drawable::DrawableContainer::_class = java::fetch_class("android/graphics/drawable/DrawableContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrent", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable_ConstantState android::graphics::drawable::DrawableContainer::getConstantState() const {
    if (!::android::graphics::drawable::DrawableContainer::_class) ::android::graphics::drawable::DrawableContainer::_class = java::fetch_class("android/graphics/drawable/DrawableContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConstantState", "()Landroid/graphics/drawable/Drawable$ConstantState;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable_ConstantState _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::graphics::drawable::DrawableContainer::mutate() const {
    if (!::android::graphics::drawable::DrawableContainer::_class) ::android::graphics::drawable::DrawableContainer::_class = java::fetch_class("android/graphics/drawable/DrawableContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "mutate", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

void android::graphics::drawable::Drawable_Callback::invalidateDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::graphics::drawable::Drawable_Callback::_class) ::android::graphics::drawable::Drawable_Callback::_class = java::fetch_class("android/graphics/drawable/Drawable$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidateDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::Drawable_Callback::scheduleDrawable(const ::android::graphics::drawable::Drawable& arg0, const ::java::lang::Runnable& arg1, int64_t arg2) const {
    if (!::android::graphics::drawable::Drawable_Callback::_class) ::android::graphics::drawable::Drawable_Callback::_class = java::fetch_class("android/graphics/drawable/Drawable$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "scheduleDrawable", "(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::graphics::drawable::Drawable_Callback::unscheduleDrawable(const ::android::graphics::drawable::Drawable& arg0, const ::java::lang::Runnable& arg1) const {
    if (!::android::graphics::drawable::Drawable_Callback::_class) ::android::graphics::drawable::Drawable_Callback::_class = java::fetch_class("android/graphics/drawable/Drawable$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "unscheduleDrawable", "(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::NinePatchDrawable::NinePatchDrawable(const ::android::graphics::Bitmap& arg0, const std::vector< int8_t>& arg1, const ::android::graphics::Rect& arg2, const ::java::lang::String& arg3) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {
    if (!::android::graphics::drawable::NinePatchDrawable::_class) ::android::graphics::drawable::NinePatchDrawable::_class = java::fetch_class("android/graphics/drawable/NinePatchDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/Bitmap;[BLandroid/graphics/Rect;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::NinePatchDrawable::NinePatchDrawable(const ::android::content::res::Resources& arg0, const ::android::graphics::Bitmap& arg1, const std::vector< int8_t>& arg2, const ::android::graphics::Rect& arg3, const ::java::lang::String& arg4) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {
    if (!::android::graphics::drawable::NinePatchDrawable::_class) ::android::graphics::drawable::NinePatchDrawable::_class = java::fetch_class("android/graphics/drawable/NinePatchDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/res/Resources;Landroid/graphics/Bitmap;[BLandroid/graphics/Rect;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jbyteArray _arg2 = java::jni->NewByteArray(arg2.size());
    java::jni->SetByteArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::NinePatchDrawable::NinePatchDrawable(const ::android::graphics::NinePatch& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {
    if (!::android::graphics::drawable::NinePatchDrawable::_class) ::android::graphics::drawable::NinePatchDrawable::_class = java::fetch_class("android/graphics/drawable/NinePatchDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/NinePatch;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::NinePatchDrawable::NinePatchDrawable(const ::android::content::res::Resources& arg0, const ::android::graphics::NinePatch& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {
    if (!::android::graphics::drawable::NinePatchDrawable::_class) ::android::graphics::drawable::NinePatchDrawable::_class = java::fetch_class("android/graphics/drawable/NinePatchDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/res/Resources;Landroid/graphics/NinePatch;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::graphics::drawable::NinePatchDrawable::setTargetDensity(const ::android::graphics::Canvas& arg0) const {
    if (!::android::graphics::drawable::NinePatchDrawable::_class) ::android::graphics::drawable::NinePatchDrawable::_class = java::fetch_class("android/graphics/drawable/NinePatchDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTargetDensity", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::NinePatchDrawable::setTargetDensity(const ::android::util::DisplayMetrics& arg0) const {
    if (!::android::graphics::drawable::NinePatchDrawable::_class) ::android::graphics::drawable::NinePatchDrawable::_class = java::fetch_class("android/graphics/drawable/NinePatchDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTargetDensity", "(Landroid/util/DisplayMetrics;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::NinePatchDrawable::setTargetDensity(int32_t arg0) const {
    if (!::android::graphics::drawable::NinePatchDrawable::_class) ::android::graphics::drawable::NinePatchDrawable::_class = java::fetch_class("android/graphics/drawable/NinePatchDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTargetDensity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::NinePatchDrawable::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::graphics::drawable::NinePatchDrawable::_class) ::android::graphics::drawable::NinePatchDrawable::_class = java::fetch_class("android/graphics/drawable/NinePatchDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::drawable::NinePatchDrawable::getChangingConfigurations() const {
    if (!::android::graphics::drawable::NinePatchDrawable::_class) ::android::graphics::drawable::NinePatchDrawable::_class = java::fetch_class("android/graphics/drawable/NinePatchDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChangingConfigurations", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::graphics::drawable::NinePatchDrawable::getPadding(const ::android::graphics::Rect& arg0) const {
    if (!::android::graphics::drawable::NinePatchDrawable::_class) ::android::graphics::drawable::NinePatchDrawable::_class = java::fetch_class("android/graphics/drawable/NinePatchDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPadding", "(Landroid/graphics/Rect;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::graphics::drawable::NinePatchDrawable::setAlpha(int32_t arg0) const {
    if (!::android::graphics::drawable::NinePatchDrawable::_class) ::android::graphics::drawable::NinePatchDrawable::_class = java::fetch_class("android/graphics/drawable/NinePatchDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAlpha", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::NinePatchDrawable::setColorFilter(const ::android::graphics::ColorFilter& arg0) const {
    if (!::android::graphics::drawable::NinePatchDrawable::_class) ::android::graphics::drawable::NinePatchDrawable::_class = java::fetch_class("android/graphics/drawable/NinePatchDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorFilter", "(Landroid/graphics/ColorFilter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::NinePatchDrawable::setDither(bool arg0) const {
    if (!::android::graphics::drawable::NinePatchDrawable::_class) ::android::graphics::drawable::NinePatchDrawable::_class = java::fetch_class("android/graphics/drawable/NinePatchDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDither", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::NinePatchDrawable::setFilterBitmap(bool arg0) const {
    if (!::android::graphics::drawable::NinePatchDrawable::_class) ::android::graphics::drawable::NinePatchDrawable::_class = java::fetch_class("android/graphics/drawable/NinePatchDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFilterBitmap", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::NinePatchDrawable::inflate(const ::android::content::res::Resources& arg0, const ::org::xmlpull::v1::XmlPullParser& arg1, const ::android::util::AttributeSet& arg2) const {
    if (!::android::graphics::drawable::NinePatchDrawable::_class) ::android::graphics::drawable::NinePatchDrawable::_class = java::fetch_class("android/graphics/drawable/NinePatchDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "inflate", "(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::graphics::Paint android::graphics::drawable::NinePatchDrawable::getPaint() const {
    if (!::android::graphics::drawable::NinePatchDrawable::_class) ::android::graphics::drawable::NinePatchDrawable::_class = java::fetch_class("android/graphics/drawable/NinePatchDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPaint", "()Landroid/graphics/Paint;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Paint _ret(ret);
    return _ret;
}

int32_t android::graphics::drawable::NinePatchDrawable::getIntrinsicWidth() const {
    if (!::android::graphics::drawable::NinePatchDrawable::_class) ::android::graphics::drawable::NinePatchDrawable::_class = java::fetch_class("android/graphics/drawable/NinePatchDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntrinsicWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::drawable::NinePatchDrawable::getIntrinsicHeight() const {
    if (!::android::graphics::drawable::NinePatchDrawable::_class) ::android::graphics::drawable::NinePatchDrawable::_class = java::fetch_class("android/graphics/drawable/NinePatchDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntrinsicHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::drawable::NinePatchDrawable::getMinimumWidth() const {
    if (!::android::graphics::drawable::NinePatchDrawable::_class) ::android::graphics::drawable::NinePatchDrawable::_class = java::fetch_class("android/graphics/drawable/NinePatchDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinimumWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::drawable::NinePatchDrawable::getMinimumHeight() const {
    if (!::android::graphics::drawable::NinePatchDrawable::_class) ::android::graphics::drawable::NinePatchDrawable::_class = java::fetch_class("android/graphics/drawable/NinePatchDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinimumHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::drawable::NinePatchDrawable::getOpacity() const {
    if (!::android::graphics::drawable::NinePatchDrawable::_class) ::android::graphics::drawable::NinePatchDrawable::_class = java::fetch_class("android/graphics/drawable/NinePatchDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOpacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::graphics::Region android::graphics::drawable::NinePatchDrawable::getTransparentRegion() const {
    if (!::android::graphics::drawable::NinePatchDrawable::_class) ::android::graphics::drawable::NinePatchDrawable::_class = java::fetch_class("android/graphics/drawable/NinePatchDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTransparentRegion", "()Landroid/graphics/Region;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Region _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable_ConstantState android::graphics::drawable::NinePatchDrawable::getConstantState() const {
    if (!::android::graphics::drawable::NinePatchDrawable::_class) ::android::graphics::drawable::NinePatchDrawable::_class = java::fetch_class("android/graphics/drawable/NinePatchDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConstantState", "()Landroid/graphics/drawable/Drawable$ConstantState;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable_ConstantState _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::graphics::drawable::NinePatchDrawable::mutate() const {
    if (!::android::graphics::drawable::NinePatchDrawable::_class) ::android::graphics::drawable::NinePatchDrawable::_class = java::fetch_class("android/graphics/drawable/NinePatchDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "mutate", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::LayerDrawable::LayerDrawable(const std::vector< ::android::graphics::drawable::Drawable>& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0) {
    if (!::android::graphics::drawable::LayerDrawable::_class) ::android::graphics::drawable::LayerDrawable::_class = java::fetch_class("android/graphics/drawable/LayerDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([Landroid/graphics/drawable/Drawable;)V");
    unsigned arg0s = arg0.size();
    if (!::android::graphics::drawable::Drawable::_class) ::android::graphics::drawable::Drawable::_class = java::fetch_class("android/graphics/drawable/Drawable");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::graphics::drawable::Drawable::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::graphics::drawable::Drawable& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::graphics::drawable::LayerDrawable::inflate(const ::android::content::res::Resources& arg0, const ::org::xmlpull::v1::XmlPullParser& arg1, const ::android::util::AttributeSet& arg2) const {
    if (!::android::graphics::drawable::LayerDrawable::_class) ::android::graphics::drawable::LayerDrawable::_class = java::fetch_class("android/graphics/drawable/LayerDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "inflate", "(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::graphics::drawable::Drawable android::graphics::drawable::LayerDrawable::findDrawableByLayerId(int32_t arg0) const {
    if (!::android::graphics::drawable::LayerDrawable::_class) ::android::graphics::drawable::LayerDrawable::_class = java::fetch_class("android/graphics/drawable/LayerDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "findDrawableByLayerId", "(I)Landroid/graphics/drawable/Drawable;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

void android::graphics::drawable::LayerDrawable::setId(int32_t arg0, int32_t arg1) const {
    if (!::android::graphics::drawable::LayerDrawable::_class) ::android::graphics::drawable::LayerDrawable::_class = java::fetch_class("android/graphics/drawable/LayerDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setId", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::graphics::drawable::LayerDrawable::getNumberOfLayers() const {
    if (!::android::graphics::drawable::LayerDrawable::_class) ::android::graphics::drawable::LayerDrawable::_class = java::fetch_class("android/graphics/drawable/LayerDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNumberOfLayers", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::graphics::drawable::Drawable android::graphics::drawable::LayerDrawable::getDrawable(int32_t arg0) const {
    if (!::android::graphics::drawable::LayerDrawable::_class) ::android::graphics::drawable::LayerDrawable::_class = java::fetch_class("android/graphics/drawable/LayerDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDrawable", "(I)Landroid/graphics/drawable/Drawable;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

int32_t android::graphics::drawable::LayerDrawable::getId(int32_t arg0) const {
    if (!::android::graphics::drawable::LayerDrawable::_class) ::android::graphics::drawable::LayerDrawable::_class = java::fetch_class("android/graphics/drawable/LayerDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getId", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::graphics::drawable::LayerDrawable::setDrawableByLayerId(int32_t arg0, const ::android::graphics::drawable::Drawable& arg1) const {
    if (!::android::graphics::drawable::LayerDrawable::_class) ::android::graphics::drawable::LayerDrawable::_class = java::fetch_class("android/graphics/drawable/LayerDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDrawableByLayerId", "(ILandroid/graphics/drawable/Drawable;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::drawable::LayerDrawable::setLayerInset(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::graphics::drawable::LayerDrawable::_class) ::android::graphics::drawable::LayerDrawable::_class = java::fetch_class("android/graphics/drawable/LayerDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLayerInset", "(IIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::graphics::drawable::LayerDrawable::invalidateDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::graphics::drawable::LayerDrawable::_class) ::android::graphics::drawable::LayerDrawable::_class = java::fetch_class("android/graphics/drawable/LayerDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidateDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::LayerDrawable::scheduleDrawable(const ::android::graphics::drawable::Drawable& arg0, const ::java::lang::Runnable& arg1, int64_t arg2) const {
    if (!::android::graphics::drawable::LayerDrawable::_class) ::android::graphics::drawable::LayerDrawable::_class = java::fetch_class("android/graphics/drawable/LayerDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "scheduleDrawable", "(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::graphics::drawable::LayerDrawable::unscheduleDrawable(const ::android::graphics::drawable::Drawable& arg0, const ::java::lang::Runnable& arg1) const {
    if (!::android::graphics::drawable::LayerDrawable::_class) ::android::graphics::drawable::LayerDrawable::_class = java::fetch_class("android/graphics/drawable/LayerDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "unscheduleDrawable", "(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::drawable::LayerDrawable::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::graphics::drawable::LayerDrawable::_class) ::android::graphics::drawable::LayerDrawable::_class = java::fetch_class("android/graphics/drawable/LayerDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::drawable::LayerDrawable::getChangingConfigurations() const {
    if (!::android::graphics::drawable::LayerDrawable::_class) ::android::graphics::drawable::LayerDrawable::_class = java::fetch_class("android/graphics/drawable/LayerDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChangingConfigurations", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::graphics::drawable::LayerDrawable::getPadding(const ::android::graphics::Rect& arg0) const {
    if (!::android::graphics::drawable::LayerDrawable::_class) ::android::graphics::drawable::LayerDrawable::_class = java::fetch_class("android/graphics/drawable/LayerDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPadding", "(Landroid/graphics/Rect;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::graphics::drawable::LayerDrawable::setVisible(bool arg0, bool arg1) const {
    if (!::android::graphics::drawable::LayerDrawable::_class) ::android::graphics::drawable::LayerDrawable::_class = java::fetch_class("android/graphics/drawable/LayerDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVisible", "(ZZ)Z");
    bool _arg0 = arg0;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::drawable::LayerDrawable::setDither(bool arg0) const {
    if (!::android::graphics::drawable::LayerDrawable::_class) ::android::graphics::drawable::LayerDrawable::_class = java::fetch_class("android/graphics/drawable/LayerDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDither", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::LayerDrawable::setAlpha(int32_t arg0) const {
    if (!::android::graphics::drawable::LayerDrawable::_class) ::android::graphics::drawable::LayerDrawable::_class = java::fetch_class("android/graphics/drawable/LayerDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAlpha", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::LayerDrawable::setColorFilter(const ::android::graphics::ColorFilter& arg0) const {
    if (!::android::graphics::drawable::LayerDrawable::_class) ::android::graphics::drawable::LayerDrawable::_class = java::fetch_class("android/graphics/drawable/LayerDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorFilter", "(Landroid/graphics/ColorFilter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::LayerDrawable::setOpacity(int32_t arg0) const {
    if (!::android::graphics::drawable::LayerDrawable::_class) ::android::graphics::drawable::LayerDrawable::_class = java::fetch_class("android/graphics/drawable/LayerDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOpacity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::drawable::LayerDrawable::getOpacity() const {
    if (!::android::graphics::drawable::LayerDrawable::_class) ::android::graphics::drawable::LayerDrawable::_class = java::fetch_class("android/graphics/drawable/LayerDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOpacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::graphics::drawable::LayerDrawable::isStateful() const {
    if (!::android::graphics::drawable::LayerDrawable::_class) ::android::graphics::drawable::LayerDrawable::_class = java::fetch_class("android/graphics/drawable/LayerDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStateful", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::graphics::drawable::LayerDrawable::getIntrinsicWidth() const {
    if (!::android::graphics::drawable::LayerDrawable::_class) ::android::graphics::drawable::LayerDrawable::_class = java::fetch_class("android/graphics/drawable/LayerDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntrinsicWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::drawable::LayerDrawable::getIntrinsicHeight() const {
    if (!::android::graphics::drawable::LayerDrawable::_class) ::android::graphics::drawable::LayerDrawable::_class = java::fetch_class("android/graphics/drawable/LayerDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntrinsicHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::graphics::drawable::Drawable_ConstantState android::graphics::drawable::LayerDrawable::getConstantState() const {
    if (!::android::graphics::drawable::LayerDrawable::_class) ::android::graphics::drawable::LayerDrawable::_class = java::fetch_class("android/graphics/drawable/LayerDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConstantState", "()Landroid/graphics/drawable/Drawable$ConstantState;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable_ConstantState _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::graphics::drawable::LayerDrawable::mutate() const {
    if (!::android::graphics::drawable::LayerDrawable::_class) ::android::graphics::drawable::LayerDrawable::_class = java::fetch_class("android/graphics/drawable/LayerDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "mutate", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::LevelListDrawable::LevelListDrawable() : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::graphics::drawable::DrawableContainer((jobject)0) {
    if (!::android::graphics::drawable::LevelListDrawable::_class) ::android::graphics::drawable::LevelListDrawable::_class = java::fetch_class("android/graphics/drawable/LevelListDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::graphics::drawable::LevelListDrawable::addLevel(int32_t arg0, int32_t arg1, const ::android::graphics::drawable::Drawable& arg2) const {
    if (!::android::graphics::drawable::LevelListDrawable::_class) ::android::graphics::drawable::LevelListDrawable::_class = java::fetch_class("android/graphics/drawable/LevelListDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "addLevel", "(IILandroid/graphics/drawable/Drawable;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::graphics::drawable::LevelListDrawable::inflate(const ::android::content::res::Resources& arg0, const ::org::xmlpull::v1::XmlPullParser& arg1, const ::android::util::AttributeSet& arg2) const {
    if (!::android::graphics::drawable::LevelListDrawable::_class) ::android::graphics::drawable::LevelListDrawable::_class = java::fetch_class("android/graphics/drawable/LevelListDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "inflate", "(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::graphics::drawable::Drawable android::graphics::drawable::LevelListDrawable::mutate() const {
    if (!::android::graphics::drawable::LevelListDrawable::_class) ::android::graphics::drawable::LevelListDrawable::_class = java::fetch_class("android/graphics/drawable/LevelListDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "mutate", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

int32_t android::graphics::drawable::DrawableContainer_DrawableContainerState::getChangingConfigurations() const {
    if (!::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class) ::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class = java::fetch_class("android/graphics/drawable/DrawableContainer$DrawableContainerState");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChangingConfigurations", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::drawable::DrawableContainer_DrawableContainerState::addChild(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class) ::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class = java::fetch_class("android/graphics/drawable/DrawableContainer$DrawableContainerState");
    static jmethodID mid = java::jni->GetMethodID(_class, "addChild", "(Landroid/graphics/drawable/Drawable;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::graphics::drawable::DrawableContainer_DrawableContainerState::getChildCount() const {
    if (!::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class) ::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class = java::fetch_class("android/graphics/drawable/DrawableContainer$DrawableContainerState");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChildCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< ::android::graphics::drawable::Drawable> android::graphics::drawable::DrawableContainer_DrawableContainerState::getChildren() const {
    if (!::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class) ::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class = java::fetch_class("android/graphics/drawable/DrawableContainer$DrawableContainerState");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChildren", "()[Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::graphics::drawable::Drawable> _ret(rets, ::android::graphics::drawable::Drawable((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::graphics::drawable::Drawable retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void android::graphics::drawable::DrawableContainer_DrawableContainerState::setVariablePadding(bool arg0) const {
    if (!::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class) ::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class = java::fetch_class("android/graphics/drawable/DrawableContainer$DrawableContainerState");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVariablePadding", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::Rect android::graphics::drawable::DrawableContainer_DrawableContainerState::getConstantPadding() const {
    if (!::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class) ::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class = java::fetch_class("android/graphics/drawable/DrawableContainer$DrawableContainerState");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConstantPadding", "()Landroid/graphics/Rect;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Rect _ret(ret);
    return _ret;
}

void android::graphics::drawable::DrawableContainer_DrawableContainerState::setConstantSize(bool arg0) const {
    if (!::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class) ::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class = java::fetch_class("android/graphics/drawable/DrawableContainer$DrawableContainerState");
    static jmethodID mid = java::jni->GetMethodID(_class, "setConstantSize", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::graphics::drawable::DrawableContainer_DrawableContainerState::isConstantSize() const {
    if (!::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class) ::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class = java::fetch_class("android/graphics/drawable/DrawableContainer$DrawableContainerState");
    static jmethodID mid = java::jni->GetMethodID(_class, "isConstantSize", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::graphics::drawable::DrawableContainer_DrawableContainerState::getConstantWidth() const {
    if (!::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class) ::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class = java::fetch_class("android/graphics/drawable/DrawableContainer$DrawableContainerState");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConstantWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::drawable::DrawableContainer_DrawableContainerState::getConstantHeight() const {
    if (!::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class) ::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class = java::fetch_class("android/graphics/drawable/DrawableContainer$DrawableContainerState");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConstantHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::drawable::DrawableContainer_DrawableContainerState::getConstantMinimumWidth() const {
    if (!::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class) ::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class = java::fetch_class("android/graphics/drawable/DrawableContainer$DrawableContainerState");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConstantMinimumWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::drawable::DrawableContainer_DrawableContainerState::getConstantMinimumHeight() const {
    if (!::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class) ::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class = java::fetch_class("android/graphics/drawable/DrawableContainer$DrawableContainerState");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConstantMinimumHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::drawable::DrawableContainer_DrawableContainerState::setEnterFadeDuration(int32_t arg0) const {
    if (!::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class) ::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class = java::fetch_class("android/graphics/drawable/DrawableContainer$DrawableContainerState");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnterFadeDuration", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::drawable::DrawableContainer_DrawableContainerState::getEnterFadeDuration() const {
    if (!::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class) ::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class = java::fetch_class("android/graphics/drawable/DrawableContainer$DrawableContainerState");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEnterFadeDuration", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::drawable::DrawableContainer_DrawableContainerState::setExitFadeDuration(int32_t arg0) const {
    if (!::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class) ::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class = java::fetch_class("android/graphics/drawable/DrawableContainer$DrawableContainerState");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExitFadeDuration", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::drawable::DrawableContainer_DrawableContainerState::getExitFadeDuration() const {
    if (!::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class) ::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class = java::fetch_class("android/graphics/drawable/DrawableContainer$DrawableContainerState");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExitFadeDuration", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::drawable::DrawableContainer_DrawableContainerState::getOpacity() const {
    if (!::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class) ::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class = java::fetch_class("android/graphics/drawable/DrawableContainer$DrawableContainerState");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOpacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::graphics::drawable::DrawableContainer_DrawableContainerState::isStateful() const {
    if (!::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class) ::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class = java::fetch_class("android/graphics/drawable/DrawableContainer$DrawableContainerState");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStateful", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::graphics::drawable::DrawableContainer_DrawableContainerState::growArray(int32_t arg0, int32_t arg1) const {
    if (!::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class) ::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class = java::fetch_class("android/graphics/drawable/DrawableContainer$DrawableContainerState");
    static jmethodID mid = java::jni->GetMethodID(_class, "growArray", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::drawable::DrawableContainer_DrawableContainerState::canConstantState() const {
    if (!::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class) ::android::graphics::drawable::DrawableContainer_DrawableContainerState::_class = java::fetch_class("android/graphics/drawable/DrawableContainer$DrawableContainerState");
    static jmethodID mid = java::jni->GetMethodID(_class, "canConstantState", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::PictureDrawable::PictureDrawable(const ::android::graphics::Picture& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {
    if (!::android::graphics::drawable::PictureDrawable::_class) ::android::graphics::drawable::PictureDrawable::_class = java::fetch_class("android/graphics/drawable/PictureDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/Picture;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::graphics::Picture android::graphics::drawable::PictureDrawable::getPicture() const {
    if (!::android::graphics::drawable::PictureDrawable::_class) ::android::graphics::drawable::PictureDrawable::_class = java::fetch_class("android/graphics/drawable/PictureDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPicture", "()Landroid/graphics/Picture;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Picture _ret(ret);
    return _ret;
}

void android::graphics::drawable::PictureDrawable::setPicture(const ::android::graphics::Picture& arg0) const {
    if (!::android::graphics::drawable::PictureDrawable::_class) ::android::graphics::drawable::PictureDrawable::_class = java::fetch_class("android/graphics/drawable/PictureDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPicture", "(Landroid/graphics/Picture;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::PictureDrawable::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::graphics::drawable::PictureDrawable::_class) ::android::graphics::drawable::PictureDrawable::_class = java::fetch_class("android/graphics/drawable/PictureDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::graphics::drawable::PictureDrawable::getIntrinsicWidth() const {
    if (!::android::graphics::drawable::PictureDrawable::_class) ::android::graphics::drawable::PictureDrawable::_class = java::fetch_class("android/graphics/drawable/PictureDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntrinsicWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::drawable::PictureDrawable::getIntrinsicHeight() const {
    if (!::android::graphics::drawable::PictureDrawable::_class) ::android::graphics::drawable::PictureDrawable::_class = java::fetch_class("android/graphics/drawable/PictureDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntrinsicHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::graphics::drawable::PictureDrawable::getOpacity() const {
    if (!::android::graphics::drawable::PictureDrawable::_class) ::android::graphics::drawable::PictureDrawable::_class = java::fetch_class("android/graphics/drawable/PictureDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOpacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::graphics::drawable::PictureDrawable::setFilterBitmap(bool arg0) const {
    if (!::android::graphics::drawable::PictureDrawable::_class) ::android::graphics::drawable::PictureDrawable::_class = java::fetch_class("android/graphics/drawable/PictureDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFilterBitmap", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::PictureDrawable::setDither(bool arg0) const {
    if (!::android::graphics::drawable::PictureDrawable::_class) ::android::graphics::drawable::PictureDrawable::_class = java::fetch_class("android/graphics/drawable/PictureDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDither", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::PictureDrawable::setColorFilter(const ::android::graphics::ColorFilter& arg0) const {
    if (!::android::graphics::drawable::PictureDrawable::_class) ::android::graphics::drawable::PictureDrawable::_class = java::fetch_class("android/graphics/drawable/PictureDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorFilter", "(Landroid/graphics/ColorFilter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::PictureDrawable::setAlpha(int32_t arg0) const {
    if (!::android::graphics::drawable::PictureDrawable::_class) ::android::graphics::drawable::PictureDrawable::_class = java::fetch_class("android/graphics/drawable/PictureDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAlpha", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::PaintDrawable::PaintDrawable() : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::ShapeDrawable((jobject)0) {
    if (!::android::graphics::drawable::PaintDrawable::_class) ::android::graphics::drawable::PaintDrawable::_class = java::fetch_class("android/graphics/drawable/PaintDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::PaintDrawable::PaintDrawable(int32_t arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::ShapeDrawable((jobject)0) {
    if (!::android::graphics::drawable::PaintDrawable::_class) ::android::graphics::drawable::PaintDrawable::_class = java::fetch_class("android/graphics/drawable/PaintDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::graphics::drawable::PaintDrawable::setCornerRadius(float arg0) const {
    if (!::android::graphics::drawable::PaintDrawable::_class) ::android::graphics::drawable::PaintDrawable::_class = java::fetch_class("android/graphics/drawable/PaintDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCornerRadius", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::PaintDrawable::setCornerRadii(const std::vector< float>& arg0) const {
    if (!::android::graphics::drawable::PaintDrawable::_class) ::android::graphics::drawable::PaintDrawable::_class = java::fetch_class("android/graphics/drawable/PaintDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCornerRadii", "([F)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::graphics::drawable::Animatable::start() const {
    if (!::android::graphics::drawable::Animatable::_class) ::android::graphics::drawable::Animatable::_class = java::fetch_class("android/graphics/drawable/Animatable");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::graphics::drawable::Animatable::stop() const {
    if (!::android::graphics::drawable::Animatable::_class) ::android::graphics::drawable::Animatable::_class = java::fetch_class("android/graphics/drawable/Animatable");
    static jmethodID mid = java::jni->GetMethodID(_class, "stop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::graphics::drawable::Animatable::isRunning() const {
    if (!::android::graphics::drawable::Animatable::_class) ::android::graphics::drawable::Animatable::_class = java::fetch_class("android/graphics/drawable/Animatable");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRunning", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::ShapeDrawable_ShaderFactory::ShapeDrawable_ShaderFactory() : ::java::lang::Object((jobject)0) {
    if (!::android::graphics::drawable::ShapeDrawable_ShaderFactory::_class) ::android::graphics::drawable::ShapeDrawable_ShaderFactory::_class = java::fetch_class("android/graphics/drawable/ShapeDrawable$ShaderFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::graphics::Shader android::graphics::drawable::ShapeDrawable_ShaderFactory::resize(int32_t arg0, int32_t arg1) const {
    if (!::android::graphics::drawable::ShapeDrawable_ShaderFactory::_class) ::android::graphics::drawable::ShapeDrawable_ShaderFactory::_class = java::fetch_class("android/graphics/drawable/ShapeDrawable$ShaderFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "resize", "(II)Landroid/graphics/Shader;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::graphics::Shader _ret(ret);
    return _ret;
}

