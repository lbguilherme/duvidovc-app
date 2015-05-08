#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class BroadcastReceiver; } }
namespace android { namespace content { class ComponentCallbacks; } }
namespace android { namespace content { class ComponentName; } }
namespace android { namespace content { class ContentResolver; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace content { class IntentFilter; } }
namespace android { namespace content { class IntentSender; } }
namespace android { namespace content { class ServiceConnection; } }
namespace android { namespace content { class SharedPreferences; } }
namespace android { namespace content { namespace pm { class ApplicationInfo; } } }
namespace android { namespace content { namespace pm { class PackageManager; } } }
namespace android { namespace content { namespace res { class AssetManager; } } }
namespace android { namespace content { namespace res { class Resources; } } }
namespace android { namespace content { namespace res { class Resources_Theme; } } }
namespace android { namespace content { namespace res { class TypedArray; } } }
namespace android { namespace database { class DatabaseErrorHandler; } }
namespace android { namespace database { namespace sqlite { class SQLiteDatabase; } } }
namespace android { namespace database { namespace sqlite { class SQLiteDatabase_CursorFactory; } } }
namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class Handler; } }
namespace android { namespace os { class Looper; } }
namespace android { namespace util { class AttributeSet; } }
namespace java { namespace io { class File; } }
namespace java { namespace io { class FileInputStream; } }
namespace java { namespace io { class FileOutputStream; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class ClassLoader; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
class Context : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Context(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Context(const ::android::content::Context& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Context(::android::content::Context&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::Context& operator=(const ::android::content::Context& x) {obj = x.obj; return *this;}
    ::android::content::Context& operator=(::android::content::Context&& x) {obj = std::move(x.obj); return *this;}
    
    Context();
    ::android::content::res::AssetManager getAssets() const ;
    ::android::content::res::Resources getResources() const ;
    ::android::content::pm::PackageManager getPackageManager() const ;
    ::android::content::ContentResolver getContentResolver() const ;
    ::android::os::Looper getMainLooper() const ;
    ::android::content::Context getApplicationContext() const ;
    void registerComponentCallbacks(const ::android::content::ComponentCallbacks&) const ;
    void unregisterComponentCallbacks(const ::android::content::ComponentCallbacks&) const ;
    ::java::lang::CharSequence getText(int32_t) const ;
    ::java::lang::String getString(int32_t) const ;
    ::java::lang::String getString(int32_t, const std::vector< ::java::lang::Object>&) const ;
    void setTheme(int32_t) const ;
    ::android::content::res::Resources_Theme getTheme() const ;
    ::android::content::res::TypedArray obtainStyledAttributes(const std::vector< int32_t>&) const ;
    ::android::content::res::TypedArray obtainStyledAttributes(int32_t, const std::vector< int32_t>&) const ;
    ::android::content::res::TypedArray obtainStyledAttributes(const ::android::util::AttributeSet&, const std::vector< int32_t>&) const ;
    ::android::content::res::TypedArray obtainStyledAttributes(const ::android::util::AttributeSet&, const std::vector< int32_t>&, int32_t, int32_t) const ;
    ::java::lang::ClassLoader getClassLoader() const ;
    ::java::lang::String getPackageName() const ;
    ::android::content::pm::ApplicationInfo getApplicationInfo() const ;
    ::java::lang::String getPackageResourcePath() const ;
    ::java::lang::String getPackageCodePath() const ;
    ::android::content::SharedPreferences getSharedPreferences(const ::java::lang::String&, int32_t) const ;
    ::java::io::FileInputStream openFileInput(const ::java::lang::String&) const ;
    ::java::io::FileOutputStream openFileOutput(const ::java::lang::String&, int32_t) const ;
    bool deleteFile(const ::java::lang::String&) const ;
    ::java::io::File getFileStreamPath(const ::java::lang::String&) const ;
    ::java::io::File getFilesDir() const ;
    ::java::io::File getExternalFilesDir(const ::java::lang::String&) const ;
    ::java::io::File getObbDir() const ;
    ::java::io::File getCacheDir() const ;
    ::java::io::File getExternalCacheDir() const ;
    std::vector< ::java::lang::String> fileList() const ;
    ::java::io::File getDir(const ::java::lang::String&, int32_t) const ;
    ::android::database::sqlite::SQLiteDatabase openOrCreateDatabase(const ::java::lang::String&, int32_t, const ::android::database::sqlite::SQLiteDatabase_CursorFactory&) const ;
    ::android::database::sqlite::SQLiteDatabase openOrCreateDatabase(const ::java::lang::String&, int32_t, const ::android::database::sqlite::SQLiteDatabase_CursorFactory&, const ::android::database::DatabaseErrorHandler&) const ;
    bool deleteDatabase(const ::java::lang::String&) const ;
    ::java::io::File getDatabasePath(const ::java::lang::String&) const ;
    std::vector< ::java::lang::String> databaseList() const ;
    ::android::graphics::drawable::Drawable getWallpaper() const ;
    ::android::graphics::drawable::Drawable peekWallpaper() const ;
    int32_t getWallpaperDesiredMinimumWidth() const ;
    int32_t getWallpaperDesiredMinimumHeight() const ;
    void setWallpaper(const ::android::graphics::Bitmap&) const ;
    void setWallpaper(const ::java::io::InputStream&) const ;
    void clearWallpaper() const ;
    void startActivity(const ::android::content::Intent&) const ;
    void startActivities(const std::vector< ::android::content::Intent>&) const ;
    void startIntentSender(const ::android::content::IntentSender&, const ::android::content::Intent&, int32_t, int32_t, int32_t) const ;
    void sendBroadcast(const ::android::content::Intent&) const ;
    void sendBroadcast(const ::android::content::Intent&, const ::java::lang::String&) const ;
    void sendOrderedBroadcast(const ::android::content::Intent&, const ::java::lang::String&) const ;
    void sendOrderedBroadcast(const ::android::content::Intent&, const ::java::lang::String&, const ::android::content::BroadcastReceiver&, const ::android::os::Handler&, int32_t, const ::java::lang::String&, const ::android::os::Bundle&) const ;
    void sendStickyBroadcast(const ::android::content::Intent&) const ;
    void sendStickyOrderedBroadcast(const ::android::content::Intent&, const ::android::content::BroadcastReceiver&, const ::android::os::Handler&, int32_t, const ::java::lang::String&, const ::android::os::Bundle&) const ;
    void removeStickyBroadcast(const ::android::content::Intent&) const ;
    ::android::content::Intent registerReceiver(const ::android::content::BroadcastReceiver&, const ::android::content::IntentFilter&) const ;
    ::android::content::Intent registerReceiver(const ::android::content::BroadcastReceiver&, const ::android::content::IntentFilter&, const ::java::lang::String&, const ::android::os::Handler&) const ;
    void unregisterReceiver(const ::android::content::BroadcastReceiver&) const ;
    ::android::content::ComponentName startService(const ::android::content::Intent&) const ;
    bool stopService(const ::android::content::Intent&) const ;
    bool bindService(const ::android::content::Intent&, const ::android::content::ServiceConnection&, int32_t) const ;
    void unbindService(const ::android::content::ServiceConnection&) const ;
    bool startInstrumentation(const ::android::content::ComponentName&, const ::java::lang::String&, const ::android::os::Bundle&) const ;
    ::java::lang::Object getSystemService(const ::java::lang::String&) const ;
    int32_t checkPermission(const ::java::lang::String&, int32_t, int32_t) const ;
    int32_t checkCallingPermission(const ::java::lang::String&) const ;
    int32_t checkCallingOrSelfPermission(const ::java::lang::String&) const ;
    void enforcePermission(const ::java::lang::String&, int32_t, int32_t, const ::java::lang::String&) const ;
    void enforceCallingPermission(const ::java::lang::String&, const ::java::lang::String&) const ;
    void enforceCallingOrSelfPermission(const ::java::lang::String&, const ::java::lang::String&) const ;
    void grantUriPermission(const ::java::lang::String&, const ::android::net::Uri&, int32_t) const ;
    void revokeUriPermission(const ::android::net::Uri&, int32_t) const ;
    int32_t checkUriPermission(const ::android::net::Uri&, int32_t, int32_t, int32_t) const ;
    int32_t checkCallingUriPermission(const ::android::net::Uri&, int32_t) const ;
    int32_t checkCallingOrSelfUriPermission(const ::android::net::Uri&, int32_t) const ;
    int32_t checkUriPermission(const ::android::net::Uri&, const ::java::lang::String&, const ::java::lang::String&, int32_t, int32_t, int32_t) const ;
    void enforceUriPermission(const ::android::net::Uri&, int32_t, int32_t, int32_t, const ::java::lang::String&) const ;
    void enforceCallingUriPermission(const ::android::net::Uri&, int32_t, const ::java::lang::String&) const ;
    void enforceCallingOrSelfUriPermission(const ::android::net::Uri&, int32_t, const ::java::lang::String&) const ;
    void enforceUriPermission(const ::android::net::Uri&, const ::java::lang::String&, const ::java::lang::String&, int32_t, int32_t, int32_t, const ::java::lang::String&) const ;
    ::android::content::Context createPackageContext(const ::java::lang::String&, int32_t) const ;
    bool isRestricted() const ;

};
}
}


