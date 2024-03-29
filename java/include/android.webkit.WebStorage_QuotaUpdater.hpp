#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace webkit {
class WebStorage_QuotaUpdater : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WebStorage_QuotaUpdater(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WebStorage_QuotaUpdater(const ::android::webkit::WebStorage_QuotaUpdater& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WebStorage_QuotaUpdater(::android::webkit::WebStorage_QuotaUpdater&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::WebStorage_QuotaUpdater& operator=(const ::android::webkit::WebStorage_QuotaUpdater& x) {obj = x.obj; return *this;}
    ::android::webkit::WebStorage_QuotaUpdater& operator=(::android::webkit::WebStorage_QuotaUpdater&& x) {obj = std::move(x.obj); return *this;}
    
    void updateQuota(int64_t) const;

};
}
}


