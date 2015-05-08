#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.res.Resources.hpp"

namespace android { namespace content { namespace res { class AssetFileDescriptor; } } }
namespace android { namespace content { namespace res { class ColorStateList; } } }
namespace android { namespace content { namespace res { class Configuration; } } }
namespace android { namespace content { namespace res { class TypedArray; } } }
namespace android { namespace content { namespace res { class XmlResourceParser; } } }
namespace android { namespace graphics { class Movie; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace util { class DisplayMetrics; } }
namespace android { namespace util { class TypedValue; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace test {
namespace mock {
class MockResources : public virtual ::java::lang::Object,
                      public virtual ::android::content::res::Resources {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MockResources(jobject _obj) : ::java::lang::Object(_obj), ::android::content::res::Resources(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MockResources(const ::android::test::mock::MockResources& x) : ::java::lang::Object((jobject)0), ::android::content::res::Resources((jobject)0) {obj = x.obj;}
    MockResources(::android::test::mock::MockResources&& x) : ::java::lang::Object((jobject)0), ::android::content::res::Resources((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::mock::MockResources& operator=(const ::android::test::mock::MockResources& x) {obj = x.obj; return *this;}
    ::android::test::mock::MockResources& operator=(::android::test::mock::MockResources&& x) {obj = std::move(x.obj); return *this;}
    
    MockResources();
    void updateConfiguration(const ::android::content::res::Configuration&, const ::android::util::DisplayMetrics&) const ;
    ::java::lang::CharSequence getText(int32_t) const ;
    ::java::lang::CharSequence getQuantityText(int32_t, int32_t) const ;
    ::java::lang::String getString(int32_t) const ;
    ::java::lang::String getString(int32_t, const std::vector< ::java::lang::Object>&) const ;
    ::java::lang::String getQuantityString(int32_t, int32_t, const std::vector< ::java::lang::Object>&) const ;
    ::java::lang::String getQuantityString(int32_t, int32_t) const ;
    ::java::lang::CharSequence getText(int32_t, const ::java::lang::CharSequence&) const ;
    std::vector< ::java::lang::CharSequence> getTextArray(int32_t) const ;
    std::vector< ::java::lang::String> getStringArray(int32_t) const ;
    std::vector< int32_t> getIntArray(int32_t) const ;
    ::android::content::res::TypedArray obtainTypedArray(int32_t) const ;
    float getDimension(int32_t) const ;
    int32_t getDimensionPixelOffset(int32_t) const ;
    int32_t getDimensionPixelSize(int32_t) const ;
    ::android::graphics::drawable::Drawable getDrawable(int32_t) const ;
    ::android::graphics::Movie getMovie(int32_t) const ;
    int32_t getColor(int32_t) const ;
    ::android::content::res::ColorStateList getColorStateList(int32_t) const ;
    int32_t getInteger(int32_t) const ;
    ::android::content::res::XmlResourceParser getLayout(int32_t) const ;
    ::android::content::res::XmlResourceParser getAnimation(int32_t) const ;
    ::android::content::res::XmlResourceParser getXml(int32_t) const ;
    ::java::io::InputStream openRawResource(int32_t) const ;
    ::android::content::res::AssetFileDescriptor openRawResourceFd(int32_t) const ;
    void getValue(int32_t, const ::android::util::TypedValue&, bool) const ;
    void getValue(const ::java::lang::String&, const ::android::util::TypedValue&, bool) const ;
    ::android::content::res::TypedArray obtainAttributes(const ::android::util::AttributeSet&, const std::vector< int32_t>&) const ;
    ::android::util::DisplayMetrics getDisplayMetrics() const ;
    ::android::content::res::Configuration getConfiguration() const ;
    int32_t getIdentifier(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    ::java::lang::String getResourceName(int32_t) const ;
    ::java::lang::String getResourcePackageName(int32_t) const ;
    ::java::lang::String getResourceTypeName(int32_t) const ;
    ::java::lang::String getResourceEntryName(int32_t) const ;

};
}
}
}


