#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace accounts { class Account; } }
namespace android { namespace content { class ContentProviderClient; } }
namespace android { namespace content { class ContentProviderResult; } }
namespace android { namespace content { class ContentValues; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class SyncAdapterType; } }
namespace android { namespace content { class SyncInfo; } }
namespace android { namespace content { class SyncStatusObserver; } }
namespace android { namespace content { namespace res { class AssetFileDescriptor; } } }
namespace android { namespace database { class ContentObserver; } }
namespace android { namespace database { class Cursor; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class ParcelFileDescriptor; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class OutputStream; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class ArrayList; } }
namespace java { namespace util { class List; } }

namespace android {
namespace content {
class ContentResolver : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContentResolver(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContentResolver(const ::android::content::ContentResolver& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ContentResolver(::android::content::ContentResolver&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::ContentResolver& operator=(const ::android::content::ContentResolver& x) {obj = x.obj; return *this;}
    ::android::content::ContentResolver& operator=(::android::content::ContentResolver&& x) {obj = std::move(x.obj); return *this;}
    
    ContentResolver(const ::android::content::Context&);
    ::java::lang::String getType(const ::android::net::Uri&) const;
    std::vector< ::java::lang::String> getStreamTypes(const ::android::net::Uri&, const ::java::lang::String&) const;
    ::android::database::Cursor query(const ::android::net::Uri&, const std::vector< ::java::lang::String>&, const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::java::lang::String&) const;
    ::java::io::InputStream openInputStream(const ::android::net::Uri&) const;
    ::java::io::OutputStream openOutputStream(const ::android::net::Uri&) const;
    ::java::io::OutputStream openOutputStream(const ::android::net::Uri&, const ::java::lang::String&) const;
    ::android::os::ParcelFileDescriptor openFileDescriptor(const ::android::net::Uri&, const ::java::lang::String&) const;
    ::android::content::res::AssetFileDescriptor openAssetFileDescriptor(const ::android::net::Uri&, const ::java::lang::String&) const;
    ::android::content::res::AssetFileDescriptor openTypedAssetFileDescriptor(const ::android::net::Uri&, const ::java::lang::String&, const ::android::os::Bundle&) const;
    ::android::net::Uri insert(const ::android::net::Uri&, const ::android::content::ContentValues&) const;
    std::vector< ::android::content::ContentProviderResult> applyBatch(const ::java::lang::String&, const ::java::util::ArrayList&) const;
    int32_t bulkInsert(const ::android::net::Uri&, const std::vector< ::android::content::ContentValues>&) const;
    int32_t delete_(const ::android::net::Uri&, const ::java::lang::String&, const std::vector< ::java::lang::String>&) const;
    int32_t update(const ::android::net::Uri&, const ::android::content::ContentValues&, const ::java::lang::String&, const std::vector< ::java::lang::String>&) const;
    ::android::os::Bundle call(const ::android::net::Uri&, const ::java::lang::String&, const ::java::lang::String&, const ::android::os::Bundle&) const;
    ::android::content::ContentProviderClient acquireContentProviderClient(const ::android::net::Uri&) const;
    ::android::content::ContentProviderClient acquireContentProviderClient(const ::java::lang::String&) const;
    void registerContentObserver(const ::android::net::Uri&, bool, const ::android::database::ContentObserver&) const;
    void unregisterContentObserver(const ::android::database::ContentObserver&) const;
    void notifyChange(const ::android::net::Uri&, const ::android::database::ContentObserver&) const;
    void notifyChange(const ::android::net::Uri&, const ::android::database::ContentObserver&, bool) const;
    void startSync(const ::android::net::Uri&, const ::android::os::Bundle&) const;
    static void requestSync(const ::android::accounts::Account&, const ::java::lang::String&, const ::android::os::Bundle&);
    static void validateSyncExtrasBundle(const ::android::os::Bundle&);
    void cancelSync(const ::android::net::Uri&) const;
    static void cancelSync(const ::android::accounts::Account&, const ::java::lang::String&);
    static std::vector< ::android::content::SyncAdapterType> getSyncAdapterTypes();
    static bool getSyncAutomatically(const ::android::accounts::Account&, const ::java::lang::String&);
    static void setSyncAutomatically(const ::android::accounts::Account&, const ::java::lang::String&, bool);
    static void addPeriodicSync(const ::android::accounts::Account&, const ::java::lang::String&, const ::android::os::Bundle&, int64_t);
    static void removePeriodicSync(const ::android::accounts::Account&, const ::java::lang::String&, const ::android::os::Bundle&);
    static ::java::util::List getPeriodicSyncs(const ::android::accounts::Account&, const ::java::lang::String&);
    static int32_t getIsSyncable(const ::android::accounts::Account&, const ::java::lang::String&);
    static void setIsSyncable(const ::android::accounts::Account&, const ::java::lang::String&, int32_t);
    static bool getMasterSyncAutomatically();
    static void setMasterSyncAutomatically(bool);
    static bool isSyncActive(const ::android::accounts::Account&, const ::java::lang::String&);
    static ::android::content::SyncInfo getCurrentSync();
    static ::java::util::List getCurrentSyncs();
    static bool isSyncPending(const ::android::accounts::Account&, const ::java::lang::String&);
    static ::java::lang::Object addStatusChangeListener(int32_t, const ::android::content::SyncStatusObserver&);
    static void removeStatusChangeListener(const ::java::lang::Object&);

};
}
}


