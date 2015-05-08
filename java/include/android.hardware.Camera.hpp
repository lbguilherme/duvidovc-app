#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class SurfaceTexture; } }
namespace android { namespace hardware { class Camera; } }
namespace android { namespace hardware { class Camera_AutoFocusCallback; } }
namespace android { namespace hardware { class Camera_CameraInfo; } }
namespace android { namespace hardware { class Camera_ErrorCallback; } }
namespace android { namespace hardware { class Camera_FaceDetectionListener; } }
namespace android { namespace hardware { class Camera_OnZoomChangeListener; } }
namespace android { namespace hardware { class Camera_Parameters; } }
namespace android { namespace hardware { class Camera_PictureCallback; } }
namespace android { namespace hardware { class Camera_PreviewCallback; } }
namespace android { namespace hardware { class Camera_ShutterCallback; } }
namespace android { namespace view { class SurfaceHolder; } }

namespace android {
namespace hardware {
class Camera : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Camera(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Camera(const ::android::hardware::Camera& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Camera(::android::hardware::Camera&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::hardware::Camera& operator=(const ::android::hardware::Camera& x) {obj = x.obj; return *this;}
    ::android::hardware::Camera& operator=(::android::hardware::Camera&& x) {obj = std::move(x.obj); return *this;}
    
    static int32_t getNumberOfCameras();
    static void getCameraInfo(int32_t, const ::android::hardware::Camera_CameraInfo&);
    static ::android::hardware::Camera open(int32_t);
    static ::android::hardware::Camera open();
    void release() const ;
    void unlock() const ;
    void lock() const ;
    void reconnect() const ;
    void setPreviewDisplay(const ::android::view::SurfaceHolder&) const ;
    void setPreviewTexture(const ::android::graphics::SurfaceTexture&) const ;
    void startPreview() const ;
    void stopPreview() const ;
    void setPreviewCallback(const ::android::hardware::Camera_PreviewCallback&) const ;
    void setOneShotPreviewCallback(const ::android::hardware::Camera_PreviewCallback&) const ;
    void setPreviewCallbackWithBuffer(const ::android::hardware::Camera_PreviewCallback&) const ;
    void addCallbackBuffer(const std::vector< int8_t>&) const ;
    void autoFocus(const ::android::hardware::Camera_AutoFocusCallback&) const ;
    void cancelAutoFocus() const ;
    void takePicture(const ::android::hardware::Camera_ShutterCallback&, const ::android::hardware::Camera_PictureCallback&, const ::android::hardware::Camera_PictureCallback&) const ;
    void takePicture(const ::android::hardware::Camera_ShutterCallback&, const ::android::hardware::Camera_PictureCallback&, const ::android::hardware::Camera_PictureCallback&, const ::android::hardware::Camera_PictureCallback&) const ;
    void startSmoothZoom(int32_t) const ;
    void stopSmoothZoom() const ;
    void setDisplayOrientation(int32_t) const ;
    void setZoomChangeListener(const ::android::hardware::Camera_OnZoomChangeListener&) const ;
    void setFaceDetectionListener(const ::android::hardware::Camera_FaceDetectionListener&) const ;
    void startFaceDetection() const ;
    void stopFaceDetection() const ;
    void setErrorCallback(const ::android::hardware::Camera_ErrorCallback&) const ;
    void setParameters(const ::android::hardware::Camera_Parameters&) const ;
    ::android::hardware::Camera_Parameters getParameters() const ;

};
}
}

#include "android.hardware.Camera_Area.hpp"
#include "android.hardware.Camera_AutoFocusCallback.hpp"
#include "android.hardware.Camera_CameraInfo.hpp"
#include "android.hardware.Camera_ErrorCallback.hpp"
#include "android.hardware.Camera_Face.hpp"
#include "android.hardware.Camera_FaceDetectionListener.hpp"
#include "android.hardware.Camera_OnZoomChangeListener.hpp"
#include "android.hardware.Camera_Parameters.hpp"
#include "android.hardware.Camera_PictureCallback.hpp"
#include "android.hardware.Camera_PreviewCallback.hpp"
#include "android.hardware.Camera_ShutterCallback.hpp"
#include "android.hardware.Camera_Size.hpp"

