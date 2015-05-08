#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { namespace res { class Resources; } } }
namespace android { namespace graphics { class BitmapFactory_Options; } }
namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class ColorFilter; } }
namespace android { namespace graphics { class PorterDuff_Mode; } }
namespace android { namespace graphics { class Rect; } }
namespace android { namespace graphics { class Region; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace graphics { namespace drawable { class Drawable_Callback; } } }
namespace android { namespace graphics { namespace drawable { class Drawable_ConstantState; } } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace util { class TypedValue; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class Runnable; } }
namespace java { namespace lang { class String; } }
namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } }

namespace android {
namespace graphics {
namespace drawable {
class Drawable : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Drawable(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Drawable(const ::android::graphics::drawable::Drawable& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Drawable(::android::graphics::drawable::Drawable&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::drawable::Drawable& operator=(const ::android::graphics::drawable::Drawable& x) {obj = x.obj; return *this;}
    ::android::graphics::drawable::Drawable& operator=(::android::graphics::drawable::Drawable&& x) {obj = std::move(x.obj); return *this;}
    
    Drawable();
    void draw(const ::android::graphics::Canvas&) const ;
    void setBounds(int32_t, int32_t, int32_t, int32_t) const ;
    void setBounds(const ::android::graphics::Rect&) const ;
    void copyBounds(const ::android::graphics::Rect&) const ;
    ::android::graphics::Rect copyBounds() const ;
    ::android::graphics::Rect getBounds() const ;
    void setChangingConfigurations(int32_t) const ;
    int32_t getChangingConfigurations() const ;
    void setDither(bool) const ;
    void setFilterBitmap(bool) const ;
    void setCallback(const ::android::graphics::drawable::Drawable_Callback&) const ;
    ::android::graphics::drawable::Drawable_Callback getCallback() const ;
    void invalidateSelf() const ;
    void scheduleSelf(const ::java::lang::Runnable&, int64_t) const ;
    void unscheduleSelf(const ::java::lang::Runnable&) const ;
    void setAlpha(int32_t) const ;
    void setColorFilter(const ::android::graphics::ColorFilter&) const ;
    void setColorFilter(int32_t, const ::android::graphics::PorterDuff_Mode&) const ;
    void clearColorFilter() const ;
    bool isStateful() const ;
    bool setState(const std::vector< int32_t>&) const ;
    std::vector< int32_t> getState() const ;
    void jumpToCurrentState() const ;
    ::android::graphics::drawable::Drawable getCurrent() const ;
    bool setLevel(int32_t) const ;
    int32_t getLevel() const ;
    bool setVisible(bool, bool) const ;
    bool isVisible() const ;
    int32_t getOpacity() const ;
    static int32_t resolveOpacity(int32_t, int32_t);
    ::android::graphics::Region getTransparentRegion() const ;
    int32_t getIntrinsicWidth() const ;
    int32_t getIntrinsicHeight() const ;
    int32_t getMinimumWidth() const ;
    int32_t getMinimumHeight() const ;
    bool getPadding(const ::android::graphics::Rect&) const ;
    ::android::graphics::drawable::Drawable mutate() const ;
    static ::android::graphics::drawable::Drawable createFromStream(const ::java::io::InputStream&, const ::java::lang::String&);
    static ::android::graphics::drawable::Drawable createFromResourceStream(const ::android::content::res::Resources&, const ::android::util::TypedValue&, const ::java::io::InputStream&, const ::java::lang::String&);
    static ::android::graphics::drawable::Drawable createFromResourceStream(const ::android::content::res::Resources&, const ::android::util::TypedValue&, const ::java::io::InputStream&, const ::java::lang::String&, const ::android::graphics::BitmapFactory_Options&);
    static ::android::graphics::drawable::Drawable createFromXml(const ::android::content::res::Resources&, const ::org::xmlpull::v1::XmlPullParser&);
    static ::android::graphics::drawable::Drawable createFromXmlInner(const ::android::content::res::Resources&, const ::org::xmlpull::v1::XmlPullParser&, const ::android::util::AttributeSet&);
    static ::android::graphics::drawable::Drawable createFromPath(const ::java::lang::String&);
    void inflate(const ::android::content::res::Resources&, const ::org::xmlpull::v1::XmlPullParser&, const ::android::util::AttributeSet&) const ;
    ::android::graphics::drawable::Drawable_ConstantState getConstantState() const ;

};
}
}
}

#include "android.graphics.drawable.Drawable_Callback.hpp"
#include "android.graphics.drawable.Drawable_ConstantState.hpp"

