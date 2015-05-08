#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.nfc.tech.TagTechnology.hpp"

namespace android { namespace nfc { class Tag; } }

namespace android {
namespace nfc {
namespace tech {
class BasicTagTechnology : public virtual ::java::lang::Object,
                           public virtual ::android::nfc::tech::TagTechnology {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicTagTechnology(jobject _obj) : ::java::lang::Object(_obj), ::android::nfc::tech::TagTechnology(_obj), ::java::io::Closeable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicTagTechnology(const ::android::nfc::tech::BasicTagTechnology& x) : ::java::lang::Object((jobject)0), ::android::nfc::tech::TagTechnology((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj;}
    BasicTagTechnology(::android::nfc::tech::BasicTagTechnology&& x) : ::java::lang::Object((jobject)0), ::android::nfc::tech::TagTechnology((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::nfc::tech::BasicTagTechnology& operator=(const ::android::nfc::tech::BasicTagTechnology& x) {obj = x.obj; return *this;}
    ::android::nfc::tech::BasicTagTechnology& operator=(::android::nfc::tech::BasicTagTechnology&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::nfc::Tag getTag() const ;
    bool isConnected() const ;
    void connect() const ;
    void close() const ;

};
}
}
}


