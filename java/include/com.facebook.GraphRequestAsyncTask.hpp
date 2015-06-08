#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.AsyncTask.hpp"

namespace com { namespace facebook { class GraphRequest; } }
namespace com { namespace facebook { class GraphRequestBatch; } }
namespace java { namespace lang { class String; } }
namespace java { namespace net { class HttpURLConnection; } }
namespace java { namespace util { class Collection; } }

namespace com {
namespace facebook {
class GraphRequestAsyncTask : public virtual ::java::lang::Object,
                              public virtual ::android::os::AsyncTask {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GraphRequestAsyncTask(jobject _obj) : ::java::lang::Object(_obj), ::android::os::AsyncTask(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GraphRequestAsyncTask(const ::com::facebook::GraphRequestAsyncTask& x) : ::java::lang::Object((jobject)0), ::android::os::AsyncTask((jobject)0) {obj = x.obj;}
    GraphRequestAsyncTask(::com::facebook::GraphRequestAsyncTask&& x) : ::java::lang::Object((jobject)0), ::android::os::AsyncTask((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::GraphRequestAsyncTask& operator=(const ::com::facebook::GraphRequestAsyncTask& x) {obj = x.obj; return *this;}
    ::com::facebook::GraphRequestAsyncTask& operator=(::com::facebook::GraphRequestAsyncTask&& x) {obj = std::move(x.obj); return *this;}
    
    GraphRequestAsyncTask(const std::vector< ::com::facebook::GraphRequest>&);
    GraphRequestAsyncTask(const ::java::util::Collection&);
    GraphRequestAsyncTask(const ::com::facebook::GraphRequestBatch&);
    GraphRequestAsyncTask(const ::java::net::HttpURLConnection&, const std::vector< ::com::facebook::GraphRequest>&);
    GraphRequestAsyncTask(const ::java::net::HttpURLConnection&, const ::java::util::Collection&);
    GraphRequestAsyncTask(const ::java::net::HttpURLConnection&, const ::com::facebook::GraphRequestBatch&);
    ::java::lang::String toString() const;

};
}
}


