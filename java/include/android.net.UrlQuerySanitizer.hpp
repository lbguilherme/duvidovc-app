#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { class UrlQuerySanitizer_ValueSanitizer; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }
namespace java { namespace util { class Set; } }

namespace android {
namespace net {
class UrlQuerySanitizer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UrlQuerySanitizer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UrlQuerySanitizer(const ::android::net::UrlQuerySanitizer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    UrlQuerySanitizer(::android::net::UrlQuerySanitizer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::UrlQuerySanitizer& operator=(const ::android::net::UrlQuerySanitizer& x) {obj = x.obj; return *this;}
    ::android::net::UrlQuerySanitizer& operator=(::android::net::UrlQuerySanitizer&& x) {obj = std::move(x.obj); return *this;}
    
    UrlQuerySanitizer();
    UrlQuerySanitizer(const ::java::lang::String&);
    ::android::net::UrlQuerySanitizer_ValueSanitizer getUnregisteredParameterValueSanitizer() const ;
    void setUnregisteredParameterValueSanitizer(const ::android::net::UrlQuerySanitizer_ValueSanitizer&) const ;
    static ::android::net::UrlQuerySanitizer_ValueSanitizer getAllIllegal();
    static ::android::net::UrlQuerySanitizer_ValueSanitizer getAllButNulLegal();
    static ::android::net::UrlQuerySanitizer_ValueSanitizer getAllButWhitespaceLegal();
    static ::android::net::UrlQuerySanitizer_ValueSanitizer getUrlLegal();
    static ::android::net::UrlQuerySanitizer_ValueSanitizer getUrlAndSpaceLegal();
    static ::android::net::UrlQuerySanitizer_ValueSanitizer getAmpLegal();
    static ::android::net::UrlQuerySanitizer_ValueSanitizer getAmpAndSpaceLegal();
    static ::android::net::UrlQuerySanitizer_ValueSanitizer getSpaceLegal();
    static ::android::net::UrlQuerySanitizer_ValueSanitizer getAllButNulAndAngleBracketsLegal();
    void parseUrl(const ::java::lang::String&) const ;
    void parseQuery(const ::java::lang::String&) const ;
    ::java::util::Set getParameterSet() const ;
    ::java::util::List getParameterList() const ;
    bool hasParameter(const ::java::lang::String&) const ;
    ::java::lang::String getValue(const ::java::lang::String&) const ;
    void registerParameter(const ::java::lang::String&, const ::android::net::UrlQuerySanitizer_ValueSanitizer&) const ;
    void registerParameters(const std::vector< ::java::lang::String>&, const ::android::net::UrlQuerySanitizer_ValueSanitizer&) const ;
    void setAllowUnregisteredParamaters(bool) const ;
    bool getAllowUnregisteredParamaters() const ;
    void setPreferFirstRepeatedParameter(bool) const ;
    bool getPreferFirstRepeatedParameter() const ;
    ::android::net::UrlQuerySanitizer_ValueSanitizer getValueSanitizer(const ::java::lang::String&) const ;
    ::android::net::UrlQuerySanitizer_ValueSanitizer getEffectiveValueSanitizer(const ::java::lang::String&) const ;
    ::java::lang::String unescape(const ::java::lang::String&) const ;

};
}
}

#include "android.net.UrlQuerySanitizer_IllegalCharacterValueSanitizer.hpp"
#include "android.net.UrlQuerySanitizer_ParameterValuePair.hpp"
#include "android.net.UrlQuerySanitizer_ValueSanitizer.hpp"

