#include "java-core.hpp"
#include <memory>
#include "android.graphics.Rect.hpp"
#include "android.graphics.SurfaceTexture.hpp"
#include "android.hardware.Camera.hpp"
#include "android.hardware.GeomagneticField.hpp"
#include "android.hardware.Sensor.hpp"
#include "android.hardware.SensorEvent.hpp"
#include "android.hardware.SensorEventListener.hpp"
#include "android.hardware.SensorListener.hpp"
#include "android.hardware.SensorManager.hpp"
#include "android.os.Handler.hpp"
#include "android.view.SurfaceHolder.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.List.hpp"

jclass android::hardware::Camera_Size::_class = nullptr;
jclass android::hardware::Camera_ErrorCallback::_class = nullptr;
jclass android::hardware::SensorManager::_class = nullptr;
jclass android::hardware::Camera_OnZoomChangeListener::_class = nullptr;
jclass android::hardware::SensorListener::_class = nullptr;
jclass android::hardware::SensorEvent::_class = nullptr;
jclass android::hardware::Camera_Face::_class = nullptr;
jclass android::hardware::Sensor::_class = nullptr;
jclass android::hardware::Camera::_class = nullptr;
jclass android::hardware::Camera_AutoFocusCallback::_class = nullptr;
jclass android::hardware::Camera_Parameters::_class = nullptr;
jclass android::hardware::Camera_FaceDetectionListener::_class = nullptr;
jclass android::hardware::SensorEventListener::_class = nullptr;
jclass android::hardware::Camera_ShutterCallback::_class = nullptr;
jclass android::hardware::GeomagneticField::_class = nullptr;
jclass android::hardware::Camera_PreviewCallback::_class = nullptr;
jclass android::hardware::Camera_Area::_class = nullptr;
jclass android::hardware::Camera_CameraInfo::_class = nullptr;
jclass android::hardware::Camera_PictureCallback::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::hardware::Camera_Size::Camera_Size(const ::android::hardware::Camera& arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::hardware::Camera_Size::_class) ::android::hardware::Camera_Size::_class = java::fetch_class("android/hardware/Camera$Size");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/hardware/Camera;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

