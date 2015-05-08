#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace text { class Editable; } }
namespace android { namespace text { class Spannable; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace text {
namespace method {
class MetaKeyKeyListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MetaKeyKeyListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MetaKeyKeyListener(const ::android::text::method::MetaKeyKeyListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MetaKeyKeyListener(::android::text::method::MetaKeyKeyListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::method::MetaKeyKeyListener& operator=(const ::android::text::method::MetaKeyKeyListener& x) {obj = x.obj; return *this;}
    ::android::text::method::MetaKeyKeyListener& operator=(::android::text::method::MetaKeyKeyListener&& x) {obj = std::move(x.obj); return *this;}
    
    MetaKeyKeyListener();
    static void resetMetaState(const ::android::text::Spannable&);
    static int32_t getMetaState(const ::java::lang::CharSequence&);
    static int32_t getMetaState(const ::java::lang::CharSequence&, int32_t);
    static void adjustMetaAfterKeypress(const ::android::text::Spannable&);
    static bool isMetaTracker(const ::java::lang::CharSequence&, const ::java::lang::Object&);
    static bool isSelectingMetaTracker(const ::java::lang::CharSequence&, const ::java::lang::Object&);
    bool onKeyDown(const ::android::view::View&, const ::android::text::Editable&, int32_t, const ::android::view::KeyEvent&) const ;
    bool onKeyUp(const ::android::view::View&, const ::android::text::Editable&, int32_t, const ::android::view::KeyEvent&) const ;
    void clearMetaKeyState(const ::android::view::View&, const ::android::text::Editable&, int32_t) const ;
    static void clearMetaKeyState(const ::android::text::Editable&, int32_t);
    static int64_t resetLockedMeta(int64_t);
    static int32_t getMetaState(int64_t);
    static int32_t getMetaState(int64_t, int32_t);
    static int64_t adjustMetaAfterKeypress(int64_t);
    static int64_t handleKeyDown(int64_t, int32_t, const ::android::view::KeyEvent&);
    static int64_t handleKeyUp(int64_t, int32_t, const ::android::view::KeyEvent&);
    int64_t clearMetaKeyState(int64_t, int32_t) const ;

};
}
}
}


