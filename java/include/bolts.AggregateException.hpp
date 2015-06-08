#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Exception.hpp"

namespace java { namespace io { class PrintStream; } }
namespace java { namespace io { class PrintWriter; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }
namespace java { namespace util { class List; } }

namespace bolts {
class AggregateException : public virtual ::java::lang::Object,
                           public virtual ::java::lang::Exception {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AggregateException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AggregateException(const ::bolts::AggregateException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    AggregateException(::bolts::AggregateException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::bolts::AggregateException& operator=(const ::bolts::AggregateException& x) {obj = x.obj; return *this;}
    ::bolts::AggregateException& operator=(::bolts::AggregateException&& x) {obj = std::move(x.obj); return *this;}
    
    AggregateException(const ::java::lang::String&, const std::vector< ::java::lang::Throwable>&);
    AggregateException(const ::java::lang::String&, const ::java::util::List&);
    AggregateException(const ::java::util::List&);
    ::java::util::List getInnerThrowables() const;
    void printStackTrace(const ::java::io::PrintStream&) const;
    void printStackTrace(const ::java::io::PrintWriter&) const;
    ::java::util::List getErrors() const;
    std::vector< ::java::lang::Throwable> getCauses() const;

};
}


