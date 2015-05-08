#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class ContentProviderOperation; } }
namespace android { namespace content { class ContentProviderOperation_Builder; } }
namespace android { namespace content { class ContentValues; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
class ContentProviderOperation_Builder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContentProviderOperation_Builder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContentProviderOperation_Builder(const ::android::content::ContentProviderOperation_Builder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ContentProviderOperation_Builder(::android::content::ContentProviderOperation_Builder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::ContentProviderOperation_Builder& operator=(const ::android::content::ContentProviderOperation_Builder& x) {obj = x.obj; return *this;}
    ::android::content::ContentProviderOperation_Builder& operator=(::android::content::ContentProviderOperation_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::content::ContentProviderOperation build() const ;
    ::android::content::ContentProviderOperation_Builder withValueBackReferences(const ::android::content::ContentValues&) const ;
    ::android::content::ContentProviderOperation_Builder withValueBackReference(const ::java::lang::String&, int32_t) const ;
    ::android::content::ContentProviderOperation_Builder withSelectionBackReference(int32_t, int32_t) const ;
    ::android::content::ContentProviderOperation_Builder withValues(const ::android::content::ContentValues&) const ;
    ::android::content::ContentProviderOperation_Builder withValue(const ::java::lang::String&, const ::java::lang::Object&) const ;
    ::android::content::ContentProviderOperation_Builder withSelection(const ::java::lang::String&, const std::vector< ::java::lang::String>&) const ;
    ::android::content::ContentProviderOperation_Builder withExpectedCount(int32_t) const ;
    ::android::content::ContentProviderOperation_Builder withYieldAllowed(bool) const ;

};
}
}


