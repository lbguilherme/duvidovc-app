#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { namespace inputmethod { class CompletionInfo; } } }
namespace android { namespace view { namespace inputmethod { class CorrectionInfo; } } }
namespace android { namespace view { namespace inputmethod { class ExtractedText; } } }
namespace android { namespace view { namespace inputmethod { class ExtractedTextRequest; } } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace view {
namespace inputmethod {
class InputConnection : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InputConnection(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InputConnection(const ::android::view::inputmethod::InputConnection& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    InputConnection(::android::view::inputmethod::InputConnection&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::inputmethod::InputConnection& operator=(const ::android::view::inputmethod::InputConnection& x) {obj = x.obj; return *this;}
    ::android::view::inputmethod::InputConnection& operator=(::android::view::inputmethod::InputConnection&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::CharSequence getTextBeforeCursor(int32_t, int32_t) const;
    ::java::lang::CharSequence getTextAfterCursor(int32_t, int32_t) const;
    ::java::lang::CharSequence getSelectedText(int32_t) const;
    int32_t getCursorCapsMode(int32_t) const;
    ::android::view::inputmethod::ExtractedText getExtractedText(const ::android::view::inputmethod::ExtractedTextRequest&, int32_t) const;
    bool deleteSurroundingText(int32_t, int32_t) const;
    bool setComposingText(const ::java::lang::CharSequence&, int32_t) const;
    bool setComposingRegion(int32_t, int32_t) const;
    bool finishComposingText() const;
    bool commitText(const ::java::lang::CharSequence&, int32_t) const;
    bool commitCompletion(const ::android::view::inputmethod::CompletionInfo&) const;
    bool commitCorrection(const ::android::view::inputmethod::CorrectionInfo&) const;
    bool setSelection(int32_t, int32_t) const;
    bool performEditorAction(int32_t) const;
    bool performContextMenuAction(int32_t) const;
    bool beginBatchEdit() const;
    bool endBatchEdit() const;
    bool sendKeyEvent(const ::android::view::KeyEvent&) const;
    bool clearMetaKeyStates(int32_t) const;
    bool reportFullscreenMode(bool) const;
    bool performPrivateCommand(const ::java::lang::String&, const ::android::os::Bundle&) const;

};
}
}
}


