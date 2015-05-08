#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace util { class Xml_Encoding; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace util {
class Xml_Encoding : public virtual ::java::lang::Object,
                     public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Xml_Encoding(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Xml_Encoding(const ::android::util::Xml_Encoding& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    Xml_Encoding(::android::util::Xml_Encoding&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::Xml_Encoding& operator=(const ::android::util::Xml_Encoding& x) {obj = x.obj; return *this;}
    ::android::util::Xml_Encoding& operator=(::android::util::Xml_Encoding&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::util::Xml_Encoding> values();
    static ::android::util::Xml_Encoding valueOf(const ::java::lang::String&);

};
}
}


