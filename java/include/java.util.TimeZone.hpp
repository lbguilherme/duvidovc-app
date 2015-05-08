#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Cloneable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Date; } }
namespace java { namespace util { class Locale; } }
namespace java { namespace util { class TimeZone; } }

namespace java {
namespace util {
class TimeZone : public virtual ::java::lang::Object,
                 public virtual ::java::io::Serializable,
                 public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TimeZone(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TimeZone(const ::java::util::TimeZone& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    TimeZone(::java::util::TimeZone&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::TimeZone& operator=(const ::java::util::TimeZone& x) {obj = x.obj; return *this;}
    ::java::util::TimeZone& operator=(::java::util::TimeZone&& x) {obj = std::move(x.obj); return *this;}
    
    TimeZone();
    ::java::lang::Object clone() const ;
    static std::vector< ::java::lang::String> getAvailableIDs();
    static std::vector< ::java::lang::String> getAvailableIDs(int32_t);
    static ::java::util::TimeZone getDefault();
    ::java::lang::String getDisplayName() const ;
    ::java::lang::String getDisplayName(const ::java::util::Locale&) const ;
    ::java::lang::String getDisplayName(bool, int32_t) const ;
    ::java::lang::String getDisplayName(bool, int32_t, const ::java::util::Locale&) const ;
    ::java::lang::String getID() const ;
    int32_t getDSTSavings() const ;
    int32_t getOffset(int64_t) const ;
    int32_t getOffset(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) const ;
    int32_t getRawOffset() const ;
    static ::java::util::TimeZone getTimeZone(const ::java::lang::String&);
    bool hasSameRules(const ::java::util::TimeZone&) const ;
    bool inDaylightTime(const ::java::util::Date&) const ;
    static void setDefault(const ::java::util::TimeZone&);
    void setID(const ::java::lang::String&) const ;
    void setRawOffset(int32_t) const ;
    bool useDaylightTime() const ;

};
}
}


