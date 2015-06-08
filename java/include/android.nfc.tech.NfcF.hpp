#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.nfc.tech.BasicTagTechnology.hpp"

namespace android { namespace nfc { class Tag; } }
namespace android { namespace nfc { namespace tech { class NfcF; } } }

namespace android {
namespace nfc {
namespace tech {
class NfcF : public virtual ::java::lang::Object,
             public virtual ::android::nfc::tech::BasicTagTechnology {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NfcF(jobject _obj) : ::java::lang::Object(_obj), ::android::nfc::tech::BasicTagTechnology(_obj), ::android::nfc::tech::TagTechnology(_obj), ::java::io::Closeable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NfcF(const ::android::nfc::tech::NfcF& x) : ::java::lang::Object((jobject)0), ::android::nfc::tech::BasicTagTechnology((jobject)0), ::android::nfc::tech::TagTechnology((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj;}
    NfcF(::android::nfc::tech::NfcF&& x) : ::java::lang::Object((jobject)0), ::android::nfc::tech::BasicTagTechnology((jobject)0), ::android::nfc::tech::TagTechnology((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::nfc::tech::NfcF& operator=(const ::android::nfc::tech::NfcF& x) {obj = x.obj; return *this;}
    ::android::nfc::tech::NfcF& operator=(::android::nfc::tech::NfcF&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::nfc::tech::NfcF get(const ::android::nfc::Tag&);
    std::vector< int8_t> getSystemCode() const;
    std::vector< int8_t> getManufacturer() const;
    std::vector< int8_t> transceive(const std::vector< int8_t>&) const;
    int32_t getMaxTransceiveLength() const;
    void setTimeout(int32_t) const;
    int32_t getTimeout() const;
    void close() const;
    void connect() const;
    bool isConnected() const;
    ::android::nfc::Tag getTag() const;

};
}
}
}


