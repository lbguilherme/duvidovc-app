#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace nio { namespace channels { class Selector; } } }
namespace java { namespace nio { namespace channels { namespace spi { class SelectorProvider; } } } }
namespace java { namespace util { class Set; } }

namespace java {
namespace nio {
namespace channels {
class Selector : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Selector(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Selector(const ::java::nio::channels::Selector& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Selector(::java::nio::channels::Selector&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::channels::Selector& operator=(const ::java::nio::channels::Selector& x) {obj = x.obj; return *this;}
    ::java::nio::channels::Selector& operator=(::java::nio::channels::Selector&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::nio::channels::Selector open();
    void close() const ;
    bool isOpen() const ;
    ::java::util::Set keys() const ;
    ::java::nio::channels::spi::SelectorProvider provider() const ;
    int32_t select() const ;
    int32_t select(int64_t) const ;
    ::java::util::Set selectedKeys() const ;
    int32_t selectNow() const ;
    ::java::nio::channels::Selector wakeup() const ;

};
}
}
}


