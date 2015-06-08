#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.GraphRequest_KeyValueSerializer.hpp"

namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class ParcelFileDescriptor; } }
namespace com { namespace facebook { class GraphRequest; } }
namespace com { namespace facebook { namespace internal { class Logger; } } }
namespace java { namespace io { class OutputStream; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Collection; } }
namespace org { namespace json { class JSONArray; } }

namespace com {
namespace facebook {
class GraphRequest_Serializer : public virtual ::java::lang::Object,
                                public virtual ::com::facebook::GraphRequest_KeyValueSerializer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GraphRequest_Serializer(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::GraphRequest_KeyValueSerializer(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GraphRequest_Serializer(const ::com::facebook::GraphRequest_Serializer& x) : ::java::lang::Object((jobject)0), ::com::facebook::GraphRequest_KeyValueSerializer((jobject)0) {obj = x.obj;}
    GraphRequest_Serializer(::com::facebook::GraphRequest_Serializer&& x) : ::java::lang::Object((jobject)0), ::com::facebook::GraphRequest_KeyValueSerializer((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::GraphRequest_Serializer& operator=(const ::com::facebook::GraphRequest_Serializer& x) {obj = x.obj; return *this;}
    ::com::facebook::GraphRequest_Serializer& operator=(::com::facebook::GraphRequest_Serializer&& x) {obj = std::move(x.obj); return *this;}
    
    GraphRequest_Serializer(const ::java::io::OutputStream&, const ::com::facebook::internal::Logger&, bool);
    void writeObject(const ::java::lang::String&, const ::java::lang::Object&, const ::com::facebook::GraphRequest&) const;
    void writeRequestsAsJson(const ::java::lang::String&, const ::org::json::JSONArray&, const ::java::util::Collection&) const;
    void writeString(const ::java::lang::String&, const ::java::lang::String&) const;
    void writeBitmap(const ::java::lang::String&, const ::android::graphics::Bitmap&) const;
    void writeBytes(const ::java::lang::String&, const std::vector< int8_t>&) const;
    void writeContentUri(const ::java::lang::String&, const ::android::net::Uri&, const ::java::lang::String&) const;
    void writeFile(const ::java::lang::String&, const ::android::os::ParcelFileDescriptor&, const ::java::lang::String&) const;
    void writeRecordBoundary() const;
    void writeContentDisposition(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const;
    void write(const ::java::lang::String&, const std::vector< ::java::lang::Object>&) const;
    void writeLine(const ::java::lang::String&, const std::vector< ::java::lang::Object>&) const;

};
}
}


