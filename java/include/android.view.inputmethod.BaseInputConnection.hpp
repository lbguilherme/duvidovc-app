#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.inputmethod.InputConnection.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace text { class Editable; } }
namespace android { namespace text { class Spannable; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { namespace inputmethod { class CompletionInfo; } } }
namespace android { namespace view { namespace inputmethod { class CorrectionInfo; } } }
namespace android { namespace view { namespace inputmethod { class ExtractedText; } } }
namespace android { namespace view { namespace inputmethod { class ExtractedTextRequest; } } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace view {
namespace inputmethod {
class BaseInputConnection : public virtual ::java::lang::Object,
                            public virtual ::android::view::inputmethod::InputConnection {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BaseInputConnection(jobject _obj) : ::java::lang::Object(_obj), ::android::view::inputmethod::InputConnection(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BaseInputConnection(const ::android::view::inputmethod::BaseInputConnection& x) : ::java::lang::Object((jobject)0), ::android::view::inputmethod::InputConnection((jobject)0) {obj = x.obj;}
    BaseInputConnection(::android::view::inputmethod::BaseInputConnection&& x) : ::java::lang::Object((jobject)0), ::android::view::inputmethod::InputConnection((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::inputmethod::BaseInputConnection& operator=(const ::android::view::inputmethod::BaseInputConnection& x) {obj = x.obj; return *this;}
    ::android::view::inputmethod::BaseInputConnection& operator=(::android::view::inputmethod::BaseInputConnection&& x) {obj = std::move(x.obj); return *this;}
    
    BaseInputConnection(const ::android::view::View&, bool);
    static void removeComposingSpans(const ::android::text::Spannable&);
    static void setComposingSpans(const ::android::text::Spannable&);
    static int32_t getComposingSpanStart(const ::android::text::Spannable&);
    static int32_t getComposingSpanEnd(const ::android::text::Spannable&);
    ::android::text::Editable getEditable() const;
    bool beginBatchEdit() const;
    bool endBatchEdit() const;
    bool clearMetaKeyStates(int32_t) const;
    bool commitCompletion(const ::android::view::inputmethod::CompletionInfo&) const;
    bool commitCorrection(const ::android::view::inputmethod::CorrectionInfo&) const;
    bool commitText(const ::java::lang::CharSequence&, int32_t) const;
    bool deleteSurroundingText(int32_t, int32_t) const;
    bool finishComposingText() const;
    int32_t getCursorCapsMode(int32_t) const;
    ::android::view::inputmethod::ExtractedText getExtractedText(const ::android::view::inputmethod::ExtractedTextRequest&, int32_t) const;
    ::java::lang::CharSequence getTextBeforeCursor(int32_t, int32_t) const;
    ::java::lang::CharSequence getSelectedText(int32_t) const;
    ::java::lang::CharSequence getTextAfterCursor(int32_t, int32_t) const;
    bool performEditorAction(int32_t) const;
    bool performContextMenuAction(int32_t) const;
    bool performPrivateCommand(const ::java::lang::String&, const ::android::os::Bundle&) const;
    bool setComposingText(const ::java::lang::CharSequence&, int32_t) const;
    bool setComposingRegion(int32_t, int32_t) const;
    bool setSelection(int32_t, int32_t) const;
    bool sendKeyEvent(const ::android::view::KeyEvent&) const;
    bool reportFullscreenMode(bool) const;

};
}
}
}


