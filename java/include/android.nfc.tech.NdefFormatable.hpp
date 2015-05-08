#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.nfc.tech.BasicTagTechnology.hpp"

namespace android { namespace nfc { class NdefMessage; } }
namespace android { namespace nfc { class Tag; } }
namespace android { namespace nfc { namespace tech { class NdefFormatable; } } }

namespace android {
namespace nfc {
namespace tech {
class NdefFormatable : public virtual ::java::lang::Object,
                       public virtual ::android::nfc::tech::BasicTagTechnology {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NdefFormatable(jobject _obj) : ::java::lang::Object(_obj), ::android::nfc::tech::BasicTagTechnology(_obj), ::android::nfc::tech::TagTechnology(_obj), ::java::io::Closeable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NdefFormatable(const ::android::nfc::tech::NdefFormatable& x) : ::java::lang::Object((jobject)0), ::android::nfc::tech::BasicTagTechnology((jobject)0), ::android::nfc::tech::TagTechnology((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj;}
    NdefFormatable(::android::nfc::tech::NdefFormatable&& x) : ::java::lang::Object((jobject)0), ::android::nfc::tech::BasicTagTechnology((jobject)0), ::android::nfc::tech::TagTechnology((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::nfc::tech::NdefFormatable& operator=(const ::android::nfc::tech::NdefFormatable& x) {obj = x.obj; return *this;}
    ::android::nfc::tech::NdefFormatable& operator=(::android::nfc::tech::NdefFormatable&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::nfc::tech::NdefFormatable get(const ::android::nfc::Tag&);
    void format(const ::android::nfc::NdefMessage&) const ;
    void formatReadOnly(const ::android::nfc::NdefMessage&) const ;
    void close() const ;
    void connect() const ;
    bool isConnected() const ;
    ::android::nfc::Tag getTag() const ;

};
}
}
}


