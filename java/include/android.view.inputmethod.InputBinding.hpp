#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class IBinder; } }
namespace android { namespace os { class Parcel; } }
namespace android { namespace view { namespace inputmethod { class InputBinding; } } }
namespace android { namespace view { namespace inputmethod { class InputConnection; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace view {
namespace inputmethod {
class InputBinding : public virtual ::java::lang::Object,
                     public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InputBinding(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InputBinding(const ::android::view::inputmethod::InputBinding& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    InputBinding(::android::view::inputmethod::InputBinding&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::inputmethod::InputBinding& operator=(const ::android::view::inputmethod::InputBinding& x) {obj = x.obj; return *this;}
    ::android::view::inputmethod::InputBinding& operator=(::android::view::inputmethod::InputBinding&& x) {obj = std::move(x.obj); return *this;}
    
    InputBinding(const ::android::view::inputmethod::InputConnection&, const ::android::os::IBinder&, int32_t, int32_t);
    InputBinding(const ::android::view::inputmethod::InputConnection&, const ::android::view::inputmethod::InputBinding&);
    ::android::view::inputmethod::InputConnection getConnection() const ;
    ::android::os::IBinder getConnectionToken() const ;
    int32_t getUid() const ;
    int32_t getPid() const ;
    ::java::lang::String toString() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    int32_t describeContents() const ;

};
}
}
}


