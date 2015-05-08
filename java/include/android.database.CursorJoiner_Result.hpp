#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace database { class CursorJoiner_Result; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace database {
class CursorJoiner_Result : public virtual ::java::lang::Object,
                            public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CursorJoiner_Result(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CursorJoiner_Result(const ::android::database::CursorJoiner_Result& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    CursorJoiner_Result(::android::database::CursorJoiner_Result&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::CursorJoiner_Result& operator=(const ::android::database::CursorJoiner_Result& x) {obj = x.obj; return *this;}
    ::android::database::CursorJoiner_Result& operator=(::android::database::CursorJoiner_Result&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::database::CursorJoiner_Result> values();
    static ::android::database::CursorJoiner_Result valueOf(const ::java::lang::String&);

};
}
}


