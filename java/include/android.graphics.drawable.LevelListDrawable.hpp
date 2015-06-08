#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.drawable.DrawableContainer.hpp"

namespace android { namespace content { namespace res { class Resources; } } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace util { class AttributeSet; } }
namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } }

namespace android {
namespace graphics {
namespace drawable {
class LevelListDrawable : public virtual ::java::lang::Object,
                          public virtual ::android::graphics::drawable::DrawableContainer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LevelListDrawable(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::graphics::drawable::DrawableContainer(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LevelListDrawable(const ::android::graphics::drawable::LevelListDrawable& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::graphics::drawable::DrawableContainer((jobject)0) {obj = x.obj;}
    LevelListDrawable(::android::graphics::drawable::LevelListDrawable&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::graphics::drawable::DrawableContainer((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::drawable::LevelListDrawable& operator=(const ::android::graphics::drawable::LevelListDrawable& x) {obj = x.obj; return *this;}
    ::android::graphics::drawable::LevelListDrawable& operator=(::android::graphics::drawable::LevelListDrawable&& x) {obj = std::move(x.obj); return *this;}
    
    LevelListDrawable();
    void addLevel(int32_t, int32_t, const ::android::graphics::drawable::Drawable&) const;
    void inflate(const ::android::content::res::Resources&, const ::org::xmlpull::v1::XmlPullParser&, const ::android::util::AttributeSet&) const;
    ::android::graphics::drawable::Drawable mutate() const;

};
}
}
}


