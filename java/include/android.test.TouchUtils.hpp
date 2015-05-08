#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace test { class ActivityInstrumentationTestCase; } }
namespace android { namespace test { class InstrumentationTestCase; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }

namespace android {
namespace test {
class TouchUtils : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TouchUtils(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TouchUtils(const ::android::test::TouchUtils& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TouchUtils(::android::test::TouchUtils&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::TouchUtils& operator=(const ::android::test::TouchUtils& x) {obj = x.obj; return *this;}
    ::android::test::TouchUtils& operator=(::android::test::TouchUtils&& x) {obj = std::move(x.obj); return *this;}
    
    TouchUtils();
    static void dragQuarterScreenDown(const ::android::test::ActivityInstrumentationTestCase&);
    static void dragQuarterScreenDown(const ::android::test::InstrumentationTestCase&, const ::android::app::Activity&);
    static void dragQuarterScreenUp(const ::android::test::ActivityInstrumentationTestCase&);
    static void dragQuarterScreenUp(const ::android::test::InstrumentationTestCase&, const ::android::app::Activity&);
    static void scrollToBottom(const ::android::test::ActivityInstrumentationTestCase&, const ::android::view::ViewGroup&);
    static void scrollToBottom(const ::android::test::InstrumentationTestCase&, const ::android::app::Activity&, const ::android::view::ViewGroup&);
    static void scrollToTop(const ::android::test::ActivityInstrumentationTestCase&, const ::android::view::ViewGroup&);
    static void scrollToTop(const ::android::test::InstrumentationTestCase&, const ::android::app::Activity&, const ::android::view::ViewGroup&);
    static void dragViewToBottom(const ::android::test::ActivityInstrumentationTestCase&, const ::android::view::View&);
    static void dragViewToBottom(const ::android::test::InstrumentationTestCase&, const ::android::app::Activity&, const ::android::view::View&);
    static void dragViewToBottom(const ::android::test::ActivityInstrumentationTestCase&, const ::android::view::View&, int32_t);
    static void dragViewToBottom(const ::android::test::InstrumentationTestCase&, const ::android::app::Activity&, const ::android::view::View&, int32_t);
    static void tapView(const ::android::test::InstrumentationTestCase&, const ::android::view::View&);
    static void touchAndCancelView(const ::android::test::InstrumentationTestCase&, const ::android::view::View&);
    static void clickView(const ::android::test::InstrumentationTestCase&, const ::android::view::View&);
    static void longClickView(const ::android::test::ActivityInstrumentationTestCase&, const ::android::view::View&);
    static void longClickView(const ::android::test::InstrumentationTestCase&, const ::android::view::View&);
    static void dragViewToTop(const ::android::test::ActivityInstrumentationTestCase&, const ::android::view::View&);
    static void dragViewToTop(const ::android::test::ActivityInstrumentationTestCase&, const ::android::view::View&, int32_t);
    static void dragViewToTop(const ::android::test::InstrumentationTestCase&, const ::android::view::View&);
    static void dragViewToTop(const ::android::test::InstrumentationTestCase&, const ::android::view::View&, int32_t);
    static int32_t dragViewBy(const ::android::test::ActivityInstrumentationTestCase&, const ::android::view::View&, int32_t, int32_t, int32_t);
    static int32_t dragViewBy(const ::android::test::InstrumentationTestCase&, const ::android::view::View&, int32_t, int32_t, int32_t);
    static int32_t dragViewTo(const ::android::test::ActivityInstrumentationTestCase&, const ::android::view::View&, int32_t, int32_t, int32_t);
    static int32_t dragViewTo(const ::android::test::InstrumentationTestCase&, const ::android::view::View&, int32_t, int32_t, int32_t);
    static int32_t dragViewToX(const ::android::test::ActivityInstrumentationTestCase&, const ::android::view::View&, int32_t, int32_t);
    static int32_t dragViewToX(const ::android::test::InstrumentationTestCase&, const ::android::view::View&, int32_t, int32_t);
    static int32_t dragViewToY(const ::android::test::ActivityInstrumentationTestCase&, const ::android::view::View&, int32_t, int32_t);
    static int32_t dragViewToY(const ::android::test::InstrumentationTestCase&, const ::android::view::View&, int32_t, int32_t);
    static void drag(const ::android::test::ActivityInstrumentationTestCase&, float, float, float, float, int32_t);
    static void drag(const ::android::test::InstrumentationTestCase&, float, float, float, float, int32_t);

};
}
}


