#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace lang {
class Object {
public:

    
    struct JavaObject {
        jobject obj;
        JavaObject(jobject _obj) {obj = _obj ? java::jni->NewGlobalRef(_obj) : 0;}
        ~JavaObject() {if (obj) java::jni->DeleteGlobalRef(obj);}
        JavaObject& operator=(const JavaObject&) = delete;
        JavaObject& operator=(JavaObject&&) = delete;
        operator jobject() const {return obj;}
    };
    
    struct JavaObjectHolder : std::shared_ptr<JavaObject> {
        JavaObjectHolder(jobject obj) : shared_ptr(new JavaObject(obj)) {}
        operator jobject() const {return get()->obj;}
    };
    
    static jclass _class;
    JavaObjectHolder obj;
    
    explicit Object(jobject _obj) : obj(_obj) {}
    bool isNull() const {return (jobject)obj == nullptr;}
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Object(const ::java::lang::Object& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Object(::java::lang::Object&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::Object& operator=(const ::java::lang::Object& x) {obj = x.obj; return *this;}
    ::java::lang::Object& operator=(::java::lang::Object&& x) {obj = std::move(x.obj); return *this;}
    
    Object();
    bool equals(const ::java::lang::Object&) const;
    ::java::lang::Class getClass() const;
    int32_t hashCode() const;
    void notify() const;
    void notifyAll() const;
    ::java::lang::String toString() const;
    void wait() const;
    void wait(int64_t) const;
    void wait(int64_t, int32_t) const;

};
}
}


