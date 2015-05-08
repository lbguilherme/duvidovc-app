#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.InputStreamReader.hpp"

namespace java { namespace io { class File; } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace io {
class FileReader : public virtual ::java::lang::Object,
                   public virtual ::java::io::InputStreamReader {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FileReader(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::InputStreamReader(_obj), ::java::io::Reader(_obj), ::java::lang::Readable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FileReader(const ::java::io::FileReader& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStreamReader((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {obj = x.obj;}
    FileReader(::java::io::FileReader&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStreamReader((jobject)0), ::java::io::Reader((jobject)0), ::java::lang::Readable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::FileReader& operator=(const ::java::io::FileReader& x) {obj = x.obj; return *this;}
    ::java::io::FileReader& operator=(::java::io::FileReader&& x) {obj = std::move(x.obj); return *this;}
    
    FileReader(const ::java::io::File&);
    FileReader(const ::java::io::FileDescriptor&);
    FileReader(const ::java::lang::String&);

};
}
}


