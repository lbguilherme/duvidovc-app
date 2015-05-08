#include "java-core.hpp"
#include <memory>
#include "android.graphics.Canvas.hpp"
#include "android.graphics.Paint.hpp"
#include "android.graphics.Path.hpp"
#include "android.graphics.RectF.hpp"
#include "android.graphics.drawable.shapes.ArcShape.hpp"
#include "android.graphics.drawable.shapes.OvalShape.hpp"
#include "android.graphics.drawable.shapes.PathShape.hpp"
#include "android.graphics.drawable.shapes.RectShape.hpp"
#include "android.graphics.drawable.shapes.RoundRectShape.hpp"
#include "android.graphics.drawable.shapes.Shape.hpp"

jclass android::graphics::drawable::shapes::Shape::_class = nullptr;
jclass android::graphics::drawable::shapes::OvalShape::_class = nullptr;
jclass android::graphics::drawable::shapes::ArcShape::_class = nullptr;
jclass android::graphics::drawable::shapes::RoundRectShape::_class = nullptr;
jclass android::graphics::drawable::shapes::PathShape::_class = nullptr;
jclass android::graphics::drawable::shapes::RectShape::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::shapes::Shape::Shape() : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::graphics::drawable::shapes::Shape::_class) ::android::graphics::drawable::shapes::Shape::_class = java::fetch_class("android/graphics/drawable/shapes/Shape");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