bool android::hardware::Camera_Size::equals(const ::java::lang::Object& arg0) const {
    if (!::android::hardware::Camera_Size::_class) ::android::hardware::Camera_Size::_class = java::fetch_class("android/hardware/Camera$Size");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::hardware::Camera_Size::hashCode() const {
    if (!::android::hardware::Camera_Size::_class) ::android::hardware::Camera_Size::_class = java::fetch_class("android/hardware/Camera$Size");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::hardware::Camera_ErrorCallback::onError(int32_t arg0, const ::android::hardware::Camera& arg1) const {
    if (!::android::hardware::Camera_ErrorCallback::_class) ::android::hardware::Camera_ErrorCallback::_class = java::fetch_class("android/hardware/Camera$ErrorCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onError", "(ILandroid/hardware/Camera;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::hardware::SensorManager::getSensors() const {
    if (!::android::hardware::SensorManager::_class) ::android::hardware::SensorManager::_class = java::fetch_class("android/hardware/SensorManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSensors", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::List android::hardware::SensorManager::getSensorList(int32_t arg0) const {
    if (!::android::hardware::SensorManager::_class) ::android::hardware::SensorManager::_class = java::fetch_class("android/hardware/SensorManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSensorList", "(I)Ljava/util/List;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

::android::hardware::Sensor android::hardware::SensorManager::getDefaultSensor(int32_t arg0) const {
    if (!::android::hardware::SensorManager::_class) ::android::hardware::SensorManager::_class = java::fetch_class("android/hardware/SensorManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaultSensor", "(I)Landroid/hardware/Sensor;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::hardware::Sensor _ret(ret);
    return _ret;
}

bool android::hardware::SensorManager::registerListener(const ::android::hardware::SensorListener& arg0, int32_t arg1) const {
    if (!::android::hardware::SensorManager::_class) ::android::hardware::SensorManager::_class = java::fetch_class("android/hardware/SensorManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerListener", "(Landroid/hardware/SensorListener;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::hardware::SensorManager::registerListener(const ::android::hardware::SensorListener& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::hardware::SensorManager::_class) ::android::hardware::SensorManager::_class = java::fetch_class("android/hardware/SensorManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerListener", "(Landroid/hardware/SensorListener;II)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::hardware::SensorManager::unregisterListener(const ::android::hardware::SensorListener& arg0, int32_t arg1) const {
    if (!::android::hardware::SensorManager::_class) ::android::hardware::SensorManager::_class = java::fetch_class("android/hardware/SensorManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterListener", "(Landroid/hardware/SensorListener;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::hardware::SensorManager::unregisterListener(const ::android::hardware::SensorListener& arg0) const {
    if (!::android::hardware::SensorManager::_class) ::android::hardware::SensorManager::_class = java::fetch_class("android/hardware/SensorManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterListener", "(Landroid/hardware/SensorListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::hardware::SensorManager::unregisterListener(const ::android::hardware::SensorEventListener& arg0, const ::android::hardware::Sensor& arg1) const {
    if (!::android::hardware::SensorManager::_class) ::android::hardware::SensorManager::_class = java::fetch_class("android/hardware/SensorManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterListener", "(Landroid/hardware/SensorEventListener;Landroid/hardware/Sensor;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::hardware::SensorManager::unregisterListener(const ::android::hardware::SensorEventListener& arg0) const {
    if (!::android::hardware::SensorManager::_class) ::android::hardware::SensorManager::_class = java::fetch_class("android/hardware/SensorManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterListener", "(Landroid/hardware/SensorEventListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::hardware::SensorManager::registerListener(const ::android::hardware::SensorEventListener& arg0, const ::android::hardware::Sensor& arg1, int32_t arg2) const {
    if (!::android::hardware::SensorManager::_class) ::android::hardware::SensorManager::_class = java::fetch_class("android/hardware/SensorManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerListener", "(Landroid/hardware/SensorEventListener;Landroid/hardware/Sensor;I)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::hardware::SensorManager::registerListener(const ::android::hardware::SensorEventListener& arg0, const ::android::hardware::Sensor& arg1, int32_t arg2, const ::android::os::Handler& arg3) const {
    if (!::android::hardware::SensorManager::_class) ::android::hardware::SensorManager::_class = java::fetch_class("android/hardware/SensorManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerListener", "(Landroid/hardware/SensorEventListener;Landroid/hardware/Sensor;ILandroid/os/Handler;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::hardware::SensorManager::getRotationMatrix(const std::vector< float>& arg0, const std::vector< float>& arg1, const std::vector< float>& arg2, const std::vector< float>& arg3){
    if (!::android::hardware::SensorManager::_class) ::android::hardware::SensorManager::_class = java::fetch_class("android/hardware/SensorManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getRotationMatrix", "([F[F[F[F)Z");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    jfloatArray _arg3 = java::jni->NewFloatArray(arg3.size());
    java::jni->SetFloatArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

float android::hardware::SensorManager::getInclination(const std::vector< float>& arg0){
    if (!::android::hardware::SensorManager::_class) ::android::hardware::SensorManager::_class = java::fetch_class("android/hardware/SensorManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInclination", "([F)F");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

bool android::hardware::SensorManager::remapCoordinateSystem(const std::vector< float>& arg0, int32_t arg1, int32_t arg2, const std::vector< float>& arg3){
    if (!::android::hardware::SensorManager::_class) ::android::hardware::SensorManager::_class = java::fetch_class("android/hardware/SensorManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "remapCoordinateSystem", "([FII[F)Z");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jfloatArray _arg3 = java::jni->NewFloatArray(arg3.size());
    java::jni->SetFloatArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

std::vector< float> android::hardware::SensorManager::getOrientation(const std::vector< float>& arg0, const std::vector< float>& arg1){
    if (!::android::hardware::SensorManager::_class) ::android::hardware::SensorManager::_class = java::fetch_class("android/hardware/SensorManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getOrientation", "([F[F)[F");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jfloat* reta = java::jni->GetFloatArrayElements((jfloatArray)ret, nullptr);
    std::vector< float> _ret(reta, reta+rets);
    java::jni->ReleaseFloatArrayElements((jfloatArray)ret, reta, JNI_ABORT);
    return _ret;
}

float android::hardware::SensorManager::getAltitude(float arg0, float arg1){
    if (!::android::hardware::SensorManager::_class) ::android::hardware::SensorManager::_class = java::fetch_class("android/hardware/SensorManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAltitude", "(FF)F");
    float _arg0 = arg0;
    float _arg1 = arg1;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0, _arg1);
}

void android::hardware::SensorManager::getAngleChange(const std::vector< float>& arg0, const std::vector< float>& arg1, const std::vector< float>& arg2){
    if (!::android::hardware::SensorManager::_class) ::android::hardware::SensorManager::_class = java::fetch_class("android/hardware/SensorManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAngleChange", "([F[F[F)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::hardware::SensorManager::getRotationMatrixFromVector(const std::vector< float>& arg0, const std::vector< float>& arg1){
    if (!::android::hardware::SensorManager::_class) ::android::hardware::SensorManager::_class = java::fetch_class("android/hardware/SensorManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getRotationMatrixFromVector", "([F[F)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::hardware::SensorManager::getQuaternionFromVector(const std::vector< float>& arg0, const std::vector< float>& arg1){
    if (!::android::hardware::SensorManager::_class) ::android::hardware::SensorManager::_class = java::fetch_class("android/hardware/SensorManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getQuaternionFromVector", "([F[F)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::hardware::Camera_OnZoomChangeListener::onZoomChange(int32_t arg0, bool arg1, const ::android::hardware::Camera& arg2) const {
    if (!::android::hardware::Camera_OnZoomChangeListener::_class) ::android::hardware::Camera_OnZoomChangeListener::_class = java::fetch_class("android/hardware/Camera$OnZoomChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onZoomChange", "(IZLandroid/hardware/Camera;)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::hardware::SensorListener::onSensorChanged(int32_t arg0, const std::vector< float>& arg1) const {
    if (!::android::hardware::SensorListener::_class) ::android::hardware::SensorListener::_class = java::fetch_class("android/hardware/SensorListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSensorChanged", "(I[F)V");
    int32_t _arg0 = arg0;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::hardware::SensorListener::onAccuracyChanged(int32_t arg0, int32_t arg1) const {
    if (!::android::hardware::SensorListener::_class) ::android::hardware::SensorListener::_class = java::fetch_class("android/hardware/SensorListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAccuracyChanged", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::hardware::Camera_Face::Camera_Face() : ::java::lang::Object((jobject)0) {
    if (!::android::hardware::Camera_Face::_class) ::android::hardware::Camera_Face::_class = java::fetch_class("android/hardware/Camera$Face");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::hardware::Sensor::getName() const {
    if (!::android::hardware::Sensor::_class) ::android::hardware::Sensor::_class = java::fetch_class("android/hardware/Sensor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::hardware::Sensor::getVendor() const {
    if (!::android::hardware::Sensor::_class) ::android::hardware::Sensor::_class = java::fetch_class("android/hardware/Sensor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVendor", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::hardware::Sensor::getType() const {
    if (!::android::hardware::Sensor::_class) ::android::hardware::Sensor::_class = java::fetch_class("android/hardware/Sensor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::hardware::Sensor::getVersion() const {
    if (!::android::hardware::Sensor::_class) ::android::hardware::Sensor::_class = java::fetch_class("android/hardware/Sensor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVersion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

float android::hardware::Sensor::getMaximumRange() const {
    if (!::android::hardware::Sensor::_class) ::android::hardware::Sensor::_class = java::fetch_class("android/hardware/Sensor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaximumRange", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::hardware::Sensor::getResolution() const {
    if (!::android::hardware::Sensor::_class) ::android::hardware::Sensor::_class = java::fetch_class("android/hardware/Sensor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResolution", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::hardware::Sensor::getPower() const {
    if (!::android::hardware::Sensor::_class) ::android::hardware::Sensor::_class = java::fetch_class("android/hardware/Sensor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPower", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

int32_t android::hardware::Sensor::getMinDelay() const {
    if (!::android::hardware::Sensor::_class) ::android::hardware::Sensor::_class = java::fetch_class("android/hardware/Sensor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinDelay", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::hardware::Camera::getNumberOfCameras(){
    if (!::android::hardware::Camera::_class) ::android::hardware::Camera::_class = java::fetch_class("android/hardware/Camera");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getNumberOfCameras", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

void android::hardware::Camera::getCameraInfo(int32_t arg0, const ::android::hardware::Camera_CameraInfo& arg1){
    if (!::android::hardware::Camera::_class) ::android::hardware::Camera::_class = java::fetch_class("android/hardware/Camera");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCameraInfo", "(ILandroid/hardware/Camera$CameraInfo;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::android::hardware::Camera android::hardware::Camera::open(int32_t arg0){
    if (!::android::hardware::Camera::_class) ::android::hardware::Camera::_class = java::fetch_class("android/hardware/Camera");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "open", "(I)Landroid/hardware/Camera;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::hardware::Camera _ret(ret);
    return _ret;
}

::android::hardware::Camera android::hardware::Camera::open(){
    if (!::android::hardware::Camera::_class) ::android::hardware::Camera::_class = java::fetch_class("android/hardware/Camera");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "open", "()Landroid/hardware/Camera;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::hardware::Camera _ret(ret);
    return _ret;
}

void android::hardware::Camera::release() const {
    if (!::android::hardware::Camera::_class) ::android::hardware::Camera::_class = java::fetch_class("android/hardware/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::hardware::Camera::unlock() const {
    if (!::android::hardware::Camera::_class) ::android::hardware::Camera::_class = java::fetch_class("android/hardware/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "unlock", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::hardware::Camera::lock() const {
    if (!::android::hardware::Camera::_class) ::android::hardware::Camera::_class = java::fetch_class("android/hardware/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "lock", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::hardware::Camera::reconnect() const {
    if (!::android::hardware::Camera::_class) ::android::hardware::Camera::_class = java::fetch_class("android/hardware/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "reconnect", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::hardware::Camera::setPreviewDisplay(const ::android::view::SurfaceHolder& arg0) const {
    if (!::android::hardware::Camera::_class) ::android::hardware::Camera::_class = java::fetch_class("android/hardware/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPreviewDisplay", "(Landroid/view/SurfaceHolder;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::hardware::Camera::setPreviewTexture(const ::android::graphics::SurfaceTexture& arg0) const {
    if (!::android::hardware::Camera::_class) ::android::hardware::Camera::_class = java::fetch_class("android/hardware/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPreviewTexture", "(Landroid/graphics/SurfaceTexture;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::hardware::Camera::startPreview() const {
    if (!::android::hardware::Camera::_class) ::android::hardware::Camera::_class = java::fetch_class("android/hardware/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "startPreview", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::hardware::Camera::stopPreview() const {
    if (!::android::hardware::Camera::_class) ::android::hardware::Camera::_class = java::fetch_class("android/hardware/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopPreview", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::hardware::Camera::setPreviewCallback(const ::android::hardware::Camera_PreviewCallback& arg0) const {
    if (!::android::hardware::Camera::_class) ::android::hardware::Camera::_class = java::fetch_class("android/hardware/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPreviewCallback", "(Landroid/hardware/Camera$PreviewCallback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::hardware::Camera::setOneShotPreviewCallback(const ::android::hardware::Camera_PreviewCallback& arg0) const {
    if (!::android::hardware::Camera::_class) ::android::hardware::Camera::_class = java::fetch_class("android/hardware/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOneShotPreviewCallback", "(Landroid/hardware/Camera$PreviewCallback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::hardware::Camera::setPreviewCallbackWithBuffer(const ::android::hardware::Camera_PreviewCallback& arg0) const {
    if (!::android::hardware::Camera::_class) ::android::hardware::Camera::_class = java::fetch_class("android/hardware/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPreviewCallbackWithBuffer", "(Landroid/hardware/Camera$PreviewCallback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::hardware::Camera::addCallbackBuffer(const std::vector< int8_t>& arg0) const {
    if (!::android::hardware::Camera::_class) ::android::hardware::Camera::_class = java::fetch_class("android/hardware/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "addCallbackBuffer", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::hardware::Camera::autoFocus(const ::android::hardware::Camera_AutoFocusCallback& arg0) const {
    if (!::android::hardware::Camera::_class) ::android::hardware::Camera::_class = java::fetch_class("android/hardware/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "autoFocus", "(Landroid/hardware/Camera$AutoFocusCallback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::hardware::Camera::cancelAutoFocus() const {
    if (!::android::hardware::Camera::_class) ::android::hardware::Camera::_class = java::fetch_class("android/hardware/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancelAutoFocus", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::hardware::Camera::takePicture(const ::android::hardware::Camera_ShutterCallback& arg0, const ::android::hardware::Camera_PictureCallback& arg1, const ::android::hardware::Camera_PictureCallback& arg2) const {
    if (!::android::hardware::Camera::_class) ::android::hardware::Camera::_class = java::fetch_class("android/hardware/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "takePicture", "(Landroid/hardware/Camera$ShutterCallback;Landroid/hardware/Camera$PictureCallback;Landroid/hardware/Camera$PictureCallback;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::hardware::Camera::takePicture(const ::android::hardware::Camera_ShutterCallback& arg0, const ::android::hardware::Camera_PictureCallback& arg1, const ::android::hardware::Camera_PictureCallback& arg2, const ::android::hardware::Camera_PictureCallback& arg3) const {
    if (!::android::hardware::Camera::_class) ::android::hardware::Camera::_class = java::fetch_class("android/hardware/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "takePicture", "(Landroid/hardware/Camera$ShutterCallback;Landroid/hardware/Camera$PictureCallback;Landroid/hardware/Camera$PictureCallback;Landroid/hardware/Camera$PictureCallback;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::hardware::Camera::startSmoothZoom(int32_t arg0) const {
    if (!::android::hardware::Camera::_class) ::android::hardware::Camera::_class = java::fetch_class("android/hardware/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "startSmoothZoom", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::hardware::Camera::stopSmoothZoom() const {
    if (!::android::hardware::Camera::_class) ::android::hardware::Camera::_class = java::fetch_class("android/hardware/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopSmoothZoom", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::hardware::Camera::setDisplayOrientation(int32_t arg0) const {
    if (!::android::hardware::Camera::_class) ::android::hardware::Camera::_class = java::fetch_class("android/hardware/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDisplayOrientation", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::hardware::Camera::setZoomChangeListener(const ::android::hardware::Camera_OnZoomChangeListener& arg0) const {
    if (!::android::hardware::Camera::_class) ::android::hardware::Camera::_class = java::fetch_class("android/hardware/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "setZoomChangeListener", "(Landroid/hardware/Camera$OnZoomChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::hardware::Camera::setFaceDetectionListener(const ::android::hardware::Camera_FaceDetectionListener& arg0) const {
    if (!::android::hardware::Camera::_class) ::android::hardware::Camera::_class = java::fetch_class("android/hardware/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFaceDetectionListener", "(Landroid/hardware/Camera$FaceDetectionListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::hardware::Camera::startFaceDetection() const {
    if (!::android::hardware::Camera::_class) ::android::hardware::Camera::_class = java::fetch_class("android/hardware/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "startFaceDetection", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::hardware::Camera::stopFaceDetection() const {
    if (!::android::hardware::Camera::_class) ::android::hardware::Camera::_class = java::fetch_class("android/hardware/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopFaceDetection", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::hardware::Camera::setErrorCallback(const ::android::hardware::Camera_ErrorCallback& arg0) const {
    if (!::android::hardware::Camera::_class) ::android::hardware::Camera::_class = java::fetch_class("android/hardware/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "setErrorCallback", "(Landroid/hardware/Camera$ErrorCallback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::hardware::Camera::setParameters(const ::android::hardware::Camera_Parameters& arg0) const {
    if (!::android::hardware::Camera::_class) ::android::hardware::Camera::_class = java::fetch_class("android/hardware/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParameters", "(Landroid/hardware/Camera$Parameters;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::hardware::Camera_Parameters android::hardware::Camera::getParameters() const {
    if (!::android::hardware::Camera::_class) ::android::hardware::Camera::_class = java::fetch_class("android/hardware/Camera");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameters", "()Landroid/hardware/Camera$Parameters;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::hardware::Camera_Parameters _ret(ret);
    return _ret;
}

void android::hardware::Camera_AutoFocusCallback::onAutoFocus(bool arg0, const ::android::hardware::Camera& arg1) const {
    if (!::android::hardware::Camera_AutoFocusCallback::_class) ::android::hardware::Camera_AutoFocusCallback::_class = java::fetch_class("android/hardware/Camera$AutoFocusCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAutoFocus", "(ZLandroid/hardware/Camera;)V");
    bool _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::hardware::Camera_Parameters::flatten() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "flatten", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::hardware::Camera_Parameters::unflatten(const ::java::lang::String& arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "unflatten", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::hardware::Camera_Parameters::remove(const ::java::lang::String& arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::hardware::Camera_Parameters::set(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::hardware::Camera_Parameters::set(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::hardware::Camera_Parameters::get(const ::java::lang::String& arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::hardware::Camera_Parameters::getInt(const ::java::lang::String& arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInt", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::hardware::Camera_Parameters::setPreviewSize(int32_t arg0, int32_t arg1) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPreviewSize", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::hardware::Camera_Size android::hardware::Camera_Parameters::getPreviewSize() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPreviewSize", "()Landroid/hardware/Camera$Size;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::hardware::Camera_Size _ret(ret);
    return _ret;
}

::java::util::List android::hardware::Camera_Parameters::getSupportedPreviewSizes() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSupportedPreviewSizes", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List android::hardware::Camera_Parameters::getSupportedVideoSizes() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSupportedVideoSizes", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::android::hardware::Camera_Size android::hardware::Camera_Parameters::getPreferredPreviewSizeForVideo() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPreferredPreviewSizeForVideo", "()Landroid/hardware/Camera$Size;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::hardware::Camera_Size _ret(ret);
    return _ret;
}

void android::hardware::Camera_Parameters::setJpegThumbnailSize(int32_t arg0, int32_t arg1) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setJpegThumbnailSize", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::hardware::Camera_Size android::hardware::Camera_Parameters::getJpegThumbnailSize() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getJpegThumbnailSize", "()Landroid/hardware/Camera$Size;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::hardware::Camera_Size _ret(ret);
    return _ret;
}

::java::util::List android::hardware::Camera_Parameters::getSupportedJpegThumbnailSizes() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSupportedJpegThumbnailSizes", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

void android::hardware::Camera_Parameters::setJpegThumbnailQuality(int32_t arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setJpegThumbnailQuality", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::hardware::Camera_Parameters::getJpegThumbnailQuality() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getJpegThumbnailQuality", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::hardware::Camera_Parameters::setJpegQuality(int32_t arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setJpegQuality", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::hardware::Camera_Parameters::getJpegQuality() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getJpegQuality", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::hardware::Camera_Parameters::setPreviewFrameRate(int32_t arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPreviewFrameRate", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::hardware::Camera_Parameters::getPreviewFrameRate() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPreviewFrameRate", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::List android::hardware::Camera_Parameters::getSupportedPreviewFrameRates() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSupportedPreviewFrameRates", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

void android::hardware::Camera_Parameters::setPreviewFpsRange(int32_t arg0, int32_t arg1) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPreviewFpsRange", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::hardware::Camera_Parameters::getPreviewFpsRange(const std::vector< int32_t>& arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPreviewFpsRange", "([I)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::List android::hardware::Camera_Parameters::getSupportedPreviewFpsRange() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSupportedPreviewFpsRange", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

void android::hardware::Camera_Parameters::setPreviewFormat(int32_t arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPreviewFormat", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::hardware::Camera_Parameters::getPreviewFormat() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPreviewFormat", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::List android::hardware::Camera_Parameters::getSupportedPreviewFormats() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSupportedPreviewFormats", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

void android::hardware::Camera_Parameters::setPictureSize(int32_t arg0, int32_t arg1) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPictureSize", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::hardware::Camera_Size android::hardware::Camera_Parameters::getPictureSize() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPictureSize", "()Landroid/hardware/Camera$Size;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::hardware::Camera_Size _ret(ret);
    return _ret;
}

::java::util::List android::hardware::Camera_Parameters::getSupportedPictureSizes() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSupportedPictureSizes", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

void android::hardware::Camera_Parameters::setPictureFormat(int32_t arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPictureFormat", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::hardware::Camera_Parameters::getPictureFormat() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPictureFormat", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::List android::hardware::Camera_Parameters::getSupportedPictureFormats() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSupportedPictureFormats", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

void android::hardware::Camera_Parameters::setRotation(int32_t arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRotation", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::hardware::Camera_Parameters::setGpsLatitude(double arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGpsLatitude", "(D)V");
    double _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::hardware::Camera_Parameters::setGpsLongitude(double arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGpsLongitude", "(D)V");
    double _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::hardware::Camera_Parameters::setGpsAltitude(double arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGpsAltitude", "(D)V");
    double _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::hardware::Camera_Parameters::setGpsTimestamp(int64_t arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGpsTimestamp", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::hardware::Camera_Parameters::setGpsProcessingMethod(const ::java::lang::String& arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGpsProcessingMethod", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::hardware::Camera_Parameters::removeGpsData() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeGpsData", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String android::hardware::Camera_Parameters::getWhiteBalance() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWhiteBalance", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::hardware::Camera_Parameters::setWhiteBalance(const ::java::lang::String& arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWhiteBalance", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::List android::hardware::Camera_Parameters::getSupportedWhiteBalance() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSupportedWhiteBalance", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::lang::String android::hardware::Camera_Parameters::getColorEffect() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColorEffect", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::hardware::Camera_Parameters::setColorEffect(const ::java::lang::String& arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorEffect", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::List android::hardware::Camera_Parameters::getSupportedColorEffects() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSupportedColorEffects", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::lang::String android::hardware::Camera_Parameters::getAntibanding() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAntibanding", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::hardware::Camera_Parameters::setAntibanding(const ::java::lang::String& arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAntibanding", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::List android::hardware::Camera_Parameters::getSupportedAntibanding() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSupportedAntibanding", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::lang::String android::hardware::Camera_Parameters::getSceneMode() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSceneMode", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::hardware::Camera_Parameters::setSceneMode(const ::java::lang::String& arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSceneMode", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::List android::hardware::Camera_Parameters::getSupportedSceneModes() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSupportedSceneModes", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::lang::String android::hardware::Camera_Parameters::getFlashMode() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFlashMode", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::hardware::Camera_Parameters::setFlashMode(const ::java::lang::String& arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFlashMode", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::List android::hardware::Camera_Parameters::getSupportedFlashModes() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSupportedFlashModes", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::lang::String android::hardware::Camera_Parameters::getFocusMode() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFocusMode", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::hardware::Camera_Parameters::setFocusMode(const ::java::lang::String& arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFocusMode", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::List android::hardware::Camera_Parameters::getSupportedFocusModes() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSupportedFocusModes", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

float android::hardware::Camera_Parameters::getFocalLength() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFocalLength", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::hardware::Camera_Parameters::getHorizontalViewAngle() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHorizontalViewAngle", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::hardware::Camera_Parameters::getVerticalViewAngle() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVerticalViewAngle", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

int32_t android::hardware::Camera_Parameters::getExposureCompensation() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExposureCompensation", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::hardware::Camera_Parameters::setExposureCompensation(int32_t arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExposureCompensation", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::hardware::Camera_Parameters::getMaxExposureCompensation() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxExposureCompensation", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::hardware::Camera_Parameters::getMinExposureCompensation() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinExposureCompensation", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

float android::hardware::Camera_Parameters::getExposureCompensationStep() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExposureCompensationStep", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::hardware::Camera_Parameters::setAutoExposureLock(bool arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAutoExposureLock", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::hardware::Camera_Parameters::getAutoExposureLock() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAutoExposureLock", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::hardware::Camera_Parameters::isAutoExposureLockSupported() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAutoExposureLockSupported", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::hardware::Camera_Parameters::setAutoWhiteBalanceLock(bool arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAutoWhiteBalanceLock", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::hardware::Camera_Parameters::getAutoWhiteBalanceLock() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAutoWhiteBalanceLock", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::hardware::Camera_Parameters::isAutoWhiteBalanceLockSupported() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAutoWhiteBalanceLockSupported", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::hardware::Camera_Parameters::getZoom() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getZoom", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::hardware::Camera_Parameters::setZoom(int32_t arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setZoom", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::hardware::Camera_Parameters::isZoomSupported() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "isZoomSupported", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::hardware::Camera_Parameters::getMaxZoom() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxZoom", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::List android::hardware::Camera_Parameters::getZoomRatios() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getZoomRatios", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

bool android::hardware::Camera_Parameters::isSmoothZoomSupported() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSmoothZoomSupported", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::hardware::Camera_Parameters::getFocusDistances(const std::vector< float>& arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFocusDistances", "([F)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::hardware::Camera_Parameters::getMaxNumFocusAreas() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxNumFocusAreas", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::List android::hardware::Camera_Parameters::getFocusAreas() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFocusAreas", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

void android::hardware::Camera_Parameters::setFocusAreas(const ::java::util::List& arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFocusAreas", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::hardware::Camera_Parameters::getMaxNumMeteringAreas() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxNumMeteringAreas", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::List android::hardware::Camera_Parameters::getMeteringAreas() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMeteringAreas", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

void android::hardware::Camera_Parameters::setMeteringAreas(const ::java::util::List& arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMeteringAreas", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::hardware::Camera_Parameters::getMaxNumDetectedFaces() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxNumDetectedFaces", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::hardware::Camera_Parameters::setRecordingHint(bool arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRecordingHint", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::hardware::Camera_Parameters::isVideoSnapshotSupported() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "isVideoSnapshotSupported", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::hardware::Camera_Parameters::setVideoStabilization(bool arg0) const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVideoStabilization", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::hardware::Camera_Parameters::getVideoStabilization() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVideoStabilization", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::hardware::Camera_Parameters::isVideoStabilizationSupported() const {
    if (!::android::hardware::Camera_Parameters::_class) ::android::hardware::Camera_Parameters::_class = java::fetch_class("android/hardware/Camera$Parameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "isVideoStabilizationSupported", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::hardware::Camera_FaceDetectionListener::onFaceDetection(const std::vector< ::android::hardware::Camera_Face>& arg0, const ::android::hardware::Camera& arg1) const {
    if (!::android::hardware::Camera_FaceDetectionListener::_class) ::android::hardware::Camera_FaceDetectionListener::_class = java::fetch_class("android/hardware/Camera$FaceDetectionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onFaceDetection", "([Landroid/hardware/Camera$Face;Landroid/hardware/Camera;)V");
    unsigned arg0s = arg0.size();
    if (!::android::hardware::Camera_Face::_class) ::android::hardware::Camera_Face::_class = java::fetch_class("android/hardware/Camera$Face");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::hardware::Camera_Face::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::hardware::Camera_Face& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::hardware::SensorEventListener::onSensorChanged(const ::android::hardware::SensorEvent& arg0) const {
    if (!::android::hardware::SensorEventListener::_class) ::android::hardware::SensorEventListener::_class = java::fetch_class("android/hardware/SensorEventListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSensorChanged", "(Landroid/hardware/SensorEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::hardware::SensorEventListener::onAccuracyChanged(const ::android::hardware::Sensor& arg0, int32_t arg1) const {
    if (!::android::hardware::SensorEventListener::_class) ::android::hardware::SensorEventListener::_class = java::fetch_class("android/hardware/SensorEventListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAccuracyChanged", "(Landroid/hardware/Sensor;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::hardware::Camera_ShutterCallback::onShutter() const {
    if (!::android::hardware::Camera_ShutterCallback::_class) ::android::hardware::Camera_ShutterCallback::_class = java::fetch_class("android/hardware/Camera$ShutterCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onShutter", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::hardware::GeomagneticField::GeomagneticField(float arg0, float arg1, float arg2, int64_t arg3) : ::java::lang::Object((jobject)0) {
    if (!::android::hardware::GeomagneticField::_class) ::android::hardware::GeomagneticField::_class = java::fetch_class("android/hardware/GeomagneticField");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(FFFJ)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    int64_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

float android::hardware::GeomagneticField::getX() const {
    if (!::android::hardware::GeomagneticField::_class) ::android::hardware::GeomagneticField::_class = java::fetch_class("android/hardware/GeomagneticField");
    static jmethodID mid = java::jni->GetMethodID(_class, "getX", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::hardware::GeomagneticField::getY() const {
    if (!::android::hardware::GeomagneticField::_class) ::android::hardware::GeomagneticField::_class = java::fetch_class("android/hardware/GeomagneticField");
    static jmethodID mid = java::jni->GetMethodID(_class, "getY", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::hardware::GeomagneticField::getZ() const {
    if (!::android::hardware::GeomagneticField::_class) ::android::hardware::GeomagneticField::_class = java::fetch_class("android/hardware/GeomagneticField");
    static jmethodID mid = java::jni->GetMethodID(_class, "getZ", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::hardware::GeomagneticField::getDeclination() const {
    if (!::android::hardware::GeomagneticField::_class) ::android::hardware::GeomagneticField::_class = java::fetch_class("android/hardware/GeomagneticField");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeclination", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::hardware::GeomagneticField::getInclination() const {
    if (!::android::hardware::GeomagneticField::_class) ::android::hardware::GeomagneticField::_class = java::fetch_class("android/hardware/GeomagneticField");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInclination", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::hardware::GeomagneticField::getHorizontalStrength() const {
    if (!::android::hardware::GeomagneticField::_class) ::android::hardware::GeomagneticField::_class = java::fetch_class("android/hardware/GeomagneticField");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHorizontalStrength", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::hardware::GeomagneticField::getFieldStrength() const {
    if (!::android::hardware::GeomagneticField::_class) ::android::hardware::GeomagneticField::_class = java::fetch_class("android/hardware/GeomagneticField");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFieldStrength", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::hardware::Camera_PreviewCallback::onPreviewFrame(const std::vector< int8_t>& arg0, const ::android::hardware::Camera& arg1) const {
    if (!::android::hardware::Camera_PreviewCallback::_class) ::android::hardware::Camera_PreviewCallback::_class = java::fetch_class("android/hardware/Camera$PreviewCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPreviewFrame", "([BLandroid/hardware/Camera;)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::hardware::Camera_Area::Camera_Area(const ::android::graphics::Rect& arg0, int32_t arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::hardware::Camera_Area::_class) ::android::hardware::Camera_Area::_class = java::fetch_class("android/hardware/Camera$Area");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/Rect;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool android::hardware::Camera_Area::equals(const ::java::lang::Object& arg0) const {
    if (!::android::hardware::Camera_Area::_class) ::android::hardware::Camera_Area::_class = java::fetch_class("android/hardware/Camera$Area");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::hardware::Camera_CameraInfo::Camera_CameraInfo() : ::java::lang::Object((jobject)0) {
    if (!::android::hardware::Camera_CameraInfo::_class) ::android::hardware::Camera_CameraInfo::_class = java::fetch_class("android/hardware/Camera$CameraInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::hardware::Camera_PictureCallback::onPictureTaken(const std::vector< int8_t>& arg0, const ::android::hardware::Camera& arg1) const {
    if (!::android::hardware::Camera_PictureCallback::_class) ::android::hardware::Camera_PictureCallback::_class = java::fetch_class("android/hardware/Camera$PictureCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPictureTaken", "([BLandroid/hardware/Camera;)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

