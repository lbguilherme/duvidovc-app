#include "java-core.hpp"
#include <memory>
#include "android.content.Intent.hpp"
#include "android.net.ConnectivityManager.hpp"
#include "android.net.NetworkInfo.hpp"
#include "android.support.v4.net.ConnectivityManagerCompat.hpp"
#include "android.support.v4.net.TrafficStatsCompat.hpp"
#include "java.net.Socket.hpp"

jclass android::support::v4::net::ConnectivityManagerCompat_ConnectivityManagerCompatImpl::_class = nullptr;
jclass android::support::v4::net::TrafficStatsCompat::_class = nullptr;
jclass android::support::v4::net::ConnectivityManagerCompat_GingerbreadConnectivityManagerCompatImpl::_class = nullptr;
jclass android::support::v4::net::ConnectivityManagerCompat_HoneycombMR2ConnectivityManagerCompatImpl::_class = nullptr;
jclass android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl::_class = nullptr;
jclass android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl_SocketTags::_class = nullptr;
jclass android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl::_class = nullptr;
jclass android::support::v4::net::TrafficStatsCompat_IcsTrafficStatsCompatImpl::_class = nullptr;
jclass android::support::v4::net::ConnectivityManagerCompat_BaseConnectivityManagerCompatImpl::_class = nullptr;
jclass android::support::v4::net::ConnectivityManagerCompat_JellyBeanConnectivityManagerCompatImpl::_class = nullptr;
jclass android::support::v4::net::ConnectivityManagerCompat::_class = nullptr;

