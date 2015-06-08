#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.nfc.tech.BasicTagTechnology.hpp"

namespace android { namespace nfc { class Tag; } }
namespace android { namespace nfc { namespace tech { class NfcV; } } }

namespace android {
namespace nfc {
namespace tech {
class NfcV : public virtual ::java::lang::Object,
             public virtual ::android::nfc::tech::BasicTagTechnology {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NfcV(jobject _obj) : ::java::lang::Object(_obj), ::android::nfc::tech::BasicTagTechnology(_obj), ::android::nfc::tech::TagTechnology(_obj), ::java::io::Closeable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NfcV(const ::android::nfc::tech::NfcV& x) : ::java::lang::Object((jobject)0), ::android::nfc::tech::BasicTagTechnology((jobject)0), ::android::nfc::tech::TagTechnology((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj;}
    NfcV(::android::nfc::tech::NfcV&& x) : ::java::lang::Object((jobject)0), ::android::nfc::tech::BasicTagTechnology((jobject)0), ::android::nfc::tech::TagTechnology((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::nfc::tech::NfcV& operator=(const ::android::nfc::tech::NfcV& x) {obj = x.obj; return *this;}
    ::android::nfc::tech::NfcV& operator=(::android::nfc::tech::NfcV&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::nfc::tech::NfcV get(const ::android::nfc::Tag&);
    int8_t getResponseFlags() const;
    int8_t getDsfId() const;
    std::vector< int8_t> transceive(const std::vector< int8_t>&) const;
    int32_t getMaxTransceiveLength() const;
    void close() const;
    void connect() const;
    bool isConnected() const;
    ::android::nfc::Tag getTag() const;

};
}
}
}


