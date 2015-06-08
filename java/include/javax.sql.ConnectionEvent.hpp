#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.util.EventObject.hpp"

namespace java { namespace sql { class SQLException; } }
namespace javax { namespace sql { class PooledConnection; } }

namespace javax {
namespace sql {
class ConnectionEvent : public virtual ::java::lang::Object,
                        public virtual ::java::io::Serializable,
                        public virtual ::java::util::EventObject {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConnectionEvent(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::util::EventObject(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConnectionEvent(const ::javax::sql::ConnectionEvent& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::EventObject((jobject)0) {obj = x.obj;}
    ConnectionEvent(::javax::sql::ConnectionEvent&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::EventObject((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::sql::ConnectionEvent& operator=(const ::javax::sql::ConnectionEvent& x) {obj = x.obj; return *this;}
    ::javax::sql::ConnectionEvent& operator=(::javax::sql::ConnectionEvent&& x) {obj = std::move(x.obj); return *this;}
    
    ConnectionEvent(const ::javax::sql::PooledConnection&);
    ConnectionEvent(const ::javax::sql::PooledConnection&, const ::java::sql::SQLException&);
    ::java::sql::SQLException getSQLException() const;

};
}
}


