#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.nfc.tech.BasicTagTechnology.hpp"

namespace android { namespace nfc { class Tag; } }
namespace android { namespace nfc { namespace tech { class IsoDep; } } }

namespace android {
namespace nfc {
namespace tech {
class IsoDep : public virtual ::java::lang::Object,
               public virtual ::android::nfc::tech::BasicTagTechnology {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IsoDep(jobject _obj) : ::java::lang::Object(_obj), ::android::nfc::tech::BasicTagTechnology(_obj), ::android::nfc::tech::TagTechnology(_obj), ::java::io::Closeable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IsoDep(const ::android::nfc::tech::IsoDep& x) : ::java::lang::Object((jobject)0), ::android::nfc::tech::BasicTagTechnology((jobject)0), ::android::nfc::tech::TagTechnology((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj;}
    IsoDep(::android::nfc::tech::IsoDep&& x) : ::java::lang::Object((jobject)0), ::android::nfc::tech::BasicTagTechnology((jobject)0), ::android::nfc::tech::TagTechnology((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::nfc::tech::IsoDep& operator=(const ::android::nfc::tech::IsoDep& x) {obj = x.obj; return *this;}
    ::android::nfc::tech::IsoDep& operator=(::android::nfc::tech::IsoDep&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::nfc::tech::IsoDep get(const ::android::nfc::Tag&);
    void setTimeout(int32_t) const ;
    int32_t getTimeout() const ;
    std::vector< int8_t> getHistoricalBytes() const ;
    std::vector< int8_t> getHiLayerResponse() const ;
    std::vector< int8_t> transceive(const std::vector< int8_t>&) const ;
    int32_t getMaxTransceiveLength() const ;
    void close() const ;
    void connect() const ;
    bool isConnected() const ;
    ::android::nfc::Tag getTag() const ;

};
}
}
}


