#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.nio.channels.SelectionKey.hpp"


namespace java {
namespace nio {
namespace channels {
namespace spi {
class AbstractSelectionKey : public virtual ::java::lang::Object,
                             public virtual ::java::nio::channels::SelectionKey {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractSelectionKey(jobject _obj) : ::java::lang::Object(_obj), ::java::nio::channels::SelectionKey(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractSelectionKey(const ::java::nio::channels::spi::AbstractSelectionKey& x) : ::java::lang::Object((jobject)0), ::java::nio::channels::SelectionKey((jobject)0) {obj = x.obj;}
    AbstractSelectionKey(::java::nio::channels::spi::AbstractSelectionKey&& x) : ::java::lang::Object((jobject)0), ::java::nio::channels::SelectionKey((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::channels::spi::AbstractSelectionKey& operator=(const ::java::nio::channels::spi::AbstractSelectionKey& x) {obj = x.obj; return *this;}
    ::java::nio::channels::spi::AbstractSelectionKey& operator=(::java::nio::channels::spi::AbstractSelectionKey&& x) {obj = std::move(x.obj); return *this;}
    
    bool isValid() const;
    void cancel() const;

};
}
}
}
}


