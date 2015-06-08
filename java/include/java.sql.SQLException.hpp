#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Exception.hpp"
#include "java.lang.Iterable.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }
namespace java { namespace sql { class SQLException; } }
namespace java { namespace util { class Iterator; } }

namespace java {
namespace sql {
class SQLException : public virtual ::java::lang::Object,
                     public virtual ::java::io::Serializable,
                     public virtual ::java::lang::Exception,
                     public virtual ::java::lang::Iterable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SQLException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Iterable(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SQLException(const ::java::sql::SQLException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    SQLException(::java::sql::SQLException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::SQLException& operator=(const ::java::sql::SQLException& x) {obj = x.obj; return *this;}
    ::java::sql::SQLException& operator=(::java::sql::SQLException&& x) {obj = std::move(x.obj); return *this;}
    
    SQLException();
    SQLException(const ::java::lang::String&);
    SQLException(const ::java::lang::String&, const ::java::lang::String&);
    SQLException(const ::java::lang::String&, const ::java::lang::String&, int32_t);
    SQLException(const ::java::lang::Throwable&);
    SQLException(const ::java::lang::String&, const ::java::lang::Throwable&);
    SQLException(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::Throwable&);
    SQLException(const ::java::lang::String&, const ::java::lang::String&, int32_t, const ::java::lang::Throwable&);
    int32_t getErrorCode() const;
    ::java::sql::SQLException getNextException() const;
    ::java::lang::String getSQLState() const;
    void setNextException(const ::java::sql::SQLException&) const;
    ::java::util::Iterator iterator() const;

};
}
}


