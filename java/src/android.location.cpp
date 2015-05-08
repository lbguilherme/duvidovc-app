#include "java-core.hpp"
#include <memory>
#include "android.app.PendingIntent.hpp"
#include "android.content.Context.hpp"
#include "android.location.Address.hpp"
#include "android.location.Criteria.hpp"
#include "android.location.Geocoder.hpp"
#include "android.location.GpsSatellite.hpp"
#include "android.location.GpsStatus.hpp"
#include "android.location.Location.hpp"
#include "android.location.LocationListener.hpp"
#include "android.location.LocationManager.hpp"
#include "android.location.LocationProvider.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.Looper.hpp"
#include "android.os.Parcel.hpp"
#include "android.util.Printer.hpp"
#include "java.lang.Iterable.hpp"
#include "java.lang.String.hpp"
#include "java.util.List.hpp"
#include "java.util.Locale.hpp"

jclass android::location::Location::_class = nullptr;
jclass android::location::LocationProvider::_class = nullptr;
jclass android::location::Geocoder::_class = nullptr;
jclass android::location::GpsStatus_NmeaListener::_class = nullptr;
jclass android::location::GpsSatellite::_class = nullptr;
jclass android::location::LocationManager::_class = nullptr;
jclass android::location::Address::_class = nullptr;
jclass android::location::GpsStatus::_class = nullptr;
jclass android::location::LocationListener::_class = nullptr;
jclass android::location::Criteria::_class = nullptr;
jclass android::location::GpsStatus_Listener::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::location::Location::Location(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::location::Location::dump(const ::android::util::Printer& arg0, const ::java::lang::String& arg1) const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Landroid/util/Printer;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::location::Location::set(const ::android::location::Location& arg0) const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(Landroid/location/Location;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::location::Location::reset() const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String android::location::Location::convert(double arg0, int32_t arg1){
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "convert", "(DI)Ljava/lang/String;");
    double _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

double android::location::Location::convert(const ::java::lang::String& arg0){
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "convert", "(Ljava/lang/String;)D");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

void android::location::Location::distanceBetween(double arg0, double arg1, double arg2, double arg3, const std::vector< float>& arg4){
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "distanceBetween", "(DDDD[F)V");
    double _arg0 = arg0;
    double _arg1 = arg1;
    double _arg2 = arg2;
    double _arg3 = arg3;
    jfloatArray _arg4 = java::jni->NewFloatArray(arg4.size());
    java::jni->SetFloatArrayRegion(_arg4, 0, arg4.size(), arg4.data());
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

float android::location::Location::distanceTo(const ::android::location::Location& arg0) const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "distanceTo", "(Landroid/location/Location;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::location::Location::bearingTo(const ::android::location::Location& arg0) const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "bearingTo", "(Landroid/location/Location;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

::java::lang::String android::location::Location::getProvider() const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProvider", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::location::Location::setProvider(const ::java::lang::String& arg0) const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProvider", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int64_t android::location::Location::getTime() const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTime", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void android::location::Location::setTime(int64_t arg0) const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTime", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

double android::location::Location::getLatitude() const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLatitude", "()D");
    return java::jni->CallDoubleMethod(obj, mid);
}

void android::location::Location::setLatitude(double arg0) const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLatitude", "(D)V");
    double _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

double android::location::Location::getLongitude() const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLongitude", "()D");
    return java::jni->CallDoubleMethod(obj, mid);
}

void android::location::Location::setLongitude(double arg0) const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLongitude", "(D)V");
    double _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::location::Location::hasAltitude() const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasAltitude", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

double android::location::Location::getAltitude() const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAltitude", "()D");
    return java::jni->CallDoubleMethod(obj, mid);
}

void android::location::Location::setAltitude(double arg0) const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAltitude", "(D)V");
    double _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::location::Location::removeAltitude() const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAltitude", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::location::Location::hasSpeed() const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasSpeed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

float android::location::Location::getSpeed() const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpeed", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::location::Location::setSpeed(float arg0) const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSpeed", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::location::Location::removeSpeed() const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeSpeed", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::location::Location::hasBearing() const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasBearing", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

