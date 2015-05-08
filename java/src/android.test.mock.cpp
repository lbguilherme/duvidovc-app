#include "java-core.hpp"
#include <memory>
#include "android.content.BroadcastReceiver.hpp"
#include "android.content.ComponentName.hpp"
#include "android.content.ContentProvider.hpp"
#include "android.content.ContentProviderResult.hpp"
#include "android.content.ContentResolver.hpp"
#include "android.content.ContentValues.hpp"
#include "android.content.Context.hpp"
#include "android.content.Intent.hpp"
#include "android.content.IntentFilter.hpp"
#include "android.content.IntentSender.hpp"
#include "android.content.ServiceConnection.hpp"
#include "android.content.SharedPreferences.hpp"
#include "android.content.pm.ActivityInfo.hpp"
#include "android.content.pm.ApplicationInfo.hpp"
#include "android.content.pm.FeatureInfo.hpp"
#include "android.content.pm.InstrumentationInfo.hpp"
#include "android.content.pm.PackageInfo.hpp"
#include "android.content.pm.PackageManager.hpp"
#include "android.content.pm.PathPermission.hpp"
#include "android.content.pm.PermissionGroupInfo.hpp"
#include "android.content.pm.PermissionInfo.hpp"
#include "android.content.pm.ProviderInfo.hpp"
#include "android.content.pm.ResolveInfo.hpp"
#include "android.content.pm.ServiceInfo.hpp"
#include "android.content.res.AssetFileDescriptor.hpp"
#include "android.content.res.AssetManager.hpp"
#include "android.content.res.ColorStateList.hpp"
#include "android.content.res.Configuration.hpp"
#include "android.content.res.Resources.hpp"
#include "android.content.res.TypedArray.hpp"
#include "android.content.res.XmlResourceParser.hpp"
#include "android.database.CharArrayBuffer.hpp"
#include "android.database.ContentObserver.hpp"
#include "android.database.Cursor.hpp"
#include "android.database.DataSetObserver.hpp"
#include "android.database.DatabaseErrorHandler.hpp"
#include "android.database.sqlite.SQLiteDatabase.hpp"
#include "android.graphics.Bitmap.hpp"
#include "android.graphics.Movie.hpp"
#include "android.graphics.drawable.Drawable.hpp"
#include "android.net.Uri.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.Handler.hpp"
#include "android.os.Looper.hpp"
#include "android.test.mock.MockApplication.hpp"
#include "android.test.mock.MockContentProvider.hpp"
#include "android.test.mock.MockContentResolver.hpp"
#include "android.test.mock.MockContext.hpp"
#include "android.test.mock.MockCursor.hpp"
#include "android.test.mock.MockDialogInterface.hpp"
#include "android.test.mock.MockPackageManager.hpp"
#include "android.test.mock.MockResources.hpp"
#include "android.util.AttributeSet.hpp"
#include "android.util.DisplayMetrics.hpp"
#include "android.util.TypedValue.hpp"
#include "java.io.File.hpp"
#include "java.io.FileInputStream.hpp"
#include "java.io.FileOutputStream.hpp"
#include "java.io.InputStream.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.ClassLoader.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.ArrayList.hpp"
#include "java.util.List.hpp"

jclass android::test::mock::MockContext::_class = nullptr;
jclass android::test::mock::MockResources::_class = nullptr;
jclass android::test::mock::MockCursor::_class = nullptr;
jclass android::test::mock::MockContentProvider::_class = nullptr;
jclass android::test::mock::MockContentResolver::_class = nullptr;
jclass android::test::mock::MockPackageManager::_class = nullptr;
jclass android::test::mock::MockApplication::_class = nullptr;
jclass android::test::mock::MockDialogInterface::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::mock::MockContext::MockContext() : ::java::lang::Object((jobject)0), ::android::content::Context((jobject)0) {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::content::res::AssetManager android::test::mock::MockContext::getAssets() const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAssets", "()Landroid/content/res/AssetManager;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::res::AssetManager _ret(ret);
    return _ret;
}

::android::content::res::Resources android::test::mock::MockContext::getResources() const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResources", "()Landroid/content/res/Resources;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::res::Resources _ret(ret);
    return _ret;
}

::android::content::pm::PackageManager android::test::mock::MockContext::getPackageManager() const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageManager", "()Landroid/content/pm/PackageManager;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::pm::PackageManager _ret(ret);
    return _ret;
}

::android::content::ContentResolver android::test::mock::MockContext::getContentResolver() const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentResolver", "()Landroid/content/ContentResolver;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::ContentResolver _ret(ret);
    return _ret;
}

::android::os::Looper android::test::mock::MockContext::getMainLooper() const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMainLooper", "()Landroid/os/Looper;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Looper _ret(ret);
    return _ret;
}

::android::content::Context android::test::mock::MockContext::getApplicationContext() const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplicationContext", "()Landroid/content/Context;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Context _ret(ret);
    return _ret;
}

void android::test::mock::MockContext::setTheme(int32_t arg0) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTheme", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::res::Resources_Theme android::test::mock::MockContext::getTheme() const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTheme", "()Landroid/content/res/Resources$Theme;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::res::Resources_Theme _ret(ret);
    return _ret;
}

::java::lang::ClassLoader android::test::mock::MockContext::getClassLoader() const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClassLoader", "()Ljava/lang/ClassLoader;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::ClassLoader _ret(ret);
    return _ret;
}

::java::lang::String android::test::mock::MockContext::getPackageName() const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::content::pm::ApplicationInfo android::test::mock::MockContext::getApplicationInfo() const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplicationInfo", "()Landroid/content/pm/ApplicationInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::pm::ApplicationInfo _ret(ret);
    return _ret;
}

::java::lang::String android::test::mock::MockContext::getPackageResourcePath() const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageResourcePath", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::test::mock::MockContext::getPackageCodePath() const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageCodePath", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::content::SharedPreferences android::test::mock::MockContext::getSharedPreferences(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSharedPreferences", "(Ljava/lang/String;I)Landroid/content/SharedPreferences;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::SharedPreferences _ret(ret);
    return _ret;
}

