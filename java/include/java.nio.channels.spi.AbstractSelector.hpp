#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.nio.channels.Selector.hpp"

namespace java { namespace nio { namespace channels { namespace spi { class SelectorProvider; } } } }

namespace java {
namespace nio {
namespace channels {
namespace spi {
class AbstractSelector : public virtual ::java::lang::Object,
                         public virtual ::java::nio::channels::Selector {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractSelector(jobject _obj) : ::java::lang::Object(_obj), ::java::nio::channels::Selector(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractSelector(const ::java::nio::channels::spi::AbstractSelector& x) : ::java::lang::Object((jobject)0), ::java::nio::channels::Selector((jobject)0) {obj = x.obj;}
    AbstractSelector(::java::nio::channels::spi::AbstractSelector&& x) : ::java::lang::Object((jobject)0), ::java::nio::channels::Selector((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::channels::spi::AbstractSelector& operator=(const ::java::nio::channels::spi::AbstractSelector& x) {obj = x.obj; return *this;}
    ::java::nio::channels::spi::AbstractSelector& operator=(::java::nio::channels::spi::AbstractSelector&& x) {obj = std::move(x.obj); return *this;}
    
    void close() const ;
    bool isOpen() const ;
    ::java::nio::channels::spi::SelectorProvider provider() const ;

};
}
}
}
}


