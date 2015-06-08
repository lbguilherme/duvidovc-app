#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Comparable.hpp"

namespace java { namespace io { class File; } }
namespace java { namespace io { class FileFilter; } }
namespace java { namespace io { class FilenameFilter; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace net { class URI; } }
namespace java { namespace net { class URL; } }

namespace java {
namespace io {
class File : public virtual ::java::lang::Object,
             public virtual ::java::io::Serializable,
             public virtual ::java::lang::Comparable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit File(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    File(const ::java::io::File& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj;}
    File(::java::io::File&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::File& operator=(const ::java::io::File& x) {obj = x.obj; return *this;}
    ::java::io::File& operator=(::java::io::File&& x) {obj = std::move(x.obj); return *this;}
    
    File(const ::java::io::File&, const ::java::lang::String&);
    File(const ::java::lang::String&);
    File(const ::java::lang::String&, const ::java::lang::String&);
    File(const ::java::net::URI&);
    static std::vector< ::java::io::File> listRoots();
    bool canExecute() const;
    bool canRead() const;
    bool canWrite() const;
    int32_t compareTo(const ::java::io::File&) const;
    bool delete_() const;
    void deleteOnExit() const;
    bool equals(const ::java::lang::Object&) const;
    bool exists() const;
    ::java::lang::String getAbsolutePath() const;
    ::java::io::File getAbsoluteFile() const;
    ::java::lang::String getCanonicalPath() const;
    ::java::io::File getCanonicalFile() const;
    ::java::lang::String getName() const;
    ::java::lang::String getParent() const;
    ::java::io::File getParentFile() const;
    ::java::lang::String getPath() const;
    int32_t hashCode() const;
    bool isAbsolute() const;
    bool isDirectory() const;
    bool isFile() const;
    bool isHidden() const;
    int64_t lastModified() const;
    bool setLastModified(int64_t) const;
    bool setReadOnly() const;
    bool setExecutable(bool, bool) const;
    bool setExecutable(bool) const;
    bool setReadable(bool, bool) const;
    bool setReadable(bool) const;
    bool setWritable(bool, bool) const;
    bool setWritable(bool) const;
    int64_t length() const;
    std::vector< ::java::lang::String> list() const;
    std::vector< ::java::lang::String> list(const ::java::io::FilenameFilter&) const;
    std::vector< ::java::io::File> listFiles() const;
    std::vector< ::java::io::File> listFiles(const ::java::io::FilenameFilter&) const;
    std::vector< ::java::io::File> listFiles(const ::java::io::FileFilter&) const;
    bool mkdir() const;
    bool mkdirs() const;
    bool createNewFile() const;
    static ::java::io::File createTempFile(const ::java::lang::String&, const ::java::lang::String&);
    static ::java::io::File createTempFile(const ::java::lang::String&, const ::java::lang::String&, const ::java::io::File&);
    bool renameTo(const ::java::io::File&) const;
    ::java::lang::String toString() const;
    ::java::net::URI toURI() const;
    ::java::net::URL toURL() const;
    int64_t getTotalSpace() const;
    int64_t getUsableSpace() const;
    int64_t getFreeSpace() const;
    int32_t compareTo(const ::java::lang::Object&) const;

};
}
}