bool android::support::v4::net::ConnectivityManagerCompat_ConnectivityManagerCompatImpl::isActiveNetworkMetered(const ::android::net::ConnectivityManager& arg0) const {
    if (!::android::support::v4::net::ConnectivityManagerCompat_ConnectivityManagerCompatImpl::_class) ::android::support::v4::net::ConnectivityManagerCompat_ConnectivityManagerCompatImpl::_class = java::fetch_class("android/support/v4/net/ConnectivityManagerCompat$ConnectivityManagerCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isActiveNetworkMetered", "(Landroid/net/ConnectivityManager;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::net::TrafficStatsCompat::TrafficStatsCompat() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::net::TrafficStatsCompat::_class) ::android::support::v4::net::TrafficStatsCompat::_class = java::fetch_class("android/support/v4/net/TrafficStatsCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::support::v4::net::TrafficStatsCompat::clearThreadStatsTag(){
    if (!::android::support::v4::net::TrafficStatsCompat::_class) ::android::support::v4::net::TrafficStatsCompat::_class = java::fetch_class("android/support/v4/net/TrafficStatsCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "clearThreadStatsTag", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

int32_t android::support::v4::net::TrafficStatsCompat::getThreadStatsTag(){
    if (!::android::support::v4::net::TrafficStatsCompat::_class) ::android::support::v4::net::TrafficStatsCompat::_class = java::fetch_class("android/support/v4/net/TrafficStatsCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getThreadStatsTag", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

void android::support::v4::net::TrafficStatsCompat::incrementOperationCount(int32_t arg0){
    if (!::android::support::v4::net::TrafficStatsCompat::_class) ::android::support::v4::net::TrafficStatsCompat::_class = java::fetch_class("android/support/v4/net/TrafficStatsCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "incrementOperationCount", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::support::v4::net::TrafficStatsCompat::incrementOperationCount(int32_t arg0, int32_t arg1){
    if (!::android::support::v4::net::TrafficStatsCompat::_class) ::android::support::v4::net::TrafficStatsCompat::_class = java::fetch_class("android/support/v4/net/TrafficStatsCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "incrementOperationCount", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::net::TrafficStatsCompat::setThreadStatsTag(int32_t arg0){
    if (!::android::support::v4::net::TrafficStatsCompat::_class) ::android::support::v4::net::TrafficStatsCompat::_class = java::fetch_class("android/support/v4/net/TrafficStatsCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setThreadStatsTag", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::support::v4::net::TrafficStatsCompat::tagSocket(const ::java::net::Socket& arg0){
    if (!::android::support::v4::net::TrafficStatsCompat::_class) ::android::support::v4::net::TrafficStatsCompat::_class = java::fetch_class("android/support/v4/net/TrafficStatsCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "tagSocket", "(Ljava/net/Socket;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::support::v4::net::TrafficStatsCompat::untagSocket(const ::java::net::Socket& arg0){
    if (!::android::support::v4::net::TrafficStatsCompat::_class) ::android::support::v4::net::TrafficStatsCompat::_class = java::fetch_class("android/support/v4/net/TrafficStatsCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "untagSocket", "(Ljava/net/Socket;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

bool android::support::v4::net::ConnectivityManagerCompat_GingerbreadConnectivityManagerCompatImpl::isActiveNetworkMetered(const ::android::net::ConnectivityManager& arg0) const {
    if (!::android::support::v4::net::ConnectivityManagerCompat_GingerbreadConnectivityManagerCompatImpl::_class) ::android::support::v4::net::ConnectivityManagerCompat_GingerbreadConnectivityManagerCompatImpl::_class = java::fetch_class("android/support/v4/net/ConnectivityManagerCompat$GingerbreadConnectivityManagerCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isActiveNetworkMetered", "(Landroid/net/ConnectivityManager;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::net::ConnectivityManagerCompat_HoneycombMR2ConnectivityManagerCompatImpl::isActiveNetworkMetered(const ::android::net::ConnectivityManager& arg0) const {
    if (!::android::support::v4::net::ConnectivityManagerCompat_HoneycombMR2ConnectivityManagerCompatImpl::_class) ::android::support::v4::net::ConnectivityManagerCompat_HoneycombMR2ConnectivityManagerCompatImpl::_class = java::fetch_class("android/support/v4/net/ConnectivityManagerCompat$HoneycombMR2ConnectivityManagerCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isActiveNetworkMetered", "(Landroid/net/ConnectivityManager;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl::clearThreadStatsTag() const {
    if (!::android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl::_class) ::android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl::_class = java::fetch_class("android/support/v4/net/TrafficStatsCompat$TrafficStatsCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearThreadStatsTag", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl::getThreadStatsTag() const {
    if (!::android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl::_class) ::android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl::_class = java::fetch_class("android/support/v4/net/TrafficStatsCompat$TrafficStatsCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getThreadStatsTag", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl::incrementOperationCount(int32_t arg0) const {
    if (!::android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl::_class) ::android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl::_class = java::fetch_class("android/support/v4/net/TrafficStatsCompat$TrafficStatsCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "incrementOperationCount", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl::incrementOperationCount(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl::_class) ::android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl::_class = java::fetch_class("android/support/v4/net/TrafficStatsCompat$TrafficStatsCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "incrementOperationCount", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl::setThreadStatsTag(int32_t arg0) const {
    if (!::android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl::_class) ::android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl::_class = java::fetch_class("android/support/v4/net/TrafficStatsCompat$TrafficStatsCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setThreadStatsTag", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl::tagSocket(const ::java::net::Socket& arg0) const {
    if (!::android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl::_class) ::android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl::_class = java::fetch_class("android/support/v4/net/TrafficStatsCompat$TrafficStatsCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "tagSocket", "(Ljava/net/Socket;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl::untagSocket(const ::java::net::Socket& arg0) const {
    if (!::android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl::_class) ::android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl::_class = java::fetch_class("android/support/v4/net/TrafficStatsCompat$TrafficStatsCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "untagSocket", "(Ljava/net/Socket;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl::clearThreadStatsTag() const {
    if (!::android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl::_class) ::android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl::_class = java::fetch_class("android/support/v4/net/TrafficStatsCompat$BaseTrafficStatsCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearThreadStatsTag", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl::getThreadStatsTag() const {
    if (!::android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl::_class) ::android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl::_class = java::fetch_class("android/support/v4/net/TrafficStatsCompat$BaseTrafficStatsCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getThreadStatsTag", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl::incrementOperationCount(int32_t arg0) const {
    if (!::android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl::_class) ::android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl::_class = java::fetch_class("android/support/v4/net/TrafficStatsCompat$BaseTrafficStatsCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "incrementOperationCount", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl::incrementOperationCount(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl::_class) ::android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl::_class = java::fetch_class("android/support/v4/net/TrafficStatsCompat$BaseTrafficStatsCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "incrementOperationCount", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl::setThreadStatsTag(int32_t arg0) const {
    if (!::android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl::_class) ::android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl::_class = java::fetch_class("android/support/v4/net/TrafficStatsCompat$BaseTrafficStatsCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setThreadStatsTag", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl::tagSocket(const ::java::net::Socket& arg0) const {
    if (!::android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl::_class) ::android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl::_class = java::fetch_class("android/support/v4/net/TrafficStatsCompat$BaseTrafficStatsCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "tagSocket", "(Ljava/net/Socket;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl::untagSocket(const ::java::net::Socket& arg0) const {
    if (!::android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl::_class) ::android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl::_class = java::fetch_class("android/support/v4/net/TrafficStatsCompat$BaseTrafficStatsCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "untagSocket", "(Ljava/net/Socket;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::net::TrafficStatsCompat_IcsTrafficStatsCompatImpl::clearThreadStatsTag() const {
    if (!::android::support::v4::net::TrafficStatsCompat_IcsTrafficStatsCompatImpl::_class) ::android::support::v4::net::TrafficStatsCompat_IcsTrafficStatsCompatImpl::_class = java::fetch_class("android/support/v4/net/TrafficStatsCompat$IcsTrafficStatsCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearThreadStatsTag", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::support::v4::net::TrafficStatsCompat_IcsTrafficStatsCompatImpl::getThreadStatsTag() const {
    if (!::android::support::v4::net::TrafficStatsCompat_IcsTrafficStatsCompatImpl::_class) ::android::support::v4::net::TrafficStatsCompat_IcsTrafficStatsCompatImpl::_class = java::fetch_class("android/support/v4/net/TrafficStatsCompat$IcsTrafficStatsCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getThreadStatsTag", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::net::TrafficStatsCompat_IcsTrafficStatsCompatImpl::incrementOperationCount(int32_t arg0) const {
    if (!::android::support::v4::net::TrafficStatsCompat_IcsTrafficStatsCompatImpl::_class) ::android::support::v4::net::TrafficStatsCompat_IcsTrafficStatsCompatImpl::_class = java::fetch_class("android/support/v4/net/TrafficStatsCompat$IcsTrafficStatsCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "incrementOperationCount", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::net::TrafficStatsCompat_IcsTrafficStatsCompatImpl::incrementOperationCount(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::net::TrafficStatsCompat_IcsTrafficStatsCompatImpl::_class) ::android::support::v4::net::TrafficStatsCompat_IcsTrafficStatsCompatImpl::_class = java::fetch_class("android/support/v4/net/TrafficStatsCompat$IcsTrafficStatsCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "incrementOperationCount", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::net::TrafficStatsCompat_IcsTrafficStatsCompatImpl::setThreadStatsTag(int32_t arg0) const {
    if (!::android::support::v4::net::TrafficStatsCompat_IcsTrafficStatsCompatImpl::_class) ::android::support::v4::net::TrafficStatsCompat_IcsTrafficStatsCompatImpl::_class = java::fetch_class("android/support/v4/net/TrafficStatsCompat$IcsTrafficStatsCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setThreadStatsTag", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::net::TrafficStatsCompat_IcsTrafficStatsCompatImpl::tagSocket(const ::java::net::Socket& arg0) const {
    if (!::android::support::v4::net::TrafficStatsCompat_IcsTrafficStatsCompatImpl::_class) ::android::support::v4::net::TrafficStatsCompat_IcsTrafficStatsCompatImpl::_class = java::fetch_class("android/support/v4/net/TrafficStatsCompat$IcsTrafficStatsCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "tagSocket", "(Ljava/net/Socket;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::net::TrafficStatsCompat_IcsTrafficStatsCompatImpl::untagSocket(const ::java::net::Socket& arg0) const {
    if (!::android::support::v4::net::TrafficStatsCompat_IcsTrafficStatsCompatImpl::_class) ::android::support::v4::net::TrafficStatsCompat_IcsTrafficStatsCompatImpl::_class = java::fetch_class("android/support/v4/net/TrafficStatsCompat$IcsTrafficStatsCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "untagSocket", "(Ljava/net/Socket;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::net::ConnectivityManagerCompat_BaseConnectivityManagerCompatImpl::isActiveNetworkMetered(const ::android::net::ConnectivityManager& arg0) const {
    if (!::android::support::v4::net::ConnectivityManagerCompat_BaseConnectivityManagerCompatImpl::_class) ::android::support::v4::net::ConnectivityManagerCompat_BaseConnectivityManagerCompatImpl::_class = java::fetch_class("android/support/v4/net/ConnectivityManagerCompat$BaseConnectivityManagerCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isActiveNetworkMetered", "(Landroid/net/ConnectivityManager;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::net::ConnectivityManagerCompat_JellyBeanConnectivityManagerCompatImpl::isActiveNetworkMetered(const ::android::net::ConnectivityManager& arg0) const {
    if (!::android::support::v4::net::ConnectivityManagerCompat_JellyBeanConnectivityManagerCompatImpl::_class) ::android::support::v4::net::ConnectivityManagerCompat_JellyBeanConnectivityManagerCompatImpl::_class = java::fetch_class("android/support/v4/net/ConnectivityManagerCompat$JellyBeanConnectivityManagerCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isActiveNetworkMetered", "(Landroid/net/ConnectivityManager;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::net::ConnectivityManagerCompat::ConnectivityManagerCompat() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::net::ConnectivityManagerCompat::_class) ::android::support::v4::net::ConnectivityManagerCompat::_class = java::fetch_class("android/support/v4/net/ConnectivityManagerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::support::v4::net::ConnectivityManagerCompat::isActiveNetworkMetered(const ::android::net::ConnectivityManager& arg0){
    if (!::android::support::v4::net::ConnectivityManagerCompat::_class) ::android::support::v4::net::ConnectivityManagerCompat::_class = java::fetch_class("android/support/v4/net/ConnectivityManagerCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isActiveNetworkMetered", "(Landroid/net/ConnectivityManager;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

::android::net::NetworkInfo android::support::v4::net::ConnectivityManagerCompat::getNetworkInfoFromBroadcast(const ::android::net::ConnectivityManager& arg0, const ::android::content::Intent& arg1){
    if (!::android::support::v4::net::ConnectivityManagerCompat::_class) ::android::support::v4::net::ConnectivityManagerCompat::_class = java::fetch_class("android/support/v4/net/ConnectivityManagerCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getNetworkInfoFromBroadcast", "(Landroid/net/ConnectivityManager;Landroid/content/Intent;)Landroid/net/NetworkInfo;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::net::NetworkInfo _ret(ret);
    return _ret;
}

