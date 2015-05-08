#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class OutputStream; } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { namespace prefs { class NodeChangeListener; } } }
namespace java { namespace util { namespace prefs { class PreferenceChangeListener; } } }
namespace java { namespace util { namespace prefs { class Preferences; } } }

namespace java {
namespace util {
namespace prefs {
class Preferences : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Preferences(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Preferences(const ::java::util::prefs::Preferences& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Preferences(::java::util::prefs::Preferences&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::prefs::Preferences& operator=(const ::java::util::prefs::Preferences& x) {obj = x.obj; return *this;}
    ::java::util::prefs::Preferences& operator=(::java::util::prefs::Preferences&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String absolutePath() const ;
    std::vector< ::java::lang::String> childrenNames() const ;
    void clear() const ;
    void exportNode(const ::java::io::OutputStream&) const ;
    void exportSubtree(const ::java::io::OutputStream&) const ;
    void flush() const ;
    ::java::lang::String get(const ::java::lang::String&, const ::java::lang::String&) const ;
    bool getBoolean(const ::java::lang::String&, bool) const ;
    std::vector< int8_t> getByteArray(const ::java::lang::String&, const std::vector< int8_t>&) const ;
    double getDouble(const ::java::lang::String&, double) const ;
    float getFloat(const ::java::lang::String&, float) const ;
    int32_t getInt(const ::java::lang::String&, int32_t) const ;
    int64_t getLong(const ::java::lang::String&, int64_t) const ;
    static void importPreferences(const ::java::io::InputStream&);
    bool isUserNode() const ;
    std::vector< ::java::lang::String> keys() const ;
    ::java::lang::String name() const ;
    ::java::util::prefs::Preferences node(const ::java::lang::String&) const ;
    bool nodeExists(const ::java::lang::String&) const ;
    ::java::util::prefs::Preferences parent() const ;
    void put(const ::java::lang::String&, const ::java::lang::String&) const ;
    void putBoolean(const ::java::lang::String&, bool) const ;
    void putByteArray(const ::java::lang::String&, const std::vector< int8_t>&) const ;
    void putDouble(const ::java::lang::String&, double) const ;
    void putFloat(const ::java::lang::String&, float) const ;
    void putInt(const ::java::lang::String&, int32_t) const ;
    void putLong(const ::java::lang::String&, int64_t) const ;
    void remove(const ::java::lang::String&) const ;
    void removeNode() const ;
    void addNodeChangeListener(const ::java::util::prefs::NodeChangeListener&) const ;
    void addPreferenceChangeListener(const ::java::util::prefs::PreferenceChangeListener&) const ;
    void removeNodeChangeListener(const ::java::util::prefs::NodeChangeListener&) const ;
    void removePreferenceChangeListener(const ::java::util::prefs::PreferenceChangeListener&) const ;
    void sync() const ;
    static ::java::util::prefs::Preferences systemNodeForPackage(const ::java::lang::Class&);
    static ::java::util::prefs::Preferences systemRoot();
    static ::java::util::prefs::Preferences userNodeForPackage(const ::java::lang::Class&);
    static ::java::util::prefs::Preferences userRoot();
    ::java::lang::String toString() const ;

};
}
}
}


