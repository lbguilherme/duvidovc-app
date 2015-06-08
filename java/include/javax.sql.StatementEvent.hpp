#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.EventObject.hpp"

namespace java { namespace sql { class PreparedStatement; } }
namespace java { namespace sql { class SQLException; } }
namespace javax { namespace sql { class PooledConnection; } }

namespace javax {
namespace sql {
class StatementEvent : public virtual ::java::lang::Object,
                       public virtual ::java::util::EventObject {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit StatementEvent(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::util::EventObject(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    StatementEvent(const ::javax::sql::StatementEvent& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::EventObject((jobject)0) {obj = x.obj;}
    StatementEvent(::javax::sql::StatementEvent&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::EventObject((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::sql::StatementEvent& operator=(const ::javax::sql::StatementEvent& x) {obj = x.obj; return *this;}
    ::javax::sql::StatementEvent& operator=(::javax::sql::StatementEvent&& x) {obj = std::move(x.obj); return *this;}
    
    StatementEvent(const ::javax::sql::PooledConnection&, const ::java::sql::PreparedStatement&, const ::java::sql::SQLException&);
    StatementEvent(const ::javax::sql::PooledConnection&, const ::java::sql::PreparedStatement&);
    ::java::sql::PreparedStatement getStatement() const;
    ::java::sql::SQLException getSQLException() const;

};
}
}


