#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"
#include "android.view.accessibility.AccessibilityRecord.hpp"

namespace android { namespace os { class Parcel; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }
namespace android { namespace view { namespace accessibility { class AccessibilityRecord; } } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace view {
namespace accessibility {
class AccessibilityEvent : public virtual ::java::lang::Object,
                           public virtual ::android::os::Parcelable,
                           public virtual ::android::view::accessibility::AccessibilityRecord {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityEvent(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::android::view::accessibility::AccessibilityRecord(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::accessibility::AccessibilityRecord((jobject)0) {obj = x.obj;}
    AccessibilityEvent(::android::view::accessibility::AccessibilityEvent&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::accessibility::AccessibilityRecord((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::accessibility::AccessibilityEvent& operator=(const ::android::view::accessibility::AccessibilityEvent& x) {obj = x.obj; return *this;}
    ::android::view::accessibility::AccessibilityEvent& operator=(::android::view::accessibility::AccessibilityEvent&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getRecordCount() const ;
    void appendRecord(const ::android::view::accessibility::AccessibilityRecord&) const ;
    ::android::view::accessibility::AccessibilityRecord getRecord(int32_t) const ;
    int32_t getEventType() const ;
    void setEventType(int32_t) const ;
    int64_t getEventTime() const ;
    void setEventTime(int64_t) const ;
    ::java::lang::CharSequence getPackageName() const ;
    void setPackageName(const ::java::lang::CharSequence&) const ;
    static ::android::view::accessibility::AccessibilityEvent obtain(int32_t);
    static ::android::view::accessibility::AccessibilityEvent obtain(const ::android::view::accessibility::AccessibilityEvent&);
    static ::android::view::accessibility::AccessibilityEvent obtain();
    void recycle() const ;
    void initFromParcel(const ::android::os::Parcel&) const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    int32_t describeContents() const ;
    ::java::lang::String toString() const ;
    static ::java::lang::String eventTypeToString(int32_t);

};
}
}
}


