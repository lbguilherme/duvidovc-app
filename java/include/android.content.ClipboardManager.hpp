#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.ClipboardManager.hpp"

namespace android { namespace content { class ClipData; } }
namespace android { namespace content { class ClipDescription; } }
namespace android { namespace content { class ClipboardManager_OnPrimaryClipChangedListener; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace content {
class ClipboardManager : public virtual ::java::lang::Object,
                         public virtual ::android::text::ClipboardManager {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ClipboardManager(jobject _obj) : ::java::lang::Object(_obj), ::android::text::ClipboardManager(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ClipboardManager(const ::android::content::ClipboardManager& x) : ::java::lang::Object((jobject)0), ::android::text::ClipboardManager((jobject)0) {obj = x.obj;}
    ClipboardManager(::android::content::ClipboardManager&& x) : ::java::lang::Object((jobject)0), ::android::text::ClipboardManager((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::ClipboardManager& operator=(const ::android::content::ClipboardManager& x) {obj = x.obj; return *this;}
    ::android::content::ClipboardManager& operator=(::android::content::ClipboardManager&& x) {obj = std::move(x.obj); return *this;}
    
    void setPrimaryClip(const ::android::content::ClipData&) const ;
    ::android::content::ClipData getPrimaryClip() const ;
    ::android::content::ClipDescription getPrimaryClipDescription() const ;
    bool hasPrimaryClip() const ;
    void addPrimaryClipChangedListener(const ::android::content::ClipboardManager_OnPrimaryClipChangedListener&) const ;
    void removePrimaryClipChangedListener(const ::android::content::ClipboardManager_OnPrimaryClipChangedListener&) const ;
    ::java::lang::CharSequence getText() const ;
    void setText(const ::java::lang::CharSequence&) const ;
    bool hasText() const ;

};
}
}

#include "android.content.ClipboardManager_OnPrimaryClipChangedListener.hpp"

