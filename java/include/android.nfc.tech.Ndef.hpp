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
namespace android { namespace nfc { namespace tech { class Ndef; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace nfc {
namespace tech {
class Ndef : public virtual ::java::lang::Object,
             public virtual ::android::nfc::tech::BasicTagTechnology {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Ndef(jobject _obj) : ::java::lang::Object(_obj), ::android::nfc::tech::BasicTagTechnology(_obj), ::android::nfc::tech::TagTechnology(_obj), ::java::io::Closeable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Ndef(const ::android::nfc::tech::Ndef& x) : ::java::lang::Object((jobject)0), ::android::nfc::tech::BasicTagTechnology((jobject)0), ::android::nfc::tech::TagTechnology((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj;}
    Ndef(::android::nfc::tech::Ndef&& x) : ::java::lang::Object((jobject)0), ::android::nfc::tech::BasicTagTechnology((jobject)0), ::android::nfc::tech::TagTechnology((jobject)0), ::java::io::Closeable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::nfc::tech::Ndef& operator=(const ::android::nfc::tech::Ndef& x) {obj = x.obj; return *this;}
    ::android::nfc::tech::Ndef& operator=(::android::nfc::tech::Ndef&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::nfc::tech::Ndef get(const ::android::nfc::Tag&);
    ::android::nfc::NdefMessage getCachedNdefMessage() const;
    ::java::lang::String getType() const;
    int32_t getMaxSize() const;
    bool isWritable() const;
    ::android::nfc::NdefMessage getNdefMessage() const;
    void writeNdefMessage(const ::android::nfc::NdefMessage&) const;
    bool canMakeReadOnly() const;
    bool makeReadOnly() const;
    void close() const;
    void connect() const;
    bool isConnected() const;
    ::android::nfc::Tag getTag() const;

};
}
}
}


