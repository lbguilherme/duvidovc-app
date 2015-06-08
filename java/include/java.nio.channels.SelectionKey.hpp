#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace nio { namespace channels { class SelectableChannel; } } }
namespace java { namespace nio { namespace channels { class SelectionKey; } } }
namespace java { namespace nio { namespace channels { class Selector; } } }

namespace java {
namespace nio {
namespace channels {
class SelectionKey : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SelectionKey(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SelectionKey(const ::java::nio::channels::SelectionKey& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SelectionKey(::java::nio::channels::SelectionKey&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::channels::SelectionKey& operator=(const ::java::nio::channels::SelectionKey& x) {obj = x.obj; return *this;}
    ::java::nio::channels::SelectionKey& operator=(::java::nio::channels::SelectionKey&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object attach(const ::java::lang::Object&) const;
    ::java::lang::Object attachment() const;
    void cancel() const;
    ::java::nio::channels::SelectableChannel channel() const;
    int32_t interestOps() const;
    ::java::nio::channels::SelectionKey interestOps(int32_t) const;
    bool isAcceptable() const;
    bool isConnectable() const;
    bool isReadable() const;
    bool isValid() const;
    bool isWritable() const;
    int32_t readyOps() const;
    ::java::nio::channels::Selector selector() const;

};
}
}
}


