#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.BaseColumns.hpp"

namespace android { namespace net { class Uri; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace provider {
class Settings_NameValueTable : public virtual ::java::lang::Object,
                                public virtual ::android::provider::BaseColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Settings_NameValueTable(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Settings_NameValueTable(const ::android::provider::Settings_NameValueTable& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0) {obj = x.obj;}
    Settings_NameValueTable(::android::provider::Settings_NameValueTable&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::Settings_NameValueTable& operator=(const ::android::provider::Settings_NameValueTable& x) {obj = x.obj; return *this;}
    ::android::provider::Settings_NameValueTable& operator=(::android::provider::Settings_NameValueTable&& x) {obj = std::move(x.obj); return *this;}
    
    Settings_NameValueTable();
    static ::android::net::Uri getUriFor(const ::android::net::Uri&, const ::java::lang::String&);

};
}
}


