#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { namespace res { class AssetFileDescriptor; } } }
namespace android { namespace content { namespace res { class AssetManager; } } }
namespace android { namespace content { namespace res { class ColorStateList; } } }
namespace android { namespace content { namespace res { class Configuration; } } }
namespace android { namespace content { namespace res { class Resources; } } }
namespace android { namespace content { namespace res { class Resources_Theme; } } }
namespace android { namespace content { namespace res { class TypedArray; } } }
namespace android { namespace content { namespace res { class XmlResourceParser; } } }
namespace android { namespace graphics { class Movie; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace util { class DisplayMetrics; } }
namespace android { namespace util { class TypedValue; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
namespace res {
class Resources : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Resources(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Resources(const ::android::content::res::Resources& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Resources(::android::content::res::Resources&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::res::Resources& operator=(const ::android::content::res::Resources& x) {obj = x.obj; return *this;}
    ::android::content::res::Resources& operator=(::android::content::res::Resources&& x) {obj = std::move(x.obj); return *this;}
    
    Resources(const ::android::content::res::AssetManager&, const ::android::util::DisplayMetrics&, const ::android::content::res::Configuration&);
    static ::android::content::res::Resources getSystem();
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
    float getFraction(int32_t, int32_t, int32_t) const ;
    ::android::graphics::drawable::Drawable getDrawable(int32_t) const ;
    ::android::graphics::drawable::Drawable getDrawableForDensity(int32_t, int32_t) const ;
    ::android::graphics::Movie getMovie(int32_t) const ;
    int32_t getColor(int32_t) const ;
    ::android::content::res::ColorStateList getColorStateList(int32_t) const ;
    bool getBoolean(int32_t) const ;
    int32_t getInteger(int32_t) const ;
    ::android::content::res::XmlResourceParser getLayout(int32_t) const ;
    ::android::content::res::XmlResourceParser getAnimation(int32_t) const ;
    ::android::content::res::XmlResourceParser getXml(int32_t) const ;
    ::java::io::InputStream openRawResource(int32_t) const ;
    ::java::io::InputStream openRawResource(int32_t, const ::android::util::TypedValue&) const ;
    ::android::content::res::AssetFileDescriptor openRawResourceFd(int32_t) const ;
    void getValue(int32_t, const ::android::util::TypedValue&, bool) const ;
    void getValueForDensity(int32_t, int32_t, const ::android::util::TypedValue&, bool) const ;
    void getValue(const ::java::lang::String&, const ::android::util::TypedValue&, bool) const ;
    ::android::content::res::Resources_Theme newTheme() const ;
    ::android::content::res::TypedArray obtainAttributes(const ::android::util::AttributeSet&, const std::vector< int32_t>&) const ;
    void updateConfiguration(const ::android::content::res::Configuration&, const ::android::util::DisplayMetrics&) const ;
    ::android::util::DisplayMetrics getDisplayMetrics() const ;
    ::android::content::res::Configuration getConfiguration() const ;
    int32_t getIdentifier(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    ::java::lang::String getResourceName(int32_t) const ;
    ::java::lang::String getResourcePackageName(int32_t) const ;
    ::java::lang::String getResourceTypeName(int32_t) const ;
    ::java::lang::String getResourceEntryName(int32_t) const ;
    void parseBundleExtras(const ::android::content::res::XmlResourceParser&, const ::android::os::Bundle&) const ;
    void parseBundleExtra(const ::java::lang::String&, const ::android::util::AttributeSet&, const ::android::os::Bundle&) const ;
    ::android::content::res::AssetManager getAssets() const ;
    void flushLayoutCache() const ;
    void finishPreloading() const ;

};
}
}
}

#include "android.content.res.Resources_NotFoundException.hpp"
#include "android.content.res.Resources_Theme.hpp"

