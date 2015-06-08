#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace gesture { class Gesture; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class OutputStream; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class ArrayList; } }
namespace java { namespace util { class Set; } }

namespace android {
namespace gesture {
class GestureStore : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GestureStore(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GestureStore(const ::android::gesture::GestureStore& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GestureStore(::android::gesture::GestureStore&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::gesture::GestureStore& operator=(const ::android::gesture::GestureStore& x) {obj = x.obj; return *this;}
    ::android::gesture::GestureStore& operator=(::android::gesture::GestureStore&& x) {obj = std::move(x.obj); return *this;}
    
    GestureStore();
    void setOrientationStyle(int32_t) const;
    int32_t getOrientationStyle() const;
    void setSequenceType(int32_t) const;
    int32_t getSequenceType() const;
    ::java::util::Set getGestureEntries() const;
    ::java::util::ArrayList recognize(const ::android::gesture::Gesture&) const;
    void addGesture(const ::java::lang::String&, const ::android::gesture::Gesture&) const;
    void removeGesture(const ::java::lang::String&, const ::android::gesture::Gesture&) const;
    void removeEntry(const ::java::lang::String&) const;
    ::java::util::ArrayList getGestures(const ::java::lang::String&) const;
    bool hasChanged() const;
    void save(const ::java::io::OutputStream&) const;
    void save(const ::java::io::OutputStream&, bool) const;
    void load(const ::java::io::InputStream&) const;
    void load(const ::java::io::InputStream&, bool) const;

};
}
}


