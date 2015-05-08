#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.AbstractList.hpp"

namespace com { namespace facebook { class GraphRequest; } }
namespace com { namespace facebook { class GraphRequestAsyncTask; } }
namespace com { namespace facebook { class GraphRequestBatch_Callback; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class List; } }

namespace com {
namespace facebook {
class GraphRequestBatch : public virtual ::java::lang::Object,
                          public virtual ::java::util::AbstractList {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GraphRequestBatch(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Iterable(_obj), ::java::util::AbstractCollection(_obj), ::java::util::AbstractList(_obj), ::java::util::Collection(_obj), ::java::util::List(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GraphRequestBatch(const ::com::facebook::GraphRequestBatch& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractList((jobject)0), ::java::util::Collection((jobject)0), ::java::util::List((jobject)0) {obj = x.obj;}
    GraphRequestBatch(::com::facebook::GraphRequestBatch&& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractList((jobject)0), ::java::util::Collection((jobject)0), ::java::util::List((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::GraphRequestBatch& operator=(const ::com::facebook::GraphRequestBatch& x) {obj = x.obj; return *this;}
    ::com::facebook::GraphRequestBatch& operator=(::com::facebook::GraphRequestBatch&& x) {obj = std::move(x.obj); return *this;}
    
    GraphRequestBatch();
    GraphRequestBatch(const ::java::util::Collection&);
    GraphRequestBatch(const std::vector< ::com::facebook::GraphRequest>&);
    int32_t getTimeout() const ;
    void setTimeout(int32_t) const ;
    void addCallback(const ::com::facebook::GraphRequestBatch_Callback&) const ;
    void removeCallback(const ::com::facebook::GraphRequestBatch_Callback&) const ;
    bool add(const ::com::facebook::GraphRequest&) const ;
    void add(int32_t, const ::com::facebook::GraphRequest&) const ;
    void clear() const ;
    ::com::facebook::GraphRequest get(int32_t) const ;
    ::com::facebook::GraphRequest remove(int32_t) const ;
    ::com::facebook::GraphRequest set(int32_t, const ::com::facebook::GraphRequest&) const ;
    int32_t size() const ;
    ::java::lang::String getBatchApplicationId() const ;
    void setBatchApplicationId(const ::java::lang::String&) const ;
    ::java::util::List executeAndWait() const ;
    ::com::facebook::GraphRequestAsyncTask executeAsync() const ;
    ::java::lang::Object set(int32_t, const ::java::lang::Object&) const ;
    bool add(const ::java::lang::Object&) const ;
    void add(int32_t, const ::java::lang::Object&) const ;

};
}
}

#include "com.facebook.GraphRequestBatch_Callback.hpp"
#include "com.facebook.GraphRequestBatch_OnProgressCallback.hpp"

