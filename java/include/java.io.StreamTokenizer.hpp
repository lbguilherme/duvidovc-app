#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class Reader; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace io {
class StreamTokenizer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit StreamTokenizer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    StreamTokenizer(const ::java::io::StreamTokenizer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    StreamTokenizer(::java::io::StreamTokenizer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::StreamTokenizer& operator=(const ::java::io::StreamTokenizer& x) {obj = x.obj; return *this;}
    ::java::io::StreamTokenizer& operator=(::java::io::StreamTokenizer&& x) {obj = std::move(x.obj); return *this;}
    
    StreamTokenizer(const ::java::io::InputStream&);
    StreamTokenizer(const ::java::io::Reader&);
    void commentChar(int32_t) const ;
    void eolIsSignificant(bool) const ;
    int32_t lineno() const ;
    void lowerCaseMode(bool) const ;
    int32_t nextToken() const ;
    void ordinaryChar(int32_t) const ;
    void ordinaryChars(int32_t, int32_t) const ;
    void parseNumbers() const ;
    void pushBack() const ;
    void quoteChar(int32_t) const ;
    void resetSyntax() const ;
    void slashSlashComments(bool) const ;
    void slashStarComments(bool) const ;
    ::java::lang::String toString() const ;
    void whitespaceChars(int32_t, int32_t) const ;
    void wordChars(int32_t, int32_t) const ;

};
}
}


