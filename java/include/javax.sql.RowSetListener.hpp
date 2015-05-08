#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.EventListener.hpp"

namespace javax { namespace sql { class RowSetEvent; } }

namespace javax {
namespace sql {
class RowSetListener : public virtual ::java::lang::Object,
                       public virtual ::java::util::EventListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RowSetListener(jobject _obj) : ::java::lang::Object(_obj), ::java::util::EventListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RowSetListener(const ::javax::sql::RowSetListener& x) : ::java::lang::Object((jobject)0), ::java::util::EventListener((jobject)0) {obj = x.obj;}
    RowSetListener(::javax::sql::RowSetListener&& x) : ::java::lang::Object((jobject)0), ::java::util::EventListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::sql::RowSetListener& operator=(const ::javax::sql::RowSetListener& x) {obj = x.obj; return *this;}
    ::javax::sql::RowSetListener& operator=(::javax::sql::RowSetListener&& x) {obj = std::move(x.obj); return *this;}
    
    void cursorMoved(const ::javax::sql::RowSetEvent&) const ;
    void rowChanged(const ::javax::sql::RowSetEvent&) const ;
    void rowSetChanged(const ::javax::sql::RowSetEvent&) const ;

};
}
}


