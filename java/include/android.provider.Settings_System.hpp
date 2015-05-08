#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.Settings_NameValueTable.hpp"

namespace android { namespace content { class ContentResolver; } }
namespace android { namespace content { namespace res { class Configuration; } } }
namespace android { namespace net { class Uri; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace provider {
class Settings_System : public virtual ::java::lang::Object,
                        public virtual ::android::provider::Settings_NameValueTable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Settings_System(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::Settings_NameValueTable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Settings_System(const ::android::provider::Settings_System& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::Settings_NameValueTable((jobject)0) {obj = x.obj;}
    Settings_System(::android::provider::Settings_System&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::Settings_NameValueTable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::Settings_System& operator=(const ::android::provider::Settings_System& x) {obj = x.obj; return *this;}
    ::android::provider::Settings_System& operator=(::android::provider::Settings_System&& x) {obj = std::move(x.obj); return *this;}
    
    Settings_System();
    static ::java::lang::String getString(const ::android::content::ContentResolver&, const ::java::lang::String&);
    static bool putString(const ::android::content::ContentResolver&, const ::java::lang::String&, const ::java::lang::String&);
    static ::android::net::Uri getUriFor(const ::java::lang::String&);
    static int32_t getInt(const ::android::content::ContentResolver&, const ::java::lang::String&, int32_t);
    static int32_t getInt(const ::android::content::ContentResolver&, const ::java::lang::String&);
    static bool putInt(const ::android::content::ContentResolver&, const ::java::lang::String&, int32_t);
    static int64_t getLong(const ::android::content::ContentResolver&, const ::java::lang::String&, int64_t);
    static int64_t getLong(const ::android::content::ContentResolver&, const ::java::lang::String&);
    static bool putLong(const ::android::content::ContentResolver&, const ::java::lang::String&, int64_t);
    static float getFloat(const ::android::content::ContentResolver&, const ::java::lang::String&, float);
    static float getFloat(const ::android::content::ContentResolver&, const ::java::lang::String&);
    static bool putFloat(const ::android::content::ContentResolver&, const ::java::lang::String&, float);
    static void getConfiguration(const ::android::content::ContentResolver&, const ::android::content::res::Configuration&);
    static bool putConfiguration(const ::android::content::ContentResolver&, const ::android::content::res::Configuration&);
    static bool getShowGTalkServiceStatus(const ::android::content::ContentResolver&);
    static void setShowGTalkServiceStatus(const ::android::content::ContentResolver&, bool);

};
}
}


