#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Exception.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace java {
namespace util {
namespace prefs {
class BackingStoreException : public virtual ::java::lang::Object,
                              public virtual ::java::lang::Exception {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BackingStoreException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BackingStoreException(const ::java::util::prefs::BackingStoreException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    BackingStoreException(::java::util::prefs::BackingStoreException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::prefs::BackingStoreException& operator=(const ::java::util::prefs::BackingStoreException& x) {obj = x.obj; return *this;}
    ::java::util::prefs::BackingStoreException& operator=(::java::util::prefs::BackingStoreException&& x) {obj = std::move(x.obj); return *this;}
    
    BackingStoreException(const ::java::lang::String&);
    BackingStoreException(const ::java::lang::Throwable&);

};
}
}
}


