#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class KeyCharacterMap; } }
namespace android { namespace view { class KeyCharacterMap_KeyData; } }
namespace android { namespace view { class KeyEvent; } }

namespace android {
namespace view {
class KeyCharacterMap : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyCharacterMap(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyCharacterMap(const ::android::view::KeyCharacterMap& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    KeyCharacterMap(::android::view::KeyCharacterMap&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::KeyCharacterMap& operator=(const ::android::view::KeyCharacterMap& x) {obj = x.obj; return *this;}
    ::android::view::KeyCharacterMap& operator=(::android::view::KeyCharacterMap&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::view::KeyCharacterMap load(int32_t);
    int32_t get(int32_t, int32_t) const ;
    uint16_t getNumber(int32_t) const ;
    uint16_t getMatch(int32_t, const std::vector< uint16_t>&) const ;
    uint16_t getMatch(int32_t, const std::vector< uint16_t>&, int32_t) const ;
    uint16_t getDisplayLabel(int32_t) const ;
    static int32_t getDeadChar(int32_t, int32_t);
    bool getKeyData(int32_t, const ::android::view::KeyCharacterMap_KeyData&) const ;
    std::vector< ::android::view::KeyEvent> getEvents(const std::vector< uint16_t>&) const ;
    bool isPrintingKey(int32_t) const ;
    int32_t getKeyboardType() const ;
    int32_t getModifierBehavior() const ;
    static bool deviceHasKey(int32_t);
    static std::vector< bool> deviceHasKeys(const std::vector< int32_t>&);

};
}
}

#include "android.view.KeyCharacterMap_KeyData.hpp"
#include "android.view.KeyCharacterMap_UnavailableException.hpp"

