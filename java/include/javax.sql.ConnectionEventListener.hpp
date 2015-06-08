#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.EventListener.hpp"

namespace javax { namespace sql { class ConnectionEvent; } }

namespace javax {
namespace sql {
class ConnectionEventListener : public virtual ::java::lang::Object,
                                public virtual ::java::util::EventListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConnectionEventListener(jobject _obj) : ::java::lang::Object(_obj), ::java::util::EventListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConnectionEventListener(const ::javax::sql::ConnectionEventListener& x) : ::java::lang::Object((jobject)0), ::java::util::EventListener((jobject)0) {obj = x.obj;}
    ConnectionEventListener(::javax::sql::ConnectionEventListener&& x) : ::java::lang::Object((jobject)0), ::java::util::EventListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::sql::ConnectionEventListener& operator=(const ::javax::sql::ConnectionEventListener& x) {obj = x.obj; return *this;}
    ::javax::sql::ConnectionEventListener& operator=(::javax::sql::ConnectionEventListener&& x) {obj = std::move(x.obj); return *this;}
    
    void connectionClosed(const ::javax::sql::ConnectionEvent&) const;
    void connectionErrorOccurred(const ::javax::sql::ConnectionEvent&) const;

};
}
}


