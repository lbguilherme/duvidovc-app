#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"
#include "java.lang.Cloneable.hpp"

namespace android { namespace content { class ComponentName; } }
namespace android { namespace content { class ContentResolver; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace content { namespace pm { class ActivityInfo; } } }
namespace android { namespace content { namespace pm { class PackageManager; } } }
namespace android { namespace content { namespace res { class Resources; } } }
namespace android { namespace graphics { class Rect; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class Parcel; } }
namespace android { namespace os { class Parcelable; } }
namespace android { namespace util { class AttributeSet; } }
namespace java { namespace io { class Serializable; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class ClassLoader; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class ArrayList; } }
namespace java { namespace util { class Set; } }
namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } }

namespace android {
namespace content {
class Intent : public virtual ::java::lang::Object,
               public virtual ::android::os::Parcelable,
               public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Intent(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Intent(const ::android::content::Intent& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    Intent(::android::content::Intent&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::Intent& operator=(const ::android::content::Intent& x) {obj = x.obj; return *this;}
    ::android::content::Intent& operator=(::android::content::Intent&& x) {obj = std::move(x.obj); return *this;}
    
    Intent();
    Intent(const ::java::lang::String&);
    Intent(const ::java::lang::String&, const ::android::net::Uri&);
    Intent(const ::android::content::Context&, const ::java::lang::Class&);
    Intent(const ::java::lang::String&, const ::android::net::Uri&, const ::android::content::Context&, const ::java::lang::Class&);
    static ::android::content::Intent createChooser(const ::android::content::Intent&, const ::java::lang::CharSequence&);
    ::java::lang::Object clone() const ;
    ::android::content::Intent cloneFilter() const ;
    static ::android::content::Intent makeMainActivity(const ::android::content::ComponentName&);
    static ::android::content::Intent makeMainSelectorActivity(const ::java::lang::String&, const ::java::lang::String&);
    static ::android::content::Intent makeRestartActivityTask(const ::android::content::ComponentName&);
    static ::android::content::Intent getIntent(const ::java::lang::String&);
    static ::android::content::Intent parseUri(const ::java::lang::String&, int32_t);
    static ::android::content::Intent getIntentOld(const ::java::lang::String&);
    ::java::lang::String getAction() const ;
    ::android::net::Uri getData() const ;
    ::java::lang::String getDataString() const ;
    ::java::lang::String getScheme() const ;
    ::java::lang::String getType() const ;
    ::java::lang::String resolveType(const ::android::content::Context&) const ;
    ::java::lang::String resolveType(const ::android::content::ContentResolver&) const ;
    ::java::lang::String resolveTypeIfNeeded(const ::android::content::ContentResolver&) const ;
    bool hasCategory(const ::java::lang::String&) const ;
    ::java::util::Set getCategories() const ;
    ::android::content::Intent getSelector() const ;
    void setExtrasClassLoader(const ::java::lang::ClassLoader&) const ;
    bool hasExtra(const ::java::lang::String&) const ;
    bool hasFileDescriptors() const ;
    bool getBooleanExtra(const ::java::lang::String&, bool) const ;
    int8_t getByteExtra(const ::java::lang::String&, int8_t) const ;
    int16_t getShortExtra(const ::java::lang::String&, int16_t) const ;
    uint16_t getCharExtra(const ::java::lang::String&, uint16_t) const ;
    int32_t getIntExtra(const ::java::lang::String&, int32_t) const ;
    int64_t getLongExtra(const ::java::lang::String&, int64_t) const ;
    float getFloatExtra(const ::java::lang::String&, float) const ;
    double getDoubleExtra(const ::java::lang::String&, double) const ;
    ::java::lang::String getStringExtra(const ::java::lang::String&) const ;
    ::java::lang::CharSequence getCharSequenceExtra(const ::java::lang::String&) const ;
    ::android::os::Parcelable getParcelableExtra(const ::java::lang::String&) const ;
    std::vector< ::android::os::Parcelable> getParcelableArrayExtra(const ::java::lang::String&) const ;
    ::java::util::ArrayList getParcelableArrayListExtra(const ::java::lang::String&) const ;
    ::java::io::Serializable getSerializableExtra(const ::java::lang::String&) const ;
    ::java::util::ArrayList getIntegerArrayListExtra(const ::java::lang::String&) const ;
    ::java::util::ArrayList getStringArrayListExtra(const ::java::lang::String&) const ;
    ::java::util::ArrayList getCharSequenceArrayListExtra(const ::java::lang::String&) const ;
    std::vector< bool> getBooleanArrayExtra(const ::java::lang::String&) const ;
    std::vector< int8_t> getByteArrayExtra(const ::java::lang::String&) const ;
    std::vector< int16_t> getShortArrayExtra(const ::java::lang::String&) const ;
    std::vector< uint16_t> getCharArrayExtra(const ::java::lang::String&) const ;
    std::vector< int32_t> getIntArrayExtra(const ::java::lang::String&) const ;
    std::vector< int64_t> getLongArrayExtra(const ::java::lang::String&) const ;
    std::vector< float> getFloatArrayExtra(const ::java::lang::String&) const ;
    std::vector< double> getDoubleArrayExtra(const ::java::lang::String&) const ;
    std::vector< ::java::lang::String> getStringArrayExtra(const ::java::lang::String&) const ;
    std::vector< ::java::lang::CharSequence> getCharSequenceArrayExtra(const ::java::lang::String&) const ;
    ::android::os::Bundle getBundleExtra(const ::java::lang::String&) const ;
    ::android::os::Bundle getExtras() const ;
    int32_t getFlags() const ;
    ::java::lang::String getPackage() const ;
    ::android::content::ComponentName getComponent() const ;
    ::android::graphics::Rect getSourceBounds() const ;
    ::android::content::ComponentName resolveActivity(const ::android::content::pm::PackageManager&) const ;
    ::android::content::pm::ActivityInfo resolveActivityInfo(const ::android::content::pm::PackageManager&, int32_t) const ;
    ::android::content::Intent setAction(const ::java::lang::String&) const ;
    ::android::content::Intent setData(const ::android::net::Uri&) const ;
    ::android::content::Intent setType(const ::java::lang::String&) const ;
    ::android::content::Intent setDataAndType(const ::android::net::Uri&, const ::java::lang::String&) const ;
    ::android::content::Intent addCategory(const ::java::lang::String&) const ;
    void removeCategory(const ::java::lang::String&) const ;
    void setSelector(const ::android::content::Intent&) const ;
    ::android::content::Intent putExtra(const ::java::lang::String&, bool) const ;
    ::android::content::Intent putExtra(const ::java::lang::String&, int8_t) const ;
    ::android::content::Intent putExtra(const ::java::lang::String&, uint16_t) const ;
    ::android::content::Intent putExtra(const ::java::lang::String&, int16_t) const ;
    ::android::content::Intent putExtra(const ::java::lang::String&, int32_t) const ;
    ::android::content::Intent putExtra(const ::java::lang::String&, int64_t) const ;
    ::android::content::Intent putExtra(const ::java::lang::String&, float) const ;
    ::android::content::Intent putExtra(const ::java::lang::String&, double) const ;
    ::android::content::Intent putExtra(const ::java::lang::String&, const ::java::lang::String&) const ;
    ::android::content::Intent putExtra(const ::java::lang::String&, const ::java::lang::CharSequence&) const ;
    ::android::content::Intent putExtra(const ::java::lang::String&, const ::android::os::Parcelable&) const ;
    ::android::content::Intent putExtra(const ::java::lang::String&, const std::vector< ::android::os::Parcelable>&) const ;
    ::android::content::Intent putParcelableArrayListExtra(const ::java::lang::String&, const ::java::util::ArrayList&) const ;
    ::android::content::Intent putIntegerArrayListExtra(const ::java::lang::String&, const ::java::util::ArrayList&) const ;
    ::android::content::Intent putStringArrayListExtra(const ::java::lang::String&, const ::java::util::ArrayList&) const ;
    ::android::content::Intent putCharSequenceArrayListExtra(const ::java::lang::String&, const ::java::util::ArrayList&) const ;
    ::android::content::Intent putExtra(const ::java::lang::String&, const ::java::io::Serializable&) const ;
    ::android::content::Intent putExtra(const ::java::lang::String&, const std::vector< bool>&) const ;
    ::android::content::Intent putExtra(const ::java::lang::String&, const std::vector< int8_t>&) const ;
    ::android::content::Intent putExtra(const ::java::lang::String&, const std::vector< int16_t>&) const ;
    ::android::content::Intent putExtra(const ::java::lang::String&, const std::vector< uint16_t>&) const ;
    ::android::content::Intent putExtra(const ::java::lang::String&, const std::vector< int32_t>&) const ;
    ::android::content::Intent putExtra(const ::java::lang::String&, const std::vector< int64_t>&) const ;
    ::android::content::Intent putExtra(const ::java::lang::String&, const std::vector< float>&) const ;
    ::android::content::Intent putExtra(const ::java::lang::String&, const std::vector< double>&) const ;
    ::android::content::Intent putExtra(const ::java::lang::String&, const std::vector< ::java::lang::String>&) const ;
    ::android::content::Intent putExtra(const ::java::lang::String&, const std::vector< ::java::lang::CharSequence>&) const ;
    ::android::content::Intent putExtra(const ::java::lang::String&, const ::android::os::Bundle&) const ;
    ::android::content::Intent putExtras(const ::android::content::Intent&) const ;
    ::android::content::Intent putExtras(const ::android::os::Bundle&) const ;
    ::android::content::Intent replaceExtras(const ::android::content::Intent&) const ;
    ::android::content::Intent replaceExtras(const ::android::os::Bundle&) const ;
    void removeExtra(const ::java::lang::String&) const ;
    ::android::content::Intent setFlags(int32_t) const ;
    ::android::content::Intent addFlags(int32_t) const ;
    ::android::content::Intent setPackage(const ::java::lang::String&) const ;
    ::android::content::Intent setComponent(const ::android::content::ComponentName&) const ;
    ::android::content::Intent setClassName(const ::android::content::Context&, const ::java::lang::String&) const ;
    ::android::content::Intent setClassName(const ::java::lang::String&, const ::java::lang::String&) const ;
    ::android::content::Intent setClass(const ::android::content::Context&, const ::java::lang::Class&) const ;
    void setSourceBounds(const ::android::graphics::Rect&) const ;
    int32_t fillIn(const ::android::content::Intent&, int32_t) const ;
    bool filterEquals(const ::android::content::Intent&) const ;
    int32_t filterHashCode() const ;
    ::java::lang::String toString() const ;
    ::java::lang::String toURI() const ;
    ::java::lang::String toUri(int32_t) const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    void readFromParcel(const ::android::os::Parcel&) const ;
    static ::android::content::Intent parseIntent(const ::android::content::res::Resources&, const ::org::xmlpull::v1::XmlPullParser&, const ::android::util::AttributeSet&);

};
}
}

#include "android.content.Intent_FilterComparison.hpp"
#include "android.content.Intent_ShortcutIconResource.hpp"

