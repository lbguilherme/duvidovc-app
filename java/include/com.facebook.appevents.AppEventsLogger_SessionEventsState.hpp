#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { class GraphRequest; } }
namespace com { namespace facebook { namespace appevents { class AppEventsLogger_AppEvent; } } }
namespace com { namespace facebook { namespace internal { class AttributionIdentifiers; } } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace com {
namespace facebook {
namespace appevents {
class AppEventsLogger_SessionEventsState : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AppEventsLogger_SessionEventsState(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AppEventsLogger_SessionEventsState(const ::com::facebook::appevents::AppEventsLogger_SessionEventsState& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AppEventsLogger_SessionEventsState(::com::facebook::appevents::AppEventsLogger_SessionEventsState&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::appevents::AppEventsLogger_SessionEventsState& operator=(const ::com::facebook::appevents::AppEventsLogger_SessionEventsState& x) {obj = x.obj; return *this;}
    ::com::facebook::appevents::AppEventsLogger_SessionEventsState& operator=(::com::facebook::appevents::AppEventsLogger_SessionEventsState&& x) {obj = std::move(x.obj); return *this;}
    
    AppEventsLogger_SessionEventsState(const ::com::facebook::internal::AttributionIdentifiers&, const ::java::lang::String&, const ::java::lang::String&);
    void addEvent(const ::com::facebook::appevents::AppEventsLogger_AppEvent&) const ;
    int32_t getAccumulatedEventCount() const ;
    void clearInFlightAndStats(bool) const ;
    int32_t populateRequest(const ::com::facebook::GraphRequest&, bool, bool) const ;
    ::java::util::List getEventsToPersist() const ;
    void accumulatePersistedEvents(const ::java::util::List&) const ;

};
}
}
}


