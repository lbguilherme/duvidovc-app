#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"

namespace android { namespace graphics { class Bitmap; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace webkit {
class WebHistoryItem : public virtual ::java::lang::Object,
                       public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WebHistoryItem(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WebHistoryItem(const ::android::webkit::WebHistoryItem& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    WebHistoryItem(::android::webkit::WebHistoryItem&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::WebHistoryItem& operator=(const ::android::webkit::WebHistoryItem& x) {obj = x.obj; return *this;}
    ::android::webkit::WebHistoryItem& operator=(::android::webkit::WebHistoryItem&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getId() const;
    ::java::lang::String getUrl() const;
    ::java::lang::String getOriginalUrl() const;
    ::java::lang::String getTitle() const;
    ::android::graphics::Bitmap getFavicon() const;

};
}
}


