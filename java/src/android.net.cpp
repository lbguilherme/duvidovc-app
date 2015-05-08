#include "java-core.hpp"
#include <memory>
#include "android.app.PendingIntent.hpp"
#include "android.content.Context.hpp"
#include "android.content.Intent.hpp"
#include "android.net.ConnectivityManager.hpp"
#include "android.net.Credentials.hpp"
#include "android.net.DhcpInfo.hpp"
#include "android.net.LocalServerSocket.hpp"
#include "android.net.LocalSocket.hpp"
#include "android.net.LocalSocketAddress.hpp"
#include "android.net.MailTo.hpp"
#include "android.net.NetworkInfo.hpp"
#include "android.net.ParseException.hpp"
#include "android.net.Proxy.hpp"
#include "android.net.SSLCertificateSocketFactory.hpp"
#include "android.net.SSLSessionCache.hpp"
#include "android.net.TrafficStats.hpp"
#include "android.net.Uri.hpp"
#include "android.net.UrlQuerySanitizer.hpp"
#include "android.net.VpnService.hpp"
#include "android.os.IBinder.hpp"
#include "android.os.Parcel.hpp"
#include "android.os.ParcelFileDescriptor.hpp"
#include "java.io.File.hpp"
#include "java.io.FileDescriptor.hpp"
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.net.DatagramSocket.hpp"
#include "java.net.InetAddress.hpp"
#include "java.net.Socket.hpp"
#include "java.util.List.hpp"
#include "java.util.Map.hpp"
#include "java.util.Set.hpp"
#include "javax.net.SocketFactory.hpp"
#include "javax.net.ssl.KeyManager.hpp"
#include "javax.net.ssl.SSLSocketFactory.hpp"
#include "javax.net.ssl.TrustManager.hpp"
#include "org.apache.http.conn.ssl.SSLSocketFactory.hpp"

