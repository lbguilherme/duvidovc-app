#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }

namespace android {
namespace accounts {
class AccountManagerFuture : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccountManagerFuture(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccountManagerFuture(const ::android::accounts::AccountManagerFuture& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AccountManagerFuture(::android::accounts::AccountManagerFuture&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::accounts::AccountManagerFuture& operator=(const ::android::accounts::AccountManagerFuture& x) {obj = x.obj; return *this;}
    ::android::accounts::AccountManagerFuture& operator=(::android::accounts::AccountManagerFuture&& x) {obj = std::move(x.obj); return *this;}
    
    bool cancel(bool) const;
    bool isCancelled() const;
    bool isDone() const;
    ::java::lang::Object getResult() const;
    ::java::lang::Object getResult(int64_t, const ::java::util::concurrent::TimeUnit&) const;

};
}
}


