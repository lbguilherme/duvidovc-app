#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace com { namespace facebook { namespace appevents { class AppEventsLogger_AccessTokenAppIdPair; } } }
namespace com { namespace facebook { namespace appevents { class AppEventsLogger_PersistedEvents; } } }
namespace com { namespace facebook { namespace appevents { class AppEventsLogger_SessionEventsState; } } }
namespace java { namespace util { class List; } }
namespace java { namespace util { class Map; } }
namespace java { namespace util { class Set; } }

namespace com {
namespace facebook {
namespace appevents {
class AppEventsLogger_PersistedEvents : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AppEventsLogger_PersistedEvents(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AppEventsLogger_PersistedEvents(const ::com::facebook::appevents::AppEventsLogger_PersistedEvents& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AppEventsLogger_PersistedEvents(::com::facebook::appevents::AppEventsLogger_PersistedEvents&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::appevents::AppEventsLogger_PersistedEvents& operator=(const ::com::facebook::appevents::AppEventsLogger_PersistedEvents& x) {obj = x.obj; return *this;}
    ::com::facebook::appevents::AppEventsLogger_PersistedEvents& operator=(::com::facebook::appevents::AppEventsLogger_PersistedEvents&& x) {obj = std::move(x.obj); return *this;}
    
    static ::com::facebook::appevents::AppEventsLogger_PersistedEvents readAndClearStore(const ::android::content::Context&);
    static void persistEvents(const ::android::content::Context&, const ::com::facebook::appevents::AppEventsLogger_AccessTokenAppIdPair&, const ::com::facebook::appevents::AppEventsLogger_SessionEventsState&);
    static void persistEvents(const ::android::content::Context&, const ::java::util::Map&);
    ::java::util::Set keySet() const;
    ::java::util::List getEvents(const ::com::facebook::appevents::AppEventsLogger_AccessTokenAppIdPair&) const;
    void addEvents(const ::com::facebook::appevents::AppEventsLogger_AccessTokenAppIdPair&, const ::java::util::List&) const;

};
}
}
}


