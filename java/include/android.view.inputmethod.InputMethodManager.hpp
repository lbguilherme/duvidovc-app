#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class IBinder; } }
namespace android { namespace os { class ResultReceiver; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { namespace inputmethod { class CompletionInfo; } } }
namespace android { namespace view { namespace inputmethod { class ExtractedText; } } }
namespace android { namespace view { namespace inputmethod { class InputMethodInfo; } } }
namespace android { namespace view { namespace inputmethod { class InputMethodSubtype; } } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }
namespace java { namespace util { class Map; } }

namespace android {
namespace view {
namespace inputmethod {
class InputMethodManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InputMethodManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InputMethodManager(const ::android::view::inputmethod::InputMethodManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    InputMethodManager(::android::view::inputmethod::InputMethodManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::inputmethod::InputMethodManager& operator=(const ::android::view::inputmethod::InputMethodManager& x) {obj = x.obj; return *this;}
    ::android::view::inputmethod::InputMethodManager& operator=(::android::view::inputmethod::InputMethodManager&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::util::List getInputMethodList() const;
    ::java::util::List getEnabledInputMethodList() const;
    ::java::util::List getEnabledInputMethodSubtypeList(const ::android::view::inputmethod::InputMethodInfo&, bool) const;
    void showStatusIcon(const ::android::os::IBinder&, const ::java::lang::String&, int32_t) const;
    void hideStatusIcon(const ::android::os::IBinder&) const;
    bool isFullscreenMode() const;
    bool isActive(const ::android::view::View&) const;
    bool isActive() const;
    bool isAcceptingText() const;
    void displayCompletions(const ::android::view::View&, const std::vector< ::android::view::inputmethod::CompletionInfo>&) const;
    void updateExtractedText(const ::android::view::View&, int32_t, const ::android::view::inputmethod::ExtractedText&) const;
    bool showSoftInput(const ::android::view::View&, int32_t) const;
    bool showSoftInput(const ::android::view::View&, int32_t, const ::android::os::ResultReceiver&) const;
    bool hideSoftInputFromWindow(const ::android::os::IBinder&, int32_t) const;
    bool hideSoftInputFromWindow(const ::android::os::IBinder&, int32_t, const ::android::os::ResultReceiver&) const;
    void toggleSoftInputFromWindow(const ::android::os::IBinder&, int32_t, int32_t) const;
    void toggleSoftInput(int32_t, int32_t) const;
    void restartInput(const ::android::view::View&) const;
    void updateSelection(const ::android::view::View&, int32_t, int32_t, int32_t, int32_t) const;
    void viewClicked(const ::android::view::View&) const;
    bool isWatchingCursor(const ::android::view::View&) const;
    void updateCursor(const ::android::view::View&, int32_t, int32_t, int32_t, int32_t) const;
    void sendAppPrivateCommand(const ::android::view::View&, const ::java::lang::String&, const ::android::os::Bundle&) const;
    void setInputMethod(const ::android::os::IBinder&, const ::java::lang::String&) const;
    void setInputMethodAndSubtype(const ::android::os::IBinder&, const ::java::lang::String&, const ::android::view::inputmethod::InputMethodSubtype&) const;
    void hideSoftInputFromInputMethod(const ::android::os::IBinder&, int32_t) const;
    void showSoftInputFromInputMethod(const ::android::os::IBinder&, int32_t) const;
    void showInputMethodPicker() const;
    void showInputMethodAndSubtypeEnabler(const ::java::lang::String&) const;
    ::android::view::inputmethod::InputMethodSubtype getCurrentInputMethodSubtype() const;
    bool setCurrentInputMethodSubtype(const ::android::view::inputmethod::InputMethodSubtype&) const;
    ::java::util::Map getShortcutInputMethodsAndSubtypes() const;
    bool switchToLastInputMethod(const ::android::os::IBinder&) const;
    void setAdditionalInputMethodSubtypes(const ::java::lang::String&, const std::vector< ::android::view::inputmethod::InputMethodSubtype>&) const;
    ::android::view::inputmethod::InputMethodSubtype getLastInputMethodSubtype() const;

};
}
}
}


