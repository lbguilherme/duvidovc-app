#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"


namespace android {
namespace text {
class ParcelableSpan : public virtual ::java::lang::Object,
                       public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ParcelableSpan(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ParcelableSpan(const ::android::text::ParcelableSpan& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    ParcelableSpan(::android::text::ParcelableSpan&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::ParcelableSpan& operator=(const ::android::text::ParcelableSpan& x) {obj = x.obj; return *this;}
    ::android::text::ParcelableSpan& operator=(::android::text::ParcelableSpan&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getSpanTypeId() const;

};
}
}


