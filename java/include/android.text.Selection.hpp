#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace text { class Layout; } }
namespace android { namespace text { class Spannable; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace text {
class Selection : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Selection(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Selection(const ::android::text::Selection& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Selection(::android::text::Selection&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::Selection& operator=(const ::android::text::Selection& x) {obj = x.obj; return *this;}
    ::android::text::Selection& operator=(::android::text::Selection&& x) {obj = std::move(x.obj); return *this;}
    
    static int32_t getSelectionStart(const ::java::lang::CharSequence&);
    static int32_t getSelectionEnd(const ::java::lang::CharSequence&);
    static void setSelection(const ::android::text::Spannable&, int32_t, int32_t);
    static void setSelection(const ::android::text::Spannable&, int32_t);
    static void selectAll(const ::android::text::Spannable&);
    static void extendSelection(const ::android::text::Spannable&, int32_t);
    static void removeSelection(const ::android::text::Spannable&);
    static bool moveUp(const ::android::text::Spannable&, const ::android::text::Layout&);
    static bool moveDown(const ::android::text::Spannable&, const ::android::text::Layout&);
    static bool moveLeft(const ::android::text::Spannable&, const ::android::text::Layout&);
    static bool moveRight(const ::android::text::Spannable&, const ::android::text::Layout&);
    static bool extendUp(const ::android::text::Spannable&, const ::android::text::Layout&);
    static bool extendDown(const ::android::text::Spannable&, const ::android::text::Layout&);
    static bool extendLeft(const ::android::text::Spannable&, const ::android::text::Layout&);
    static bool extendRight(const ::android::text::Spannable&, const ::android::text::Layout&);
    static bool extendToLeftEdge(const ::android::text::Spannable&, const ::android::text::Layout&);
    static bool extendToRightEdge(const ::android::text::Spannable&, const ::android::text::Layout&);
    static bool moveToLeftEdge(const ::android::text::Spannable&, const ::android::text::Layout&);
    static bool moveToRightEdge(const ::android::text::Spannable&, const ::android::text::Layout&);

};
}
}