::java::io::FileInputStream android::test::mock::MockContext::openFileInput(const ::java::lang::String& arg0) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "openFileInput", "(Ljava/lang/String;)Ljava/io/FileInputStream;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::FileInputStream _ret(ret);
    return _ret;
}

::java::io::FileOutputStream android::test::mock::MockContext::openFileOutput(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "openFileOutput", "(Ljava/lang/String;I)Ljava/io/FileOutputStream;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::io::FileOutputStream _ret(ret);
    return _ret;
}

bool android::test::mock::MockContext::deleteFile(const ::java::lang::String& arg0) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "deleteFile", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::io::File android::test::mock::MockContext::getFileStreamPath(const ::java::lang::String& arg0) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFileStreamPath", "(Ljava/lang/String;)Ljava/io/File;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::File _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> android::test::mock::MockContext::fileList() const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "fileList", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::io::File android::test::mock::MockContext::getFilesDir() const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFilesDir", "()Ljava/io/File;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::File _ret(ret);
    return _ret;
}

::java::io::File android::test::mock::MockContext::getExternalFilesDir(const ::java::lang::String& arg0) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExternalFilesDir", "(Ljava/lang/String;)Ljava/io/File;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::File _ret(ret);
    return _ret;
}

::java::io::File android::test::mock::MockContext::getObbDir() const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObbDir", "()Ljava/io/File;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::File _ret(ret);
    return _ret;
}

::java::io::File android::test::mock::MockContext::getCacheDir() const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCacheDir", "()Ljava/io/File;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::File _ret(ret);
    return _ret;
}

::java::io::File android::test::mock::MockContext::getExternalCacheDir() const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExternalCacheDir", "()Ljava/io/File;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::File _ret(ret);
    return _ret;
}

::java::io::File android::test::mock::MockContext::getDir(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDir", "(Ljava/lang/String;I)Ljava/io/File;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::io::File _ret(ret);
    return _ret;
}

::android::database::sqlite::SQLiteDatabase android::test::mock::MockContext::openOrCreateDatabase(const ::java::lang::String& arg0, int32_t arg1, const ::android::database::sqlite::SQLiteDatabase_CursorFactory& arg2) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "openOrCreateDatabase", "(Ljava/lang/String;ILandroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::database::sqlite::SQLiteDatabase _ret(ret);
    return _ret;
}

::android::database::sqlite::SQLiteDatabase android::test::mock::MockContext::openOrCreateDatabase(const ::java::lang::String& arg0, int32_t arg1, const ::android::database::sqlite::SQLiteDatabase_CursorFactory& arg2, const ::android::database::DatabaseErrorHandler& arg3) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "openOrCreateDatabase", "(Ljava/lang/String;ILandroid/database/sqlite/SQLiteDatabase$CursorFactory;Landroid/database/DatabaseErrorHandler;)Landroid/database/sqlite/SQLiteDatabase;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::database::sqlite::SQLiteDatabase _ret(ret);
    return _ret;
}

::java::io::File android::test::mock::MockContext::getDatabasePath(const ::java::lang::String& arg0) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDatabasePath", "(Ljava/lang/String;)Ljava/io/File;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::File _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> android::test::mock::MockContext::databaseList() const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "databaseList", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool android::test::mock::MockContext::deleteDatabase(const ::java::lang::String& arg0) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "deleteDatabase", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::graphics::drawable::Drawable android::test::mock::MockContext::getWallpaper() const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWallpaper", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::test::mock::MockContext::peekWallpaper() const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "peekWallpaper", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

