#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace hardware { class Camera_Size; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace android {
namespace hardware {
class Camera_Parameters : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Camera_Parameters(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Camera_Parameters(const ::android::hardware::Camera_Parameters& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Camera_Parameters(::android::hardware::Camera_Parameters&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::hardware::Camera_Parameters& operator=(const ::android::hardware::Camera_Parameters& x) {obj = x.obj; return *this;}
    ::android::hardware::Camera_Parameters& operator=(::android::hardware::Camera_Parameters&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String flatten() const;
    void unflatten(const ::java::lang::String&) const;
    void remove(const ::java::lang::String&) const;
    void set(const ::java::lang::String&, const ::java::lang::String&) const;
    void set(const ::java::lang::String&, int32_t) const;
    ::java::lang::String get(const ::java::lang::String&) const;
    int32_t getInt(const ::java::lang::String&) const;
    void setPreviewSize(int32_t, int32_t) const;
    ::android::hardware::Camera_Size getPreviewSize() const;
    ::java::util::List getSupportedPreviewSizes() const;
    ::java::util::List getSupportedVideoSizes() const;
    ::android::hardware::Camera_Size getPreferredPreviewSizeForVideo() const;
    void setJpegThumbnailSize(int32_t, int32_t) const;
    ::android::hardware::Camera_Size getJpegThumbnailSize() const;
    ::java::util::List getSupportedJpegThumbnailSizes() const;
    void setJpegThumbnailQuality(int32_t) const;
    int32_t getJpegThumbnailQuality() const;
    void setJpegQuality(int32_t) const;
    int32_t getJpegQuality() const;
    void setPreviewFrameRate(int32_t) const;
    int32_t getPreviewFrameRate() const;
    ::java::util::List getSupportedPreviewFrameRates() const;
    void setPreviewFpsRange(int32_t, int32_t) const;
    void getPreviewFpsRange(const std::vector< int32_t>&) const;
    ::java::util::List getSupportedPreviewFpsRange() const;
    void setPreviewFormat(int32_t) const;
    int32_t getPreviewFormat() const;
    ::java::util::List getSupportedPreviewFormats() const;
    void setPictureSize(int32_t, int32_t) const;
    ::android::hardware::Camera_Size getPictureSize() const;
    ::java::util::List getSupportedPictureSizes() const;
    void setPictureFormat(int32_t) const;
    int32_t getPictureFormat() const;
    ::java::util::List getSupportedPictureFormats() const;
    void setRotation(int32_t) const;
    void setGpsLatitude(double) const;
    void setGpsLongitude(double) const;
    void setGpsAltitude(double) const;
    void setGpsTimestamp(int64_t) const;
    void setGpsProcessingMethod(const ::java::lang::String&) const;
    void removeGpsData() const;
    ::java::lang::String getWhiteBalance() const;
    void setWhiteBalance(const ::java::lang::String&) const;
    ::java::util::List getSupportedWhiteBalance() const;
    ::java::lang::String getColorEffect() const;
    void setColorEffect(const ::java::lang::String&) const;
    ::java::util::List getSupportedColorEffects() const;
    ::java::lang::String getAntibanding() const;
    void setAntibanding(const ::java::lang::String&) const;
    ::java::util::List getSupportedAntibanding() const;
    ::java::lang::String getSceneMode() const;
    void setSceneMode(const ::java::lang::String&) const;
    ::java::util::List getSupportedSceneModes() const;
    ::java::lang::String getFlashMode() const;
    void setFlashMode(const ::java::lang::String&) const;
    ::java::util::List getSupportedFlashModes() const;
    ::java::lang::String getFocusMode() const;
    void setFocusMode(const ::java::lang::String&) const;
    ::java::util::List getSupportedFocusModes() const;
    float getFocalLength() const;
    float getHorizontalViewAngle() const;
    float getVerticalViewAngle() const;
    int32_t getExposureCompensation() const;
    void setExposureCompensation(int32_t) const;
    int32_t getMaxExposureCompensation() const;
    int32_t getMinExposureCompensation() const;
    float getExposureCompensationStep() const;
    void setAutoExposureLock(bool) const;
    bool getAutoExposureLock() const;
    bool isAutoExposureLockSupported() const;
    void setAutoWhiteBalanceLock(bool) const;
    bool getAutoWhiteBalanceLock() const;
    bool isAutoWhiteBalanceLockSupported() const;
    int32_t getZoom() const;
    void setZoom(int32_t) const;
    bool isZoomSupported() const;
    int32_t getMaxZoom() const;
    ::java::util::List getZoomRatios() const;
    bool isSmoothZoomSupported() const;
    void getFocusDistances(const std::vector< float>&) const;
    int32_t getMaxNumFocusAreas() const;
    ::java::util::List getFocusAreas() const;
    void setFocusAreas(const ::java::util::List&) const;
    int32_t getMaxNumMeteringAreas() const;
    ::java::util::List getMeteringAreas() const;
    void setMeteringAreas(const ::java::util::List&) const;
    int32_t getMaxNumDetectedFaces() const;
    void setRecordingHint(bool) const;
    bool isVideoSnapshotSupported() const;
    void setVideoStabilization(bool) const;
    bool getVideoStabilization() const;
    bool isVideoStabilizationSupported() const;

};
}
}


