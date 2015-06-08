#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"
#include "android.view.InputEvent.hpp"

namespace android { namespace os { class Parcel; } }
namespace android { namespace view { class KeyCharacterMap; } }
namespace android { namespace view { class KeyCharacterMap_KeyData; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class KeyEvent_Callback; } }
namespace android { namespace view { class KeyEvent_DispatcherState; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace view {
class KeyEvent : public virtual ::java::lang::Object,
                 public virtual ::android::os::Parcelable,
                 public virtual ::android::view::InputEvent {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyEvent(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::android::view::InputEvent(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyEvent(const ::android::view::KeyEvent& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::InputEvent((jobject)0) {obj = x.obj;}
    KeyEvent(::android::view::KeyEvent&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::InputEvent((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::KeyEvent& operator=(const ::android::view::KeyEvent& x) {obj = x.obj; return *this;}
    ::android::view::KeyEvent& operator=(::android::view::KeyEvent&& x) {obj = std::move(x.obj); return *this;}
    
    KeyEvent(int32_t, int32_t);
    KeyEvent(int64_t, int64_t, int32_t, int32_t, int32_t);
    KeyEvent(int64_t, int64_t, int32_t, int32_t, int32_t, int32_t);
    KeyEvent(int64_t, int64_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
    KeyEvent(int64_t, int64_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
    KeyEvent(int64_t, int64_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
    KeyEvent(int64_t, const ::java::lang::String&, int32_t, int32_t);
    KeyEvent(const ::android::view::KeyEvent&, int64_t, int32_t);
    static int32_t getMaxKeyCode();
    static int32_t getDeadChar(int32_t, int32_t);
    static ::android::view::KeyEvent changeTimeRepeat(const ::android::view::KeyEvent&, int64_t, int32_t);
    static ::android::view::KeyEvent changeTimeRepeat(const ::android::view::KeyEvent&, int64_t, int32_t, int32_t);
    static ::android::view::KeyEvent changeAction(const ::android::view::KeyEvent&, int32_t);
    static ::android::view::KeyEvent changeFlags(const ::android::view::KeyEvent&, int32_t);
    bool isSystem() const;
    static bool isGamepadButton(int32_t);
    int32_t getDeviceId() const;
    int32_t getSource() const;
    void setSource(int32_t) const;
    int32_t getMetaState() const;
    int32_t getModifiers() const;
    int32_t getFlags() const;
    static int32_t getModifierMetaStateMask();
    static bool isModifierKey(int32_t);
    static int32_t normalizeMetaState(int32_t);
    static bool metaStateHasNoModifiers(int32_t);
    static bool metaStateHasModifiers(int32_t, int32_t);
    bool hasNoModifiers() const;
    bool hasModifiers(int32_t) const;
    bool isAltPressed() const;
    bool isShiftPressed() const;
    bool isSymPressed() const;
    bool isCtrlPressed() const;
    bool isMetaPressed() const;
    bool isFunctionPressed() const;
    bool isCapsLockOn() const;
    bool isNumLockOn() const;
    bool isScrollLockOn() const;
    int32_t getAction() const;
    bool isCanceled() const;
    void startTracking() const;
    bool isTracking() const;
    bool isLongPress() const;
    int32_t getKeyCode() const;
    ::java::lang::String getCharacters() const;
    int32_t getScanCode() const;
    int32_t getRepeatCount() const;
    int64_t getDownTime() const;
    int64_t getEventTime() const;
    ::android::view::KeyCharacterMap getKeyCharacterMap() const;
    uint16_t getDisplayLabel() const;
    int32_t getUnicodeChar() const;
    int32_t getUnicodeChar(int32_t) const;
    bool getKeyData(const ::android::view::KeyCharacterMap_KeyData&) const;
    uint16_t getMatch(const std::vector< uint16_t>&) const;
    uint16_t getMatch(const std::vector< uint16_t>&, int32_t) const;
    uint16_t getNumber() const;
    bool isPrintingKey() const;
    bool dispatch(const ::android::view::KeyEvent_Callback&) const;
    bool dispatch(const ::android::view::KeyEvent_Callback&, const ::android::view::KeyEvent_DispatcherState&, const ::java::lang::Object&) const;
    ::java::lang::String toString() const;
    static ::java::lang::String keyCodeToString(int32_t);
    static int32_t keyCodeFromString(const ::java::lang::String&);
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;

};
}
}

#include "android.view.KeyEvent_Callback.hpp"
#include "android.view.KeyEvent_DispatcherState.hpp"

