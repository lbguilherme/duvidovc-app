#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace app { class Fragment; } } } }
namespace com { namespace facebook { namespace share { namespace internal { class LikeActionController_CreationCallback; } } } }
namespace com { namespace facebook { namespace share { namespace widget { class LikeView_ObjectType; } } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace share {
namespace internal {
class LikeActionController : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LikeActionController(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LikeActionController(const ::com::facebook::share::internal::LikeActionController& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LikeActionController(::com::facebook::share::internal::LikeActionController&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::internal::LikeActionController& operator=(const ::com::facebook::share::internal::LikeActionController& x) {obj = x.obj; return *this;}
    ::com::facebook::share::internal::LikeActionController& operator=(::com::facebook::share::internal::LikeActionController&& x) {obj = std::move(x.obj); return *this;}
    
    static bool handleOnActivityResult(int32_t, int32_t, const ::android::content::Intent&);
    static void getControllerForObjectId(const ::java::lang::String&, const ::com::facebook::share::widget::LikeView_ObjectType&, const ::com::facebook::share::internal::LikeActionController_CreationCallback&);
    ::java::lang::String getObjectId() const ;
    ::java::lang::String getLikeCountString() const ;
    ::java::lang::String getSocialSentence() const ;
    bool isObjectLiked() const ;
    bool shouldEnableView() const ;
    void toggleLike(const ::android::app::Activity&, const ::android::support::v4::app::Fragment&, const ::android::os::Bundle&) const ;

};
}
}
}
}

#include "com.facebook.share.internal.LikeActionController_AbstractRequestWrapper.hpp"
#include "com.facebook.share.internal.LikeActionController_CreateLikeActionControllerWorkItem.hpp"
#include "com.facebook.share.internal.LikeActionController_CreationCallback.hpp"
#include "com.facebook.share.internal.LikeActionController_GetEngagementRequestWrapper.hpp"
#include "com.facebook.share.internal.LikeActionController_GetOGObjectIdRequestWrapper.hpp"
#include "com.facebook.share.internal.LikeActionController_GetOGObjectLikesRequestWrapper.hpp"
#include "com.facebook.share.internal.LikeActionController_GetPageIdRequestWrapper.hpp"
#include "com.facebook.share.internal.LikeActionController_MRUCacheWorkItem.hpp"
#include "com.facebook.share.internal.LikeActionController_PublishLikeRequestWrapper.hpp"
#include "com.facebook.share.internal.LikeActionController_PublishUnlikeRequestWrapper.hpp"
#include "com.facebook.share.internal.LikeActionController_RequestCompletionCallback.hpp"
#include "com.facebook.share.internal.LikeActionController_SerializeToDiskWorkItem.hpp"

