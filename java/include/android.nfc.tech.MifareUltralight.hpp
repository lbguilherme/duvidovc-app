#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.nfc.tech.BasicTagTechnology.hpp"

namespace android { namespace nfc { class Tag; } }
namespace android { namespace nfc { namespace tech { class MifareUltralight; } } }

namespace android {
namespace nfc {
namespace tech {
class MifareUltralight : public virtual ::java::lang::Object,
                         public virtual ::android::nfc::tech::BasicTagTechnology {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MifareUltralight(jobject _obj) : ::java::lang::Object(_obj), ::android::nfc::tech::BasicTagTechnology(_obj), ::android::nfc::tech::TagTechnology(_obj), ::java::io::Closeable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MifareUltralight(const ::android::nfc::tech::MifareUltralight& x) : ::java::lang::Object((jobject)0), ::android::nfc::tech::BasicTagTechnology((jobject)0), ::android::nfc::tech::TagTechnology((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj;}
    MifareUltralight(::android::nfc::tech::MifareUltralight&& x) : ::java::lang::Object((jobject)0), ::android::nfc::tech::BasicTagTechnology((jobject)0), ::android::nfc::tech::TagTechnology((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::nfc::tech::MifareUltralight& operator=(const ::android::nfc::tech::MifareUltralight& x) {obj = x.obj; return *this;}
    ::android::nfc::tech::MifareUltralight& operator=(::android::nfc::tech::MifareUltralight&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::nfc::tech::MifareUltralight get(const ::android::nfc::Tag&);
    int32_t getType() const ;
    std::vector< int8_t> readPages(int32_t) const ;
    void writePage(int32_t, const std::vector< int8_t>&) const ;
    std::vector< int8_t> transceive(const std::vector< int8_t>&) const ;
    int32_t getMaxTransceiveLength() const ;
    void setTimeout(int32_t) const ;
    int32_t getTimeout() const ;
    void close() const ;
    void connect() const ;
    bool isConnected() const ;
    ::android::nfc::Tag getTag() const ;

};
}
}
}


