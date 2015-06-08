#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace os { class Bundle; } }
namespace java { namespace lang { class Double; } }
namespace java { namespace lang { class String; } }
namespace org { namespace json { class JSONObject; } }

namespace com {
namespace facebook {
namespace appevents {
class AppEventsLogger_AppEvent : public virtual ::java::lang::Object,
                                 public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AppEventsLogger_AppEvent(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AppEventsLogger_AppEvent(const ::com::facebook::appevents::AppEventsLogger_AppEvent& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    AppEventsLogger_AppEvent(::com::facebook::appevents::AppEventsLogger_AppEvent&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::appevents::AppEventsLogger_AppEvent& operator=(const ::com::facebook::appevents::AppEventsLogger_AppEvent& x) {obj = x.obj; return *this;}
    ::com::facebook::appevents::AppEventsLogger_AppEvent& operator=(::com::facebook::appevents::AppEventsLogger_AppEvent&& x) {obj = std::move(x.obj); return *this;}
    
    AppEventsLogger_AppEvent(const ::android::content::Context&, const ::java::lang::String&, const ::java::lang::Double&, const ::android::os::Bundle&, bool);
    ::java::lang::String getName() const;
    bool getIsImplicit() const;
    ::org::json::JSONObject getJSONObject() const;
    ::java::lang::String toString() const;

};
}
}
}

#include "com.facebook.appevents.AppEventsLogger_AppEvent_SerializationProxyV1.hpp"

