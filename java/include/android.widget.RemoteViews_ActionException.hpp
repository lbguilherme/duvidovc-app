#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.RuntimeException.hpp"

namespace java { namespace lang { class Exception; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace widget {
class RemoteViews_ActionException : public virtual ::java::lang::Object,
                                    public virtual ::java::lang::RuntimeException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RemoteViews_ActionException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::RuntimeException(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RemoteViews_ActionException(const ::android::widget::RemoteViews_ActionException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    RemoteViews_ActionException(::android::widget::RemoteViews_ActionException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::RemoteViews_ActionException& operator=(const ::android::widget::RemoteViews_ActionException& x) {obj = x.obj; return *this;}
    ::android::widget::RemoteViews_ActionException& operator=(::android::widget::RemoteViews_ActionException&& x) {obj = std::move(x.obj); return *this;}
    
    RemoteViews_ActionException(const ::java::lang::Exception&);
    RemoteViews_ActionException(const ::java::lang::String&);

};
}
}


