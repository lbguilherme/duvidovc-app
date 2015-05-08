#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.share.model.ShareModel.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class Parcel; } }
namespace com { namespace facebook { namespace share { namespace model { class ShareOpenGraphObject; } } } }
namespace com { namespace facebook { namespace share { namespace model { class SharePhoto; } } } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class ArrayList; } }
namespace java { namespace util { class Set; } }

namespace com {
namespace facebook {
namespace share {
namespace model {
class ShareOpenGraphValueContainer : public virtual ::java::lang::Object,
                                     public virtual ::com::facebook::share::model::ShareModel {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShareOpenGraphValueContainer(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::com::facebook::share::model::ShareModel(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShareOpenGraphValueContainer(const ::com::facebook::share::model::ShareOpenGraphValueContainer& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::com::facebook::share::model::ShareModel((jobject)0) {obj = x.obj;}
    ShareOpenGraphValueContainer(::com::facebook::share::model::ShareOpenGraphValueContainer&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::com::facebook::share::model::ShareModel((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::model::ShareOpenGraphValueContainer& operator=(const ::com::facebook::share::model::ShareOpenGraphValueContainer& x) {obj = x.obj; return *this;}
    ::com::facebook::share::model::ShareOpenGraphValueContainer& operator=(::com::facebook::share::model::ShareOpenGraphValueContainer&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object get(const ::java::lang::String&) const ;
    bool getBoolean(const ::java::lang::String&, bool) const ;
    std::vector< bool> getBooleanArray(const ::java::lang::String&) const ;
    double getDouble(const ::java::lang::String&, double) const ;
    std::vector< double> getDoubleArray(const ::java::lang::String&) const ;
    int32_t getInt(const ::java::lang::String&, int32_t) const ;
    std::vector< int32_t> getIntArray(const ::java::lang::String&) const ;
    int64_t getLong(const ::java::lang::String&, int64_t) const ;
    std::vector< int64_t> getLongArray(const ::java::lang::String&) const ;
    ::com::facebook::share::model::ShareOpenGraphObject getObject(const ::java::lang::String&) const ;
    ::java::util::ArrayList getObjectArrayList(const ::java::lang::String&) const ;
    ::com::facebook::share::model::SharePhoto getPhoto(const ::java::lang::String&) const ;
    ::java::util::ArrayList getPhotoArrayList(const ::java::lang::String&) const ;
    ::java::lang::String getString(const ::java::lang::String&) const ;
    ::java::util::ArrayList getStringArrayList(const ::java::lang::String&) const ;
    ::android::os::Bundle getBundle() const ;
    ::java::util::Set keySet() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}
}
}

#include "com.facebook.share.model.ShareOpenGraphValueContainer_Builder.hpp"