float android::graphics::drawable::shapes::Shape::getWidth() const {
    if (!::android::graphics::drawable::shapes::Shape::_class) ::android::graphics::drawable::shapes::Shape::_class = java::fetch_class("android/graphics/drawable/shapes/Shape");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWidth", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::graphics::drawable::shapes::Shape::getHeight() const {
    if (!::android::graphics::drawable::shapes::Shape::_class) ::android::graphics::drawable::shapes::Shape::_class = java::fetch_class("android/graphics/drawable/shapes/Shape");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHeight", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::graphics::drawable::shapes::Shape::draw(const ::android::graphics::Canvas& arg0, const ::android::graphics::Paint& arg1) const {
    if (!::android::graphics::drawable::shapes::Shape::_class) ::android::graphics::drawable::shapes::Shape::_class = java::fetch_class("android/graphics/drawable/shapes/Shape");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::graphics::drawable::shapes::Shape::resize(float arg0, float arg1) const {
    if (!::android::graphics::drawable::shapes::Shape::_class) ::android::graphics::drawable::shapes::Shape::_class = java::fetch_class("android/graphics/drawable/shapes/Shape");
    static jmethodID mid = java::jni->GetMethodID(_class, "resize", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::graphics::drawable::shapes::Shape::hasAlpha() const {
    if (!::android::graphics::drawable::shapes::Shape::_class) ::android::graphics::drawable::shapes::Shape::_class = java::fetch_class("android/graphics/drawable/shapes/Shape");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasAlpha", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::graphics::drawable::shapes::Shape android::graphics::drawable::shapes::Shape::clone() const {
    if (!::android::graphics::drawable::shapes::Shape::_class) ::android::graphics::drawable::shapes::Shape::_class = java::fetch_class("android/graphics/drawable/shapes/Shape");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Landroid/graphics/drawable/shapes/Shape;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::shapes::Shape _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::shapes::OvalShape::OvalShape() : ::java::lang::Object((jobject)0), ::android::graphics::drawable::shapes::RectShape((jobject)0), ::android::graphics::drawable::shapes::Shape((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::graphics::drawable::shapes::OvalShape::_class) ::android::graphics::drawable::shapes::OvalShape::_class = java::fetch_class("android/graphics/drawable/shapes/OvalShape");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::graphics::drawable::shapes::OvalShape::draw(const ::android::graphics::Canvas& arg0, const ::android::graphics::Paint& arg1) const {
    if (!::android::graphics::drawable::shapes::OvalShape::_class) ::android::graphics::drawable::shapes::OvalShape::_class = java::fetch_class("android/graphics/drawable/shapes/OvalShape");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::shapes::ArcShape::ArcShape(float arg0, float arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::shapes::RectShape((jobject)0), ::android::graphics::drawable::shapes::Shape((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::graphics::drawable::shapes::ArcShape::_class) ::android::graphics::drawable::shapes::ArcShape::_class = java::fetch_class("android/graphics/drawable/shapes/ArcShape");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::graphics::drawable::shapes::ArcShape::draw(const ::android::graphics::Canvas& arg0, const ::android::graphics::Paint& arg1) const {
    if (!::android::graphics::drawable::shapes::ArcShape::_class) ::android::graphics::drawable::shapes::ArcShape::_class = java::fetch_class("android/graphics/drawable/shapes/ArcShape");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::shapes::RoundRectShape::RoundRectShape(const std::vector< float>& arg0, const ::android::graphics::RectF& arg1, const std::vector< float>& arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::shapes::RectShape((jobject)0), ::android::graphics::drawable::shapes::Shape((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::graphics::drawable::shapes::RoundRectShape::_class) ::android::graphics::drawable::shapes::RoundRectShape::_class = java::fetch_class("android/graphics/drawable/shapes/RoundRectShape");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([FLandroid/graphics/RectF;[F)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject _arg1 = arg1.obj;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::graphics::drawable::shapes::RoundRectShape::draw(const ::android::graphics::Canvas& arg0, const ::android::graphics::Paint& arg1) const {
    if (!::android::graphics::drawable::shapes::RoundRectShape::_class) ::android::graphics::drawable::shapes::RoundRectShape::_class = java::fetch_class("android/graphics/drawable/shapes/RoundRectShape");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::graphics::drawable::shapes::RoundRectShape android::graphics::drawable::shapes::RoundRectShape::clone() const {
    if (!::android::graphics::drawable::shapes::RoundRectShape::_class) ::android::graphics::drawable::shapes::RoundRectShape::_class = java::fetch_class("android/graphics/drawable/shapes/RoundRectShape");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Landroid/graphics/drawable/shapes/RoundRectShape;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::shapes::RoundRectShape _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::shapes::PathShape::PathShape(const ::android::graphics::Path& arg0, float arg1, float arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::shapes::Shape((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::graphics::drawable::shapes::PathShape::_class) ::android::graphics::drawable::shapes::PathShape::_class = java::fetch_class("android/graphics/drawable/shapes/PathShape");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/Path;FF)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::graphics::drawable::shapes::PathShape::draw(const ::android::graphics::Canvas& arg0, const ::android::graphics::Paint& arg1) const {
    if (!::android::graphics::drawable::shapes::PathShape::_class) ::android::graphics::drawable::shapes::PathShape::_class = java::fetch_class("android/graphics/drawable/shapes/PathShape");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::graphics::drawable::shapes::PathShape android::graphics::drawable::shapes::PathShape::clone() const {
    if (!::android::graphics::drawable::shapes::PathShape::_class) ::android::graphics::drawable::shapes::PathShape::_class = java::fetch_class("android/graphics/drawable/shapes/PathShape");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Landroid/graphics/drawable/shapes/PathShape;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::shapes::PathShape _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::graphics::drawable::shapes::RectShape::RectShape() : ::java::lang::Object((jobject)0), ::android::graphics::drawable::shapes::Shape((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::graphics::drawable::shapes::RectShape::_class) ::android::graphics::drawable::shapes::RectShape::_class = java::fetch_class("android/graphics/drawable/shapes/RectShape");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::graphics::drawable::shapes::RectShape::draw(const ::android::graphics::Canvas& arg0, const ::android::graphics::Paint& arg1) const {
    if (!::android::graphics::drawable::shapes::RectShape::_class) ::android::graphics::drawable::shapes::RectShape::_class = java::fetch_class("android/graphics/drawable/shapes/RectShape");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::graphics::drawable::shapes::RectShape android::graphics::drawable::shapes::RectShape::clone() const {
    if (!::android::graphics::drawable::shapes::RectShape::_class) ::android::graphics::drawable::shapes::RectShape::_class = java::fetch_class("android/graphics/drawable/shapes/RectShape");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Landroid/graphics/drawable/shapes/RectShape;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::shapes::RectShape _ret(ret);
    return _ret;
}

