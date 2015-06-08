#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.RequestOutputStream.hpp"
#include "java.io.FilterOutputStream.hpp"

namespace com { namespace facebook { class GraphRequest; } }

namespace com {
namespace facebook {
class ProgressOutputStream : public virtual ::java::lang::Object,
                             public virtual ::com::facebook::RequestOutputStream,
                             public virtual ::java::io::FilterOutputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProgressOutputStream(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::RequestOutputStream(_obj), ::java::io::Closeable(_obj), ::java::io::FilterOutputStream(_obj), ::java::io::Flushable(_obj), ::java::io::OutputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProgressOutputStream(const ::com::facebook::ProgressOutputStream& x) : ::java::lang::Object((jobject)0), ::com::facebook::RequestOutputStream((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj;}
    ProgressOutputStream(::com::facebook::ProgressOutputStream&& x) : ::java::lang::Object((jobject)0), ::com::facebook::RequestOutputStream((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::ProgressOutputStream& operator=(const ::com::facebook::ProgressOutputStream& x) {obj = x.obj; return *this;}
    ::com::facebook::ProgressOutputStream& operator=(::com::facebook::ProgressOutputStream&& x) {obj = std::move(x.obj); return *this;}
    
    void setCurrentRequest(const ::com::facebook::GraphRequest&) const;
    void write(const std::vector< int8_t>&) const;
    void write(const std::vector< int8_t>&, int32_t, int32_t) const;
    void write(int32_t) const;
    void close() const;

};
}
}


