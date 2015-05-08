#include "java-core.hpp"
#include <memory>
#include "java.lang.String.hpp"
#include "org.apache.http.conn.util.InetAddressUtils.hpp"

jclass org::apache::http::conn::util::InetAddressUtils::_class = nullptr;

bool org::apache::http::conn::util::InetAddressUtils::isIPv4Address(const ::java::lang::String& arg0){
    if (!::org::apache::http::conn::util::InetAddressUtils::_class) ::org::apache::http::conn::util::InetAddressUtils::_class = java::fetch_class("org/apache/http/conn/util/InetAddressUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isIPv4Address", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool org::apache::http::conn::util::InetAddressUtils::isIPv6StdAddress(const ::java::lang::String& arg0){
    if (!::org::apache::http::conn::util::InetAddressUtils::_class) ::org::apache::http::conn::util::InetAddressUtils::_class = java::fetch_class("org/apache/http/conn/util/InetAddressUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isIPv6StdAddress", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool org::apache::http::conn::util::InetAddressUtils::isIPv6HexCompressedAddress(const ::java::lang::String& arg0){
    if (!::org::apache::http::conn::util::InetAddressUtils::_class) ::org::apache::http::conn::util::InetAddressUtils::_class = java::fetch_class("org/apache/http/conn/util/InetAddressUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isIPv6HexCompressedAddress", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool org::apache::http::conn::util::InetAddressUtils::isIPv6Address(const ::java::lang::String& arg0){
    if (!::org::apache::http::conn::util::InetAddressUtils::_class) ::org::apache::http::conn::util::InetAddressUtils::_class = java::fetch_class("org/apache/http/conn/util/InetAddressUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isIPv6Address", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

