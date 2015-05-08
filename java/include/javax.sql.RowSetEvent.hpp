#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.util.EventObject.hpp"

namespace javax { namespace sql { class RowSet; } }

namespace javax {
namespace sql {
class RowSetEvent : public virtual ::java::lang::Object,
                    public virtual ::java::io::Serializable,
                    public virtual ::java::util::EventObject {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RowSetEvent(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::util::EventObject(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RowSetEvent(const ::javax::sql::RowSetEvent& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::EventObject((jobject)0) {obj = x.obj;}
    RowSetEvent(::javax::sql::RowSetEvent&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::EventObject((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::sql::RowSetEvent& operator=(const ::javax::sql::RowSetEvent& x) {obj = x.obj; return *this;}
    ::javax::sql::RowSetEvent& operator=(::javax::sql::RowSetEvent&& x) {obj = std::move(x.obj); return *this;}
    
    RowSetEvent(const ::javax::sql::RowSet&);

};
}
}