float android::location::Location::getBearing() const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBearing", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::location::Location::setBearing(float arg0) const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBearing", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::location::Location::removeBearing() const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeBearing", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::location::Location::hasAccuracy() const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasAccuracy", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

float android::location::Location::getAccuracy() const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccuracy", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::location::Location::setAccuracy(float arg0) const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAccuracy", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::location::Location::removeAccuracy() const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAccuracy", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::os::Bundle android::location::Location::getExtras() const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtras", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

void android::location::Location::setExtras(const ::android::os::Bundle& arg0) const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExtras", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::location::Location::toString() const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::location::Location::describeContents() const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::location::Location::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::location::Location::_class) ::android::location::Location::_class = java::fetch_class("android/location/Location");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::location::LocationProvider::getName() const {
    if (!::android::location::LocationProvider::_class) ::android::location::LocationProvider::_class = java::fetch_class("android/location/LocationProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::location::LocationProvider::meetsCriteria(const ::android::location::Criteria& arg0) const {
    if (!::android::location::LocationProvider::_class) ::android::location::LocationProvider::_class = java::fetch_class("android/location/LocationProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "meetsCriteria", "(Landroid/location/Criteria;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::location::LocationProvider::requiresNetwork() const {
    if (!::android::location::LocationProvider::_class) ::android::location::LocationProvider::_class = java::fetch_class("android/location/LocationProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "requiresNetwork", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::location::LocationProvider::requiresSatellite() const {
    if (!::android::location::LocationProvider::_class) ::android::location::LocationProvider::_class = java::fetch_class("android/location/LocationProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "requiresSatellite", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::location::LocationProvider::requiresCell() const {
    if (!::android::location::LocationProvider::_class) ::android::location::LocationProvider::_class = java::fetch_class("android/location/LocationProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "requiresCell", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::location::LocationProvider::hasMonetaryCost() const {
    if (!::android::location::LocationProvider::_class) ::android::location::LocationProvider::_class = java::fetch_class("android/location/LocationProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasMonetaryCost", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::location::LocationProvider::supportsAltitude() const {
    if (!::android::location::LocationProvider::_class) ::android::location::LocationProvider::_class = java::fetch_class("android/location/LocationProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsAltitude", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::location::LocationProvider::supportsSpeed() const {
    if (!::android::location::LocationProvider::_class) ::android::location::LocationProvider::_class = java::fetch_class("android/location/LocationProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsSpeed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::location::LocationProvider::supportsBearing() const {
    if (!::android::location::LocationProvider::_class) ::android::location::LocationProvider::_class = java::fetch_class("android/location/LocationProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsBearing", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::location::LocationProvider::getPowerRequirement() const {
    if (!::android::location::LocationProvider::_class) ::android::location::LocationProvider::_class = java::fetch_class("android/location/LocationProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPowerRequirement", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::location::LocationProvider::getAccuracy() const {
    if (!::android::location::LocationProvider::_class) ::android::location::LocationProvider::_class = java::fetch_class("android/location/LocationProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccuracy", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::location::Geocoder::Geocoder(const ::android::content::Context& arg0, const ::java::util::Locale& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::location::Geocoder::_class) ::android::location::Geocoder::_class = java::fetch_class("android/location/Geocoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Ljava/util/Locale;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::location::Geocoder::Geocoder(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::location::Geocoder::_class) ::android::location::Geocoder::_class = java::fetch_class("android/location/Geocoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool android::location::Geocoder::isPresent(){
    if (!::android::location::Geocoder::_class) ::android::location::Geocoder::_class = java::fetch_class("android/location/Geocoder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isPresent", "()Z");
    return java::jni->CallStaticBooleanMethod(_class, mid);
}

::java::util::List android::location::Geocoder::getFromLocation(double arg0, double arg1, int32_t arg2) const {
    if (!::android::location::Geocoder::_class) ::android::location::Geocoder::_class = java::fetch_class("android/location/Geocoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFromLocation", "(DDI)Ljava/util/List;");
    double _arg0 = arg0;
    double _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List android::location::Geocoder::getFromLocationName(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::location::Geocoder::_class) ::android::location::Geocoder::_class = java::fetch_class("android/location/Geocoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFromLocationName", "(Ljava/lang/String;I)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List android::location::Geocoder::getFromLocationName(const ::java::lang::String& arg0, int32_t arg1, double arg2, double arg3, double arg4, double arg5) const {
    if (!::android::location::Geocoder::_class) ::android::location::Geocoder::_class = java::fetch_class("android/location/Geocoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFromLocationName", "(Ljava/lang/String;IDDDD)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    double _arg2 = arg2;
    double _arg3 = arg3;
    double _arg4 = arg4;
    double _arg5 = arg5;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    ::java::util::List _ret(ret);
    return _ret;
}

void android::location::GpsStatus_NmeaListener::onNmeaReceived(int64_t arg0, const ::java::lang::String& arg1) const {
    if (!::android::location::GpsStatus_NmeaListener::_class) ::android::location::GpsStatus_NmeaListener::_class = java::fetch_class("android/location/GpsStatus$NmeaListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onNmeaReceived", "(JLjava/lang/String;)V");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::location::GpsSatellite::getPrn() const {
    if (!::android::location::GpsSatellite::_class) ::android::location::GpsSatellite::_class = java::fetch_class("android/location/GpsSatellite");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrn", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

float android::location::GpsSatellite::getSnr() const {
    if (!::android::location::GpsSatellite::_class) ::android::location::GpsSatellite::_class = java::fetch_class("android/location/GpsSatellite");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSnr", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::location::GpsSatellite::getElevation() const {
    if (!::android::location::GpsSatellite::_class) ::android::location::GpsSatellite::_class = java::fetch_class("android/location/GpsSatellite");
    static jmethodID mid = java::jni->GetMethodID(_class, "getElevation", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::location::GpsSatellite::getAzimuth() const {
    if (!::android::location::GpsSatellite::_class) ::android::location::GpsSatellite::_class = java::fetch_class("android/location/GpsSatellite");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAzimuth", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

bool android::location::GpsSatellite::hasEphemeris() const {
    if (!::android::location::GpsSatellite::_class) ::android::location::GpsSatellite::_class = java::fetch_class("android/location/GpsSatellite");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasEphemeris", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::location::GpsSatellite::hasAlmanac() const {
    if (!::android::location::GpsSatellite::_class) ::android::location::GpsSatellite::_class = java::fetch_class("android/location/GpsSatellite");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasAlmanac", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::location::GpsSatellite::usedInFix() const {
    if (!::android::location::GpsSatellite::_class) ::android::location::GpsSatellite::_class = java::fetch_class("android/location/GpsSatellite");
    static jmethodID mid = java::jni->GetMethodID(_class, "usedInFix", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::util::List android::location::LocationManager::getAllProviders() const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAllProviders", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List android::location::LocationManager::getProviders(bool arg0) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProviders", "(Z)Ljava/util/List;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

::android::location::LocationProvider android::location::LocationManager::getProvider(const ::java::lang::String& arg0) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProvider", "(Ljava/lang/String;)Landroid/location/LocationProvider;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::location::LocationProvider _ret(ret);
    return _ret;
}

::java::util::List android::location::LocationManager::getProviders(const ::android::location::Criteria& arg0, bool arg1) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProviders", "(Landroid/location/Criteria;Z)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::lang::String android::location::LocationManager::getBestProvider(const ::android::location::Criteria& arg0, bool arg1) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBestProvider", "(Landroid/location/Criteria;Z)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::location::LocationManager::requestLocationUpdates(const ::java::lang::String& arg0, int64_t arg1, float arg2, const ::android::location::LocationListener& arg3) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestLocationUpdates", "(Ljava/lang/String;JFLandroid/location/LocationListener;)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    float _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::location::LocationManager::requestLocationUpdates(const ::java::lang::String& arg0, int64_t arg1, float arg2, const ::android::location::LocationListener& arg3, const ::android::os::Looper& arg4) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestLocationUpdates", "(Ljava/lang/String;JFLandroid/location/LocationListener;Landroid/os/Looper;)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    float _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::location::LocationManager::requestLocationUpdates(int64_t arg0, float arg1, const ::android::location::Criteria& arg2, const ::android::location::LocationListener& arg3, const ::android::os::Looper& arg4) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestLocationUpdates", "(JFLandroid/location/Criteria;Landroid/location/LocationListener;Landroid/os/Looper;)V");
    int64_t _arg0 = arg0;
    float _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::location::LocationManager::requestLocationUpdates(const ::java::lang::String& arg0, int64_t arg1, float arg2, const ::android::app::PendingIntent& arg3) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestLocationUpdates", "(Ljava/lang/String;JFLandroid/app/PendingIntent;)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    float _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::location::LocationManager::requestLocationUpdates(int64_t arg0, float arg1, const ::android::location::Criteria& arg2, const ::android::app::PendingIntent& arg3) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestLocationUpdates", "(JFLandroid/location/Criteria;Landroid/app/PendingIntent;)V");
    int64_t _arg0 = arg0;
    float _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::location::LocationManager::requestSingleUpdate(const ::java::lang::String& arg0, const ::android::location::LocationListener& arg1, const ::android::os::Looper& arg2) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestSingleUpdate", "(Ljava/lang/String;Landroid/location/LocationListener;Landroid/os/Looper;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::location::LocationManager::requestSingleUpdate(const ::android::location::Criteria& arg0, const ::android::location::LocationListener& arg1, const ::android::os::Looper& arg2) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestSingleUpdate", "(Landroid/location/Criteria;Landroid/location/LocationListener;Landroid/os/Looper;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::location::LocationManager::requestSingleUpdate(const ::java::lang::String& arg0, const ::android::app::PendingIntent& arg1) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestSingleUpdate", "(Ljava/lang/String;Landroid/app/PendingIntent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::location::LocationManager::requestSingleUpdate(const ::android::location::Criteria& arg0, const ::android::app::PendingIntent& arg1) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestSingleUpdate", "(Landroid/location/Criteria;Landroid/app/PendingIntent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::location::LocationManager::removeUpdates(const ::android::location::LocationListener& arg0) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeUpdates", "(Landroid/location/LocationListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::location::LocationManager::removeUpdates(const ::android::app::PendingIntent& arg0) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeUpdates", "(Landroid/app/PendingIntent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::location::LocationManager::addProximityAlert(double arg0, double arg1, float arg2, int64_t arg3, const ::android::app::PendingIntent& arg4) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "addProximityAlert", "(DDFJLandroid/app/PendingIntent;)V");
    double _arg0 = arg0;
    double _arg1 = arg1;
    float _arg2 = arg2;
    int64_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::location::LocationManager::removeProximityAlert(const ::android::app::PendingIntent& arg0) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeProximityAlert", "(Landroid/app/PendingIntent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::location::LocationManager::isProviderEnabled(const ::java::lang::String& arg0) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "isProviderEnabled", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::location::Location android::location::LocationManager::getLastKnownLocation(const ::java::lang::String& arg0) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLastKnownLocation", "(Ljava/lang/String;)Landroid/location/Location;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::location::Location _ret(ret);
    return _ret;
}

void android::location::LocationManager::addTestProvider(const ::java::lang::String& arg0, bool arg1, bool arg2, bool arg3, bool arg4, bool arg5, bool arg6, bool arg7, int32_t arg8, int32_t arg9) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "addTestProvider", "(Ljava/lang/String;ZZZZZZZII)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    bool _arg2 = arg2;
    bool _arg3 = arg3;
    bool _arg4 = arg4;
    bool _arg5 = arg5;
    bool _arg6 = arg6;
    bool _arg7 = arg7;
    int32_t _arg8 = arg8;
    int32_t _arg9 = arg9;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9);
}

void android::location::LocationManager::removeTestProvider(const ::java::lang::String& arg0) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeTestProvider", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::location::LocationManager::setTestProviderLocation(const ::java::lang::String& arg0, const ::android::location::Location& arg1) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTestProviderLocation", "(Ljava/lang/String;Landroid/location/Location;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::location::LocationManager::clearTestProviderLocation(const ::java::lang::String& arg0) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearTestProviderLocation", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::location::LocationManager::setTestProviderEnabled(const ::java::lang::String& arg0, bool arg1) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTestProviderEnabled", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::location::LocationManager::clearTestProviderEnabled(const ::java::lang::String& arg0) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearTestProviderEnabled", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::location::LocationManager::setTestProviderStatus(const ::java::lang::String& arg0, int32_t arg1, const ::android::os::Bundle& arg2, int64_t arg3) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTestProviderStatus", "(Ljava/lang/String;ILandroid/os/Bundle;J)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int64_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::location::LocationManager::clearTestProviderStatus(const ::java::lang::String& arg0) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearTestProviderStatus", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::location::LocationManager::addGpsStatusListener(const ::android::location::GpsStatus_Listener& arg0) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "addGpsStatusListener", "(Landroid/location/GpsStatus$Listener;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::location::LocationManager::removeGpsStatusListener(const ::android::location::GpsStatus_Listener& arg0) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeGpsStatusListener", "(Landroid/location/GpsStatus$Listener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::location::LocationManager::addNmeaListener(const ::android::location::GpsStatus_NmeaListener& arg0) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "addNmeaListener", "(Landroid/location/GpsStatus$NmeaListener;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::location::LocationManager::removeNmeaListener(const ::android::location::GpsStatus_NmeaListener& arg0) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeNmeaListener", "(Landroid/location/GpsStatus$NmeaListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::location::GpsStatus android::location::LocationManager::getGpsStatus(const ::android::location::GpsStatus& arg0) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGpsStatus", "(Landroid/location/GpsStatus;)Landroid/location/GpsStatus;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::location::GpsStatus _ret(ret);
    return _ret;
}

bool android::location::LocationManager::sendExtraCommand(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::location::LocationManager::_class) ::android::location::LocationManager::_class = java::fetch_class("android/location/LocationManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendExtraCommand", "(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::location::Address::Address(const ::java::util::Locale& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Locale;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::util::Locale android::location::Address::getLocale() const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocale", "()Ljava/util/Locale;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Locale _ret(ret);
    return _ret;
}

int32_t android::location::Address::getMaxAddressLineIndex() const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxAddressLineIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::location::Address::getAddressLine(int32_t arg0) const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAddressLine", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::location::Address::setAddressLine(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAddressLine", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::location::Address::getFeatureName() const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFeatureName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::location::Address::setFeatureName(const ::java::lang::String& arg0) const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFeatureName", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::location::Address::getAdminArea() const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAdminArea", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::location::Address::setAdminArea(const ::java::lang::String& arg0) const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAdminArea", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::location::Address::getSubAdminArea() const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubAdminArea", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::location::Address::setSubAdminArea(const ::java::lang::String& arg0) const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSubAdminArea", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::location::Address::getLocality() const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocality", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::location::Address::setLocality(const ::java::lang::String& arg0) const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLocality", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::location::Address::getSubLocality() const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubLocality", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::location::Address::setSubLocality(const ::java::lang::String& arg0) const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSubLocality", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::location::Address::getThoroughfare() const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "getThoroughfare", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::location::Address::setThoroughfare(const ::java::lang::String& arg0) const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "setThoroughfare", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::location::Address::getSubThoroughfare() const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubThoroughfare", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::location::Address::setSubThoroughfare(const ::java::lang::String& arg0) const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSubThoroughfare", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::location::Address::getPremises() const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPremises", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::location::Address::setPremises(const ::java::lang::String& arg0) const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPremises", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::location::Address::getPostalCode() const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPostalCode", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::location::Address::setPostalCode(const ::java::lang::String& arg0) const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPostalCode", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::location::Address::getCountryCode() const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCountryCode", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::location::Address::setCountryCode(const ::java::lang::String& arg0) const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCountryCode", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::location::Address::getCountryName() const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCountryName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::location::Address::setCountryName(const ::java::lang::String& arg0) const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCountryName", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::location::Address::hasLatitude() const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasLatitude", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

double android::location::Address::getLatitude() const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLatitude", "()D");
    return java::jni->CallDoubleMethod(obj, mid);
}

void android::location::Address::setLatitude(double arg0) const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLatitude", "(D)V");
    double _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::location::Address::clearLatitude() const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearLatitude", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::location::Address::hasLongitude() const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasLongitude", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

double android::location::Address::getLongitude() const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLongitude", "()D");
    return java::jni->CallDoubleMethod(obj, mid);
}

void android::location::Address::setLongitude(double arg0) const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLongitude", "(D)V");
    double _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::location::Address::clearLongitude() const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearLongitude", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String android::location::Address::getPhone() const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPhone", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::location::Address::setPhone(const ::java::lang::String& arg0) const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPhone", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::location::Address::getUrl() const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUrl", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::location::Address::setUrl(const ::java::lang::String& arg0) const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUrl", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::os::Bundle android::location::Address::getExtras() const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtras", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

void android::location::Address::setExtras(const ::android::os::Bundle& arg0) const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExtras", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::location::Address::toString() const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::location::Address::describeContents() const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::location::Address::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::location::Address::_class) ::android::location::Address::_class = java::fetch_class("android/location/Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::location::GpsStatus::getTimeToFirstFix() const {
    if (!::android::location::GpsStatus::_class) ::android::location::GpsStatus::_class = java::fetch_class("android/location/GpsStatus");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimeToFirstFix", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Iterable android::location::GpsStatus::getSatellites() const {
    if (!::android::location::GpsStatus::_class) ::android::location::GpsStatus::_class = java::fetch_class("android/location/GpsStatus");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSatellites", "()Ljava/lang/Iterable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Iterable _ret(ret);
    return _ret;
}

int32_t android::location::GpsStatus::getMaxSatellites() const {
    if (!::android::location::GpsStatus::_class) ::android::location::GpsStatus::_class = java::fetch_class("android/location/GpsStatus");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxSatellites", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::location::LocationListener::onLocationChanged(const ::android::location::Location& arg0) const {
    if (!::android::location::LocationListener::_class) ::android::location::LocationListener::_class = java::fetch_class("android/location/LocationListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onLocationChanged", "(Landroid/location/Location;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::location::LocationListener::onStatusChanged(const ::java::lang::String& arg0, int32_t arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::location::LocationListener::_class) ::android::location::LocationListener::_class = java::fetch_class("android/location/LocationListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStatusChanged", "(Ljava/lang/String;ILandroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::location::LocationListener::onProviderEnabled(const ::java::lang::String& arg0) const {
    if (!::android::location::LocationListener::_class) ::android::location::LocationListener::_class = java::fetch_class("android/location/LocationListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onProviderEnabled", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::location::LocationListener::onProviderDisabled(const ::java::lang::String& arg0) const {
    if (!::android::location::LocationListener::_class) ::android::location::LocationListener::_class = java::fetch_class("android/location/LocationListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onProviderDisabled", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::location::Criteria::Criteria() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::location::Criteria::_class) ::android::location::Criteria::_class = java::fetch_class("android/location/Criteria");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::location::Criteria::setHorizontalAccuracy(int32_t arg0) const {
    if (!::android::location::Criteria::_class) ::android::location::Criteria::_class = java::fetch_class("android/location/Criteria");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHorizontalAccuracy", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::location::Criteria::getHorizontalAccuracy() const {
    if (!::android::location::Criteria::_class) ::android::location::Criteria::_class = java::fetch_class("android/location/Criteria");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHorizontalAccuracy", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::location::Criteria::setVerticalAccuracy(int32_t arg0) const {
    if (!::android::location::Criteria::_class) ::android::location::Criteria::_class = java::fetch_class("android/location/Criteria");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVerticalAccuracy", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::location::Criteria::getVerticalAccuracy() const {
    if (!::android::location::Criteria::_class) ::android::location::Criteria::_class = java::fetch_class("android/location/Criteria");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVerticalAccuracy", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::location::Criteria::setSpeedAccuracy(int32_t arg0) const {
    if (!::android::location::Criteria::_class) ::android::location::Criteria::_class = java::fetch_class("android/location/Criteria");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSpeedAccuracy", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::location::Criteria::getSpeedAccuracy() const {
    if (!::android::location::Criteria::_class) ::android::location::Criteria::_class = java::fetch_class("android/location/Criteria");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpeedAccuracy", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::location::Criteria::setBearingAccuracy(int32_t arg0) const {
    if (!::android::location::Criteria::_class) ::android::location::Criteria::_class = java::fetch_class("android/location/Criteria");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBearingAccuracy", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::location::Criteria::getBearingAccuracy() const {
    if (!::android::location::Criteria::_class) ::android::location::Criteria::_class = java::fetch_class("android/location/Criteria");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBearingAccuracy", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::location::Criteria::setAccuracy(int32_t arg0) const {
    if (!::android::location::Criteria::_class) ::android::location::Criteria::_class = java::fetch_class("android/location/Criteria");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAccuracy", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::location::Criteria::getAccuracy() const {
    if (!::android::location::Criteria::_class) ::android::location::Criteria::_class = java::fetch_class("android/location/Criteria");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccuracy", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::location::Criteria::setPowerRequirement(int32_t arg0) const {
    if (!::android::location::Criteria::_class) ::android::location::Criteria::_class = java::fetch_class("android/location/Criteria");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPowerRequirement", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::location::Criteria::getPowerRequirement() const {
    if (!::android::location::Criteria::_class) ::android::location::Criteria::_class = java::fetch_class("android/location/Criteria");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPowerRequirement", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::location::Criteria::setCostAllowed(bool arg0) const {
    if (!::android::location::Criteria::_class) ::android::location::Criteria::_class = java::fetch_class("android/location/Criteria");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCostAllowed", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::location::Criteria::isCostAllowed() const {
    if (!::android::location::Criteria::_class) ::android::location::Criteria::_class = java::fetch_class("android/location/Criteria");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCostAllowed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::location::Criteria::setAltitudeRequired(bool arg0) const {
    if (!::android::location::Criteria::_class) ::android::location::Criteria::_class = java::fetch_class("android/location/Criteria");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAltitudeRequired", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::location::Criteria::isAltitudeRequired() const {
    if (!::android::location::Criteria::_class) ::android::location::Criteria::_class = java::fetch_class("android/location/Criteria");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAltitudeRequired", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::location::Criteria::setSpeedRequired(bool arg0) const {
    if (!::android::location::Criteria::_class) ::android::location::Criteria::_class = java::fetch_class("android/location/Criteria");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSpeedRequired", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::location::Criteria::isSpeedRequired() const {
    if (!::android::location::Criteria::_class) ::android::location::Criteria::_class = java::fetch_class("android/location/Criteria");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSpeedRequired", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::location::Criteria::setBearingRequired(bool arg0) const {
    if (!::android::location::Criteria::_class) ::android::location::Criteria::_class = java::fetch_class("android/location/Criteria");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBearingRequired", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::location::Criteria::isBearingRequired() const {
    if (!::android::location::Criteria::_class) ::android::location::Criteria::_class = java::fetch_class("android/location/Criteria");
    static jmethodID mid = java::jni->GetMethodID(_class, "isBearingRequired", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::location::Criteria::describeContents() const {
    if (!::android::location::Criteria::_class) ::android::location::Criteria::_class = java::fetch_class("android/location/Criteria");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::location::Criteria::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::location::Criteria::_class) ::android::location::Criteria::_class = java::fetch_class("android/location/Criteria");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::location::GpsStatus_Listener::onGpsStatusChanged(int32_t arg0) const {
    if (!::android::location::GpsStatus_Listener::_class) ::android::location::GpsStatus_Listener::_class = java::fetch_class("android/location/GpsStatus$Listener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGpsStatusChanged", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

