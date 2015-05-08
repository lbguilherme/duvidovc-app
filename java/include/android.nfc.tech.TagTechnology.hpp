#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Closeable.hpp"

namespace android { namespace nfc { class Tag; } }

namespace android {
namespace nfc {
namespace tech {
class TagTechnology : public virtual ::java::lang::Object,
                      public virtual ::java::io::Closeable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TagTechnology(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TagTechnology(const ::android::nfc::tech::TagTechnology& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj;}
    TagTechnology(::android::nfc::tech::TagTechnology&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::nfc::tech::TagTechnology& operator=(const ::android::nfc::tech::TagTechnology& x) {obj = x.obj; return *this;}
    ::android::nfc::tech::TagTechnology& operator=(::android::nfc::tech::TagTechnology&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::nfc::Tag getTag() const ;
    void connect() const ;
    void close() const ;
    bool isConnected() const ;

};
}
}
}


