#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.EventListener.hpp"

namespace javax { namespace sql { class StatementEvent; } }

namespace javax {
namespace sql {
class StatementEventListener : public virtual ::java::lang::Object,
                               public virtual ::java::util::EventListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit StatementEventListener(jobject _obj) : ::java::lang::Object(_obj), ::java::util::EventListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    StatementEventListener(const ::javax::sql::StatementEventListener& x) : ::java::lang::Object((jobject)0), ::java::util::EventListener((jobject)0) {obj = x.obj;}
    StatementEventListener(::javax::sql::StatementEventListener&& x) : ::java::lang::Object((jobject)0), ::java::util::EventListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::sql::StatementEventListener& operator=(const ::javax::sql::StatementEventListener& x) {obj = x.obj; return *this;}
    ::javax::sql::StatementEventListener& operator=(::javax::sql::StatementEventListener&& x) {obj = std::move(x.obj); return *this;}
    
    void statementClosed(const ::javax::sql::StatementEvent&) const;
    void statementErrorOccurred(const ::javax::sql::StatementEvent&) const;

};
}
}


