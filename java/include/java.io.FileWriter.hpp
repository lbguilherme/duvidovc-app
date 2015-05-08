#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.OutputStreamWriter.hpp"

namespace java { namespace io { class File; } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace io {
class FileWriter : public virtual ::java::lang::Object,
                   public virtual ::java::io::OutputStreamWriter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FileWriter(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::Flushable(_obj), ::java::io::OutputStreamWriter(_obj), ::java::io::Writer(_obj), ::java::lang::Appendable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FileWriter(const ::java::io::FileWriter& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStreamWriter((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {obj = x.obj;}
    FileWriter(::java::io::FileWriter&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStreamWriter((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::FileWriter& operator=(const ::java::io::FileWriter& x) {obj = x.obj; return *this;}
    ::java::io::FileWriter& operator=(::java::io::FileWriter&& x) {obj = std::move(x.obj); return *this;}
    
    FileWriter(const ::java::io::File&);
    FileWriter(const ::java::io::File&, bool);
    FileWriter(const ::java::io::FileDescriptor&);
    FileWriter(const ::java::lang::String&);
    FileWriter(const ::java::lang::String&, bool);

};
}
}


