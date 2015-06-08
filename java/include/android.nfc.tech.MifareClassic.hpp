#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.nfc.tech.BasicTagTechnology.hpp"

namespace android { namespace nfc { class Tag; } }
namespace android { namespace nfc { namespace tech { class MifareClassic; } } }

namespace android {
namespace nfc {
namespace tech {
class MifareClassic : public virtual ::java::lang::Object,
                      public virtual ::android::nfc::tech::BasicTagTechnology {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MifareClassic(jobject _obj) : ::java::lang::Object(_obj), ::android::nfc::tech::BasicTagTechnology(_obj), ::android::nfc::tech::TagTechnology(_obj), ::java::io::Closeable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MifareClassic(const ::android::nfc::tech::MifareClassic& x) : ::java::lang::Object((jobject)0), ::android::nfc::tech::BasicTagTechnology((jobject)0), ::android::nfc::tech::TagTechnology((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj;}
    MifareClassic(::android::nfc::tech::MifareClassic&& x) : ::java::lang::Object((jobject)0), ::android::nfc::tech::BasicTagTechnology((jobject)0), ::android::nfc::tech::TagTechnology((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::nfc::tech::MifareClassic& operator=(const ::android::nfc::tech::MifareClassic& x) {obj = x.obj; return *this;}
    ::android::nfc::tech::MifareClassic& operator=(::android::nfc::tech::MifareClassic&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::nfc::tech::MifareClassic get(const ::android::nfc::Tag&);
    int32_t getType() const;
    int32_t getSize() const;
    int32_t getSectorCount() const;
    int32_t getBlockCount() const;
    int32_t getBlockCountInSector(int32_t) const;
    int32_t blockToSector(int32_t) const;
    int32_t sectorToBlock(int32_t) const;
    bool authenticateSectorWithKeyA(int32_t, const std::vector< int8_t>&) const;
    bool authenticateSectorWithKeyB(int32_t, const std::vector< int8_t>&) const;
    std::vector< int8_t> readBlock(int32_t) const;
    void writeBlock(int32_t, const std::vector< int8_t>&) const;
    void increment(int32_t, int32_t) const;
    void decrement(int32_t, int32_t) const;
    void transfer(int32_t) const;
    void restore(int32_t) const;
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


