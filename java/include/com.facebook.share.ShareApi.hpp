#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { class FacebookCallback; } }
namespace com { namespace facebook { namespace share { namespace model { class ShareContent; } } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace share {
class ShareApi : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShareApi(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShareApi(const ::com::facebook::share::ShareApi& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ShareApi(::com::facebook::share::ShareApi&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::ShareApi& operator=(const ::com::facebook::share::ShareApi& x) {obj = x.obj; return *this;}
    ::com::facebook::share::ShareApi& operator=(::com::facebook::share::ShareApi&& x) {obj = std::move(x.obj); return *this;}
    
    static void share(const ::com::facebook::share::model::ShareContent&, const ::com::facebook::FacebookCallback&);
    ShareApi(const ::com::facebook::share::model::ShareContent&);
    ::java::lang::String getMessage() const;
    void setMessage(const ::java::lang::String&) const;
    ::java::lang::String getGraphNode() const;
    void setGraphNode(const ::java::lang::String&) const;
    ::com::facebook::share::model::ShareContent getShareContent() const;
    bool canShare() const;
    void share(const ::com::facebook::FacebookCallback&) const;

};
}
}
}


