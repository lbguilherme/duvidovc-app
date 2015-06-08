#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Cloneable.hpp"

namespace android { namespace webkit { class WebHistoryItem; } }

namespace android {
namespace webkit {
class WebBackForwardList : public virtual ::java::lang::Object,
                           public virtual ::java::io::Serializable,
                           public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WebBackForwardList(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WebBackForwardList(const ::android::webkit::WebBackForwardList& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    WebBackForwardList(::android::webkit::WebBackForwardList&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::WebBackForwardList& operator=(const ::android::webkit::WebBackForwardList& x) {obj = x.obj; return *this;}
    ::android::webkit::WebBackForwardList& operator=(::android::webkit::WebBackForwardList&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::webkit::WebHistoryItem getCurrentItem() const;
    int32_t getCurrentIndex() const;
    ::android::webkit::WebHistoryItem getItemAtIndex(int32_t) const;
    int32_t getSize() const;

};
}
}


