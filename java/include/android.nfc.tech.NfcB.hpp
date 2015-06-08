#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.nfc.tech.BasicTagTechnology.hpp"

namespace android { namespace nfc { class Tag; } }
namespace android { namespace nfc { namespace tech { class NfcB; } } }

namespace android {
namespace nfc {
namespace tech {
class NfcB : public virtual ::java::lang::Object,
             public virtual ::android::nfc::tech::BasicTagTechnology {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NfcB(jobject _obj) : ::java::lang::Object(_obj), ::android::nfc::tech::BasicTagTechnology(_obj), ::android::nfc::tech::TagTechnology(_obj), ::java::io::Closeable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NfcB(const ::android::nfc::tech::NfcB& x) : ::java::lang::Object((jobject)0), ::android::nfc::tech::BasicTagTechnology((jobject)0), ::android::nfc::tech::TagTechnology((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj;}
    NfcB(::android::nfc::tech::NfcB&& x) : ::java::lang::Object((jobject)0), ::android::nfc::tech::BasicTagTechnology((jobject)0), ::android::nfc::tech::TagTechnology((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::nfc::tech::NfcB& operator=(const ::android::nfc::tech::NfcB& x) {obj = x.obj; return *this;}
    ::android::nfc::tech::NfcB& operator=(::android::nfc::tech::NfcB&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::nfc::tech::NfcB get(const ::android::nfc::Tag&);
    std::vector< int8_t> getApplicationData() const;
    std::vector< int8_t> getProtocolInfo() const;
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


