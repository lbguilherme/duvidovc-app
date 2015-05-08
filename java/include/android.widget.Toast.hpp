#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace view { class View; } }
namespace android { namespace widget { class Toast; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace widget {
class Toast : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Toast(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Toast(const ::android::widget::Toast& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Toast(::android::widget::Toast&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::Toast& operator=(const ::android::widget::Toast& x) {obj = x.obj; return *this;}
    ::android::widget::Toast& operator=(::android::widget::Toast&& x) {obj = std::move(x.obj); return *this;}
    
    Toast(const ::android::content::Context&);
    void show() const ;
    void cancel() const ;
    void setView(const ::android::view::View&) const ;
    ::android::view::View getView() const ;
    void setDuration(int32_t) const ;
    int32_t getDuration() const ;
    void setMargin(float, float) const ;
    float getHorizontalMargin() const ;
    float getVerticalMargin() const ;
    void setGravity(int32_t, int32_t, int32_t) const ;
    int32_t getGravity() const ;
    int32_t getXOffset() const ;
    int32_t getYOffset() const ;
    static ::android::widget::Toast makeText(const ::android::content::Context&, const ::java::lang::CharSequence&, int32_t);
    static ::android::widget::Toast makeText(const ::android::content::Context&, int32_t, int32_t);
    void setText(int32_t) const ;
    void setText(const ::java::lang::CharSequence&) const ;

};
}
}


