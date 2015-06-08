#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace content { class SyncAdapterType; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
class SyncAdapterType : public virtual ::java::lang::Object,
                        public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SyncAdapterType(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SyncAdapterType(const ::android::content::SyncAdapterType& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    SyncAdapterType(::android::content::SyncAdapterType&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::SyncAdapterType& operator=(const ::android::content::SyncAdapterType& x) {obj = x.obj; return *this;}
    ::android::content::SyncAdapterType& operator=(::android::content::SyncAdapterType&& x) {obj = std::move(x.obj); return *this;}
    
    SyncAdapterType(const ::java::lang::String&, const ::java::lang::String&, bool, bool);
    SyncAdapterType(const ::android::os::Parcel&);
    bool supportsUploading() const;
    bool isUserVisible() const;
    bool allowParallelSyncs() const;
    bool isAlwaysSyncable() const;
    ::java::lang::String getSettingsActivity() const;
    static ::android::content::SyncAdapterType newKey(const ::java::lang::String&, const ::java::lang::String&);
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;
    ::java::lang::String toString() const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;

};
}
}


