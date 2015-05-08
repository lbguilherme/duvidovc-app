#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.drawable.Animatable.hpp"
#include "android.graphics.drawable.DrawableContainer.hpp"
#include "java.lang.Runnable.hpp"

namespace android { namespace content { namespace res { class Resources; } } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace util { class AttributeSet; } }
namespace java { namespace lang { class Runnable; } }
namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } }

namespace android {
namespace graphics {
namespace drawable {
class AnimationDrawable : public virtual ::java::lang::Object,
                          public virtual ::android::graphics::drawable::Animatable,
                          public virtual ::android::graphics::drawable::DrawableContainer,
                          public virtual ::java::lang::Runnable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AnimationDrawable(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Animatable(_obj), ::android::graphics::drawable::Drawable(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::graphics::drawable::DrawableContainer(_obj), ::java::lang::Runnable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AnimationDrawable(const ::android::graphics::drawable::AnimationDrawable& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Animatable((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::graphics::drawable::DrawableContainer((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj;}
    AnimationDrawable(::android::graphics::drawable::AnimationDrawable&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Animatable((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::graphics::drawable::DrawableContainer((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::drawable::AnimationDrawable& operator=(const ::android::graphics::drawable::AnimationDrawable& x) {obj = x.obj; return *this;}
    ::android::graphics::drawable::AnimationDrawable& operator=(::android::graphics::drawable::AnimationDrawable&& x) {obj = std::move(x.obj); return *this;}
    
    AnimationDrawable();
    bool setVisible(bool, bool) const ;
    void start() const ;
    void stop() const ;
    bool isRunning() const ;
    void run() const ;
    void unscheduleSelf(const ::java::lang::Runnable&) const ;
    int32_t getNumberOfFrames() const ;
    ::android::graphics::drawable::Drawable getFrame(int32_t) const ;
    int32_t getDuration(int32_t) const ;
    bool isOneShot() const ;
    void setOneShot(bool) const ;
    void addFrame(const ::android::graphics::drawable::Drawable&, int32_t) const ;
    void inflate(const ::android::content::res::Resources&, const ::org::xmlpull::v1::XmlPullParser&, const ::android::util::AttributeSet&) const ;
    ::android::graphics::drawable::Drawable mutate() const ;

};
}
}
}