jclass android::net::SSLCertificateSocketFactory::_class = nullptr;
jclass android::net::ConnectivityManager::_class = nullptr;
jclass android::net::Credentials::_class = nullptr;
jclass android::net::SSLSessionCache::_class = nullptr;
jclass android::net::DhcpInfo::_class = nullptr;
jclass android::net::Proxy::_class = nullptr;
jclass android::net::Uri::_class = nullptr;
jclass android::net::NetworkInfo::_class = nullptr;
jclass android::net::UrlQuerySanitizer::_class = nullptr;
jclass android::net::LocalSocket::_class = nullptr;
jclass android::net::UrlQuerySanitizer_ParameterValuePair::_class = nullptr;
jclass android::net::VpnService_Builder::_class = nullptr;
jclass android::net::LocalServerSocket::_class = nullptr;
jclass android::net::TrafficStats::_class = nullptr;
jclass android::net::LocalSocketAddress::_class = nullptr;
jclass android::net::LocalSocketAddress_Namespace::_class = nullptr;
jclass android::net::UrlQuerySanitizer_IllegalCharacterValueSanitizer::_class = nullptr;
jclass android::net::Uri_Builder::_class = nullptr;
jclass android::net::UrlQuerySanitizer_ValueSanitizer::_class = nullptr;
jclass android::net::VpnService::_class = nullptr;
jclass android::net::ParseException::_class = nullptr;
jclass android::net::NetworkInfo_State::_class = nullptr;
jclass android::net::NetworkInfo_DetailedState::_class = nullptr;
jclass android::net::MailTo::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::SSLCertificateSocketFactory::SSLCertificateSocketFactory(int32_t arg0) : ::java::lang::Object((jobject)0), ::javax::net::SocketFactory((jobject)0), ::javax::net::ssl::SSLSocketFactory((jobject)0) {
    if (!::android::net::SSLCertificateSocketFactory::_class) ::android::net::SSLCertificateSocketFactory::_class = java::fetch_class("android/net/SSLCertificateSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::javax::net::SocketFactory android::net::SSLCertificateSocketFactory::getDefault(int32_t arg0){
    if (!::android::net::SSLCertificateSocketFactory::_class) ::android::net::SSLCertificateSocketFactory::_class = java::fetch_class("android/net/SSLCertificateSocketFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefault", "(I)Ljavax/net/SocketFactory;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::javax::net::SocketFactory _ret(ret);
    return _ret;
}

::javax::net::ssl::SSLSocketFactory android::net::SSLCertificateSocketFactory::getDefault(int32_t arg0, const ::android::net::SSLSessionCache& arg1){
    if (!::android::net::SSLCertificateSocketFactory::_class) ::android::net::SSLCertificateSocketFactory::_class = java::fetch_class("android/net/SSLCertificateSocketFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefault", "(ILandroid/net/SSLSessionCache;)Ljavax/net/ssl/SSLSocketFactory;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::javax::net::ssl::SSLSocketFactory _ret(ret);
    return _ret;
}

::javax::net::ssl::SSLSocketFactory android::net::SSLCertificateSocketFactory::getInsecure(int32_t arg0, const ::android::net::SSLSessionCache& arg1){
    if (!::android::net::SSLCertificateSocketFactory::_class) ::android::net::SSLCertificateSocketFactory::_class = java::fetch_class("android/net/SSLCertificateSocketFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInsecure", "(ILandroid/net/SSLSessionCache;)Ljavax/net/ssl/SSLSocketFactory;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::javax::net::ssl::SSLSocketFactory _ret(ret);
    return _ret;
}

::org::apache::http::conn::ssl::SSLSocketFactory android::net::SSLCertificateSocketFactory::getHttpSocketFactory(int32_t arg0, const ::android::net::SSLSessionCache& arg1){
    if (!::android::net::SSLCertificateSocketFactory::_class) ::android::net::SSLCertificateSocketFactory::_class = java::fetch_class("android/net/SSLCertificateSocketFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getHttpSocketFactory", "(ILandroid/net/SSLSessionCache;)Lorg/apache/http/conn/ssl/SSLSocketFactory;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::org::apache::http::conn::ssl::SSLSocketFactory _ret(ret);
    return _ret;
}

void android::net::SSLCertificateSocketFactory::setTrustManagers(const std::vector< ::javax::net::ssl::TrustManager>& arg0) const {
    if (!::android::net::SSLCertificateSocketFactory::_class) ::android::net::SSLCertificateSocketFactory::_class = java::fetch_class("android/net/SSLCertificateSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTrustManagers", "([Ljavax/net/ssl/TrustManager;)V");
    unsigned arg0s = arg0.size();
    if (!::javax::net::ssl::TrustManager::_class) ::javax::net::ssl::TrustManager::_class = java::fetch_class("javax/net/ssl/TrustManager");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::javax::net::ssl::TrustManager::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::javax::net::ssl::TrustManager& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::net::SSLCertificateSocketFactory::setKeyManagers(const std::vector< ::javax::net::ssl::KeyManager>& arg0) const {
    if (!::android::net::SSLCertificateSocketFactory::_class) ::android::net::SSLCertificateSocketFactory::_class = java::fetch_class("android/net/SSLCertificateSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setKeyManagers", "([Ljavax/net/ssl/KeyManager;)V");
    unsigned arg0s = arg0.size();
    if (!::javax::net::ssl::KeyManager::_class) ::javax::net::ssl::KeyManager::_class = java::fetch_class("javax/net/ssl/KeyManager");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::javax::net::ssl::KeyManager::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::javax::net::ssl::KeyManager& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::net::Socket android::net::SSLCertificateSocketFactory::createSocket(const ::java::net::Socket& arg0, const ::java::lang::String& arg1, int32_t arg2, bool arg3) const {
    if (!::android::net::SSLCertificateSocketFactory::_class) ::android::net::SSLCertificateSocketFactory::_class = java::fetch_class("android/net/SSLCertificateSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createSocket", "(Ljava/net/Socket;Ljava/lang/String;IZ)Ljava/net/Socket;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    bool _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::net::Socket _ret(ret);
    return _ret;
}

::java::net::Socket android::net::SSLCertificateSocketFactory::createSocket() const {
    if (!::android::net::SSLCertificateSocketFactory::_class) ::android::net::SSLCertificateSocketFactory::_class = java::fetch_class("android/net/SSLCertificateSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createSocket", "()Ljava/net/Socket;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::Socket _ret(ret);
    return _ret;
}

::java::net::Socket android::net::SSLCertificateSocketFactory::createSocket(const ::java::net::InetAddress& arg0, int32_t arg1, const ::java::net::InetAddress& arg2, int32_t arg3) const {
    if (!::android::net::SSLCertificateSocketFactory::_class) ::android::net::SSLCertificateSocketFactory::_class = java::fetch_class("android/net/SSLCertificateSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createSocket", "(Ljava/net/InetAddress;ILjava/net/InetAddress;I)Ljava/net/Socket;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::net::Socket _ret(ret);
    return _ret;
}

::java::net::Socket android::net::SSLCertificateSocketFactory::createSocket(const ::java::net::InetAddress& arg0, int32_t arg1) const {
    if (!::android::net::SSLCertificateSocketFactory::_class) ::android::net::SSLCertificateSocketFactory::_class = java::fetch_class("android/net/SSLCertificateSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createSocket", "(Ljava/net/InetAddress;I)Ljava/net/Socket;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::net::Socket _ret(ret);
    return _ret;
}

::java::net::Socket android::net::SSLCertificateSocketFactory::createSocket(const ::java::lang::String& arg0, int32_t arg1, const ::java::net::InetAddress& arg2, int32_t arg3) const {
    if (!::android::net::SSLCertificateSocketFactory::_class) ::android::net::SSLCertificateSocketFactory::_class = java::fetch_class("android/net/SSLCertificateSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createSocket", "(Ljava/lang/String;ILjava/net/InetAddress;I)Ljava/net/Socket;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::net::Socket _ret(ret);
    return _ret;
}

::java::net::Socket android::net::SSLCertificateSocketFactory::createSocket(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::net::SSLCertificateSocketFactory::_class) ::android::net::SSLCertificateSocketFactory::_class = java::fetch_class("android/net/SSLCertificateSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createSocket", "(Ljava/lang/String;I)Ljava/net/Socket;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::net::Socket _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> android::net::SSLCertificateSocketFactory::getDefaultCipherSuites() const {
    if (!::android::net::SSLCertificateSocketFactory::_class) ::android::net::SSLCertificateSocketFactory::_class = java::fetch_class("android/net/SSLCertificateSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaultCipherSuites", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::String> android::net::SSLCertificateSocketFactory::getSupportedCipherSuites() const {
    if (!::android::net::SSLCertificateSocketFactory::_class) ::android::net::SSLCertificateSocketFactory::_class = java::fetch_class("android/net/SSLCertificateSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSupportedCipherSuites", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool android::net::ConnectivityManager::isNetworkTypeValid(int32_t arg0){
    if (!::android::net::ConnectivityManager::_class) ::android::net::ConnectivityManager::_class = java::fetch_class("android/net/ConnectivityManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isNetworkTypeValid", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void android::net::ConnectivityManager::setNetworkPreference(int32_t arg0) const {
    if (!::android::net::ConnectivityManager::_class) ::android::net::ConnectivityManager::_class = java::fetch_class("android/net/ConnectivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNetworkPreference", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::net::ConnectivityManager::getNetworkPreference() const {
    if (!::android::net::ConnectivityManager::_class) ::android::net::ConnectivityManager::_class = java::fetch_class("android/net/ConnectivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNetworkPreference", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::net::NetworkInfo android::net::ConnectivityManager::getActiveNetworkInfo() const {
    if (!::android::net::ConnectivityManager::_class) ::android::net::ConnectivityManager::_class = java::fetch_class("android/net/ConnectivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActiveNetworkInfo", "()Landroid/net/NetworkInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::NetworkInfo _ret(ret);
    return _ret;
}

::android::net::NetworkInfo android::net::ConnectivityManager::getNetworkInfo(int32_t arg0) const {
    if (!::android::net::ConnectivityManager::_class) ::android::net::ConnectivityManager::_class = java::fetch_class("android/net/ConnectivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNetworkInfo", "(I)Landroid/net/NetworkInfo;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::NetworkInfo _ret(ret);
    return _ret;
}

std::vector< ::android::net::NetworkInfo> android::net::ConnectivityManager::getAllNetworkInfo() const {
    if (!::android::net::ConnectivityManager::_class) ::android::net::ConnectivityManager::_class = java::fetch_class("android/net/ConnectivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAllNetworkInfo", "()[Landroid/net/NetworkInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::net::NetworkInfo> _ret(rets, ::android::net::NetworkInfo((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::net::NetworkInfo retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

int32_t android::net::ConnectivityManager::startUsingNetworkFeature(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::android::net::ConnectivityManager::_class) ::android::net::ConnectivityManager::_class = java::fetch_class("android/net/ConnectivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "startUsingNetworkFeature", "(ILjava/lang/String;)I");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::net::ConnectivityManager::stopUsingNetworkFeature(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::android::net::ConnectivityManager::_class) ::android::net::ConnectivityManager::_class = java::fetch_class("android/net/ConnectivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopUsingNetworkFeature", "(ILjava/lang/String;)I");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

bool android::net::ConnectivityManager::requestRouteToHost(int32_t arg0, int32_t arg1) const {
    if (!::android::net::ConnectivityManager::_class) ::android::net::ConnectivityManager::_class = java::fetch_class("android/net/ConnectivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestRouteToHost", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::net::ConnectivityManager::getBackgroundDataSetting() const {
    if (!::android::net::ConnectivityManager::_class) ::android::net::ConnectivityManager::_class = java::fetch_class("android/net/ConnectivityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBackgroundDataSetting", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::Credentials::Credentials(int32_t arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::net::Credentials::_class) ::android::net::Credentials::_class = java::fetch_class("android/net/Credentials");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

int32_t android::net::Credentials::getPid() const {
    if (!::android::net::Credentials::_class) ::android::net::Credentials::_class = java::fetch_class("android/net/Credentials");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPid", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::net::Credentials::getUid() const {
    if (!::android::net::Credentials::_class) ::android::net::Credentials::_class = java::fetch_class("android/net/Credentials");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUid", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::net::Credentials::getGid() const {
    if (!::android::net::Credentials::_class) ::android::net::Credentials::_class = java::fetch_class("android/net/Credentials");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGid", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::SSLSessionCache::SSLSessionCache(const ::java::io::File& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::net::SSLSessionCache::_class) ::android::net::SSLSessionCache::_class = java::fetch_class("android/net/SSLSessionCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/File;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::SSLSessionCache::SSLSessionCache(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::net::SSLSessionCache::_class) ::android::net::SSLSessionCache::_class = java::fetch_class("android/net/SSLSessionCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::DhcpInfo::DhcpInfo() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::net::DhcpInfo::_class) ::android::net::DhcpInfo::_class = java::fetch_class("android/net/DhcpInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::net::DhcpInfo::toString() const {
    if (!::android::net::DhcpInfo::_class) ::android::net::DhcpInfo::_class = java::fetch_class("android/net/DhcpInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::net::DhcpInfo::describeContents() const {
    if (!::android::net::DhcpInfo::_class) ::android::net::DhcpInfo::_class = java::fetch_class("android/net/DhcpInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::net::DhcpInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::net::DhcpInfo::_class) ::android::net::DhcpInfo::_class = java::fetch_class("android/net/DhcpInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::Proxy::Proxy() : ::java::lang::Object((jobject)0) {
    if (!::android::net::Proxy::_class) ::android::net::Proxy::_class = java::fetch_class("android/net/Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::net::Proxy::getHost(const ::android::content::Context& arg0){
    if (!::android::net::Proxy::_class) ::android::net::Proxy::_class = java::fetch_class("android/net/Proxy");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getHost", "(Landroid/content/Context;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::net::Proxy::getPort(const ::android::content::Context& arg0){
    if (!::android::net::Proxy::_class) ::android::net::Proxy::_class = java::fetch_class("android/net/Proxy");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getPort", "(Landroid/content/Context;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

::java::lang::String android::net::Proxy::getDefaultHost(){
    if (!::android::net::Proxy::_class) ::android::net::Proxy::_class = java::fetch_class("android/net/Proxy");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefaultHost", "()Ljava/lang/String;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::net::Proxy::getDefaultPort(){
    if (!::android::net::Proxy::_class) ::android::net::Proxy::_class = java::fetch_class("android/net/Proxy");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefaultPort", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

bool android::net::Uri::isHierarchical() const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "isHierarchical", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::net::Uri::isOpaque() const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOpaque", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::net::Uri::isRelative() const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRelative", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::net::Uri::isAbsolute() const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAbsolute", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String android::net::Uri::getScheme() const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScheme", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::Uri::getSchemeSpecificPart() const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSchemeSpecificPart", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::Uri::getEncodedSchemeSpecificPart() const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncodedSchemeSpecificPart", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::Uri::getAuthority() const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAuthority", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::Uri::getEncodedAuthority() const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncodedAuthority", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::Uri::getUserInfo() const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUserInfo", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::Uri::getEncodedUserInfo() const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncodedUserInfo", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::Uri::getHost() const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHost", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::net::Uri::getPort() const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::net::Uri::getPath() const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPath", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::Uri::getEncodedPath() const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncodedPath", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::Uri::getQuery() const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQuery", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::Uri::getEncodedQuery() const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncodedQuery", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::Uri::getFragment() const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFragment", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::Uri::getEncodedFragment() const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncodedFragment", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::List android::net::Uri::getPathSegments() const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPathSegments", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::lang::String android::net::Uri::getLastPathSegment() const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLastPathSegment", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::net::Uri::equals(const ::java::lang::Object& arg0) const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::net::Uri::hashCode() const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::net::Uri::compareTo(const ::android::net::Uri& arg0) const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Landroid/net/Uri;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String android::net::Uri::toString() const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::net::Uri_Builder android::net::Uri::buildUpon() const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "buildUpon", "()Landroid/net/Uri$Builder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::Uri_Builder _ret(ret);
    return _ret;
}

::android::net::Uri android::net::Uri::parse(const ::java::lang::String& arg0){
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parse", "(Ljava/lang/String;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::android::net::Uri android::net::Uri::fromFile(const ::java::io::File& arg0){
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fromFile", "(Ljava/io/File;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::android::net::Uri android::net::Uri::fromParts(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2){
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fromParts", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::java::util::Set android::net::Uri::getQueryParameterNames() const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQueryParameterNames", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::List android::net::Uri::getQueryParameters(const ::java::lang::String& arg0) const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQueryParameters", "(Ljava/lang/String;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::lang::String android::net::Uri::getQueryParameter(const ::java::lang::String& arg0) const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQueryParameter", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::net::Uri::getBooleanQueryParameter(const ::java::lang::String& arg0, bool arg1) const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBooleanQueryParameter", "(Ljava/lang/String;Z)Z");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::net::Uri::writeToParcel(const ::android::os::Parcel& arg0, const ::android::net::Uri& arg1){
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;Landroid/net/Uri;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::lang::String android::net::Uri::encode(const ::java::lang::String& arg0){
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "encode", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::Uri::encode(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "encode", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::Uri::decode(const ::java::lang::String& arg0){
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "decode", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::net::Uri android::net::Uri::withAppendedPath(const ::android::net::Uri& arg0, const ::java::lang::String& arg1){
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "withAppendedPath", "(Landroid/net/Uri;Ljava/lang/String;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::net::Uri _ret(ret);
    return _ret;
}

int32_t android::net::Uri::compareTo(const ::java::lang::Object& arg0) const {
    if (!::android::net::Uri::_class) ::android::net::Uri::_class = java::fetch_class("android/net/Uri");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::net::NetworkInfo::getType() const {
    if (!::android::net::NetworkInfo::_class) ::android::net::NetworkInfo::_class = java::fetch_class("android/net/NetworkInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::net::NetworkInfo::getSubtype() const {
    if (!::android::net::NetworkInfo::_class) ::android::net::NetworkInfo::_class = java::fetch_class("android/net/NetworkInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubtype", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::net::NetworkInfo::getTypeName() const {
    if (!::android::net::NetworkInfo::_class) ::android::net::NetworkInfo::_class = java::fetch_class("android/net/NetworkInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTypeName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::NetworkInfo::getSubtypeName() const {
    if (!::android::net::NetworkInfo::_class) ::android::net::NetworkInfo::_class = java::fetch_class("android/net/NetworkInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubtypeName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::net::NetworkInfo::isConnectedOrConnecting() const {
    if (!::android::net::NetworkInfo::_class) ::android::net::NetworkInfo::_class = java::fetch_class("android/net/NetworkInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "isConnectedOrConnecting", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::net::NetworkInfo::isConnected() const {
    if (!::android::net::NetworkInfo::_class) ::android::net::NetworkInfo::_class = java::fetch_class("android/net/NetworkInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "isConnected", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::net::NetworkInfo::isAvailable() const {
    if (!::android::net::NetworkInfo::_class) ::android::net::NetworkInfo::_class = java::fetch_class("android/net/NetworkInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAvailable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::net::NetworkInfo::isFailover() const {
    if (!::android::net::NetworkInfo::_class) ::android::net::NetworkInfo::_class = java::fetch_class("android/net/NetworkInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFailover", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::net::NetworkInfo::isRoaming() const {
    if (!::android::net::NetworkInfo::_class) ::android::net::NetworkInfo::_class = java::fetch_class("android/net/NetworkInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRoaming", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::net::NetworkInfo_State android::net::NetworkInfo::getState() const {
    if (!::android::net::NetworkInfo::_class) ::android::net::NetworkInfo::_class = java::fetch_class("android/net/NetworkInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getState", "()Landroid/net/NetworkInfo$State;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::NetworkInfo_State _ret(ret);
    return _ret;
}

::android::net::NetworkInfo_DetailedState android::net::NetworkInfo::getDetailedState() const {
    if (!::android::net::NetworkInfo::_class) ::android::net::NetworkInfo::_class = java::fetch_class("android/net/NetworkInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDetailedState", "()Landroid/net/NetworkInfo$DetailedState;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::NetworkInfo_DetailedState _ret(ret);
    return _ret;
}

::java::lang::String android::net::NetworkInfo::getReason() const {
    if (!::android::net::NetworkInfo::_class) ::android::net::NetworkInfo::_class = java::fetch_class("android/net/NetworkInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReason", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::NetworkInfo::getExtraInfo() const {
    if (!::android::net::NetworkInfo::_class) ::android::net::NetworkInfo::_class = java::fetch_class("android/net/NetworkInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtraInfo", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::NetworkInfo::toString() const {
    if (!::android::net::NetworkInfo::_class) ::android::net::NetworkInfo::_class = java::fetch_class("android/net/NetworkInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::net::NetworkInfo::describeContents() const {
    if (!::android::net::NetworkInfo::_class) ::android::net::NetworkInfo::_class = java::fetch_class("android/net/NetworkInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::net::NetworkInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::net::NetworkInfo::_class) ::android::net::NetworkInfo::_class = java::fetch_class("android/net/NetworkInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::UrlQuerySanitizer::UrlQuerySanitizer() : ::java::lang::Object((jobject)0) {
    if (!::android::net::UrlQuerySanitizer::_class) ::android::net::UrlQuerySanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::UrlQuerySanitizer::UrlQuerySanitizer(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::net::UrlQuerySanitizer::_class) ::android::net::UrlQuerySanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::net::UrlQuerySanitizer_ValueSanitizer android::net::UrlQuerySanitizer::getUnregisteredParameterValueSanitizer() const {
    if (!::android::net::UrlQuerySanitizer::_class) ::android::net::UrlQuerySanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUnregisteredParameterValueSanitizer", "()Landroid/net/UrlQuerySanitizer$ValueSanitizer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::UrlQuerySanitizer_ValueSanitizer _ret(ret);
    return _ret;
}

void android::net::UrlQuerySanitizer::setUnregisteredParameterValueSanitizer(const ::android::net::UrlQuerySanitizer_ValueSanitizer& arg0) const {
    if (!::android::net::UrlQuerySanitizer::_class) ::android::net::UrlQuerySanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUnregisteredParameterValueSanitizer", "(Landroid/net/UrlQuerySanitizer$ValueSanitizer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::net::UrlQuerySanitizer_ValueSanitizer android::net::UrlQuerySanitizer::getAllIllegal(){
    if (!::android::net::UrlQuerySanitizer::_class) ::android::net::UrlQuerySanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAllIllegal", "()Landroid/net/UrlQuerySanitizer$ValueSanitizer;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::net::UrlQuerySanitizer_ValueSanitizer _ret(ret);
    return _ret;
}

::android::net::UrlQuerySanitizer_ValueSanitizer android::net::UrlQuerySanitizer::getAllButNulLegal(){
    if (!::android::net::UrlQuerySanitizer::_class) ::android::net::UrlQuerySanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAllButNulLegal", "()Landroid/net/UrlQuerySanitizer$ValueSanitizer;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::net::UrlQuerySanitizer_ValueSanitizer _ret(ret);
    return _ret;
}

::android::net::UrlQuerySanitizer_ValueSanitizer android::net::UrlQuerySanitizer::getAllButWhitespaceLegal(){
    if (!::android::net::UrlQuerySanitizer::_class) ::android::net::UrlQuerySanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAllButWhitespaceLegal", "()Landroid/net/UrlQuerySanitizer$ValueSanitizer;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::net::UrlQuerySanitizer_ValueSanitizer _ret(ret);
    return _ret;
}

::android::net::UrlQuerySanitizer_ValueSanitizer android::net::UrlQuerySanitizer::getUrlLegal(){
    if (!::android::net::UrlQuerySanitizer::_class) ::android::net::UrlQuerySanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getUrlLegal", "()Landroid/net/UrlQuerySanitizer$ValueSanitizer;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::net::UrlQuerySanitizer_ValueSanitizer _ret(ret);
    return _ret;
}

::android::net::UrlQuerySanitizer_ValueSanitizer android::net::UrlQuerySanitizer::getUrlAndSpaceLegal(){
    if (!::android::net::UrlQuerySanitizer::_class) ::android::net::UrlQuerySanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getUrlAndSpaceLegal", "()Landroid/net/UrlQuerySanitizer$ValueSanitizer;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::net::UrlQuerySanitizer_ValueSanitizer _ret(ret);
    return _ret;
}

::android::net::UrlQuerySanitizer_ValueSanitizer android::net::UrlQuerySanitizer::getAmpLegal(){
    if (!::android::net::UrlQuerySanitizer::_class) ::android::net::UrlQuerySanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAmpLegal", "()Landroid/net/UrlQuerySanitizer$ValueSanitizer;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::net::UrlQuerySanitizer_ValueSanitizer _ret(ret);
    return _ret;
}

::android::net::UrlQuerySanitizer_ValueSanitizer android::net::UrlQuerySanitizer::getAmpAndSpaceLegal(){
    if (!::android::net::UrlQuerySanitizer::_class) ::android::net::UrlQuerySanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAmpAndSpaceLegal", "()Landroid/net/UrlQuerySanitizer$ValueSanitizer;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::net::UrlQuerySanitizer_ValueSanitizer _ret(ret);
    return _ret;
}

::android::net::UrlQuerySanitizer_ValueSanitizer android::net::UrlQuerySanitizer::getSpaceLegal(){
    if (!::android::net::UrlQuerySanitizer::_class) ::android::net::UrlQuerySanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSpaceLegal", "()Landroid/net/UrlQuerySanitizer$ValueSanitizer;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::net::UrlQuerySanitizer_ValueSanitizer _ret(ret);
    return _ret;
}

::android::net::UrlQuerySanitizer_ValueSanitizer android::net::UrlQuerySanitizer::getAllButNulAndAngleBracketsLegal(){
    if (!::android::net::UrlQuerySanitizer::_class) ::android::net::UrlQuerySanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAllButNulAndAngleBracketsLegal", "()Landroid/net/UrlQuerySanitizer$ValueSanitizer;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::net::UrlQuerySanitizer_ValueSanitizer _ret(ret);
    return _ret;
}

void android::net::UrlQuerySanitizer::parseUrl(const ::java::lang::String& arg0) const {
    if (!::android::net::UrlQuerySanitizer::_class) ::android::net::UrlQuerySanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseUrl", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::net::UrlQuerySanitizer::parseQuery(const ::java::lang::String& arg0) const {
    if (!::android::net::UrlQuerySanitizer::_class) ::android::net::UrlQuerySanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseQuery", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::Set android::net::UrlQuerySanitizer::getParameterSet() const {
    if (!::android::net::UrlQuerySanitizer::_class) ::android::net::UrlQuerySanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameterSet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::List android::net::UrlQuerySanitizer::getParameterList() const {
    if (!::android::net::UrlQuerySanitizer::_class) ::android::net::UrlQuerySanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameterList", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

bool android::net::UrlQuerySanitizer::hasParameter(const ::java::lang::String& arg0) const {
    if (!::android::net::UrlQuerySanitizer::_class) ::android::net::UrlQuerySanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasParameter", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::net::UrlQuerySanitizer::getValue(const ::java::lang::String& arg0) const {
    if (!::android::net::UrlQuerySanitizer::_class) ::android::net::UrlQuerySanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::net::UrlQuerySanitizer::registerParameter(const ::java::lang::String& arg0, const ::android::net::UrlQuerySanitizer_ValueSanitizer& arg1) const {
    if (!::android::net::UrlQuerySanitizer::_class) ::android::net::UrlQuerySanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerParameter", "(Ljava/lang/String;Landroid/net/UrlQuerySanitizer$ValueSanitizer;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::net::UrlQuerySanitizer::registerParameters(const std::vector< ::java::lang::String>& arg0, const ::android::net::UrlQuerySanitizer_ValueSanitizer& arg1) const {
    if (!::android::net::UrlQuerySanitizer::_class) ::android::net::UrlQuerySanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerParameters", "([Ljava/lang/String;Landroid/net/UrlQuerySanitizer$ValueSanitizer;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::net::UrlQuerySanitizer::setAllowUnregisteredParamaters(bool arg0) const {
    if (!::android::net::UrlQuerySanitizer::_class) ::android::net::UrlQuerySanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAllowUnregisteredParamaters", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::net::UrlQuerySanitizer::getAllowUnregisteredParamaters() const {
    if (!::android::net::UrlQuerySanitizer::_class) ::android::net::UrlQuerySanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAllowUnregisteredParamaters", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::net::UrlQuerySanitizer::setPreferFirstRepeatedParameter(bool arg0) const {
    if (!::android::net::UrlQuerySanitizer::_class) ::android::net::UrlQuerySanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPreferFirstRepeatedParameter", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::net::UrlQuerySanitizer::getPreferFirstRepeatedParameter() const {
    if (!::android::net::UrlQuerySanitizer::_class) ::android::net::UrlQuerySanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPreferFirstRepeatedParameter", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::net::UrlQuerySanitizer_ValueSanitizer android::net::UrlQuerySanitizer::getValueSanitizer(const ::java::lang::String& arg0) const {
    if (!::android::net::UrlQuerySanitizer::_class) ::android::net::UrlQuerySanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValueSanitizer", "(Ljava/lang/String;)Landroid/net/UrlQuerySanitizer$ValueSanitizer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::UrlQuerySanitizer_ValueSanitizer _ret(ret);
    return _ret;
}

::android::net::UrlQuerySanitizer_ValueSanitizer android::net::UrlQuerySanitizer::getEffectiveValueSanitizer(const ::java::lang::String& arg0) const {
    if (!::android::net::UrlQuerySanitizer::_class) ::android::net::UrlQuerySanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEffectiveValueSanitizer", "(Ljava/lang/String;)Landroid/net/UrlQuerySanitizer$ValueSanitizer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::UrlQuerySanitizer_ValueSanitizer _ret(ret);
    return _ret;
}

::java::lang::String android::net::UrlQuerySanitizer::unescape(const ::java::lang::String& arg0) const {
    if (!::android::net::UrlQuerySanitizer::_class) ::android::net::UrlQuerySanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "unescape", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::LocalSocket::LocalSocket() : ::java::lang::Object((jobject)0) {
    if (!::android::net::LocalSocket::_class) ::android::net::LocalSocket::_class = java::fetch_class("android/net/LocalSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::net::LocalSocket::toString() const {
    if (!::android::net::LocalSocket::_class) ::android::net::LocalSocket::_class = java::fetch_class("android/net/LocalSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::net::LocalSocket::connect(const ::android::net::LocalSocketAddress& arg0) const {
    if (!::android::net::LocalSocket::_class) ::android::net::LocalSocket::_class = java::fetch_class("android/net/LocalSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "connect", "(Landroid/net/LocalSocketAddress;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::net::LocalSocket::bind(const ::android::net::LocalSocketAddress& arg0) const {
    if (!::android::net::LocalSocket::_class) ::android::net::LocalSocket::_class = java::fetch_class("android/net/LocalSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "bind", "(Landroid/net/LocalSocketAddress;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::net::LocalSocketAddress android::net::LocalSocket::getLocalSocketAddress() const {
    if (!::android::net::LocalSocket::_class) ::android::net::LocalSocket::_class = java::fetch_class("android/net/LocalSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalSocketAddress", "()Landroid/net/LocalSocketAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::LocalSocketAddress _ret(ret);
    return _ret;
}

::java::io::InputStream android::net::LocalSocket::getInputStream() const {
    if (!::android::net::LocalSocket::_class) ::android::net::LocalSocket::_class = java::fetch_class("android/net/LocalSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputStream", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::io::OutputStream android::net::LocalSocket::getOutputStream() const {
    if (!::android::net::LocalSocket::_class) ::android::net::LocalSocket::_class = java::fetch_class("android/net/LocalSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOutputStream", "()Ljava/io/OutputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::OutputStream _ret(ret);
    return _ret;
}

void android::net::LocalSocket::close() const {
    if (!::android::net::LocalSocket::_class) ::android::net::LocalSocket::_class = java::fetch_class("android/net/LocalSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::net::LocalSocket::shutdownInput() const {
    if (!::android::net::LocalSocket::_class) ::android::net::LocalSocket::_class = java::fetch_class("android/net/LocalSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "shutdownInput", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::net::LocalSocket::shutdownOutput() const {
    if (!::android::net::LocalSocket::_class) ::android::net::LocalSocket::_class = java::fetch_class("android/net/LocalSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "shutdownOutput", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::net::LocalSocket::setReceiveBufferSize(int32_t arg0) const {
    if (!::android::net::LocalSocket::_class) ::android::net::LocalSocket::_class = java::fetch_class("android/net/LocalSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReceiveBufferSize", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::net::LocalSocket::getReceiveBufferSize() const {
    if (!::android::net::LocalSocket::_class) ::android::net::LocalSocket::_class = java::fetch_class("android/net/LocalSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReceiveBufferSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::net::LocalSocket::setSoTimeout(int32_t arg0) const {
    if (!::android::net::LocalSocket::_class) ::android::net::LocalSocket::_class = java::fetch_class("android/net/LocalSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSoTimeout", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::net::LocalSocket::getSoTimeout() const {
    if (!::android::net::LocalSocket::_class) ::android::net::LocalSocket::_class = java::fetch_class("android/net/LocalSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSoTimeout", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::net::LocalSocket::setSendBufferSize(int32_t arg0) const {
    if (!::android::net::LocalSocket::_class) ::android::net::LocalSocket::_class = java::fetch_class("android/net/LocalSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSendBufferSize", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::net::LocalSocket::getSendBufferSize() const {
    if (!::android::net::LocalSocket::_class) ::android::net::LocalSocket::_class = java::fetch_class("android/net/LocalSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSendBufferSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::net::LocalSocketAddress android::net::LocalSocket::getRemoteSocketAddress() const {
    if (!::android::net::LocalSocket::_class) ::android::net::LocalSocket::_class = java::fetch_class("android/net/LocalSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRemoteSocketAddress", "()Landroid/net/LocalSocketAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::LocalSocketAddress _ret(ret);
    return _ret;
}

bool android::net::LocalSocket::isConnected() const {
    if (!::android::net::LocalSocket::_class) ::android::net::LocalSocket::_class = java::fetch_class("android/net/LocalSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "isConnected", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::net::LocalSocket::isClosed() const {
    if (!::android::net::LocalSocket::_class) ::android::net::LocalSocket::_class = java::fetch_class("android/net/LocalSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "isClosed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::net::LocalSocket::isBound() const {
    if (!::android::net::LocalSocket::_class) ::android::net::LocalSocket::_class = java::fetch_class("android/net/LocalSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "isBound", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::net::LocalSocket::isOutputShutdown() const {
    if (!::android::net::LocalSocket::_class) ::android::net::LocalSocket::_class = java::fetch_class("android/net/LocalSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOutputShutdown", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::net::LocalSocket::isInputShutdown() const {
    if (!::android::net::LocalSocket::_class) ::android::net::LocalSocket::_class = java::fetch_class("android/net/LocalSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "isInputShutdown", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::net::LocalSocket::connect(const ::android::net::LocalSocketAddress& arg0, int32_t arg1) const {
    if (!::android::net::LocalSocket::_class) ::android::net::LocalSocket::_class = java::fetch_class("android/net/LocalSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "connect", "(Landroid/net/LocalSocketAddress;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::net::LocalSocket::setFileDescriptorsForSend(const std::vector< ::java::io::FileDescriptor>& arg0) const {
    if (!::android::net::LocalSocket::_class) ::android::net::LocalSocket::_class = java::fetch_class("android/net/LocalSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFileDescriptorsForSend", "([Ljava/io/FileDescriptor;)V");
    unsigned arg0s = arg0.size();
    if (!::java::io::FileDescriptor::_class) ::java::io::FileDescriptor::_class = java::fetch_class("java/io/FileDescriptor");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::io::FileDescriptor::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::io::FileDescriptor& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::java::io::FileDescriptor> android::net::LocalSocket::getAncillaryFileDescriptors() const {
    if (!::android::net::LocalSocket::_class) ::android::net::LocalSocket::_class = java::fetch_class("android/net/LocalSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAncillaryFileDescriptors", "()[Ljava/io/FileDescriptor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::io::FileDescriptor> _ret(rets, ::java::io::FileDescriptor((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::io::FileDescriptor retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::net::Credentials android::net::LocalSocket::getPeerCredentials() const {
    if (!::android::net::LocalSocket::_class) ::android::net::LocalSocket::_class = java::fetch_class("android/net/LocalSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPeerCredentials", "()Landroid/net/Credentials;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::Credentials _ret(ret);
    return _ret;
}

::java::io::FileDescriptor android::net::LocalSocket::getFileDescriptor() const {
    if (!::android::net::LocalSocket::_class) ::android::net::LocalSocket::_class = java::fetch_class("android/net/LocalSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFileDescriptor", "()Ljava/io/FileDescriptor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::FileDescriptor _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::UrlQuerySanitizer_ParameterValuePair::UrlQuerySanitizer_ParameterValuePair(const ::android::net::UrlQuerySanitizer& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::net::UrlQuerySanitizer_ParameterValuePair::_class) ::android::net::UrlQuerySanitizer_ParameterValuePair::_class = java::fetch_class("android/net/UrlQuerySanitizer$ParameterValuePair");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/net/UrlQuerySanitizer;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::VpnService_Builder::VpnService_Builder(const ::android::net::VpnService& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::net::VpnService_Builder::_class) ::android::net::VpnService_Builder::_class = java::fetch_class("android/net/VpnService$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/net/VpnService;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::net::VpnService_Builder android::net::VpnService_Builder::setSession(const ::java::lang::String& arg0) const {
    if (!::android::net::VpnService_Builder::_class) ::android::net::VpnService_Builder::_class = java::fetch_class("android/net/VpnService$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSession", "(Ljava/lang/String;)Landroid/net/VpnService$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::VpnService_Builder _ret(ret);
    return _ret;
}

::android::net::VpnService_Builder android::net::VpnService_Builder::setConfigureIntent(const ::android::app::PendingIntent& arg0) const {
    if (!::android::net::VpnService_Builder::_class) ::android::net::VpnService_Builder::_class = java::fetch_class("android/net/VpnService$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setConfigureIntent", "(Landroid/app/PendingIntent;)Landroid/net/VpnService$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::VpnService_Builder _ret(ret);
    return _ret;
}

::android::net::VpnService_Builder android::net::VpnService_Builder::setMtu(int32_t arg0) const {
    if (!::android::net::VpnService_Builder::_class) ::android::net::VpnService_Builder::_class = java::fetch_class("android/net/VpnService$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMtu", "(I)Landroid/net/VpnService$Builder;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::VpnService_Builder _ret(ret);
    return _ret;
}

::android::net::VpnService_Builder android::net::VpnService_Builder::addAddress(const ::java::net::InetAddress& arg0, int32_t arg1) const {
    if (!::android::net::VpnService_Builder::_class) ::android::net::VpnService_Builder::_class = java::fetch_class("android/net/VpnService$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAddress", "(Ljava/net/InetAddress;I)Landroid/net/VpnService$Builder;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::net::VpnService_Builder _ret(ret);
    return _ret;
}

::android::net::VpnService_Builder android::net::VpnService_Builder::addAddress(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::net::VpnService_Builder::_class) ::android::net::VpnService_Builder::_class = java::fetch_class("android/net/VpnService$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAddress", "(Ljava/lang/String;I)Landroid/net/VpnService$Builder;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::net::VpnService_Builder _ret(ret);
    return _ret;
}

::android::net::VpnService_Builder android::net::VpnService_Builder::addRoute(const ::java::net::InetAddress& arg0, int32_t arg1) const {
    if (!::android::net::VpnService_Builder::_class) ::android::net::VpnService_Builder::_class = java::fetch_class("android/net/VpnService$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addRoute", "(Ljava/net/InetAddress;I)Landroid/net/VpnService$Builder;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::net::VpnService_Builder _ret(ret);
    return _ret;
}

::android::net::VpnService_Builder android::net::VpnService_Builder::addRoute(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::net::VpnService_Builder::_class) ::android::net::VpnService_Builder::_class = java::fetch_class("android/net/VpnService$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addRoute", "(Ljava/lang/String;I)Landroid/net/VpnService$Builder;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::net::VpnService_Builder _ret(ret);
    return _ret;
}

::android::net::VpnService_Builder android::net::VpnService_Builder::addDnsServer(const ::java::net::InetAddress& arg0) const {
    if (!::android::net::VpnService_Builder::_class) ::android::net::VpnService_Builder::_class = java::fetch_class("android/net/VpnService$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addDnsServer", "(Ljava/net/InetAddress;)Landroid/net/VpnService$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::VpnService_Builder _ret(ret);
    return _ret;
}

::android::net::VpnService_Builder android::net::VpnService_Builder::addDnsServer(const ::java::lang::String& arg0) const {
    if (!::android::net::VpnService_Builder::_class) ::android::net::VpnService_Builder::_class = java::fetch_class("android/net/VpnService$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addDnsServer", "(Ljava/lang/String;)Landroid/net/VpnService$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::VpnService_Builder _ret(ret);
    return _ret;
}

::android::net::VpnService_Builder android::net::VpnService_Builder::addSearchDomain(const ::java::lang::String& arg0) const {
    if (!::android::net::VpnService_Builder::_class) ::android::net::VpnService_Builder::_class = java::fetch_class("android/net/VpnService$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addSearchDomain", "(Ljava/lang/String;)Landroid/net/VpnService$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::VpnService_Builder _ret(ret);
    return _ret;
}

::android::os::ParcelFileDescriptor android::net::VpnService_Builder::establish() const {
    if (!::android::net::VpnService_Builder::_class) ::android::net::VpnService_Builder::_class = java::fetch_class("android/net/VpnService$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "establish", "()Landroid/os/ParcelFileDescriptor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::ParcelFileDescriptor _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::LocalServerSocket::LocalServerSocket(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::net::LocalServerSocket::_class) ::android::net::LocalServerSocket::_class = java::fetch_class("android/net/LocalServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::LocalServerSocket::LocalServerSocket(const ::java::io::FileDescriptor& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::net::LocalServerSocket::_class) ::android::net::LocalServerSocket::_class = java::fetch_class("android/net/LocalServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/FileDescriptor;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::net::LocalSocketAddress android::net::LocalServerSocket::getLocalSocketAddress() const {
    if (!::android::net::LocalServerSocket::_class) ::android::net::LocalServerSocket::_class = java::fetch_class("android/net/LocalServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalSocketAddress", "()Landroid/net/LocalSocketAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::LocalSocketAddress _ret(ret);
    return _ret;
}

::android::net::LocalSocket android::net::LocalServerSocket::accept() const {
    if (!::android::net::LocalServerSocket::_class) ::android::net::LocalServerSocket::_class = java::fetch_class("android/net/LocalServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "accept", "()Landroid/net/LocalSocket;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::LocalSocket _ret(ret);
    return _ret;
}

::java::io::FileDescriptor android::net::LocalServerSocket::getFileDescriptor() const {
    if (!::android::net::LocalServerSocket::_class) ::android::net::LocalServerSocket::_class = java::fetch_class("android/net/LocalServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFileDescriptor", "()Ljava/io/FileDescriptor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::FileDescriptor _ret(ret);
    return _ret;
}

void android::net::LocalServerSocket::close() const {
    if (!::android::net::LocalServerSocket::_class) ::android::net::LocalServerSocket::_class = java::fetch_class("android/net/LocalServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::TrafficStats::TrafficStats() : ::java::lang::Object((jobject)0) {
    if (!::android::net::TrafficStats::_class) ::android::net::TrafficStats::_class = java::fetch_class("android/net/TrafficStats");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::net::TrafficStats::setThreadStatsTag(int32_t arg0){
    if (!::android::net::TrafficStats::_class) ::android::net::TrafficStats::_class = java::fetch_class("android/net/TrafficStats");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setThreadStatsTag", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

int32_t android::net::TrafficStats::getThreadStatsTag(){
    if (!::android::net::TrafficStats::_class) ::android::net::TrafficStats::_class = java::fetch_class("android/net/TrafficStats");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getThreadStatsTag", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

void android::net::TrafficStats::clearThreadStatsTag(){
    if (!::android::net::TrafficStats::_class) ::android::net::TrafficStats::_class = java::fetch_class("android/net/TrafficStats");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "clearThreadStatsTag", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::net::TrafficStats::tagSocket(const ::java::net::Socket& arg0){
    if (!::android::net::TrafficStats::_class) ::android::net::TrafficStats::_class = java::fetch_class("android/net/TrafficStats");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "tagSocket", "(Ljava/net/Socket;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::net::TrafficStats::untagSocket(const ::java::net::Socket& arg0){
    if (!::android::net::TrafficStats::_class) ::android::net::TrafficStats::_class = java::fetch_class("android/net/TrafficStats");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "untagSocket", "(Ljava/net/Socket;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::net::TrafficStats::incrementOperationCount(int32_t arg0){
    if (!::android::net::TrafficStats::_class) ::android::net::TrafficStats::_class = java::fetch_class("android/net/TrafficStats");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "incrementOperationCount", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::net::TrafficStats::incrementOperationCount(int32_t arg0, int32_t arg1){
    if (!::android::net::TrafficStats::_class) ::android::net::TrafficStats::_class = java::fetch_class("android/net/TrafficStats");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "incrementOperationCount", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

int64_t android::net::TrafficStats::getMobileTxPackets(){
    if (!::android::net::TrafficStats::_class) ::android::net::TrafficStats::_class = java::fetch_class("android/net/TrafficStats");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMobileTxPackets", "()J");
    return java::jni->CallStaticLongMethod(_class, mid);
}

int64_t android::net::TrafficStats::getMobileRxPackets(){
    if (!::android::net::TrafficStats::_class) ::android::net::TrafficStats::_class = java::fetch_class("android/net/TrafficStats");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMobileRxPackets", "()J");
    return java::jni->CallStaticLongMethod(_class, mid);
}

int64_t android::net::TrafficStats::getMobileTxBytes(){
    if (!::android::net::TrafficStats::_class) ::android::net::TrafficStats::_class = java::fetch_class("android/net/TrafficStats");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMobileTxBytes", "()J");
    return java::jni->CallStaticLongMethod(_class, mid);
}

int64_t android::net::TrafficStats::getMobileRxBytes(){
    if (!::android::net::TrafficStats::_class) ::android::net::TrafficStats::_class = java::fetch_class("android/net/TrafficStats");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMobileRxBytes", "()J");
    return java::jni->CallStaticLongMethod(_class, mid);
}

int64_t android::net::TrafficStats::getTotalTxPackets(){
    if (!::android::net::TrafficStats::_class) ::android::net::TrafficStats::_class = java::fetch_class("android/net/TrafficStats");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTotalTxPackets", "()J");
    return java::jni->CallStaticLongMethod(_class, mid);
}

int64_t android::net::TrafficStats::getTotalRxPackets(){
    if (!::android::net::TrafficStats::_class) ::android::net::TrafficStats::_class = java::fetch_class("android/net/TrafficStats");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTotalRxPackets", "()J");
    return java::jni->CallStaticLongMethod(_class, mid);
}

int64_t android::net::TrafficStats::getTotalTxBytes(){
    if (!::android::net::TrafficStats::_class) ::android::net::TrafficStats::_class = java::fetch_class("android/net/TrafficStats");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTotalTxBytes", "()J");
    return java::jni->CallStaticLongMethod(_class, mid);
}

int64_t android::net::TrafficStats::getTotalRxBytes(){
    if (!::android::net::TrafficStats::_class) ::android::net::TrafficStats::_class = java::fetch_class("android/net/TrafficStats");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTotalRxBytes", "()J");
    return java::jni->CallStaticLongMethod(_class, mid);
}

int64_t android::net::TrafficStats::getUidTxBytes(int32_t arg0){
    if (!::android::net::TrafficStats::_class) ::android::net::TrafficStats::_class = java::fetch_class("android/net/TrafficStats");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getUidTxBytes", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

int64_t android::net::TrafficStats::getUidRxBytes(int32_t arg0){
    if (!::android::net::TrafficStats::_class) ::android::net::TrafficStats::_class = java::fetch_class("android/net/TrafficStats");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getUidRxBytes", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

int64_t android::net::TrafficStats::getUidTxPackets(int32_t arg0){
    if (!::android::net::TrafficStats::_class) ::android::net::TrafficStats::_class = java::fetch_class("android/net/TrafficStats");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getUidTxPackets", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

int64_t android::net::TrafficStats::getUidRxPackets(int32_t arg0){
    if (!::android::net::TrafficStats::_class) ::android::net::TrafficStats::_class = java::fetch_class("android/net/TrafficStats");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getUidRxPackets", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

int64_t android::net::TrafficStats::getUidTcpTxBytes(int32_t arg0){
    if (!::android::net::TrafficStats::_class) ::android::net::TrafficStats::_class = java::fetch_class("android/net/TrafficStats");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getUidTcpTxBytes", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

int64_t android::net::TrafficStats::getUidTcpRxBytes(int32_t arg0){
    if (!::android::net::TrafficStats::_class) ::android::net::TrafficStats::_class = java::fetch_class("android/net/TrafficStats");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getUidTcpRxBytes", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

int64_t android::net::TrafficStats::getUidUdpTxBytes(int32_t arg0){
    if (!::android::net::TrafficStats::_class) ::android::net::TrafficStats::_class = java::fetch_class("android/net/TrafficStats");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getUidUdpTxBytes", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

int64_t android::net::TrafficStats::getUidUdpRxBytes(int32_t arg0){
    if (!::android::net::TrafficStats::_class) ::android::net::TrafficStats::_class = java::fetch_class("android/net/TrafficStats");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getUidUdpRxBytes", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

int64_t android::net::TrafficStats::getUidTcpTxSegments(int32_t arg0){
    if (!::android::net::TrafficStats::_class) ::android::net::TrafficStats::_class = java::fetch_class("android/net/TrafficStats");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getUidTcpTxSegments", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

int64_t android::net::TrafficStats::getUidTcpRxSegments(int32_t arg0){
    if (!::android::net::TrafficStats::_class) ::android::net::TrafficStats::_class = java::fetch_class("android/net/TrafficStats");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getUidTcpRxSegments", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

int64_t android::net::TrafficStats::getUidUdpTxPackets(int32_t arg0){
    if (!::android::net::TrafficStats::_class) ::android::net::TrafficStats::_class = java::fetch_class("android/net/TrafficStats");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getUidUdpTxPackets", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

int64_t android::net::TrafficStats::getUidUdpRxPackets(int32_t arg0){
    if (!::android::net::TrafficStats::_class) ::android::net::TrafficStats::_class = java::fetch_class("android/net/TrafficStats");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getUidUdpRxPackets", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::LocalSocketAddress::LocalSocketAddress(const ::java::lang::String& arg0, const ::android::net::LocalSocketAddress_Namespace& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::net::LocalSocketAddress::_class) ::android::net::LocalSocketAddress::_class = java::fetch_class("android/net/LocalSocketAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Landroid/net/LocalSocketAddress$Namespace;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::LocalSocketAddress::LocalSocketAddress(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::net::LocalSocketAddress::_class) ::android::net::LocalSocketAddress::_class = java::fetch_class("android/net/LocalSocketAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String android::net::LocalSocketAddress::getName() const {
    if (!::android::net::LocalSocketAddress::_class) ::android::net::LocalSocketAddress::_class = java::fetch_class("android/net/LocalSocketAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::net::LocalSocketAddress_Namespace android::net::LocalSocketAddress::getNamespace() const {
    if (!::android::net::LocalSocketAddress::_class) ::android::net::LocalSocketAddress::_class = java::fetch_class("android/net/LocalSocketAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNamespace", "()Landroid/net/LocalSocketAddress$Namespace;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::LocalSocketAddress_Namespace _ret(ret);
    return _ret;
}

std::vector< ::android::net::LocalSocketAddress_Namespace> android::net::LocalSocketAddress_Namespace::values(){
    if (!::android::net::LocalSocketAddress_Namespace::_class) ::android::net::LocalSocketAddress_Namespace::_class = java::fetch_class("android/net/LocalSocketAddress$Namespace");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/net/LocalSocketAddress$Namespace;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::net::LocalSocketAddress_Namespace> _ret(rets, ::android::net::LocalSocketAddress_Namespace((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::net::LocalSocketAddress_Namespace retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::net::LocalSocketAddress_Namespace android::net::LocalSocketAddress_Namespace::valueOf(const ::java::lang::String& arg0){
    if (!::android::net::LocalSocketAddress_Namespace::_class) ::android::net::LocalSocketAddress_Namespace::_class = java::fetch_class("android/net/LocalSocketAddress$Namespace");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/net/LocalSocketAddress$Namespace;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::net::LocalSocketAddress_Namespace _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::UrlQuerySanitizer_IllegalCharacterValueSanitizer::UrlQuerySanitizer_IllegalCharacterValueSanitizer(int32_t arg0) : ::java::lang::Object((jobject)0), ::android::net::UrlQuerySanitizer_ValueSanitizer((jobject)0) {
    if (!::android::net::UrlQuerySanitizer_IllegalCharacterValueSanitizer::_class) ::android::net::UrlQuerySanitizer_IllegalCharacterValueSanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer$IllegalCharacterValueSanitizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String android::net::UrlQuerySanitizer_IllegalCharacterValueSanitizer::sanitize(const ::java::lang::String& arg0) const {
    if (!::android::net::UrlQuerySanitizer_IllegalCharacterValueSanitizer::_class) ::android::net::UrlQuerySanitizer_IllegalCharacterValueSanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer$IllegalCharacterValueSanitizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "sanitize", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::Uri_Builder::Uri_Builder() : ::java::lang::Object((jobject)0) {
    if (!::android::net::Uri_Builder::_class) ::android::net::Uri_Builder::_class = java::fetch_class("android/net/Uri$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::net::Uri_Builder android::net::Uri_Builder::scheme(const ::java::lang::String& arg0) const {
    if (!::android::net::Uri_Builder::_class) ::android::net::Uri_Builder::_class = java::fetch_class("android/net/Uri$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "scheme", "(Ljava/lang/String;)Landroid/net/Uri$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::Uri_Builder _ret(ret);
    return _ret;
}

::android::net::Uri_Builder android::net::Uri_Builder::opaquePart(const ::java::lang::String& arg0) const {
    if (!::android::net::Uri_Builder::_class) ::android::net::Uri_Builder::_class = java::fetch_class("android/net/Uri$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "opaquePart", "(Ljava/lang/String;)Landroid/net/Uri$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::Uri_Builder _ret(ret);
    return _ret;
}

::android::net::Uri_Builder android::net::Uri_Builder::encodedOpaquePart(const ::java::lang::String& arg0) const {
    if (!::android::net::Uri_Builder::_class) ::android::net::Uri_Builder::_class = java::fetch_class("android/net/Uri$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "encodedOpaquePart", "(Ljava/lang/String;)Landroid/net/Uri$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::Uri_Builder _ret(ret);
    return _ret;
}

::android::net::Uri_Builder android::net::Uri_Builder::authority(const ::java::lang::String& arg0) const {
    if (!::android::net::Uri_Builder::_class) ::android::net::Uri_Builder::_class = java::fetch_class("android/net/Uri$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "authority", "(Ljava/lang/String;)Landroid/net/Uri$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::Uri_Builder _ret(ret);
    return _ret;
}

::android::net::Uri_Builder android::net::Uri_Builder::encodedAuthority(const ::java::lang::String& arg0) const {
    if (!::android::net::Uri_Builder::_class) ::android::net::Uri_Builder::_class = java::fetch_class("android/net/Uri$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "encodedAuthority", "(Ljava/lang/String;)Landroid/net/Uri$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::Uri_Builder _ret(ret);
    return _ret;
}

::android::net::Uri_Builder android::net::Uri_Builder::path(const ::java::lang::String& arg0) const {
    if (!::android::net::Uri_Builder::_class) ::android::net::Uri_Builder::_class = java::fetch_class("android/net/Uri$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "path", "(Ljava/lang/String;)Landroid/net/Uri$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::Uri_Builder _ret(ret);
    return _ret;
}

::android::net::Uri_Builder android::net::Uri_Builder::encodedPath(const ::java::lang::String& arg0) const {
    if (!::android::net::Uri_Builder::_class) ::android::net::Uri_Builder::_class = java::fetch_class("android/net/Uri$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "encodedPath", "(Ljava/lang/String;)Landroid/net/Uri$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::Uri_Builder _ret(ret);
    return _ret;
}

::android::net::Uri_Builder android::net::Uri_Builder::appendPath(const ::java::lang::String& arg0) const {
    if (!::android::net::Uri_Builder::_class) ::android::net::Uri_Builder::_class = java::fetch_class("android/net/Uri$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "appendPath", "(Ljava/lang/String;)Landroid/net/Uri$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::Uri_Builder _ret(ret);
    return _ret;
}

::android::net::Uri_Builder android::net::Uri_Builder::appendEncodedPath(const ::java::lang::String& arg0) const {
    if (!::android::net::Uri_Builder::_class) ::android::net::Uri_Builder::_class = java::fetch_class("android/net/Uri$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "appendEncodedPath", "(Ljava/lang/String;)Landroid/net/Uri$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::Uri_Builder _ret(ret);
    return _ret;
}

::android::net::Uri_Builder android::net::Uri_Builder::query(const ::java::lang::String& arg0) const {
    if (!::android::net::Uri_Builder::_class) ::android::net::Uri_Builder::_class = java::fetch_class("android/net/Uri$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "query", "(Ljava/lang/String;)Landroid/net/Uri$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::Uri_Builder _ret(ret);
    return _ret;
}

::android::net::Uri_Builder android::net::Uri_Builder::encodedQuery(const ::java::lang::String& arg0) const {
    if (!::android::net::Uri_Builder::_class) ::android::net::Uri_Builder::_class = java::fetch_class("android/net/Uri$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "encodedQuery", "(Ljava/lang/String;)Landroid/net/Uri$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::Uri_Builder _ret(ret);
    return _ret;
}

::android::net::Uri_Builder android::net::Uri_Builder::fragment(const ::java::lang::String& arg0) const {
    if (!::android::net::Uri_Builder::_class) ::android::net::Uri_Builder::_class = java::fetch_class("android/net/Uri$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "fragment", "(Ljava/lang/String;)Landroid/net/Uri$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::Uri_Builder _ret(ret);
    return _ret;
}

::android::net::Uri_Builder android::net::Uri_Builder::encodedFragment(const ::java::lang::String& arg0) const {
    if (!::android::net::Uri_Builder::_class) ::android::net::Uri_Builder::_class = java::fetch_class("android/net/Uri$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "encodedFragment", "(Ljava/lang/String;)Landroid/net/Uri$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::Uri_Builder _ret(ret);
    return _ret;
}

::android::net::Uri_Builder android::net::Uri_Builder::appendQueryParameter(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::net::Uri_Builder::_class) ::android::net::Uri_Builder::_class = java::fetch_class("android/net/Uri$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "appendQueryParameter", "(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri$Builder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::net::Uri_Builder _ret(ret);
    return _ret;
}

::android::net::Uri_Builder android::net::Uri_Builder::clearQuery() const {
    if (!::android::net::Uri_Builder::_class) ::android::net::Uri_Builder::_class = java::fetch_class("android/net/Uri$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearQuery", "()Landroid/net/Uri$Builder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::Uri_Builder _ret(ret);
    return _ret;
}

::android::net::Uri android::net::Uri_Builder::build() const {
    if (!::android::net::Uri_Builder::_class) ::android::net::Uri_Builder::_class = java::fetch_class("android/net/Uri$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Landroid/net/Uri;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::java::lang::String android::net::Uri_Builder::toString() const {
    if (!::android::net::Uri_Builder::_class) ::android::net::Uri_Builder::_class = java::fetch_class("android/net/Uri$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::UrlQuerySanitizer_ValueSanitizer::sanitize(const ::java::lang::String& arg0) const {
    if (!::android::net::UrlQuerySanitizer_ValueSanitizer::_class) ::android::net::UrlQuerySanitizer_ValueSanitizer::_class = java::fetch_class("android/net/UrlQuerySanitizer$ValueSanitizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "sanitize", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::net::VpnService::VpnService() : ::java::lang::Object((jobject)0), ::android::app::Service((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {
    if (!::android::net::VpnService::_class) ::android::net::VpnService::_class = java::fetch_class("android/net/VpnService");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::content::Intent android::net::VpnService::prepare(const ::android::content::Context& arg0){
    if (!::android::net::VpnService::_class) ::android::net::VpnService::_class = java::fetch_class("android/net/VpnService");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "prepare", "(Landroid/content/Context;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

bool android::net::VpnService::protect(int32_t arg0) const {
    if (!::android::net::VpnService::_class) ::android::net::VpnService::_class = java::fetch_class("android/net/VpnService");
    static jmethodID mid = java::jni->GetMethodID(_class, "protect", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::net::VpnService::protect(const ::java::net::Socket& arg0) const {
    if (!::android::net::VpnService::_class) ::android::net::VpnService::_class = java::fetch_class("android/net/VpnService");
    static jmethodID mid = java::jni->GetMethodID(_class, "protect", "(Ljava/net/Socket;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::net::VpnService::protect(const ::java::net::DatagramSocket& arg0) const {
    if (!::android::net::VpnService::_class) ::android::net::VpnService::_class = java::fetch_class("android/net/VpnService");
    static jmethodID mid = java::jni->GetMethodID(_class, "protect", "(Ljava/net/DatagramSocket;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::os::IBinder android::net::VpnService::onBind(const ::android::content::Intent& arg0) const {
    if (!::android::net::VpnService::_class) ::android::net::VpnService::_class = java::fetch_class("android/net/VpnService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBind", "(Landroid/content/Intent;)Landroid/os/IBinder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

void android::net::VpnService::onRevoke() const {
    if (!::android::net::VpnService::_class) ::android::net::VpnService::_class = java::fetch_class("android/net/VpnService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRevoke", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

std::vector< ::android::net::NetworkInfo_State> android::net::NetworkInfo_State::values(){
    if (!::android::net::NetworkInfo_State::_class) ::android::net::NetworkInfo_State::_class = java::fetch_class("android/net/NetworkInfo$State");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/net/NetworkInfo$State;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::net::NetworkInfo_State> _ret(rets, ::android::net::NetworkInfo_State((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::net::NetworkInfo_State retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::net::NetworkInfo_State android::net::NetworkInfo_State::valueOf(const ::java::lang::String& arg0){
    if (!::android::net::NetworkInfo_State::_class) ::android::net::NetworkInfo_State::_class = java::fetch_class("android/net/NetworkInfo$State");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/net/NetworkInfo$State;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::net::NetworkInfo_State _ret(ret);
    return _ret;
}

std::vector< ::android::net::NetworkInfo_DetailedState> android::net::NetworkInfo_DetailedState::values(){
    if (!::android::net::NetworkInfo_DetailedState::_class) ::android::net::NetworkInfo_DetailedState::_class = java::fetch_class("android/net/NetworkInfo$DetailedState");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/net/NetworkInfo$DetailedState;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::net::NetworkInfo_DetailedState> _ret(rets, ::android::net::NetworkInfo_DetailedState((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::net::NetworkInfo_DetailedState retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::net::NetworkInfo_DetailedState android::net::NetworkInfo_DetailedState::valueOf(const ::java::lang::String& arg0){
    if (!::android::net::NetworkInfo_DetailedState::_class) ::android::net::NetworkInfo_DetailedState::_class = java::fetch_class("android/net/NetworkInfo$DetailedState");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/net/NetworkInfo$DetailedState;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::net::NetworkInfo_DetailedState _ret(ret);
    return _ret;
}

bool android::net::MailTo::isMailTo(const ::java::lang::String& arg0){
    if (!::android::net::MailTo::_class) ::android::net::MailTo::_class = java::fetch_class("android/net/MailTo");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isMailTo", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

::android::net::MailTo android::net::MailTo::parse(const ::java::lang::String& arg0){
    if (!::android::net::MailTo::_class) ::android::net::MailTo::_class = java::fetch_class("android/net/MailTo");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parse", "(Ljava/lang/String;)Landroid/net/MailTo;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::net::MailTo _ret(ret);
    return _ret;
}

::java::lang::String android::net::MailTo::getTo() const {
    if (!::android::net::MailTo::_class) ::android::net::MailTo::_class = java::fetch_class("android/net/MailTo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTo", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::MailTo::getCc() const {
    if (!::android::net::MailTo::_class) ::android::net::MailTo::_class = java::fetch_class("android/net/MailTo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCc", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::MailTo::getSubject() const {
    if (!::android::net::MailTo::_class) ::android::net::MailTo::_class = java::fetch_class("android/net/MailTo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubject", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::net::MailTo::getBody() const {
    if (!::android::net::MailTo::_class) ::android::net::MailTo::_class = java::fetch_class("android/net/MailTo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBody", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::Map android::net::MailTo::getHeaders() const {
    if (!::android::net::MailTo::_class) ::android::net::MailTo::_class = java::fetch_class("android/net/MailTo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHeaders", "()Ljava/util/Map;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map _ret(ret);
    return _ret;
}

::java::lang::String android::net::MailTo::toString() const {
    if (!::android::net::MailTo::_class) ::android::net::MailTo::_class = java::fetch_class("android/net/MailTo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

