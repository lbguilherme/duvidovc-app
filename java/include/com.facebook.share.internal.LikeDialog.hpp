#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.internal.FacebookDialogBase.hpp"


namespace com {
namespace facebook {
namespace share {
namespace internal {
class LikeDialog : public virtual ::java::lang::Object,
                   public virtual ::com::facebook::internal::FacebookDialogBase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LikeDialog(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::FacebookDialog(_obj), ::com::facebook::internal::FacebookDialogBase(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LikeDialog(const ::com::facebook::share::internal::LikeDialog& x) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookDialog((jobject)0), ::com::facebook::internal::FacebookDialogBase((jobject)0) {obj = x.obj;}
    LikeDialog(::com::facebook::share::internal::LikeDialog&& x) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookDialog((jobject)0), ::com::facebook::internal::FacebookDialogBase((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::internal::LikeDialog& operator=(const ::com::facebook::share::internal::LikeDialog& x) {obj = x.obj; return *this;}
    ::com::facebook::share::internal::LikeDialog& operator=(::com::facebook::share::internal::LikeDialog&& x) {obj = std::move(x.obj); return *this;}
    
    static bool canShowNativeDialog();
    static bool canShowWebFallback();

};
}
}
}
}

#include "com.facebook.share.internal.LikeDialog_NativeHandler.hpp"
#include "com.facebook.share.internal.LikeDialog_Result.hpp"
#include "com.facebook.share.internal.LikeDialog_WebFallbackHandler.hpp"