int32_t android::test::mock::MockContext::getWallpaperDesiredMinimumWidth() const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWallpaperDesiredMinimumWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::test::mock::MockContext::getWallpaperDesiredMinimumHeight() const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWallpaperDesiredMinimumHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::test::mock::MockContext::setWallpaper(const ::android::graphics::Bitmap& arg0) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWallpaper", "(Landroid/graphics/Bitmap;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::test::mock::MockContext::setWallpaper(const ::java::io::InputStream& arg0) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWallpaper", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::test::mock::MockContext::clearWallpaper() const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearWallpaper", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::test::mock::MockContext::startActivity(const ::android::content::Intent& arg0) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "startActivity", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::test::mock::MockContext::startActivities(const std::vector< ::android::content::Intent>& arg0) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "startActivities", "([Landroid/content/Intent;)V");
    unsigned arg0s = arg0.size();
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::content::Intent::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::content::Intent& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::test::mock::MockContext::startIntentSender(const ::android::content::IntentSender& arg0, const ::android::content::Intent& arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "startIntentSender", "(Landroid/content/IntentSender;Landroid/content/Intent;III)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::test::mock::MockContext::sendBroadcast(const ::android::content::Intent& arg0) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendBroadcast", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::test::mock::MockContext::sendBroadcast(const ::android::content::Intent& arg0, const ::java::lang::String& arg1) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendBroadcast", "(Landroid/content/Intent;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::test::mock::MockContext::sendOrderedBroadcast(const ::android::content::Intent& arg0, const ::java::lang::String& arg1) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendOrderedBroadcast", "(Landroid/content/Intent;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::test::mock::MockContext::sendOrderedBroadcast(const ::android::content::Intent& arg0, const ::java::lang::String& arg1, const ::android::content::BroadcastReceiver& arg2, const ::android::os::Handler& arg3, int32_t arg4, const ::java::lang::String& arg5, const ::android::os::Bundle& arg6) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendOrderedBroadcast", "(Landroid/content/Intent;Ljava/lang/String;Landroid/content/BroadcastReceiver;Landroid/os/Handler;ILjava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    int32_t _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    jobject _arg6 = arg6.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}

void android::test::mock::MockContext::sendStickyBroadcast(const ::android::content::Intent& arg0) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendStickyBroadcast", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::test::mock::MockContext::sendStickyOrderedBroadcast(const ::android::content::Intent& arg0, const ::android::content::BroadcastReceiver& arg1, const ::android::os::Handler& arg2, int32_t arg3, const ::java::lang::String& arg4, const ::android::os::Bundle& arg5) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendStickyOrderedBroadcast", "(Landroid/content/Intent;Landroid/content/BroadcastReceiver;Landroid/os/Handler;ILjava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::test::mock::MockContext::removeStickyBroadcast(const ::android::content::Intent& arg0) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeStickyBroadcast", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::Intent android::test::mock::MockContext::registerReceiver(const ::android::content::BroadcastReceiver& arg0, const ::android::content::IntentFilter& arg1) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerReceiver", "(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::test::mock::MockContext::registerReceiver(const ::android::content::BroadcastReceiver& arg0, const ::android::content::IntentFilter& arg1, const ::java::lang::String& arg2, const ::android::os::Handler& arg3) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerReceiver", "(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;Ljava/lang/String;Landroid/os/Handler;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::content::Intent _ret(ret);
    return _ret;
}

void android::test::mock::MockContext::unregisterReceiver(const ::android::content::BroadcastReceiver& arg0) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterReceiver", "(Landroid/content/BroadcastReceiver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::ComponentName android::test::mock::MockContext::startService(const ::android::content::Intent& arg0) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "startService", "(Landroid/content/Intent;)Landroid/content/ComponentName;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::ComponentName _ret(ret);
    return _ret;
}

bool android::test::mock::MockContext::stopService(const ::android::content::Intent& arg0) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopService", "(Landroid/content/Intent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::test::mock::MockContext::bindService(const ::android::content::Intent& arg0, const ::android::content::ServiceConnection& arg1, int32_t arg2) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "bindService", "(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::test::mock::MockContext::unbindService(const ::android::content::ServiceConnection& arg0) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "unbindService", "(Landroid/content/ServiceConnection;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::test::mock::MockContext::startInstrumentation(const ::android::content::ComponentName& arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "startInstrumentation", "(Landroid/content/ComponentName;Ljava/lang/String;Landroid/os/Bundle;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::Object android::test::mock::MockContext::getSystemService(const ::java::lang::String& arg0) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t android::test::mock::MockContext::checkPermission(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkPermission", "(Ljava/lang/String;II)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::test::mock::MockContext::checkCallingPermission(const ::java::lang::String& arg0) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkCallingPermission", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::test::mock::MockContext::checkCallingOrSelfPermission(const ::java::lang::String& arg0) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkCallingOrSelfPermission", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::test::mock::MockContext::enforcePermission(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2, const ::java::lang::String& arg3) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "enforcePermission", "(Ljava/lang/String;IILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::test::mock::MockContext::enforceCallingPermission(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "enforceCallingPermission", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::test::mock::MockContext::enforceCallingOrSelfPermission(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "enforceCallingOrSelfPermission", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::test::mock::MockContext::grantUriPermission(const ::java::lang::String& arg0, const ::android::net::Uri& arg1, int32_t arg2) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "grantUriPermission", "(Ljava/lang/String;Landroid/net/Uri;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::test::mock::MockContext::revokeUriPermission(const ::android::net::Uri& arg0, int32_t arg1) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "revokeUriPermission", "(Landroid/net/Uri;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::test::mock::MockContext::checkUriPermission(const ::android::net::Uri& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkUriPermission", "(Landroid/net/Uri;III)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::test::mock::MockContext::checkCallingUriPermission(const ::android::net::Uri& arg0, int32_t arg1) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkCallingUriPermission", "(Landroid/net/Uri;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::test::mock::MockContext::checkCallingOrSelfUriPermission(const ::android::net::Uri& arg0, int32_t arg1) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkCallingOrSelfUriPermission", "(Landroid/net/Uri;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::test::mock::MockContext::checkUriPermission(const ::android::net::Uri& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, int32_t arg3, int32_t arg4, int32_t arg5) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkUriPermission", "(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;III)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::test::mock::MockContext::enforceUriPermission(const ::android::net::Uri& arg0, int32_t arg1, int32_t arg2, int32_t arg3, const ::java::lang::String& arg4) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "enforceUriPermission", "(Landroid/net/Uri;IIILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::test::mock::MockContext::enforceCallingUriPermission(const ::android::net::Uri& arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "enforceCallingUriPermission", "(Landroid/net/Uri;ILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::test::mock::MockContext::enforceCallingOrSelfUriPermission(const ::android::net::Uri& arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "enforceCallingOrSelfUriPermission", "(Landroid/net/Uri;ILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::test::mock::MockContext::enforceUriPermission(const ::android::net::Uri& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, int32_t arg3, int32_t arg4, int32_t arg5, const ::java::lang::String& arg6) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "enforceUriPermission", "(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;IIILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    jobject _arg6 = arg6.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}

::android::content::Context android::test::mock::MockContext::createPackageContext(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "createPackageContext", "(Ljava/lang/String;I)Landroid/content/Context;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Context _ret(ret);
    return _ret;
}

bool android::test::mock::MockContext::isRestricted() const {
    if (!::android::test::mock::MockContext::_class) ::android::test::mock::MockContext::_class = java::fetch_class("android/test/mock/MockContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRestricted", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::mock::MockResources::MockResources() : ::java::lang::Object((jobject)0), ::android::content::res::Resources((jobject)0) {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::test::mock::MockResources::updateConfiguration(const ::android::content::res::Configuration& arg0, const ::android::util::DisplayMetrics& arg1) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateConfiguration", "(Landroid/content/res/Configuration;Landroid/util/DisplayMetrics;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::CharSequence android::test::mock::MockResources::getText(int32_t arg0) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "(I)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::test::mock::MockResources::getQuantityText(int32_t arg0, int32_t arg1) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQuantityText", "(II)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::String android::test::mock::MockResources::getString(int32_t arg0) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::test::mock::MockResources::getString(int32_t arg0, const std::vector< ::java::lang::Object>& arg1) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getString", "(I[Ljava/lang/Object;)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::test::mock::MockResources::getQuantityString(int32_t arg0, int32_t arg1, const std::vector< ::java::lang::Object>& arg2) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQuantityString", "(II[Ljava/lang/Object;)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    unsigned arg2s = arg2.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::Object& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::test::mock::MockResources::getQuantityString(int32_t arg0, int32_t arg1) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQuantityString", "(II)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::test::mock::MockResources::getText(int32_t arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "(ILjava/lang/CharSequence;)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

std::vector< ::java::lang::CharSequence> android::test::mock::MockResources::getTextArray(int32_t arg0) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextArray", "(I)[Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::CharSequence> _ret(rets, ::java::lang::CharSequence((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::CharSequence retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::String> android::test::mock::MockResources::getStringArray(int32_t arg0) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStringArray", "(I)[Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< int32_t> android::test::mock::MockResources::getIntArray(int32_t arg0) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntArray", "(I)[I");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

::android::content::res::TypedArray android::test::mock::MockResources::obtainTypedArray(int32_t arg0) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtainTypedArray", "(I)Landroid/content/res/TypedArray;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::res::TypedArray _ret(ret);
    return _ret;
}

float android::test::mock::MockResources::getDimension(int32_t arg0) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDimension", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

int32_t android::test::mock::MockResources::getDimensionPixelOffset(int32_t arg0) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDimensionPixelOffset", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::test::mock::MockResources::getDimensionPixelSize(int32_t arg0) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDimensionPixelSize", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::graphics::drawable::Drawable android::test::mock::MockResources::getDrawable(int32_t arg0) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDrawable", "(I)Landroid/graphics/drawable/Drawable;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::Movie android::test::mock::MockResources::getMovie(int32_t arg0) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMovie", "(I)Landroid/graphics/Movie;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::Movie _ret(ret);
    return _ret;
}

int32_t android::test::mock::MockResources::getColor(int32_t arg0) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColor", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::content::res::ColorStateList android::test::mock::MockResources::getColorStateList(int32_t arg0) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColorStateList", "(I)Landroid/content/res/ColorStateList;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::res::ColorStateList _ret(ret);
    return _ret;
}

int32_t android::test::mock::MockResources::getInteger(int32_t arg0) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInteger", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::content::res::XmlResourceParser android::test::mock::MockResources::getLayout(int32_t arg0) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayout", "(I)Landroid/content/res/XmlResourceParser;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::res::XmlResourceParser _ret(ret);
    return _ret;
}

::android::content::res::XmlResourceParser android::test::mock::MockResources::getAnimation(int32_t arg0) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAnimation", "(I)Landroid/content/res/XmlResourceParser;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::res::XmlResourceParser _ret(ret);
    return _ret;
}

::android::content::res::XmlResourceParser android::test::mock::MockResources::getXml(int32_t arg0) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getXml", "(I)Landroid/content/res/XmlResourceParser;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::res::XmlResourceParser _ret(ret);
    return _ret;
}

::java::io::InputStream android::test::mock::MockResources::openRawResource(int32_t arg0) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "openRawResource", "(I)Ljava/io/InputStream;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::android::content::res::AssetFileDescriptor android::test::mock::MockResources::openRawResourceFd(int32_t arg0) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "openRawResourceFd", "(I)Landroid/content/res/AssetFileDescriptor;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::res::AssetFileDescriptor _ret(ret);
    return _ret;
}

void android::test::mock::MockResources::getValue(int32_t arg0, const ::android::util::TypedValue& arg1, bool arg2) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "(ILandroid/util/TypedValue;Z)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::test::mock::MockResources::getValue(const ::java::lang::String& arg0, const ::android::util::TypedValue& arg1, bool arg2) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "(Ljava/lang/String;Landroid/util/TypedValue;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::content::res::TypedArray android::test::mock::MockResources::obtainAttributes(const ::android::util::AttributeSet& arg0, const std::vector< int32_t>& arg1) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtainAttributes", "(Landroid/util/AttributeSet;[I)Landroid/content/res/TypedArray;");
    jobject _arg0 = arg0.obj;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::res::TypedArray _ret(ret);
    return _ret;
}

::android::util::DisplayMetrics android::test::mock::MockResources::getDisplayMetrics() const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayMetrics", "()Landroid/util/DisplayMetrics;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::util::DisplayMetrics _ret(ret);
    return _ret;
}

::android::content::res::Configuration android::test::mock::MockResources::getConfiguration() const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConfiguration", "()Landroid/content/res/Configuration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::res::Configuration _ret(ret);
    return _ret;
}

int32_t android::test::mock::MockResources::getIdentifier(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIdentifier", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::String android::test::mock::MockResources::getResourceName(int32_t arg0) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResourceName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::test::mock::MockResources::getResourcePackageName(int32_t arg0) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResourcePackageName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::test::mock::MockResources::getResourceTypeName(int32_t arg0) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResourceTypeName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::test::mock::MockResources::getResourceEntryName(int32_t arg0) const {
    if (!::android::test::mock::MockResources::_class) ::android::test::mock::MockResources::_class = java::fetch_class("android/test/mock/MockResources");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResourceEntryName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::mock::MockCursor::MockCursor() : ::java::lang::Object((jobject)0), ::android::database::Cursor((jobject)0) {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::test::mock::MockCursor::getColumnCount() const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::test::mock::MockCursor::getColumnIndex(const ::java::lang::String& arg0) const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnIndex", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::test::mock::MockCursor::getColumnIndexOrThrow(const ::java::lang::String& arg0) const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnIndexOrThrow", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String android::test::mock::MockCursor::getColumnName(int32_t arg0) const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> android::test::mock::MockCursor::getColumnNames() const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnNames", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

int32_t android::test::mock::MockCursor::getCount() const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::test::mock::MockCursor::isNull(int32_t arg0) const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isNull", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::test::mock::MockCursor::getInt(int32_t arg0) const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInt", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int64_t android::test::mock::MockCursor::getLong(int32_t arg0) const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLong", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int16_t android::test::mock::MockCursor::getShort(int32_t arg0) const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShort", "(I)S");
    int32_t _arg0 = arg0;
    return java::jni->CallShortMethod(obj, mid, _arg0);
}

float android::test::mock::MockCursor::getFloat(int32_t arg0) const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFloat", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

double android::test::mock::MockCursor::getDouble(int32_t arg0) const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDouble", "(I)D");
    int32_t _arg0 = arg0;
    return java::jni->CallDoubleMethod(obj, mid, _arg0);
}

std::vector< int8_t> android::test::mock::MockCursor::getBlob(int32_t arg0) const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBlob", "(I)[B");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::String android::test::mock::MockCursor::getString(int32_t arg0) const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::os::Bundle android::test::mock::MockCursor::getExtras() const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtras", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

int32_t android::test::mock::MockCursor::getPosition() const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPosition", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::test::mock::MockCursor::isAfterLast() const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAfterLast", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::test::mock::MockCursor::isBeforeFirst() const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isBeforeFirst", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::test::mock::MockCursor::isFirst() const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFirst", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::test::mock::MockCursor::isLast() const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLast", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::test::mock::MockCursor::move(int32_t arg0) const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "move", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::test::mock::MockCursor::moveToFirst() const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "moveToFirst", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::test::mock::MockCursor::moveToLast() const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "moveToLast", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::test::mock::MockCursor::moveToNext() const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "moveToNext", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::test::mock::MockCursor::moveToPrevious() const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "moveToPrevious", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::test::mock::MockCursor::moveToPosition(int32_t arg0) const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "moveToPosition", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::test::mock::MockCursor::copyStringToBuffer(int32_t arg0, const ::android::database::CharArrayBuffer& arg1) const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyStringToBuffer", "(ILandroid/database/CharArrayBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::test::mock::MockCursor::deactivate() const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "deactivate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::test::mock::MockCursor::close() const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::test::mock::MockCursor::isClosed() const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isClosed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::test::mock::MockCursor::requery() const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "requery", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::test::mock::MockCursor::registerContentObserver(const ::android::database::ContentObserver& arg0) const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerContentObserver", "(Landroid/database/ContentObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::test::mock::MockCursor::registerDataSetObserver(const ::android::database::DataSetObserver& arg0) const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerDataSetObserver", "(Landroid/database/DataSetObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::os::Bundle android::test::mock::MockCursor::respond(const ::android::os::Bundle& arg0) const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "respond", "(Landroid/os/Bundle;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

bool android::test::mock::MockCursor::getWantsAllOnMoveCalls() const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWantsAllOnMoveCalls", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::test::mock::MockCursor::setNotificationUri(const ::android::content::ContentResolver& arg0, const ::android::net::Uri& arg1) const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNotificationUri", "(Landroid/content/ContentResolver;Landroid/net/Uri;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::test::mock::MockCursor::unregisterContentObserver(const ::android::database::ContentObserver& arg0) const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterContentObserver", "(Landroid/database/ContentObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::test::mock::MockCursor::unregisterDataSetObserver(const ::android::database::DataSetObserver& arg0) const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterDataSetObserver", "(Landroid/database/DataSetObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::test::mock::MockCursor::getType(int32_t arg0) const {
    if (!::android::test::mock::MockCursor::_class) ::android::test::mock::MockCursor::_class = java::fetch_class("android/test/mock/MockCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::mock::MockContentProvider::MockContentProvider(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::ContentProvider((jobject)0) {
    if (!::android::test::mock::MockContentProvider::_class) ::android::test::mock::MockContentProvider::_class = java::fetch_class("android/test/mock/MockContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::mock::MockContentProvider::MockContentProvider(const ::android::content::Context& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const std::vector< ::android::content::pm::PathPermission>& arg3) : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::ContentProvider((jobject)0) {
    if (!::android::test::mock::MockContentProvider::_class) ::android::test::mock::MockContentProvider::_class = java::fetch_class("android/test/mock/MockContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;[Landroid/content/pm/PathPermission;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::android::content::pm::PathPermission::_class) ::android::content::pm::PathPermission::_class = java::fetch_class("android/content/pm/PathPermission");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::android::content::pm::PathPermission::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::android::content::pm::PathPermission& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

int32_t android::test::mock::MockContentProvider::delete_(const ::android::net::Uri& arg0, const ::java::lang::String& arg1, const std::vector< ::java::lang::String>& arg2) const {
    if (!::android::test::mock::MockContentProvider::_class) ::android::test::mock::MockContentProvider::_class = java::fetch_class("android/test/mock/MockContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "delete_", "(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::String::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::String& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::String android::test::mock::MockContentProvider::getType(const ::android::net::Uri& arg0) const {
    if (!::android::test::mock::MockContentProvider::_class) ::android::test::mock::MockContentProvider::_class = java::fetch_class("android/test/mock/MockContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "(Landroid/net/Uri;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::net::Uri android::test::mock::MockContentProvider::insert(const ::android::net::Uri& arg0, const ::android::content::ContentValues& arg1) const {
    if (!::android::test::mock::MockContentProvider::_class) ::android::test::mock::MockContentProvider::_class = java::fetch_class("android/test/mock/MockContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::net::Uri _ret(ret);
    return _ret;
}

bool android::test::mock::MockContentProvider::onCreate() const {
    if (!::android::test::mock::MockContentProvider::_class) ::android::test::mock::MockContentProvider::_class = java::fetch_class("android/test/mock/MockContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreate", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::database::Cursor android::test::mock::MockContentProvider::query(const ::android::net::Uri& arg0, const std::vector< ::java::lang::String>& arg1, const ::java::lang::String& arg2, const std::vector< ::java::lang::String>& arg3, const ::java::lang::String& arg4) const {
    if (!::android::test::mock::MockContentProvider::_class) ::android::test::mock::MockContentProvider::_class = java::fetch_class("android/test/mock/MockContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "query", "(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::String::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::String& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    jobject _arg4 = arg4.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

int32_t android::test::mock::MockContentProvider::update(const ::android::net::Uri& arg0, const ::android::content::ContentValues& arg1, const ::java::lang::String& arg2, const std::vector< ::java::lang::String>& arg3) const {
    if (!::android::test::mock::MockContentProvider::_class) ::android::test::mock::MockContentProvider::_class = java::fetch_class("android/test/mock/MockContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::String::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::String& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::test::mock::MockContentProvider::bulkInsert(const ::android::net::Uri& arg0, const std::vector< ::android::content::ContentValues>& arg1) const {
    if (!::android::test::mock::MockContentProvider::_class) ::android::test::mock::MockContentProvider::_class = java::fetch_class("android/test/mock/MockContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "bulkInsert", "(Landroid/net/Uri;[Landroid/content/ContentValues;)I");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::android::content::ContentValues::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::android::content::ContentValues& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

void android::test::mock::MockContentProvider::attachInfo(const ::android::content::Context& arg0, const ::android::content::pm::ProviderInfo& arg1) const {
    if (!::android::test::mock::MockContentProvider::_class) ::android::test::mock::MockContentProvider::_class = java::fetch_class("android/test/mock/MockContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "attachInfo", "(Landroid/content/Context;Landroid/content/pm/ProviderInfo;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

std::vector< ::android::content::ContentProviderResult> android::test::mock::MockContentProvider::applyBatch(const ::java::util::ArrayList& arg0) const {
    if (!::android::test::mock::MockContentProvider::_class) ::android::test::mock::MockContentProvider::_class = java::fetch_class("android/test/mock/MockContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "applyBatch", "(Ljava/util/ArrayList;)[Landroid/content/ContentProviderResult;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::content::ContentProviderResult> _ret(rets, ::android::content::ContentProviderResult((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::content::ContentProviderResult retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::String> android::test::mock::MockContentProvider::getStreamTypes(const ::android::net::Uri& arg0, const ::java::lang::String& arg1) const {
    if (!::android::test::mock::MockContentProvider::_class) ::android::test::mock::MockContentProvider::_class = java::fetch_class("android/test/mock/MockContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStreamTypes", "(Landroid/net/Uri;Ljava/lang/String;)[Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::content::res::AssetFileDescriptor android::test::mock::MockContentProvider::openTypedAssetFile(const ::android::net::Uri& arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::test::mock::MockContentProvider::_class) ::android::test::mock::MockContentProvider::_class = java::fetch_class("android/test/mock/MockContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "openTypedAssetFile", "(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/res/AssetFileDescriptor;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::content::res::AssetFileDescriptor _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::mock::MockContentResolver::MockContentResolver() : ::java::lang::Object((jobject)0), ::android::content::ContentResolver((jobject)0) {
    if (!::android::test::mock::MockContentResolver::_class) ::android::test::mock::MockContentResolver::_class = java::fetch_class("android/test/mock/MockContentResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::test::mock::MockContentResolver::addProvider(const ::java::lang::String& arg0, const ::android::content::ContentProvider& arg1) const {
    if (!::android::test::mock::MockContentResolver::_class) ::android::test::mock::MockContentResolver::_class = java::fetch_class("android/test/mock/MockContentResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "addProvider", "(Ljava/lang/String;Landroid/content/ContentProvider;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::test::mock::MockContentResolver::notifyChange(const ::android::net::Uri& arg0, const ::android::database::ContentObserver& arg1, bool arg2) const {
    if (!::android::test::mock::MockContentResolver::_class) ::android::test::mock::MockContentResolver::_class = java::fetch_class("android/test/mock/MockContentResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyChange", "(Landroid/net/Uri;Landroid/database/ContentObserver;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::mock::MockPackageManager::MockPackageManager() : ::java::lang::Object((jobject)0), ::android::content::pm::PackageManager((jobject)0) {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::content::pm::PackageInfo android::test::mock::MockPackageManager::getPackageInfo(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageInfo", "(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::pm::PackageInfo _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> android::test::mock::MockPackageManager::currentToCanonicalPackageNames(const std::vector< ::java::lang::String>& arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "currentToCanonicalPackageNames", "([Ljava/lang/String;)[Ljava/lang/String;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::String> android::test::mock::MockPackageManager::canonicalToCurrentPackageNames(const std::vector< ::java::lang::String>& arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "canonicalToCurrentPackageNames", "([Ljava/lang/String;)[Ljava/lang/String;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::content::Intent android::test::mock::MockPackageManager::getLaunchIntentForPackage(const ::java::lang::String& arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLaunchIntentForPackage", "(Ljava/lang/String;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

std::vector< int32_t> android::test::mock::MockPackageManager::getPackageGids(const ::java::lang::String& arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageGids", "(Ljava/lang/String;)[I");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

::android::content::pm::PermissionInfo android::test::mock::MockPackageManager::getPermissionInfo(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPermissionInfo", "(Ljava/lang/String;I)Landroid/content/pm/PermissionInfo;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::pm::PermissionInfo _ret(ret);
    return _ret;
}

::java::util::List android::test::mock::MockPackageManager::queryPermissionsByGroup(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "queryPermissionsByGroup", "(Ljava/lang/String;I)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

::android::content::pm::PermissionGroupInfo android::test::mock::MockPackageManager::getPermissionGroupInfo(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPermissionGroupInfo", "(Ljava/lang/String;I)Landroid/content/pm/PermissionGroupInfo;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::pm::PermissionGroupInfo _ret(ret);
    return _ret;
}

::java::util::List android::test::mock::MockPackageManager::getAllPermissionGroups(int32_t arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAllPermissionGroups", "(I)Ljava/util/List;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

::android::content::pm::ApplicationInfo android::test::mock::MockPackageManager::getApplicationInfo(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplicationInfo", "(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::pm::ApplicationInfo _ret(ret);
    return _ret;
}

::android::content::pm::ActivityInfo android::test::mock::MockPackageManager::getActivityInfo(const ::android::content::ComponentName& arg0, int32_t arg1) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActivityInfo", "(Landroid/content/ComponentName;I)Landroid/content/pm/ActivityInfo;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::pm::ActivityInfo _ret(ret);
    return _ret;
}

::android::content::pm::ActivityInfo android::test::mock::MockPackageManager::getReceiverInfo(const ::android::content::ComponentName& arg0, int32_t arg1) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReceiverInfo", "(Landroid/content/ComponentName;I)Landroid/content/pm/ActivityInfo;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::pm::ActivityInfo _ret(ret);
    return _ret;
}

::android::content::pm::ServiceInfo android::test::mock::MockPackageManager::getServiceInfo(const ::android::content::ComponentName& arg0, int32_t arg1) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getServiceInfo", "(Landroid/content/ComponentName;I)Landroid/content/pm/ServiceInfo;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::pm::ServiceInfo _ret(ret);
    return _ret;
}

::android::content::pm::ProviderInfo android::test::mock::MockPackageManager::getProviderInfo(const ::android::content::ComponentName& arg0, int32_t arg1) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProviderInfo", "(Landroid/content/ComponentName;I)Landroid/content/pm/ProviderInfo;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::pm::ProviderInfo _ret(ret);
    return _ret;
}

::java::util::List android::test::mock::MockPackageManager::getInstalledPackages(int32_t arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInstalledPackages", "(I)Ljava/util/List;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

int32_t android::test::mock::MockPackageManager::checkPermission(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkPermission", "(Ljava/lang/String;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

bool android::test::mock::MockPackageManager::addPermission(const ::android::content::pm::PermissionInfo& arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPermission", "(Landroid/content/pm/PermissionInfo;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::test::mock::MockPackageManager::addPermissionAsync(const ::android::content::pm::PermissionInfo& arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPermissionAsync", "(Landroid/content/pm/PermissionInfo;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::test::mock::MockPackageManager::removePermission(const ::java::lang::String& arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "removePermission", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::test::mock::MockPackageManager::checkSignatures(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkSignatures", "(Ljava/lang/String;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::test::mock::MockPackageManager::checkSignatures(int32_t arg0, int32_t arg1) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkSignatures", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

std::vector< ::java::lang::String> android::test::mock::MockPackageManager::getPackagesForUid(int32_t arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackagesForUid", "(I)[Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::String android::test::mock::MockPackageManager::getNameForUid(int32_t arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNameForUid", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::List android::test::mock::MockPackageManager::getInstalledApplications(int32_t arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInstalledApplications", "(I)Ljava/util/List;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

::android::content::pm::ResolveInfo android::test::mock::MockPackageManager::resolveActivity(const ::android::content::Intent& arg0, int32_t arg1) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveActivity", "(Landroid/content/Intent;I)Landroid/content/pm/ResolveInfo;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::pm::ResolveInfo _ret(ret);
    return _ret;
}

::java::util::List android::test::mock::MockPackageManager::queryIntentActivities(const ::android::content::Intent& arg0, int32_t arg1) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "queryIntentActivities", "(Landroid/content/Intent;I)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List android::test::mock::MockPackageManager::queryIntentActivityOptions(const ::android::content::ComponentName& arg0, const std::vector< ::android::content::Intent>& arg1, const ::android::content::Intent& arg2, int32_t arg3) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "queryIntentActivityOptions", "(Landroid/content/ComponentName;[Landroid/content/Intent;Landroid/content/Intent;I)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::android::content::Intent::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::android::content::Intent& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List android::test::mock::MockPackageManager::queryBroadcastReceivers(const ::android::content::Intent& arg0, int32_t arg1) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "queryBroadcastReceivers", "(Landroid/content/Intent;I)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

::android::content::pm::ResolveInfo android::test::mock::MockPackageManager::resolveService(const ::android::content::Intent& arg0, int32_t arg1) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveService", "(Landroid/content/Intent;I)Landroid/content/pm/ResolveInfo;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::pm::ResolveInfo _ret(ret);
    return _ret;
}

::java::util::List android::test::mock::MockPackageManager::queryIntentServices(const ::android::content::Intent& arg0, int32_t arg1) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "queryIntentServices", "(Landroid/content/Intent;I)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

::android::content::pm::ProviderInfo android::test::mock::MockPackageManager::resolveContentProvider(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveContentProvider", "(Ljava/lang/String;I)Landroid/content/pm/ProviderInfo;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::pm::ProviderInfo _ret(ret);
    return _ret;
}

::java::util::List android::test::mock::MockPackageManager::queryContentProviders(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "queryContentProviders", "(Ljava/lang/String;II)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::util::List _ret(ret);
    return _ret;
}

::android::content::pm::InstrumentationInfo android::test::mock::MockPackageManager::getInstrumentationInfo(const ::android::content::ComponentName& arg0, int32_t arg1) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInstrumentationInfo", "(Landroid/content/ComponentName;I)Landroid/content/pm/InstrumentationInfo;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::pm::InstrumentationInfo _ret(ret);
    return _ret;
}

::java::util::List android::test::mock::MockPackageManager::queryInstrumentation(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "queryInstrumentation", "(Ljava/lang/String;I)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::test::mock::MockPackageManager::getDrawable(const ::java::lang::String& arg0, int32_t arg1, const ::android::content::pm::ApplicationInfo& arg2) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDrawable", "(Ljava/lang/String;ILandroid/content/pm/ApplicationInfo;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::test::mock::MockPackageManager::getActivityIcon(const ::android::content::ComponentName& arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActivityIcon", "(Landroid/content/ComponentName;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::test::mock::MockPackageManager::getActivityIcon(const ::android::content::Intent& arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActivityIcon", "(Landroid/content/Intent;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::test::mock::MockPackageManager::getDefaultActivityIcon() const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaultActivityIcon", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::test::mock::MockPackageManager::getApplicationIcon(const ::android::content::pm::ApplicationInfo& arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplicationIcon", "(Landroid/content/pm/ApplicationInfo;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::test::mock::MockPackageManager::getApplicationIcon(const ::java::lang::String& arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplicationIcon", "(Ljava/lang/String;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::test::mock::MockPackageManager::getActivityLogo(const ::android::content::ComponentName& arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActivityLogo", "(Landroid/content/ComponentName;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::test::mock::MockPackageManager::getActivityLogo(const ::android::content::Intent& arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActivityLogo", "(Landroid/content/Intent;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::test::mock::MockPackageManager::getApplicationLogo(const ::android::content::pm::ApplicationInfo& arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplicationLogo", "(Landroid/content/pm/ApplicationInfo;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::test::mock::MockPackageManager::getApplicationLogo(const ::java::lang::String& arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplicationLogo", "(Ljava/lang/String;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::test::mock::MockPackageManager::getText(const ::java::lang::String& arg0, int32_t arg1, const ::android::content::pm::ApplicationInfo& arg2) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "(Ljava/lang/String;ILandroid/content/pm/ApplicationInfo;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::content::res::XmlResourceParser android::test::mock::MockPackageManager::getXml(const ::java::lang::String& arg0, int32_t arg1, const ::android::content::pm::ApplicationInfo& arg2) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getXml", "(Ljava/lang/String;ILandroid/content/pm/ApplicationInfo;)Landroid/content/res/XmlResourceParser;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::content::res::XmlResourceParser _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::test::mock::MockPackageManager::getApplicationLabel(const ::android::content::pm::ApplicationInfo& arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplicationLabel", "(Landroid/content/pm/ApplicationInfo;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::content::res::Resources android::test::mock::MockPackageManager::getResourcesForActivity(const ::android::content::ComponentName& arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResourcesForActivity", "(Landroid/content/ComponentName;)Landroid/content/res/Resources;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::res::Resources _ret(ret);
    return _ret;
}

::android::content::res::Resources android::test::mock::MockPackageManager::getResourcesForApplication(const ::android::content::pm::ApplicationInfo& arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResourcesForApplication", "(Landroid/content/pm/ApplicationInfo;)Landroid/content/res/Resources;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::res::Resources _ret(ret);
    return _ret;
}

::android::content::res::Resources android::test::mock::MockPackageManager::getResourcesForApplication(const ::java::lang::String& arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResourcesForApplication", "(Ljava/lang/String;)Landroid/content/res/Resources;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::res::Resources _ret(ret);
    return _ret;
}

::android::content::pm::PackageInfo android::test::mock::MockPackageManager::getPackageArchiveInfo(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageArchiveInfo", "(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::pm::PackageInfo _ret(ret);
    return _ret;
}

void android::test::mock::MockPackageManager::setInstallerPackageName(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInstallerPackageName", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::test::mock::MockPackageManager::getInstallerPackageName(const ::java::lang::String& arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInstallerPackageName", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::test::mock::MockPackageManager::addPackageToPreferred(const ::java::lang::String& arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPackageToPreferred", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::test::mock::MockPackageManager::removePackageFromPreferred(const ::java::lang::String& arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "removePackageFromPreferred", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::List android::test::mock::MockPackageManager::getPreferredPackages(int32_t arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPreferredPackages", "(I)Ljava/util/List;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

void android::test::mock::MockPackageManager::setComponentEnabledSetting(const ::android::content::ComponentName& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setComponentEnabledSetting", "(Landroid/content/ComponentName;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::test::mock::MockPackageManager::getComponentEnabledSetting(const ::android::content::ComponentName& arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getComponentEnabledSetting", "(Landroid/content/ComponentName;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::test::mock::MockPackageManager::setApplicationEnabledSetting(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setApplicationEnabledSetting", "(Ljava/lang/String;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::test::mock::MockPackageManager::getApplicationEnabledSetting(const ::java::lang::String& arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplicationEnabledSetting", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::test::mock::MockPackageManager::addPreferredActivity(const ::android::content::IntentFilter& arg0, int32_t arg1, const std::vector< ::android::content::ComponentName>& arg2, const ::android::content::ComponentName& arg3) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPreferredActivity", "(Landroid/content/IntentFilter;I[Landroid/content/ComponentName;Landroid/content/ComponentName;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    unsigned arg2s = arg2.size();
    if (!::android::content::ComponentName::_class) ::android::content::ComponentName::_class = java::fetch_class("android/content/ComponentName");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::android::content::ComponentName::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::android::content::ComponentName& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::test::mock::MockPackageManager::clearPackagePreferredActivities(const ::java::lang::String& arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearPackagePreferredActivities", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::test::mock::MockPackageManager::getPreferredActivities(const ::java::util::List& arg0, const ::java::util::List& arg1, const ::java::lang::String& arg2) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPreferredActivities", "(Ljava/util/List;Ljava/util/List;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

std::vector< ::java::lang::String> android::test::mock::MockPackageManager::getSystemSharedLibraryNames() const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemSharedLibraryNames", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::android::content::pm::FeatureInfo> android::test::mock::MockPackageManager::getSystemAvailableFeatures() const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemAvailableFeatures", "()[Landroid/content/pm/FeatureInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::content::pm::FeatureInfo> _ret(rets, ::android::content::pm::FeatureInfo((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::content::pm::FeatureInfo retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool android::test::mock::MockPackageManager::hasSystemFeature(const ::java::lang::String& arg0) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasSystemFeature", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::test::mock::MockPackageManager::isSafeMode() const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSafeMode", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::test::mock::MockPackageManager::verifyPendingInstall(int32_t arg0, int32_t arg1) const {
    if (!::android::test::mock::MockPackageManager::_class) ::android::test::mock::MockPackageManager::_class = java::fetch_class("android/test/mock/MockPackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "verifyPendingInstall", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::mock::MockApplication::MockApplication() : ::java::lang::Object((jobject)0), ::android::app::Application((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {
    if (!::android::test::mock::MockApplication::_class) ::android::test::mock::MockApplication::_class = java::fetch_class("android/test/mock/MockApplication");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::test::mock::MockApplication::onCreate() const {
    if (!::android::test::mock::MockApplication::_class) ::android::test::mock::MockApplication::_class = java::fetch_class("android/test/mock/MockApplication");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::test::mock::MockApplication::onTerminate() const {
    if (!::android::test::mock::MockApplication::_class) ::android::test::mock::MockApplication::_class = java::fetch_class("android/test/mock/MockApplication");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTerminate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::test::mock::MockApplication::onConfigurationChanged(const ::android::content::res::Configuration& arg0) const {
    if (!::android::test::mock::MockApplication::_class) ::android::test::mock::MockApplication::_class = java::fetch_class("android/test/mock/MockApplication");
    static jmethodID mid = java::jni->GetMethodID(_class, "onConfigurationChanged", "(Landroid/content/res/Configuration;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::mock::MockDialogInterface::MockDialogInterface() : ::java::lang::Object((jobject)0), ::android::content::DialogInterface((jobject)0) {
    if (!::android::test::mock::MockDialogInterface::_class) ::android::test::mock::MockDialogInterface::_class = java::fetch_class("android/test/mock/MockDialogInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::test::mock::MockDialogInterface::cancel() const {
    if (!::android::test::mock::MockDialogInterface::_class) ::android::test::mock::MockDialogInterface::_class = java::fetch_class("android/test/mock/MockDialogInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::test::mock::MockDialogInterface::dismiss() const {
    if (!::android::test::mock::MockDialogInterface::_class) ::android::test::mock::MockDialogInterface::_class = java::fetch_class("android/test/mock/MockDialogInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "dismiss", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

