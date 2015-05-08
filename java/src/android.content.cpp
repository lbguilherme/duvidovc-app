#include "java-core.hpp"
#include <memory>
#include "android.accounts.Account.hpp"
#include "android.content.AbstractThreadedSyncAdapter.hpp"
#include "android.content.ActivityNotFoundException.hpp"
#include "android.content.AsyncQueryHandler.hpp"
#include "android.content.AsyncTaskLoader.hpp"
#include "android.content.BroadcastReceiver.hpp"
#include "android.content.ClipData.hpp"
#include "android.content.ClipDescription.hpp"
#include "android.content.ClipboardManager.hpp"
#include "android.content.ComponentCallbacks.hpp"
#include "android.content.ComponentCallbacks2.hpp"
#include "android.content.ComponentName.hpp"
#include "android.content.ContentProvider.hpp"
#include "android.content.ContentProviderClient.hpp"
#include "android.content.ContentProviderOperation.hpp"
#include "android.content.ContentProviderResult.hpp"
#include "android.content.ContentQueryMap.hpp"
#include "android.content.ContentResolver.hpp"
#include "android.content.ContentUris.hpp"
#include "android.content.ContentValues.hpp"
#include "android.content.Context.hpp"
#include "android.content.ContextWrapper.hpp"
#include "android.content.CursorLoader.hpp"
#include "android.content.DialogInterface.hpp"
#include "android.content.Entity.hpp"
#include "android.content.EntityIterator.hpp"
#include "android.content.Intent.hpp"
#include "android.content.IntentFilter.hpp"
#include "android.content.IntentSender.hpp"
#include "android.content.Loader.hpp"
#include "android.content.MutableContextWrapper.hpp"
#include "android.content.OperationApplicationException.hpp"
#include "android.content.PeriodicSync.hpp"
#include "android.content.ReceiverCallNotAllowedException.hpp"
#include "android.content.SearchRecentSuggestionsProvider.hpp"
#include "android.content.ServiceConnection.hpp"
#include "android.content.SharedPreferences.hpp"
#include "android.content.SyncAdapterType.hpp"
#include "android.content.SyncContext.hpp"
#include "android.content.SyncInfo.hpp"
#include "android.content.SyncResult.hpp"
#include "android.content.SyncStats.hpp"
#include "android.content.SyncStatusObserver.hpp"
#include "android.content.UriMatcher.hpp"
#include "android.content.pm.ActivityInfo.hpp"
#include "android.content.pm.ApplicationInfo.hpp"
#include "android.content.pm.PackageManager.hpp"
#include "android.content.pm.PathPermission.hpp"
#include "android.content.pm.ProviderInfo.hpp"
#include "android.content.res.AssetFileDescriptor.hpp"
#include "android.content.res.AssetManager.hpp"
#include "android.content.res.Configuration.hpp"
#include "android.content.res.Resources.hpp"
#include "android.content.res.TypedArray.hpp"
#include "android.database.ContentObserver.hpp"
#include "android.database.Cursor.hpp"
#include "android.database.DatabaseErrorHandler.hpp"
#include "android.database.sqlite.SQLiteDatabase.hpp"
#include "android.graphics.Bitmap.hpp"
#include "android.graphics.Rect.hpp"
#include "android.graphics.drawable.Drawable.hpp"
#include "android.net.Uri.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.Handler.hpp"
#include "android.os.IBinder.hpp"
#include "android.os.Looper.hpp"
#include "android.os.Message.hpp"
#include "android.os.Parcel.hpp"
#include "android.os.ParcelFileDescriptor.hpp"
#include "android.os.Parcelable.hpp"
#include "android.os.PatternMatcher.hpp"
#include "android.util.AttributeSet.hpp"
#include "android.util.Printer.hpp"
#include "android.view.KeyEvent.hpp"
#include "java.io.File.hpp"
#include "java.io.FileDescriptor.hpp"
#include "java.io.FileInputStream.hpp"
#include "java.io.FileOutputStream.hpp"
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.io.PrintWriter.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Boolean.hpp"
#include "java.lang.Byte.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Class.hpp"
#include "java.lang.ClassLoader.hpp"
#include "java.lang.Double.hpp"
#include "java.lang.Exception.hpp"
#include "java.lang.Float.hpp"
#include "java.lang.Integer.hpp"
#include "java.lang.Long.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.Short.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Thread.hpp"
#include "java.lang.Throwable.hpp"
#include "java.util.ArrayList.hpp"
#include "java.util.Iterator.hpp"
#include "java.util.List.hpp"
#include "java.util.Map.hpp"
#include "java.util.Set.hpp"
#include "org.xmlpull.v1.XmlPullParser.hpp"
#include "org.xmlpull.v1.XmlSerializer.hpp"

jclass android::content::UriMatcher::_class = nullptr;
jclass android::content::MutableContextWrapper::_class = nullptr;
jclass android::content::IntentFilter_AuthorityEntry::_class = nullptr;
jclass android::content::ComponentCallbacks2::_class = nullptr;
jclass android::content::ActivityNotFoundException::_class = nullptr;
jclass android::content::Entity::_class = nullptr;
jclass android::content::BroadcastReceiver_PendingResult::_class = nullptr;
jclass android::content::ContentProviderOperation_Builder::_class = nullptr;
jclass android::content::Intent::_class = nullptr;
jclass android::content::ServiceConnection::_class = nullptr;
jclass android::content::IntentFilter::_class = nullptr;
jclass android::content::Context::_class = nullptr;
jclass android::content::AsyncQueryHandler::_class = nullptr;
jclass android::content::AsyncQueryHandler_WorkerHandler::_class = nullptr;
jclass android::content::SyncInfo::_class = nullptr;
jclass android::content::ContentUris::_class = nullptr;
jclass android::content::AsyncTaskLoader::_class = nullptr;
jclass android::content::SharedPreferences::_class = nullptr;
jclass android::content::IntentFilter_MalformedMimeTypeException::_class = nullptr;
jclass android::content::SyncStats::_class = nullptr;
jclass android::content::ClipData_Item::_class = nullptr;
jclass android::content::ContentQueryMap::_class = nullptr;
jclass android::content::ClipData::_class = nullptr;
jclass android::content::ComponentCallbacks::_class = nullptr;
jclass android::content::EntityIterator::_class = nullptr;
jclass android::content::SearchRecentSuggestionsProvider::_class = nullptr;
jclass android::content::Intent_ShortcutIconResource::_class = nullptr;
jclass android::content::AbstractThreadedSyncAdapter::_class = nullptr;
jclass android::content::IntentSender::_class = nullptr;
jclass android::content::ContentResolver::_class = nullptr;
jclass android::content::IntentSender_OnFinished::_class = nullptr;
jclass android::content::CursorLoader::_class = nullptr;
jclass android::content::AsyncQueryHandler_WorkerArgs::_class = nullptr;
jclass android::content::IntentSender_SendIntentException::_class = nullptr;
jclass android::content::ContentProviderResult::_class = nullptr;
jclass android::content::SyncStatusObserver::_class = nullptr;
jclass android::content::ClipDescription::_class = nullptr;
jclass android::content::Entity_NamedContentValues::_class = nullptr;
jclass android::content::Intent_FilterComparison::_class = nullptr;
jclass android::content::DialogInterface_OnMultiChoiceClickListener::_class = nullptr;
jclass android::content::PeriodicSync::_class = nullptr;
jclass android::content::SyncContext::_class = nullptr;
jclass android::content::SyncResult::_class = nullptr;
jclass android::content::ContentProvider::_class = nullptr;
jclass android::content::DialogInterface_OnCancelListener::_class = nullptr;
jclass android::content::SharedPreferences_Editor::_class = nullptr;
jclass android::content::ComponentName::_class = nullptr;
jclass android::content::ContentProviderClient::_class = nullptr;
jclass android::content::SyncAdapterType::_class = nullptr;
jclass android::content::DialogInterface_OnDismissListener::_class = nullptr;
jclass android::content::Loader_ForceLoadContentObserver::_class = nullptr;
jclass android::content::ClipboardManager::_class = nullptr;
jclass android::content::DialogInterface_OnShowListener::_class = nullptr;
jclass android::content::OperationApplicationException::_class = nullptr;
jclass android::content::Loader::_class = nullptr;
jclass android::content::ContentValues::_class = nullptr;
jclass android::content::ClipboardManager_OnPrimaryClipChangedListener::_class = nullptr;
jclass android::content::SharedPreferences_OnSharedPreferenceChangeListener::_class = nullptr;
jclass android::content::DialogInterface_OnClickListener::_class = nullptr;
jclass android::content::BroadcastReceiver::_class = nullptr;
jclass android::content::DialogInterface::_class = nullptr;
jclass android::content::ContentProviderOperation::_class = nullptr;
jclass android::content::ContentProvider_PipeDataWriter::_class = nullptr;
jclass android::content::ReceiverCallNotAllowedException::_class = nullptr;
jclass android::content::DialogInterface_OnKeyListener::_class = nullptr;
jclass android::content::Loader_OnLoadCompleteListener::_class = nullptr;
jclass android::content::ContextWrapper::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::UriMatcher::UriMatcher(int32_t arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::content::UriMatcher::_class) ::android::content::UriMatcher::_class = java::fetch_class("android/content/UriMatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::content::UriMatcher::addURI(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2) const {
    if (!::android::content::UriMatcher::_class) ::android::content::UriMatcher::_class = java::fetch_class("android/content/UriMatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "addURI", "(Ljava/lang/String;Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::content::UriMatcher::match(const ::android::net::Uri& arg0) const {
    if (!::android::content::UriMatcher::_class) ::android::content::UriMatcher::_class = java::fetch_class("android/content/UriMatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "match", "(Landroid/net/Uri;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::MutableContextWrapper::MutableContextWrapper(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {
    if (!::android::content::MutableContextWrapper::_class) ::android::content::MutableContextWrapper::_class = java::fetch_class("android/content/MutableContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::content::MutableContextWrapper::setBaseContext(const ::android::content::Context& arg0) const {
    if (!::android::content::MutableContextWrapper::_class) ::android::content::MutableContextWrapper::_class = java::fetch_class("android/content/MutableContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBaseContext", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::IntentFilter_AuthorityEntry::IntentFilter_AuthorityEntry(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::content::IntentFilter_AuthorityEntry::_class) ::android::content::IntentFilter_AuthorityEntry::_class = java::fetch_class("android/content/IntentFilter$AuthorityEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String android::content::IntentFilter_AuthorityEntry::getHost() const {
    if (!::android::content::IntentFilter_AuthorityEntry::_class) ::android::content::IntentFilter_AuthorityEntry::_class = java::fetch_class("android/content/IntentFilter$AuthorityEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHost", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::content::IntentFilter_AuthorityEntry::getPort() const {
    if (!::android::content::IntentFilter_AuthorityEntry::_class) ::android::content::IntentFilter_AuthorityEntry::_class = java::fetch_class("android/content/IntentFilter$AuthorityEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::content::IntentFilter_AuthorityEntry::match(const ::android::net::Uri& arg0) const {
    if (!::android::content::IntentFilter_AuthorityEntry::_class) ::android::content::IntentFilter_AuthorityEntry::_class = java::fetch_class("android/content/IntentFilter$AuthorityEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "match", "(Landroid/net/Uri;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::content::ComponentCallbacks2::onTrimMemory(int32_t arg0) const {
    if (!::android::content::ComponentCallbacks2::_class) ::android::content::ComponentCallbacks2::_class = java::fetch_class("android/content/ComponentCallbacks2");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTrimMemory", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::ActivityNotFoundException::ActivityNotFoundException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::content::ActivityNotFoundException::_class) ::android::content::ActivityNotFoundException::_class = java::fetch_class("android/content/ActivityNotFoundException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::ActivityNotFoundException::ActivityNotFoundException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::content::ActivityNotFoundException::_class) ::android::content::ActivityNotFoundException::_class = java::fetch_class("android/content/ActivityNotFoundException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::Entity::Entity(const ::android::content::ContentValues& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::content::Entity::_class) ::android::content::Entity::_class = java::fetch_class("android/content/Entity");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/ContentValues;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::content::ContentValues android::content::Entity::getEntityValues() const {
    if (!::android::content::Entity::_class) ::android::content::Entity::_class = java::fetch_class("android/content/Entity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEntityValues", "()Landroid/content/ContentValues;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::ContentValues _ret(ret);
    return _ret;
}

::java::util::ArrayList android::content::Entity::getSubValues() const {
    if (!::android::content::Entity::_class) ::android::content::Entity::_class = java::fetch_class("android/content/Entity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubValues", "()Ljava/util/ArrayList;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

void android::content::Entity::addSubValue(const ::android::net::Uri& arg0, const ::android::content::ContentValues& arg1) const {
    if (!::android::content::Entity::_class) ::android::content::Entity::_class = java::fetch_class("android/content/Entity");
    static jmethodID mid = java::jni->GetMethodID(_class, "addSubValue", "(Landroid/net/Uri;Landroid/content/ContentValues;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::content::Entity::toString() const {
    if (!::android::content::Entity::_class) ::android::content::Entity::_class = java::fetch_class("android/content/Entity");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::content::BroadcastReceiver_PendingResult::setResultCode(int32_t arg0) const {
    if (!::android::content::BroadcastReceiver_PendingResult::_class) ::android::content::BroadcastReceiver_PendingResult::_class = java::fetch_class("android/content/BroadcastReceiver$PendingResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "setResultCode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::content::BroadcastReceiver_PendingResult::getResultCode() const {
    if (!::android::content::BroadcastReceiver_PendingResult::_class) ::android::content::BroadcastReceiver_PendingResult::_class = java::fetch_class("android/content/BroadcastReceiver$PendingResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResultCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::BroadcastReceiver_PendingResult::setResultData(const ::java::lang::String& arg0) const {
    if (!::android::content::BroadcastReceiver_PendingResult::_class) ::android::content::BroadcastReceiver_PendingResult::_class = java::fetch_class("android/content/BroadcastReceiver$PendingResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "setResultData", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::content::BroadcastReceiver_PendingResult::getResultData() const {
    if (!::android::content::BroadcastReceiver_PendingResult::_class) ::android::content::BroadcastReceiver_PendingResult::_class = java::fetch_class("android/content/BroadcastReceiver$PendingResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResultData", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::content::BroadcastReceiver_PendingResult::setResultExtras(const ::android::os::Bundle& arg0) const {
    if (!::android::content::BroadcastReceiver_PendingResult::_class) ::android::content::BroadcastReceiver_PendingResult::_class = java::fetch_class("android/content/BroadcastReceiver$PendingResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "setResultExtras", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::os::Bundle android::content::BroadcastReceiver_PendingResult::getResultExtras(bool arg0) const {
    if (!::android::content::BroadcastReceiver_PendingResult::_class) ::android::content::BroadcastReceiver_PendingResult::_class = java::fetch_class("android/content/BroadcastReceiver$PendingResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResultExtras", "(Z)Landroid/os/Bundle;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

void android::content::BroadcastReceiver_PendingResult::setResult(int32_t arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::content::BroadcastReceiver_PendingResult::_class) ::android::content::BroadcastReceiver_PendingResult::_class = java::fetch_class("android/content/BroadcastReceiver$PendingResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "setResult", "(ILjava/lang/String;Landroid/os/Bundle;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::content::BroadcastReceiver_PendingResult::getAbortBroadcast() const {
    if (!::android::content::BroadcastReceiver_PendingResult::_class) ::android::content::BroadcastReceiver_PendingResult::_class = java::fetch_class("android/content/BroadcastReceiver$PendingResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAbortBroadcast", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::content::BroadcastReceiver_PendingResult::abortBroadcast() const {
    if (!::android::content::BroadcastReceiver_PendingResult::_class) ::android::content::BroadcastReceiver_PendingResult::_class = java::fetch_class("android/content/BroadcastReceiver$PendingResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "abortBroadcast", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::content::BroadcastReceiver_PendingResult::clearAbortBroadcast() const {
    if (!::android::content::BroadcastReceiver_PendingResult::_class) ::android::content::BroadcastReceiver_PendingResult::_class = java::fetch_class("android/content/BroadcastReceiver$PendingResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearAbortBroadcast", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::content::BroadcastReceiver_PendingResult::finish() const {
    if (!::android::content::BroadcastReceiver_PendingResult::_class) ::android::content::BroadcastReceiver_PendingResult::_class = java::fetch_class("android/content/BroadcastReceiver$PendingResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "finish", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::content::ContentProviderOperation android::content::ContentProviderOperation_Builder::build() const {
    if (!::android::content::ContentProviderOperation_Builder::_class) ::android::content::ContentProviderOperation_Builder::_class = java::fetch_class("android/content/ContentProviderOperation$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Landroid/content/ContentProviderOperation;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::ContentProviderOperation _ret(ret);
    return _ret;
}

::android::content::ContentProviderOperation_Builder android::content::ContentProviderOperation_Builder::withValueBackReferences(const ::android::content::ContentValues& arg0) const {
    if (!::android::content::ContentProviderOperation_Builder::_class) ::android::content::ContentProviderOperation_Builder::_class = java::fetch_class("android/content/ContentProviderOperation$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "withValueBackReferences", "(Landroid/content/ContentValues;)Landroid/content/ContentProviderOperation$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::ContentProviderOperation_Builder _ret(ret);
    return _ret;
}

::android::content::ContentProviderOperation_Builder android::content::ContentProviderOperation_Builder::withValueBackReference(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::content::ContentProviderOperation_Builder::_class) ::android::content::ContentProviderOperation_Builder::_class = java::fetch_class("android/content/ContentProviderOperation$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "withValueBackReference", "(Ljava/lang/String;I)Landroid/content/ContentProviderOperation$Builder;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::ContentProviderOperation_Builder _ret(ret);
    return _ret;
}

::android::content::ContentProviderOperation_Builder android::content::ContentProviderOperation_Builder::withSelectionBackReference(int32_t arg0, int32_t arg1) const {
    if (!::android::content::ContentProviderOperation_Builder::_class) ::android::content::ContentProviderOperation_Builder::_class = java::fetch_class("android/content/ContentProviderOperation$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "withSelectionBackReference", "(II)Landroid/content/ContentProviderOperation$Builder;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::ContentProviderOperation_Builder _ret(ret);
    return _ret;
}

::android::content::ContentProviderOperation_Builder android::content::ContentProviderOperation_Builder::withValues(const ::android::content::ContentValues& arg0) const {
    if (!::android::content::ContentProviderOperation_Builder::_class) ::android::content::ContentProviderOperation_Builder::_class = java::fetch_class("android/content/ContentProviderOperation$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "withValues", "(Landroid/content/ContentValues;)Landroid/content/ContentProviderOperation$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::ContentProviderOperation_Builder _ret(ret);
    return _ret;
}

::android::content::ContentProviderOperation_Builder android::content::ContentProviderOperation_Builder::withValue(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::content::ContentProviderOperation_Builder::_class) ::android::content::ContentProviderOperation_Builder::_class = java::fetch_class("android/content/ContentProviderOperation$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "withValue", "(Ljava/lang/String;Ljava/lang/Object;)Landroid/content/ContentProviderOperation$Builder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::ContentProviderOperation_Builder _ret(ret);
    return _ret;
}

::android::content::ContentProviderOperation_Builder android::content::ContentProviderOperation_Builder::withSelection(const ::java::lang::String& arg0, const std::vector< ::java::lang::String>& arg1) const {
    if (!::android::content::ContentProviderOperation_Builder::_class) ::android::content::ContentProviderOperation_Builder::_class = java::fetch_class("android/content/ContentProviderOperation$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "withSelection", "(Ljava/lang/String;[Ljava/lang/String;)Landroid/content/ContentProviderOperation$Builder;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::ContentProviderOperation_Builder _ret(ret);
    return _ret;
}

::android::content::ContentProviderOperation_Builder android::content::ContentProviderOperation_Builder::withExpectedCount(int32_t arg0) const {
    if (!::android::content::ContentProviderOperation_Builder::_class) ::android::content::ContentProviderOperation_Builder::_class = java::fetch_class("android/content/ContentProviderOperation$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "withExpectedCount", "(I)Landroid/content/ContentProviderOperation$Builder;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::ContentProviderOperation_Builder _ret(ret);
    return _ret;
}

::android::content::ContentProviderOperation_Builder android::content::ContentProviderOperation_Builder::withYieldAllowed(bool arg0) const {
    if (!::android::content::ContentProviderOperation_Builder::_class) ::android::content::ContentProviderOperation_Builder::_class = java::fetch_class("android/content/ContentProviderOperation$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "withYieldAllowed", "(Z)Landroid/content/ContentProviderOperation$Builder;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::ContentProviderOperation_Builder _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::Intent::Intent() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::Intent::Intent(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::Intent::Intent(const ::java::lang::String& arg0, const ::android::net::Uri& arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Landroid/net/Uri;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::Intent::Intent(const ::android::content::Context& arg0, const ::java::lang::Class& arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Ljava/lang/Class;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::Intent::Intent(const ::java::lang::String& arg0, const ::android::net::Uri& arg1, const ::android::content::Context& arg2, const ::java::lang::Class& arg3) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Landroid/net/Uri;Landroid/content/Context;Ljava/lang/Class;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::android::content::Intent android::content::Intent::createChooser(const ::android::content::Intent& arg0, const ::java::lang::CharSequence& arg1){
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createChooser", "(Landroid/content/Intent;Ljava/lang/CharSequence;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::java::lang::Object android::content::Intent::clone() const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::cloneFilter() const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "cloneFilter", "()Landroid/content/Intent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::makeMainActivity(const ::android::content::ComponentName& arg0){
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "makeMainActivity", "(Landroid/content/ComponentName;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::makeMainSelectorActivity(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "makeMainSelectorActivity", "(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::makeRestartActivityTask(const ::android::content::ComponentName& arg0){
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "makeRestartActivityTask", "(Landroid/content/ComponentName;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::getIntent(const ::java::lang::String& arg0){
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getIntent", "(Ljava/lang/String;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::parseUri(const ::java::lang::String& arg0, int32_t arg1){
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parseUri", "(Ljava/lang/String;I)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::getIntentOld(const ::java::lang::String& arg0){
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getIntentOld", "(Ljava/lang/String;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::java::lang::String android::content::Intent::getAction() const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAction", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::net::Uri android::content::Intent::getData() const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getData", "()Landroid/net/Uri;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::java::lang::String android::content::Intent::getDataString() const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDataString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::content::Intent::getScheme() const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScheme", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::content::Intent::getType() const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::content::Intent::resolveType(const ::android::content::Context& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveType", "(Landroid/content/Context;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::content::Intent::resolveType(const ::android::content::ContentResolver& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveType", "(Landroid/content/ContentResolver;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::content::Intent::resolveTypeIfNeeded(const ::android::content::ContentResolver& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveTypeIfNeeded", "(Landroid/content/ContentResolver;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::content::Intent::hasCategory(const ::java::lang::String& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasCategory", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::util::Set android::content::Intent::getCategories() const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCategories", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::getSelector() const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelector", "()Landroid/content/Intent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Intent _ret(ret);
    return _ret;
}

void android::content::Intent::setExtrasClassLoader(const ::java::lang::ClassLoader& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExtrasClassLoader", "(Ljava/lang/ClassLoader;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::content::Intent::hasExtra(const ::java::lang::String& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasExtra", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::content::Intent::hasFileDescriptors() const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasFileDescriptors", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::content::Intent::getBooleanExtra(const ::java::lang::String& arg0, bool arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBooleanExtra", "(Ljava/lang/String;Z)Z");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

int8_t android::content::Intent::getByteExtra(const ::java::lang::String& arg0, int8_t arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getByteExtra", "(Ljava/lang/String;B)B");
    jobject _arg0 = arg0.obj;
    int8_t _arg1 = arg1;
    return java::jni->CallByteMethod(obj, mid, _arg0, _arg1);
}

int16_t android::content::Intent::getShortExtra(const ::java::lang::String& arg0, int16_t arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShortExtra", "(Ljava/lang/String;S)S");
    jobject _arg0 = arg0.obj;
    int16_t _arg1 = arg1;
    return java::jni->CallShortMethod(obj, mid, _arg0, _arg1);
}

uint16_t android::content::Intent::getCharExtra(const ::java::lang::String& arg0, uint16_t arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCharExtra", "(Ljava/lang/String;C)C");
    jobject _arg0 = arg0.obj;
    uint16_t _arg1 = arg1;
    return java::jni->CallCharMethod(obj, mid, _arg0, _arg1);
}

int32_t android::content::Intent::getIntExtra(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntExtra", "(Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int64_t android::content::Intent::getLongExtra(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLongExtra", "(Ljava/lang/String;J)J");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

float android::content::Intent::getFloatExtra(const ::java::lang::String& arg0, float arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFloatExtra", "(Ljava/lang/String;F)F");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

double android::content::Intent::getDoubleExtra(const ::java::lang::String& arg0, double arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDoubleExtra", "(Ljava/lang/String;D)D");
    jobject _arg0 = arg0.obj;
    double _arg1 = arg1;
    return java::jni->CallDoubleMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::content::Intent::getStringExtra(const ::java::lang::String& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStringExtra", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::content::Intent::getCharSequenceExtra(const ::java::lang::String& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCharSequenceExtra", "(Ljava/lang/String;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::os::Parcelable android::content::Intent::getParcelableExtra(const ::java::lang::String& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParcelableExtra", "(Ljava/lang/String;)Landroid/os/Parcelable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::Parcelable _ret(ret);
    return _ret;
}

std::vector< ::android::os::Parcelable> android::content::Intent::getParcelableArrayExtra(const ::java::lang::String& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParcelableArrayExtra", "(Ljava/lang/String;)[Landroid/os/Parcelable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::os::Parcelable> _ret(rets, ::android::os::Parcelable((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::os::Parcelable retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::util::ArrayList android::content::Intent::getParcelableArrayListExtra(const ::java::lang::String& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParcelableArrayListExtra", "(Ljava/lang/String;)Ljava/util/ArrayList;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

::java::io::Serializable android::content::Intent::getSerializableExtra(const ::java::lang::String& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSerializableExtra", "(Ljava/lang/String;)Ljava/io/Serializable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::Serializable _ret(ret);
    return _ret;
}

::java::util::ArrayList android::content::Intent::getIntegerArrayListExtra(const ::java::lang::String& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntegerArrayListExtra", "(Ljava/lang/String;)Ljava/util/ArrayList;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

::java::util::ArrayList android::content::Intent::getStringArrayListExtra(const ::java::lang::String& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStringArrayListExtra", "(Ljava/lang/String;)Ljava/util/ArrayList;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

::java::util::ArrayList android::content::Intent::getCharSequenceArrayListExtra(const ::java::lang::String& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCharSequenceArrayListExtra", "(Ljava/lang/String;)Ljava/util/ArrayList;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

std::vector< bool> android::content::Intent::getBooleanArrayExtra(const ::java::lang::String& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBooleanArrayExtra", "(Ljava/lang/String;)[Z");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jboolean* reta = java::jni->GetBooleanArrayElements((jbooleanArray)ret, nullptr);
    std::vector< bool> _ret(reta, reta+rets);
    java::jni->ReleaseBooleanArrayElements((jbooleanArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> android::content::Intent::getByteArrayExtra(const ::java::lang::String& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getByteArrayExtra", "(Ljava/lang/String;)[B");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int16_t> android::content::Intent::getShortArrayExtra(const ::java::lang::String& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShortArrayExtra", "(Ljava/lang/String;)[S");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jshort* reta = java::jni->GetShortArrayElements((jshortArray)ret, nullptr);
    std::vector< int16_t> _ret(reta, reta+rets);
    java::jni->ReleaseShortArrayElements((jshortArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< uint16_t> android::content::Intent::getCharArrayExtra(const ::java::lang::String& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCharArrayExtra", "(Ljava/lang/String;)[C");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jchar* reta = java::jni->GetCharArrayElements((jcharArray)ret, nullptr);
    std::vector< uint16_t> _ret(reta, reta+rets);
    java::jni->ReleaseCharArrayElements((jcharArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int32_t> android::content::Intent::getIntArrayExtra(const ::java::lang::String& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntArrayExtra", "(Ljava/lang/String;)[I");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int64_t> android::content::Intent::getLongArrayExtra(const ::java::lang::String& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLongArrayExtra", "(Ljava/lang/String;)[J");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jlong* reta = java::jni->GetLongArrayElements((jlongArray)ret, nullptr);
    std::vector< int64_t> _ret(reta, reta+rets);
    java::jni->ReleaseLongArrayElements((jlongArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< float> android::content::Intent::getFloatArrayExtra(const ::java::lang::String& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFloatArrayExtra", "(Ljava/lang/String;)[F");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jfloat* reta = java::jni->GetFloatArrayElements((jfloatArray)ret, nullptr);
    std::vector< float> _ret(reta, reta+rets);
    java::jni->ReleaseFloatArrayElements((jfloatArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< double> android::content::Intent::getDoubleArrayExtra(const ::java::lang::String& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDoubleArrayExtra", "(Ljava/lang/String;)[D");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jdouble* reta = java::jni->GetDoubleArrayElements((jdoubleArray)ret, nullptr);
    std::vector< double> _ret(reta, reta+rets);
    java::jni->ReleaseDoubleArrayElements((jdoubleArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< ::java::lang::String> android::content::Intent::getStringArrayExtra(const ::java::lang::String& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStringArrayExtra", "(Ljava/lang/String;)[Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
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

std::vector< ::java::lang::CharSequence> android::content::Intent::getCharSequenceArrayExtra(const ::java::lang::String& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCharSequenceArrayExtra", "(Ljava/lang/String;)[Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
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

::android::os::Bundle android::content::Intent::getBundleExtra(const ::java::lang::String& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBundleExtra", "(Ljava/lang/String;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::os::Bundle android::content::Intent::getExtras() const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtras", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

int32_t android::content::Intent::getFlags() const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFlags", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::content::Intent::getPackage() const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::content::ComponentName android::content::Intent::getComponent() const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getComponent", "()Landroid/content/ComponentName;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::ComponentName _ret(ret);
    return _ret;
}

::android::graphics::Rect android::content::Intent::getSourceBounds() const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSourceBounds", "()Landroid/graphics/Rect;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Rect _ret(ret);
    return _ret;
}

::android::content::ComponentName android::content::Intent::resolveActivity(const ::android::content::pm::PackageManager& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveActivity", "(Landroid/content/pm/PackageManager;)Landroid/content/ComponentName;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::ComponentName _ret(ret);
    return _ret;
}

::android::content::pm::ActivityInfo android::content::Intent::resolveActivityInfo(const ::android::content::pm::PackageManager& arg0, int32_t arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveActivityInfo", "(Landroid/content/pm/PackageManager;I)Landroid/content/pm/ActivityInfo;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::pm::ActivityInfo _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::setAction(const ::java::lang::String& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAction", "(Ljava/lang/String;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::setData(const ::android::net::Uri& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "setData", "(Landroid/net/Uri;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::setType(const ::java::lang::String& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "setType", "(Ljava/lang/String;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::setDataAndType(const ::android::net::Uri& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDataAndType", "(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::addCategory(const ::java::lang::String& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "addCategory", "(Ljava/lang/String;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

void android::content::Intent::removeCategory(const ::java::lang::String& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeCategory", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::Intent::setSelector(const ::android::content::Intent& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelector", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::Intent android::content::Intent::putExtra(const ::java::lang::String& arg0, bool arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "putExtra", "(Ljava/lang/String;Z)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::putExtra(const ::java::lang::String& arg0, int8_t arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "putExtra", "(Ljava/lang/String;B)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    int8_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::putExtra(const ::java::lang::String& arg0, uint16_t arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "putExtra", "(Ljava/lang/String;C)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    uint16_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::putExtra(const ::java::lang::String& arg0, int16_t arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "putExtra", "(Ljava/lang/String;S)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    int16_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::putExtra(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "putExtra", "(Ljava/lang/String;I)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::putExtra(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "putExtra", "(Ljava/lang/String;J)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::putExtra(const ::java::lang::String& arg0, float arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "putExtra", "(Ljava/lang/String;F)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::putExtra(const ::java::lang::String& arg0, double arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "putExtra", "(Ljava/lang/String;D)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    double _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::putExtra(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "putExtra", "(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::putExtra(const ::java::lang::String& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "putExtra", "(Ljava/lang/String;Ljava/lang/CharSequence;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::putExtra(const ::java::lang::String& arg0, const ::android::os::Parcelable& arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "putExtra", "(Ljava/lang/String;Landroid/os/Parcelable;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::putExtra(const ::java::lang::String& arg0, const std::vector< ::android::os::Parcelable>& arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "putExtra", "(Ljava/lang/String;[Landroid/os/Parcelable;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::android::os::Parcelable::_class) ::android::os::Parcelable::_class = java::fetch_class("android/os/Parcelable");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::android::os::Parcelable::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::android::os::Parcelable& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::putParcelableArrayListExtra(const ::java::lang::String& arg0, const ::java::util::ArrayList& arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "putParcelableArrayListExtra", "(Ljava/lang/String;Ljava/util/ArrayList;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::putIntegerArrayListExtra(const ::java::lang::String& arg0, const ::java::util::ArrayList& arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "putIntegerArrayListExtra", "(Ljava/lang/String;Ljava/util/ArrayList;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::putStringArrayListExtra(const ::java::lang::String& arg0, const ::java::util::ArrayList& arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "putStringArrayListExtra", "(Ljava/lang/String;Ljava/util/ArrayList;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::putCharSequenceArrayListExtra(const ::java::lang::String& arg0, const ::java::util::ArrayList& arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "putCharSequenceArrayListExtra", "(Ljava/lang/String;Ljava/util/ArrayList;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::putExtra(const ::java::lang::String& arg0, const ::java::io::Serializable& arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "putExtra", "(Ljava/lang/String;Ljava/io/Serializable;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::putExtra(const ::java::lang::String& arg0, const std::vector< bool>& arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "putExtra", "(Ljava/lang/String;[Z)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jbooleanArray _arg1 = java::jni->NewBooleanArray(arg1.size());
    unsigned arg1s = arg1.size();
    std::unique_ptr<bool[]> arg1t(new bool[arg1s]);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      arg1t[arg1i] = arg1[arg1i];
    }
    java::jni->SetBooleanArrayRegion(_arg1, 0, arg1s, (const jboolean*)arg1t.get());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::putExtra(const ::java::lang::String& arg0, const std::vector< int8_t>& arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "putExtra", "(Ljava/lang/String;[B)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::putExtra(const ::java::lang::String& arg0, const std::vector< int16_t>& arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "putExtra", "(Ljava/lang/String;[S)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jshortArray _arg1 = java::jni->NewShortArray(arg1.size());
    java::jni->SetShortArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::putExtra(const ::java::lang::String& arg0, const std::vector< uint16_t>& arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "putExtra", "(Ljava/lang/String;[C)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jcharArray _arg1 = java::jni->NewCharArray(arg1.size());
    java::jni->SetCharArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::putExtra(const ::java::lang::String& arg0, const std::vector< int32_t>& arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "putExtra", "(Ljava/lang/String;[I)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::putExtra(const ::java::lang::String& arg0, const std::vector< int64_t>& arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "putExtra", "(Ljava/lang/String;[J)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jlongArray _arg1 = java::jni->NewLongArray(arg1.size());
    java::jni->SetLongArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::putExtra(const ::java::lang::String& arg0, const std::vector< float>& arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "putExtra", "(Ljava/lang/String;[F)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::putExtra(const ::java::lang::String& arg0, const std::vector< double>& arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "putExtra", "(Ljava/lang/String;[D)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jdoubleArray _arg1 = java::jni->NewDoubleArray(arg1.size());
    java::jni->SetDoubleArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::putExtra(const ::java::lang::String& arg0, const std::vector< ::java::lang::String>& arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "putExtra", "(Ljava/lang/String;[Ljava/lang/String;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::putExtra(const ::java::lang::String& arg0, const std::vector< ::java::lang::CharSequence>& arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "putExtra", "(Ljava/lang/String;[Ljava/lang/CharSequence;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::CharSequence::_class) ::java::lang::CharSequence::_class = java::fetch_class("java/lang/CharSequence");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::CharSequence::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::CharSequence& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::putExtra(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "putExtra", "(Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::putExtras(const ::android::content::Intent& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "putExtras", "(Landroid/content/Intent;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::putExtras(const ::android::os::Bundle& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "putExtras", "(Landroid/os/Bundle;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::replaceExtras(const ::android::content::Intent& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "replaceExtras", "(Landroid/content/Intent;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::replaceExtras(const ::android::os::Bundle& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "replaceExtras", "(Landroid/os/Bundle;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

void android::content::Intent::removeExtra(const ::java::lang::String& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeExtra", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::Intent android::content::Intent::setFlags(int32_t arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFlags", "(I)Landroid/content/Intent;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::addFlags(int32_t arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "addFlags", "(I)Landroid/content/Intent;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::setPackage(const ::java::lang::String& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPackage", "(Ljava/lang/String;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::setComponent(const ::android::content::ComponentName& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "setComponent", "(Landroid/content/ComponentName;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::setClassName(const ::android::content::Context& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClassName", "(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::setClassName(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClassName", "(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Intent::setClass(const ::android::content::Context& arg0, const ::java::lang::Class& arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClass", "(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

void android::content::Intent::setSourceBounds(const ::android::graphics::Rect& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSourceBounds", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::content::Intent::fillIn(const ::android::content::Intent& arg0, int32_t arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "fillIn", "(Landroid/content/Intent;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

bool android::content::Intent::filterEquals(const ::android::content::Intent& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "filterEquals", "(Landroid/content/Intent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::content::Intent::filterHashCode() const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "filterHashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::content::Intent::toString() const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::content::Intent::toURI() const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "toURI", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::content::Intent::toUri(int32_t arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "toUri", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::content::Intent::describeContents() const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::Intent::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::Intent::readFromParcel(const ::android::os::Parcel& arg0) const {
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFromParcel", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::Intent android::content::Intent::parseIntent(const ::android::content::res::Resources& arg0, const ::org::xmlpull::v1::XmlPullParser& arg1, const ::android::util::AttributeSet& arg2){
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parseIntent", "(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::content::Intent _ret(ret);
    return _ret;
}

void android::content::ServiceConnection::onServiceConnected(const ::android::content::ComponentName& arg0, const ::android::os::IBinder& arg1) const {
    if (!::android::content::ServiceConnection::_class) ::android::content::ServiceConnection::_class = java::fetch_class("android/content/ServiceConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "onServiceConnected", "(Landroid/content/ComponentName;Landroid/os/IBinder;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::ServiceConnection::onServiceDisconnected(const ::android::content::ComponentName& arg0) const {
    if (!::android::content::ServiceConnection::_class) ::android::content::ServiceConnection::_class = java::fetch_class("android/content/ServiceConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "onServiceDisconnected", "(Landroid/content/ComponentName;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::IntentFilter::IntentFilter() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::IntentFilter::IntentFilter(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::IntentFilter::IntentFilter(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::android::content::IntentFilter android::content::IntentFilter::create(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "create", "(Ljava/lang/String;Ljava/lang/String;)Landroid/content/IntentFilter;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::content::IntentFilter _ret(ret);
    return _ret;
}

void android::content::IntentFilter::setPriority(int32_t arg0) const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPriority", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::content::IntentFilter::getPriority() const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPriority", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::IntentFilter::addAction(const ::java::lang::String& arg0) const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAction", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::content::IntentFilter::countActions() const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "countActions", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::content::IntentFilter::getAction(int32_t arg0) const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAction", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::content::IntentFilter::hasAction(const ::java::lang::String& arg0) const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasAction", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::content::IntentFilter::matchAction(const ::java::lang::String& arg0) const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "matchAction", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::util::Iterator android::content::IntentFilter::actionsIterator() const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "actionsIterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

void android::content::IntentFilter::addDataType(const ::java::lang::String& arg0) const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "addDataType", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::content::IntentFilter::hasDataType(const ::java::lang::String& arg0) const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasDataType", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::content::IntentFilter::countDataTypes() const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "countDataTypes", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::content::IntentFilter::getDataType(int32_t arg0) const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDataType", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::Iterator android::content::IntentFilter::typesIterator() const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "typesIterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

void android::content::IntentFilter::addDataScheme(const ::java::lang::String& arg0) const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "addDataScheme", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::content::IntentFilter::countDataSchemes() const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "countDataSchemes", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::content::IntentFilter::getDataScheme(int32_t arg0) const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDataScheme", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::content::IntentFilter::hasDataScheme(const ::java::lang::String& arg0) const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasDataScheme", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::util::Iterator android::content::IntentFilter::schemesIterator() const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "schemesIterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

void android::content::IntentFilter::addDataAuthority(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "addDataAuthority", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::content::IntentFilter::countDataAuthorities() const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "countDataAuthorities", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::content::IntentFilter_AuthorityEntry android::content::IntentFilter::getDataAuthority(int32_t arg0) const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDataAuthority", "(I)Landroid/content/IntentFilter$AuthorityEntry;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::IntentFilter_AuthorityEntry _ret(ret);
    return _ret;
}

bool android::content::IntentFilter::hasDataAuthority(const ::android::net::Uri& arg0) const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasDataAuthority", "(Landroid/net/Uri;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::util::Iterator android::content::IntentFilter::authoritiesIterator() const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "authoritiesIterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

void android::content::IntentFilter::addDataPath(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "addDataPath", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::content::IntentFilter::countDataPaths() const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "countDataPaths", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::os::PatternMatcher android::content::IntentFilter::getDataPath(int32_t arg0) const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDataPath", "(I)Landroid/os/PatternMatcher;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::PatternMatcher _ret(ret);
    return _ret;
}

bool android::content::IntentFilter::hasDataPath(const ::java::lang::String& arg0) const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasDataPath", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::util::Iterator android::content::IntentFilter::pathsIterator() const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "pathsIterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

int32_t android::content::IntentFilter::matchDataAuthority(const ::android::net::Uri& arg0) const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "matchDataAuthority", "(Landroid/net/Uri;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::content::IntentFilter::matchData(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::android::net::Uri& arg2) const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "matchData", "(Ljava/lang/String;Ljava/lang/String;Landroid/net/Uri;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::content::IntentFilter::addCategory(const ::java::lang::String& arg0) const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "addCategory", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::content::IntentFilter::countCategories() const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "countCategories", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::content::IntentFilter::getCategory(int32_t arg0) const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCategory", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::content::IntentFilter::hasCategory(const ::java::lang::String& arg0) const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasCategory", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::util::Iterator android::content::IntentFilter::categoriesIterator() const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "categoriesIterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

::java::lang::String android::content::IntentFilter::matchCategories(const ::java::util::Set& arg0) const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "matchCategories", "(Ljava/util/Set;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::content::IntentFilter::match(const ::android::content::ContentResolver& arg0, const ::android::content::Intent& arg1, bool arg2, const ::java::lang::String& arg3) const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "match", "(Landroid/content/ContentResolver;Landroid/content/Intent;ZLjava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::content::IntentFilter::match(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::android::net::Uri& arg3, const ::java::util::Set& arg4, const ::java::lang::String& arg5) const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "match", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/net/Uri;Ljava/util/Set;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::content::IntentFilter::writeToXml(const ::org::xmlpull::v1::XmlSerializer& arg0) const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToXml", "(Lorg/xmlpull/v1/XmlSerializer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::IntentFilter::readFromXml(const ::org::xmlpull::v1::XmlPullParser& arg0) const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFromXml", "(Lorg/xmlpull/v1/XmlPullParser;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::IntentFilter::dump(const ::android::util::Printer& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Landroid/util/Printer;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::content::IntentFilter::describeContents() const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::IntentFilter::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::IntentFilter::_class) ::android::content::IntentFilter::_class = java::fetch_class("android/content/IntentFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::Context::Context() : ::java::lang::Object((jobject)0) {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::content::res::AssetManager android::content::Context::getAssets() const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAssets", "()Landroid/content/res/AssetManager;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::res::AssetManager _ret(ret);
    return _ret;
}

::android::content::res::Resources android::content::Context::getResources() const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResources", "()Landroid/content/res/Resources;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::res::Resources _ret(ret);
    return _ret;
}

::android::content::pm::PackageManager android::content::Context::getPackageManager() const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageManager", "()Landroid/content/pm/PackageManager;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::pm::PackageManager _ret(ret);
    return _ret;
}

::android::content::ContentResolver android::content::Context::getContentResolver() const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentResolver", "()Landroid/content/ContentResolver;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::ContentResolver _ret(ret);
    return _ret;
}

::android::os::Looper android::content::Context::getMainLooper() const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMainLooper", "()Landroid/os/Looper;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Looper _ret(ret);
    return _ret;
}

::android::content::Context android::content::Context::getApplicationContext() const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplicationContext", "()Landroid/content/Context;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Context _ret(ret);
    return _ret;
}

void android::content::Context::registerComponentCallbacks(const ::android::content::ComponentCallbacks& arg0) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerComponentCallbacks", "(Landroid/content/ComponentCallbacks;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::Context::unregisterComponentCallbacks(const ::android::content::ComponentCallbacks& arg0) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterComponentCallbacks", "(Landroid/content/ComponentCallbacks;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::content::Context::getText(int32_t arg0) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "(I)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::String android::content::Context::getString(int32_t arg0) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "getString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::content::Context::getString(int32_t arg0, const std::vector< ::java::lang::Object>& arg1) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
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

void android::content::Context::setTheme(int32_t arg0) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTheme", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::res::Resources_Theme android::content::Context::getTheme() const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTheme", "()Landroid/content/res/Resources$Theme;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::res::Resources_Theme _ret(ret);
    return _ret;
}

::android::content::res::TypedArray android::content::Context::obtainStyledAttributes(const std::vector< int32_t>& arg0) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtainStyledAttributes", "([I)Landroid/content/res/TypedArray;");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::res::TypedArray _ret(ret);
    return _ret;
}

::android::content::res::TypedArray android::content::Context::obtainStyledAttributes(int32_t arg0, const std::vector< int32_t>& arg1) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtainStyledAttributes", "(I[I)Landroid/content/res/TypedArray;");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::res::TypedArray _ret(ret);
    return _ret;
}

::android::content::res::TypedArray android::content::Context::obtainStyledAttributes(const ::android::util::AttributeSet& arg0, const std::vector< int32_t>& arg1) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtainStyledAttributes", "(Landroid/util/AttributeSet;[I)Landroid/content/res/TypedArray;");
    jobject _arg0 = arg0.obj;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::res::TypedArray _ret(ret);
    return _ret;
}

::android::content::res::TypedArray android::content::Context::obtainStyledAttributes(const ::android::util::AttributeSet& arg0, const std::vector< int32_t>& arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtainStyledAttributes", "(Landroid/util/AttributeSet;[III)Landroid/content/res/TypedArray;");
    jobject _arg0 = arg0.obj;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::content::res::TypedArray _ret(ret);
    return _ret;
}

::java::lang::ClassLoader android::content::Context::getClassLoader() const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClassLoader", "()Ljava/lang/ClassLoader;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::ClassLoader _ret(ret);
    return _ret;
}

::java::lang::String android::content::Context::getPackageName() const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::content::pm::ApplicationInfo android::content::Context::getApplicationInfo() const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplicationInfo", "()Landroid/content/pm/ApplicationInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::pm::ApplicationInfo _ret(ret);
    return _ret;
}

::java::lang::String android::content::Context::getPackageResourcePath() const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageResourcePath", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::content::Context::getPackageCodePath() const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageCodePath", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::content::SharedPreferences android::content::Context::getSharedPreferences(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSharedPreferences", "(Ljava/lang/String;I)Landroid/content/SharedPreferences;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::SharedPreferences _ret(ret);
    return _ret;
}

::java::io::FileInputStream android::content::Context::openFileInput(const ::java::lang::String& arg0) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "openFileInput", "(Ljava/lang/String;)Ljava/io/FileInputStream;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::FileInputStream _ret(ret);
    return _ret;
}

::java::io::FileOutputStream android::content::Context::openFileOutput(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "openFileOutput", "(Ljava/lang/String;I)Ljava/io/FileOutputStream;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::io::FileOutputStream _ret(ret);
    return _ret;
}

bool android::content::Context::deleteFile(const ::java::lang::String& arg0) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "deleteFile", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::io::File android::content::Context::getFileStreamPath(const ::java::lang::String& arg0) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFileStreamPath", "(Ljava/lang/String;)Ljava/io/File;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::File _ret(ret);
    return _ret;
}

::java::io::File android::content::Context::getFilesDir() const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFilesDir", "()Ljava/io/File;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::File _ret(ret);
    return _ret;
}

::java::io::File android::content::Context::getExternalFilesDir(const ::java::lang::String& arg0) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExternalFilesDir", "(Ljava/lang/String;)Ljava/io/File;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::File _ret(ret);
    return _ret;
}

::java::io::File android::content::Context::getObbDir() const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObbDir", "()Ljava/io/File;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::File _ret(ret);
    return _ret;
}

::java::io::File android::content::Context::getCacheDir() const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCacheDir", "()Ljava/io/File;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::File _ret(ret);
    return _ret;
}

::java::io::File android::content::Context::getExternalCacheDir() const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExternalCacheDir", "()Ljava/io/File;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::File _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> android::content::Context::fileList() const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
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

::java::io::File android::content::Context::getDir(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDir", "(Ljava/lang/String;I)Ljava/io/File;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::io::File _ret(ret);
    return _ret;
}

::android::database::sqlite::SQLiteDatabase android::content::Context::openOrCreateDatabase(const ::java::lang::String& arg0, int32_t arg1, const ::android::database::sqlite::SQLiteDatabase_CursorFactory& arg2) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "openOrCreateDatabase", "(Ljava/lang/String;ILandroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::database::sqlite::SQLiteDatabase _ret(ret);
    return _ret;
}

::android::database::sqlite::SQLiteDatabase android::content::Context::openOrCreateDatabase(const ::java::lang::String& arg0, int32_t arg1, const ::android::database::sqlite::SQLiteDatabase_CursorFactory& arg2, const ::android::database::DatabaseErrorHandler& arg3) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "openOrCreateDatabase", "(Ljava/lang/String;ILandroid/database/sqlite/SQLiteDatabase$CursorFactory;Landroid/database/DatabaseErrorHandler;)Landroid/database/sqlite/SQLiteDatabase;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::database::sqlite::SQLiteDatabase _ret(ret);
    return _ret;
}

bool android::content::Context::deleteDatabase(const ::java::lang::String& arg0) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "deleteDatabase", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::io::File android::content::Context::getDatabasePath(const ::java::lang::String& arg0) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDatabasePath", "(Ljava/lang/String;)Ljava/io/File;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::File _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> android::content::Context::databaseList() const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
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

::android::graphics::drawable::Drawable android::content::Context::getWallpaper() const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWallpaper", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::content::Context::peekWallpaper() const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "peekWallpaper", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

int32_t android::content::Context::getWallpaperDesiredMinimumWidth() const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWallpaperDesiredMinimumWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::content::Context::getWallpaperDesiredMinimumHeight() const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWallpaperDesiredMinimumHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::Context::setWallpaper(const ::android::graphics::Bitmap& arg0) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWallpaper", "(Landroid/graphics/Bitmap;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::Context::setWallpaper(const ::java::io::InputStream& arg0) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWallpaper", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::Context::clearWallpaper() const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearWallpaper", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::content::Context::startActivity(const ::android::content::Intent& arg0) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "startActivity", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::Context::startActivities(const std::vector< ::android::content::Intent>& arg0) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
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

void android::content::Context::startIntentSender(const ::android::content::IntentSender& arg0, const ::android::content::Intent& arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "startIntentSender", "(Landroid/content/IntentSender;Landroid/content/Intent;III)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::content::Context::sendBroadcast(const ::android::content::Intent& arg0) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendBroadcast", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::Context::sendBroadcast(const ::android::content::Intent& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendBroadcast", "(Landroid/content/Intent;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::Context::sendOrderedBroadcast(const ::android::content::Intent& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendOrderedBroadcast", "(Landroid/content/Intent;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::Context::sendOrderedBroadcast(const ::android::content::Intent& arg0, const ::java::lang::String& arg1, const ::android::content::BroadcastReceiver& arg2, const ::android::os::Handler& arg3, int32_t arg4, const ::java::lang::String& arg5, const ::android::os::Bundle& arg6) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
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

void android::content::Context::sendStickyBroadcast(const ::android::content::Intent& arg0) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendStickyBroadcast", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::Context::sendStickyOrderedBroadcast(const ::android::content::Intent& arg0, const ::android::content::BroadcastReceiver& arg1, const ::android::os::Handler& arg2, int32_t arg3, const ::java::lang::String& arg4, const ::android::os::Bundle& arg5) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendStickyOrderedBroadcast", "(Landroid/content/Intent;Landroid/content/BroadcastReceiver;Landroid/os/Handler;ILjava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::content::Context::removeStickyBroadcast(const ::android::content::Intent& arg0) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeStickyBroadcast", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::Intent android::content::Context::registerReceiver(const ::android::content::BroadcastReceiver& arg0, const ::android::content::IntentFilter& arg1) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerReceiver", "(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::Context::registerReceiver(const ::android::content::BroadcastReceiver& arg0, const ::android::content::IntentFilter& arg1, const ::java::lang::String& arg2, const ::android::os::Handler& arg3) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerReceiver", "(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;Ljava/lang/String;Landroid/os/Handler;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::content::Intent _ret(ret);
    return _ret;
}

void android::content::Context::unregisterReceiver(const ::android::content::BroadcastReceiver& arg0) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterReceiver", "(Landroid/content/BroadcastReceiver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::ComponentName android::content::Context::startService(const ::android::content::Intent& arg0) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "startService", "(Landroid/content/Intent;)Landroid/content/ComponentName;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::ComponentName _ret(ret);
    return _ret;
}

bool android::content::Context::stopService(const ::android::content::Intent& arg0) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopService", "(Landroid/content/Intent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::content::Context::bindService(const ::android::content::Intent& arg0, const ::android::content::ServiceConnection& arg1, int32_t arg2) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "bindService", "(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::content::Context::unbindService(const ::android::content::ServiceConnection& arg0) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "unbindService", "(Landroid/content/ServiceConnection;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::content::Context::startInstrumentation(const ::android::content::ComponentName& arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "startInstrumentation", "(Landroid/content/ComponentName;Ljava/lang/String;Landroid/os/Bundle;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::Object android::content::Context::getSystemService(const ::java::lang::String& arg0) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t android::content::Context::checkPermission(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkPermission", "(Ljava/lang/String;II)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::content::Context::checkCallingPermission(const ::java::lang::String& arg0) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkCallingPermission", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::content::Context::checkCallingOrSelfPermission(const ::java::lang::String& arg0) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkCallingOrSelfPermission", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::content::Context::enforcePermission(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2, const ::java::lang::String& arg3) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "enforcePermission", "(Ljava/lang/String;IILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::content::Context::enforceCallingPermission(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "enforceCallingPermission", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::Context::enforceCallingOrSelfPermission(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "enforceCallingOrSelfPermission", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::Context::grantUriPermission(const ::java::lang::String& arg0, const ::android::net::Uri& arg1, int32_t arg2) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "grantUriPermission", "(Ljava/lang/String;Landroid/net/Uri;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::content::Context::revokeUriPermission(const ::android::net::Uri& arg0, int32_t arg1) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "revokeUriPermission", "(Landroid/net/Uri;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::content::Context::checkUriPermission(const ::android::net::Uri& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkUriPermission", "(Landroid/net/Uri;III)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::content::Context::checkCallingUriPermission(const ::android::net::Uri& arg0, int32_t arg1) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkCallingUriPermission", "(Landroid/net/Uri;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::content::Context::checkCallingOrSelfUriPermission(const ::android::net::Uri& arg0, int32_t arg1) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkCallingOrSelfUriPermission", "(Landroid/net/Uri;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::content::Context::checkUriPermission(const ::android::net::Uri& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, int32_t arg3, int32_t arg4, int32_t arg5) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkUriPermission", "(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;III)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::content::Context::enforceUriPermission(const ::android::net::Uri& arg0, int32_t arg1, int32_t arg2, int32_t arg3, const ::java::lang::String& arg4) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "enforceUriPermission", "(Landroid/net/Uri;IIILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::content::Context::enforceCallingUriPermission(const ::android::net::Uri& arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "enforceCallingUriPermission", "(Landroid/net/Uri;ILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::content::Context::enforceCallingOrSelfUriPermission(const ::android::net::Uri& arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "enforceCallingOrSelfUriPermission", "(Landroid/net/Uri;ILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::content::Context::enforceUriPermission(const ::android::net::Uri& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, int32_t arg3, int32_t arg4, int32_t arg5, const ::java::lang::String& arg6) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
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

::android::content::Context android::content::Context::createPackageContext(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "createPackageContext", "(Ljava/lang/String;I)Landroid/content/Context;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Context _ret(ret);
    return _ret;
}

bool android::content::Context::isRestricted() const {
    if (!::android::content::Context::_class) ::android::content::Context::_class = java::fetch_class("android/content/Context");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRestricted", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::AsyncQueryHandler::AsyncQueryHandler(const ::android::content::ContentResolver& arg0) : ::java::lang::Object((jobject)0), ::android::os::Handler((jobject)0) {
    if (!::android::content::AsyncQueryHandler::_class) ::android::content::AsyncQueryHandler::_class = java::fetch_class("android/content/AsyncQueryHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/ContentResolver;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::content::AsyncQueryHandler::startQuery(int32_t arg0, const ::java::lang::Object& arg1, const ::android::net::Uri& arg2, const std::vector< ::java::lang::String>& arg3, const ::java::lang::String& arg4, const std::vector< ::java::lang::String>& arg5, const ::java::lang::String& arg6) const {
    if (!::android::content::AsyncQueryHandler::_class) ::android::content::AsyncQueryHandler::_class = java::fetch_class("android/content/AsyncQueryHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "startQuery", "(ILjava/lang/Object;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V");
    int32_t _arg0 = arg0;
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
    jobject _arg4 = arg4.obj;
    unsigned arg5s = arg5.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg5 = java::jni->NewObjectArray(arg5s, ::java::lang::String::_class, nullptr);
    for (unsigned arg5i = 0; arg5i < arg5s; ++arg5i) {
      const ::java::lang::String& arg5e = arg5[arg5i];
        jobject arg5d = arg5e.obj;
      java::jni->SetObjectArrayElement(_arg5, arg5i, arg5d);
    }
    jobject _arg6 = arg6.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}

void android::content::AsyncQueryHandler::cancelOperation(int32_t arg0) const {
    if (!::android::content::AsyncQueryHandler::_class) ::android::content::AsyncQueryHandler::_class = java::fetch_class("android/content/AsyncQueryHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancelOperation", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::AsyncQueryHandler::startInsert(int32_t arg0, const ::java::lang::Object& arg1, const ::android::net::Uri& arg2, const ::android::content::ContentValues& arg3) const {
    if (!::android::content::AsyncQueryHandler::_class) ::android::content::AsyncQueryHandler::_class = java::fetch_class("android/content/AsyncQueryHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "startInsert", "(ILjava/lang/Object;Landroid/net/Uri;Landroid/content/ContentValues;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::content::AsyncQueryHandler::startUpdate(int32_t arg0, const ::java::lang::Object& arg1, const ::android::net::Uri& arg2, const ::android::content::ContentValues& arg3, const ::java::lang::String& arg4, const std::vector< ::java::lang::String>& arg5) const {
    if (!::android::content::AsyncQueryHandler::_class) ::android::content::AsyncQueryHandler::_class = java::fetch_class("android/content/AsyncQueryHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "startUpdate", "(ILjava/lang/Object;Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    unsigned arg5s = arg5.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg5 = java::jni->NewObjectArray(arg5s, ::java::lang::String::_class, nullptr);
    for (unsigned arg5i = 0; arg5i < arg5s; ++arg5i) {
      const ::java::lang::String& arg5e = arg5[arg5i];
        jobject arg5d = arg5e.obj;
      java::jni->SetObjectArrayElement(_arg5, arg5i, arg5d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::content::AsyncQueryHandler::startDelete(int32_t arg0, const ::java::lang::Object& arg1, const ::android::net::Uri& arg2, const ::java::lang::String& arg3, const std::vector< ::java::lang::String>& arg4) const {
    if (!::android::content::AsyncQueryHandler::_class) ::android::content::AsyncQueryHandler::_class = java::fetch_class("android/content/AsyncQueryHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "startDelete", "(ILjava/lang/Object;Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    unsigned arg4s = arg4.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg4 = java::jni->NewObjectArray(arg4s, ::java::lang::String::_class, nullptr);
    for (unsigned arg4i = 0; arg4i < arg4s; ++arg4i) {
      const ::java::lang::String& arg4e = arg4[arg4i];
        jobject arg4d = arg4e.obj;
      java::jni->SetObjectArrayElement(_arg4, arg4i, arg4d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::content::AsyncQueryHandler::handleMessage(const ::android::os::Message& arg0) const {
    if (!::android::content::AsyncQueryHandler::_class) ::android::content::AsyncQueryHandler::_class = java::fetch_class("android/content/AsyncQueryHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "handleMessage", "(Landroid/os/Message;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::AsyncQueryHandler_WorkerHandler::AsyncQueryHandler_WorkerHandler(const ::android::content::AsyncQueryHandler& arg0, const ::android::os::Looper& arg1) : ::java::lang::Object((jobject)0), ::android::os::Handler((jobject)0) {
    if (!::android::content::AsyncQueryHandler_WorkerHandler::_class) ::android::content::AsyncQueryHandler_WorkerHandler::_class = java::fetch_class("android/content/AsyncQueryHandler$WorkerHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/AsyncQueryHandler;Landroid/os/Looper;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::content::AsyncQueryHandler_WorkerHandler::handleMessage(const ::android::os::Message& arg0) const {
    if (!::android::content::AsyncQueryHandler_WorkerHandler::_class) ::android::content::AsyncQueryHandler_WorkerHandler::_class = java::fetch_class("android/content/AsyncQueryHandler$WorkerHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "handleMessage", "(Landroid/os/Message;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::content::SyncInfo::describeContents() const {
    if (!::android::content::SyncInfo::_class) ::android::content::SyncInfo::_class = java::fetch_class("android/content/SyncInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::SyncInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::SyncInfo::_class) ::android::content::SyncInfo::_class = java::fetch_class("android/content/SyncInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::ContentUris::ContentUris() : ::java::lang::Object((jobject)0) {
    if (!::android::content::ContentUris::_class) ::android::content::ContentUris::_class = java::fetch_class("android/content/ContentUris");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int64_t android::content::ContentUris::parseId(const ::android::net::Uri& arg0){
    if (!::android::content::ContentUris::_class) ::android::content::ContentUris::_class = java::fetch_class("android/content/ContentUris");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parseId", "(Landroid/net/Uri;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

::android::net::Uri_Builder android::content::ContentUris::appendId(const ::android::net::Uri_Builder& arg0, int64_t arg1){
    if (!::android::content::ContentUris::_class) ::android::content::ContentUris::_class = java::fetch_class("android/content/ContentUris");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "appendId", "(Landroid/net/Uri$Builder;J)Landroid/net/Uri$Builder;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::net::Uri_Builder _ret(ret);
    return _ret;
}

::android::net::Uri android::content::ContentUris::withAppendedId(const ::android::net::Uri& arg0, int64_t arg1){
    if (!::android::content::ContentUris::_class) ::android::content::ContentUris::_class = java::fetch_class("android/content/ContentUris");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "withAppendedId", "(Landroid/net/Uri;J)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::net::Uri _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::AsyncTaskLoader::AsyncTaskLoader(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::content::Loader((jobject)0) {
    if (!::android::content::AsyncTaskLoader::_class) ::android::content::AsyncTaskLoader::_class = java::fetch_class("android/content/AsyncTaskLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::content::AsyncTaskLoader::setUpdateThrottle(int64_t arg0) const {
    if (!::android::content::AsyncTaskLoader::_class) ::android::content::AsyncTaskLoader::_class = java::fetch_class("android/content/AsyncTaskLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUpdateThrottle", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::content::AsyncTaskLoader::cancelLoad() const {
    if (!::android::content::AsyncTaskLoader::_class) ::android::content::AsyncTaskLoader::_class = java::fetch_class("android/content/AsyncTaskLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancelLoad", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::content::AsyncTaskLoader::onCanceled(const ::java::lang::Object& arg0) const {
    if (!::android::content::AsyncTaskLoader::_class) ::android::content::AsyncTaskLoader::_class = java::fetch_class("android/content/AsyncTaskLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCanceled", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object android::content::AsyncTaskLoader::loadInBackground() const {
    if (!::android::content::AsyncTaskLoader::_class) ::android::content::AsyncTaskLoader::_class = java::fetch_class("android/content/AsyncTaskLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadInBackground", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::content::AsyncTaskLoader::dump(const ::java::lang::String& arg0, const ::java::io::FileDescriptor& arg1, const ::java::io::PrintWriter& arg2, const std::vector< ::java::lang::String>& arg3) const {
    if (!::android::content::AsyncTaskLoader::_class) ::android::content::AsyncTaskLoader::_class = java::fetch_class("android/content/AsyncTaskLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V");
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
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

::java::util::Map android::content::SharedPreferences::getAll() const {
    if (!::android::content::SharedPreferences::_class) ::android::content::SharedPreferences::_class = java::fetch_class("android/content/SharedPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAll", "()Ljava/util/Map;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map _ret(ret);
    return _ret;
}

::java::lang::String android::content::SharedPreferences::getString(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::SharedPreferences::_class) ::android::content::SharedPreferences::_class = java::fetch_class("android/content/SharedPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "getString", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::Set android::content::SharedPreferences::getStringSet(const ::java::lang::String& arg0, const ::java::util::Set& arg1) const {
    if (!::android::content::SharedPreferences::_class) ::android::content::SharedPreferences::_class = java::fetch_class("android/content/SharedPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStringSet", "(Ljava/lang/String;Ljava/util/Set;)Ljava/util/Set;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::Set _ret(ret);
    return _ret;
}

int32_t android::content::SharedPreferences::getInt(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::content::SharedPreferences::_class) ::android::content::SharedPreferences::_class = java::fetch_class("android/content/SharedPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInt", "(Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int64_t android::content::SharedPreferences::getLong(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::android::content::SharedPreferences::_class) ::android::content::SharedPreferences::_class = java::fetch_class("android/content/SharedPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLong", "(Ljava/lang/String;J)J");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

float android::content::SharedPreferences::getFloat(const ::java::lang::String& arg0, float arg1) const {
    if (!::android::content::SharedPreferences::_class) ::android::content::SharedPreferences::_class = java::fetch_class("android/content/SharedPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFloat", "(Ljava/lang/String;F)F");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

bool android::content::SharedPreferences::getBoolean(const ::java::lang::String& arg0, bool arg1) const {
    if (!::android::content::SharedPreferences::_class) ::android::content::SharedPreferences::_class = java::fetch_class("android/content/SharedPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBoolean", "(Ljava/lang/String;Z)Z");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::content::SharedPreferences::contains(const ::java::lang::String& arg0) const {
    if (!::android::content::SharedPreferences::_class) ::android::content::SharedPreferences::_class = java::fetch_class("android/content/SharedPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::content::SharedPreferences_Editor android::content::SharedPreferences::edit() const {
    if (!::android::content::SharedPreferences::_class) ::android::content::SharedPreferences::_class = java::fetch_class("android/content/SharedPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "edit", "()Landroid/content/SharedPreferences$Editor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::SharedPreferences_Editor _ret(ret);
    return _ret;
}

void android::content::SharedPreferences::registerOnSharedPreferenceChangeListener(const ::android::content::SharedPreferences_OnSharedPreferenceChangeListener& arg0) const {
    if (!::android::content::SharedPreferences::_class) ::android::content::SharedPreferences::_class = java::fetch_class("android/content/SharedPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerOnSharedPreferenceChangeListener", "(Landroid/content/SharedPreferences$OnSharedPreferenceChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::SharedPreferences::unregisterOnSharedPreferenceChangeListener(const ::android::content::SharedPreferences_OnSharedPreferenceChangeListener& arg0) const {
    if (!::android::content::SharedPreferences::_class) ::android::content::SharedPreferences::_class = java::fetch_class("android/content/SharedPreferences");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterOnSharedPreferenceChangeListener", "(Landroid/content/SharedPreferences$OnSharedPreferenceChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::IntentFilter_MalformedMimeTypeException::IntentFilter_MalformedMimeTypeException() : ::java::lang::Object((jobject)0), ::android::util::AndroidException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::content::IntentFilter_MalformedMimeTypeException::_class) ::android::content::IntentFilter_MalformedMimeTypeException::_class = java::fetch_class("android/content/IntentFilter$MalformedMimeTypeException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::IntentFilter_MalformedMimeTypeException::IntentFilter_MalformedMimeTypeException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::util::AndroidException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::content::IntentFilter_MalformedMimeTypeException::_class) ::android::content::IntentFilter_MalformedMimeTypeException::_class = java::fetch_class("android/content/IntentFilter$MalformedMimeTypeException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::SyncStats::SyncStats() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::SyncStats::_class) ::android::content::SyncStats::_class = java::fetch_class("android/content/SyncStats");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::SyncStats::SyncStats(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::SyncStats::_class) ::android::content::SyncStats::_class = java::fetch_class("android/content/SyncStats");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String android::content::SyncStats::toString() const {
    if (!::android::content::SyncStats::_class) ::android::content::SyncStats::_class = java::fetch_class("android/content/SyncStats");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::content::SyncStats::clear() const {
    if (!::android::content::SyncStats::_class) ::android::content::SyncStats::_class = java::fetch_class("android/content/SyncStats");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::content::SyncStats::describeContents() const {
    if (!::android::content::SyncStats::_class) ::android::content::SyncStats::_class = java::fetch_class("android/content/SyncStats");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::SyncStats::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::SyncStats::_class) ::android::content::SyncStats::_class = java::fetch_class("android/content/SyncStats");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::ClipData_Item::ClipData_Item(const ::java::lang::CharSequence& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::content::ClipData_Item::_class) ::android::content::ClipData_Item::_class = java::fetch_class("android/content/ClipData$Item");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::ClipData_Item::ClipData_Item(const ::android::content::Intent& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::content::ClipData_Item::_class) ::android::content::ClipData_Item::_class = java::fetch_class("android/content/ClipData$Item");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::ClipData_Item::ClipData_Item(const ::android::net::Uri& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::content::ClipData_Item::_class) ::android::content::ClipData_Item::_class = java::fetch_class("android/content/ClipData$Item");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/net/Uri;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::ClipData_Item::ClipData_Item(const ::java::lang::CharSequence& arg0, const ::android::content::Intent& arg1, const ::android::net::Uri& arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::content::ClipData_Item::_class) ::android::content::ClipData_Item::_class = java::fetch_class("android/content/ClipData$Item");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/CharSequence;Landroid/content/Intent;Landroid/net/Uri;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::java::lang::CharSequence android::content::ClipData_Item::getText() const {
    if (!::android::content::ClipData_Item::_class) ::android::content::ClipData_Item::_class = java::fetch_class("android/content/ClipData$Item");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::content::Intent android::content::ClipData_Item::getIntent() const {
    if (!::android::content::ClipData_Item::_class) ::android::content::ClipData_Item::_class = java::fetch_class("android/content/ClipData$Item");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntent", "()Landroid/content/Intent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::net::Uri android::content::ClipData_Item::getUri() const {
    if (!::android::content::ClipData_Item::_class) ::android::content::ClipData_Item::_class = java::fetch_class("android/content/ClipData$Item");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUri", "()Landroid/net/Uri;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::content::ClipData_Item::coerceToText(const ::android::content::Context& arg0) const {
    if (!::android::content::ClipData_Item::_class) ::android::content::ClipData_Item::_class = java::fetch_class("android/content/ClipData$Item");
    static jmethodID mid = java::jni->GetMethodID(_class, "coerceToText", "(Landroid/content/Context;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::ContentQueryMap::ContentQueryMap(const ::android::database::Cursor& arg0, const ::java::lang::String& arg1, bool arg2, const ::android::os::Handler& arg3) : ::java::lang::Object((jobject)0), ::java::util::Observable((jobject)0) {
    if (!::android::content::ContentQueryMap::_class) ::android::content::ContentQueryMap::_class = java::fetch_class("android/content/ContentQueryMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/database/Cursor;Ljava/lang/String;ZLandroid/os/Handler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

void android::content::ContentQueryMap::setKeepUpdated(bool arg0) const {
    if (!::android::content::ContentQueryMap::_class) ::android::content::ContentQueryMap::_class = java::fetch_class("android/content/ContentQueryMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "setKeepUpdated", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::ContentValues android::content::ContentQueryMap::getValues(const ::java::lang::String& arg0) const {
    if (!::android::content::ContentQueryMap::_class) ::android::content::ContentQueryMap::_class = java::fetch_class("android/content/ContentQueryMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValues", "(Ljava/lang/String;)Landroid/content/ContentValues;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::ContentValues _ret(ret);
    return _ret;
}

void android::content::ContentQueryMap::requery() const {
    if (!::android::content::ContentQueryMap::_class) ::android::content::ContentQueryMap::_class = java::fetch_class("android/content/ContentQueryMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "requery", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::util::Map android::content::ContentQueryMap::getRows() const {
    if (!::android::content::ContentQueryMap::_class) ::android::content::ContentQueryMap::_class = java::fetch_class("android/content/ContentQueryMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRows", "()Ljava/util/Map;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map _ret(ret);
    return _ret;
}

void android::content::ContentQueryMap::close() const {
    if (!::android::content::ContentQueryMap::_class) ::android::content::ContentQueryMap::_class = java::fetch_class("android/content/ContentQueryMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::ClipData::ClipData(const ::java::lang::CharSequence& arg0, const std::vector< ::java::lang::String>& arg1, const ::android::content::ClipData_Item& arg2) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::ClipData::_class) ::android::content::ClipData::_class = java::fetch_class("android/content/ClipData");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/CharSequence;[Ljava/lang/String;Landroid/content/ClipData$Item;)V");
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
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::ClipData::ClipData(const ::android::content::ClipDescription& arg0, const ::android::content::ClipData_Item& arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::ClipData::_class) ::android::content::ClipData::_class = java::fetch_class("android/content/ClipData");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/ClipDescription;Landroid/content/ClipData$Item;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::android::content::ClipData android::content::ClipData::newPlainText(const ::java::lang::CharSequence& arg0, const ::java::lang::CharSequence& arg1){
    if (!::android::content::ClipData::_class) ::android::content::ClipData::_class = java::fetch_class("android/content/ClipData");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newPlainText", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Landroid/content/ClipData;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::content::ClipData _ret(ret);
    return _ret;
}

::android::content::ClipData android::content::ClipData::newIntent(const ::java::lang::CharSequence& arg0, const ::android::content::Intent& arg1){
    if (!::android::content::ClipData::_class) ::android::content::ClipData::_class = java::fetch_class("android/content/ClipData");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newIntent", "(Ljava/lang/CharSequence;Landroid/content/Intent;)Landroid/content/ClipData;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::content::ClipData _ret(ret);
    return _ret;
}

::android::content::ClipData android::content::ClipData::newUri(const ::android::content::ContentResolver& arg0, const ::java::lang::CharSequence& arg1, const ::android::net::Uri& arg2){
    if (!::android::content::ClipData::_class) ::android::content::ClipData::_class = java::fetch_class("android/content/ClipData");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newUri", "(Landroid/content/ContentResolver;Ljava/lang/CharSequence;Landroid/net/Uri;)Landroid/content/ClipData;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::content::ClipData _ret(ret);
    return _ret;
}

::android::content::ClipData android::content::ClipData::newRawUri(const ::java::lang::CharSequence& arg0, const ::android::net::Uri& arg1){
    if (!::android::content::ClipData::_class) ::android::content::ClipData::_class = java::fetch_class("android/content/ClipData");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newRawUri", "(Ljava/lang/CharSequence;Landroid/net/Uri;)Landroid/content/ClipData;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::content::ClipData _ret(ret);
    return _ret;
}

::android::content::ClipDescription android::content::ClipData::getDescription() const {
    if (!::android::content::ClipData::_class) ::android::content::ClipData::_class = java::fetch_class("android/content/ClipData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDescription", "()Landroid/content/ClipDescription;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::ClipDescription _ret(ret);
    return _ret;
}

void android::content::ClipData::addItem(const ::android::content::ClipData_Item& arg0) const {
    if (!::android::content::ClipData::_class) ::android::content::ClipData::_class = java::fetch_class("android/content/ClipData");
    static jmethodID mid = java::jni->GetMethodID(_class, "addItem", "(Landroid/content/ClipData$Item;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::content::ClipData::getItemCount() const {
    if (!::android::content::ClipData::_class) ::android::content::ClipData::_class = java::fetch_class("android/content/ClipData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItemCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::content::ClipData_Item android::content::ClipData::getItemAt(int32_t arg0) const {
    if (!::android::content::ClipData::_class) ::android::content::ClipData::_class = java::fetch_class("android/content/ClipData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItemAt", "(I)Landroid/content/ClipData$Item;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::ClipData_Item _ret(ret);
    return _ret;
}

int32_t android::content::ClipData::describeContents() const {
    if (!::android::content::ClipData::_class) ::android::content::ClipData::_class = java::fetch_class("android/content/ClipData");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::ClipData::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::ClipData::_class) ::android::content::ClipData::_class = java::fetch_class("android/content/ClipData");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::ComponentCallbacks::onConfigurationChanged(const ::android::content::res::Configuration& arg0) const {
    if (!::android::content::ComponentCallbacks::_class) ::android::content::ComponentCallbacks::_class = java::fetch_class("android/content/ComponentCallbacks");
    static jmethodID mid = java::jni->GetMethodID(_class, "onConfigurationChanged", "(Landroid/content/res/Configuration;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::ComponentCallbacks::onLowMemory() const {
    if (!::android::content::ComponentCallbacks::_class) ::android::content::ComponentCallbacks::_class = java::fetch_class("android/content/ComponentCallbacks");
    static jmethodID mid = java::jni->GetMethodID(_class, "onLowMemory", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::content::EntityIterator::reset() const {
    if (!::android::content::EntityIterator::_class) ::android::content::EntityIterator::_class = java::fetch_class("android/content/EntityIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::content::EntityIterator::close() const {
    if (!::android::content::EntityIterator::_class) ::android::content::EntityIterator::_class = java::fetch_class("android/content/EntityIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::SearchRecentSuggestionsProvider::SearchRecentSuggestionsProvider() : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::ContentProvider((jobject)0) {
    if (!::android::content::SearchRecentSuggestionsProvider::_class) ::android::content::SearchRecentSuggestionsProvider::_class = java::fetch_class("android/content/SearchRecentSuggestionsProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::content::SearchRecentSuggestionsProvider::delete_(const ::android::net::Uri& arg0, const ::java::lang::String& arg1, const std::vector< ::java::lang::String>& arg2) const {
    if (!::android::content::SearchRecentSuggestionsProvider::_class) ::android::content::SearchRecentSuggestionsProvider::_class = java::fetch_class("android/content/SearchRecentSuggestionsProvider");
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

::java::lang::String android::content::SearchRecentSuggestionsProvider::getType(const ::android::net::Uri& arg0) const {
    if (!::android::content::SearchRecentSuggestionsProvider::_class) ::android::content::SearchRecentSuggestionsProvider::_class = java::fetch_class("android/content/SearchRecentSuggestionsProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "(Landroid/net/Uri;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::net::Uri android::content::SearchRecentSuggestionsProvider::insert(const ::android::net::Uri& arg0, const ::android::content::ContentValues& arg1) const {
    if (!::android::content::SearchRecentSuggestionsProvider::_class) ::android::content::SearchRecentSuggestionsProvider::_class = java::fetch_class("android/content/SearchRecentSuggestionsProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::net::Uri _ret(ret);
    return _ret;
}

bool android::content::SearchRecentSuggestionsProvider::onCreate() const {
    if (!::android::content::SearchRecentSuggestionsProvider::_class) ::android::content::SearchRecentSuggestionsProvider::_class = java::fetch_class("android/content/SearchRecentSuggestionsProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreate", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::database::Cursor android::content::SearchRecentSuggestionsProvider::query(const ::android::net::Uri& arg0, const std::vector< ::java::lang::String>& arg1, const ::java::lang::String& arg2, const std::vector< ::java::lang::String>& arg3, const ::java::lang::String& arg4) const {
    if (!::android::content::SearchRecentSuggestionsProvider::_class) ::android::content::SearchRecentSuggestionsProvider::_class = java::fetch_class("android/content/SearchRecentSuggestionsProvider");
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

int32_t android::content::SearchRecentSuggestionsProvider::update(const ::android::net::Uri& arg0, const ::android::content::ContentValues& arg1, const ::java::lang::String& arg2, const std::vector< ::java::lang::String>& arg3) const {
    if (!::android::content::SearchRecentSuggestionsProvider::_class) ::android::content::SearchRecentSuggestionsProvider::_class = java::fetch_class("android/content/SearchRecentSuggestionsProvider");
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::Intent_ShortcutIconResource::Intent_ShortcutIconResource() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::Intent_ShortcutIconResource::_class) ::android::content::Intent_ShortcutIconResource::_class = java::fetch_class("android/content/Intent$ShortcutIconResource");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::content::Intent_ShortcutIconResource android::content::Intent_ShortcutIconResource::fromContext(const ::android::content::Context& arg0, int32_t arg1){
    if (!::android::content::Intent_ShortcutIconResource::_class) ::android::content::Intent_ShortcutIconResource::_class = java::fetch_class("android/content/Intent$ShortcutIconResource");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fromContext", "(Landroid/content/Context;I)Landroid/content/Intent$ShortcutIconResource;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::content::Intent_ShortcutIconResource _ret(ret);
    return _ret;
}

int32_t android::content::Intent_ShortcutIconResource::describeContents() const {
    if (!::android::content::Intent_ShortcutIconResource::_class) ::android::content::Intent_ShortcutIconResource::_class = java::fetch_class("android/content/Intent$ShortcutIconResource");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::Intent_ShortcutIconResource::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::Intent_ShortcutIconResource::_class) ::android::content::Intent_ShortcutIconResource::_class = java::fetch_class("android/content/Intent$ShortcutIconResource");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::content::Intent_ShortcutIconResource::toString() const {
    if (!::android::content::Intent_ShortcutIconResource::_class) ::android::content::Intent_ShortcutIconResource::_class = java::fetch_class("android/content/Intent$ShortcutIconResource");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::AbstractThreadedSyncAdapter::AbstractThreadedSyncAdapter(const ::android::content::Context& arg0, bool arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::content::AbstractThreadedSyncAdapter::_class) ::android::content::AbstractThreadedSyncAdapter::_class = java::fetch_class("android/content/AbstractThreadedSyncAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::AbstractThreadedSyncAdapter::AbstractThreadedSyncAdapter(const ::android::content::Context& arg0, bool arg1, bool arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::content::AbstractThreadedSyncAdapter::_class) ::android::content::AbstractThreadedSyncAdapter::_class = java::fetch_class("android/content/AbstractThreadedSyncAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;ZZ)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    bool _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::android::content::Context android::content::AbstractThreadedSyncAdapter::getContext() const {
    if (!::android::content::AbstractThreadedSyncAdapter::_class) ::android::content::AbstractThreadedSyncAdapter::_class = java::fetch_class("android/content/AbstractThreadedSyncAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContext", "()Landroid/content/Context;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Context _ret(ret);
    return _ret;
}

::android::os::IBinder android::content::AbstractThreadedSyncAdapter::getSyncAdapterBinder() const {
    if (!::android::content::AbstractThreadedSyncAdapter::_class) ::android::content::AbstractThreadedSyncAdapter::_class = java::fetch_class("android/content/AbstractThreadedSyncAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSyncAdapterBinder", "()Landroid/os/IBinder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

void android::content::AbstractThreadedSyncAdapter::onPerformSync(const ::android::accounts::Account& arg0, const ::android::os::Bundle& arg1, const ::java::lang::String& arg2, const ::android::content::ContentProviderClient& arg3, const ::android::content::SyncResult& arg4) const {
    if (!::android::content::AbstractThreadedSyncAdapter::_class) ::android::content::AbstractThreadedSyncAdapter::_class = java::fetch_class("android/content/AbstractThreadedSyncAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPerformSync", "(Landroid/accounts/Account;Landroid/os/Bundle;Ljava/lang/String;Landroid/content/ContentProviderClient;Landroid/content/SyncResult;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::content::AbstractThreadedSyncAdapter::onSyncCanceled() const {
    if (!::android::content::AbstractThreadedSyncAdapter::_class) ::android::content::AbstractThreadedSyncAdapter::_class = java::fetch_class("android/content/AbstractThreadedSyncAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSyncCanceled", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::content::AbstractThreadedSyncAdapter::onSyncCanceled(const ::java::lang::Thread& arg0) const {
    if (!::android::content::AbstractThreadedSyncAdapter::_class) ::android::content::AbstractThreadedSyncAdapter::_class = java::fetch_class("android/content/AbstractThreadedSyncAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSyncCanceled", "(Ljava/lang/Thread;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::IntentSender::sendIntent(const ::android::content::Context& arg0, int32_t arg1, const ::android::content::Intent& arg2, const ::android::content::IntentSender_OnFinished& arg3, const ::android::os::Handler& arg4) const {
    if (!::android::content::IntentSender::_class) ::android::content::IntentSender::_class = java::fetch_class("android/content/IntentSender");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendIntent", "(Landroid/content/Context;ILandroid/content/Intent;Landroid/content/IntentSender$OnFinished;Landroid/os/Handler;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::content::IntentSender::sendIntent(const ::android::content::Context& arg0, int32_t arg1, const ::android::content::Intent& arg2, const ::android::content::IntentSender_OnFinished& arg3, const ::android::os::Handler& arg4, const ::java::lang::String& arg5) const {
    if (!::android::content::IntentSender::_class) ::android::content::IntentSender::_class = java::fetch_class("android/content/IntentSender");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendIntent", "(Landroid/content/Context;ILandroid/content/Intent;Landroid/content/IntentSender$OnFinished;Landroid/os/Handler;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

::java::lang::String android::content::IntentSender::getTargetPackage() const {
    if (!::android::content::IntentSender::_class) ::android::content::IntentSender::_class = java::fetch_class("android/content/IntentSender");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTargetPackage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::content::IntentSender::equals(const ::java::lang::Object& arg0) const {
    if (!::android::content::IntentSender::_class) ::android::content::IntentSender::_class = java::fetch_class("android/content/IntentSender");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::content::IntentSender::hashCode() const {
    if (!::android::content::IntentSender::_class) ::android::content::IntentSender::_class = java::fetch_class("android/content/IntentSender");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::content::IntentSender::toString() const {
    if (!::android::content::IntentSender::_class) ::android::content::IntentSender::_class = java::fetch_class("android/content/IntentSender");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::content::IntentSender::describeContents() const {
    if (!::android::content::IntentSender::_class) ::android::content::IntentSender::_class = java::fetch_class("android/content/IntentSender");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::IntentSender::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::IntentSender::_class) ::android::content::IntentSender::_class = java::fetch_class("android/content/IntentSender");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::IntentSender::writeIntentSenderOrNullToParcel(const ::android::content::IntentSender& arg0, const ::android::os::Parcel& arg1){
    if (!::android::content::IntentSender::_class) ::android::content::IntentSender::_class = java::fetch_class("android/content/IntentSender");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "writeIntentSenderOrNullToParcel", "(Landroid/content/IntentSender;Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::android::content::IntentSender android::content::IntentSender::readIntentSenderOrNullFromParcel(const ::android::os::Parcel& arg0){
    if (!::android::content::IntentSender::_class) ::android::content::IntentSender::_class = java::fetch_class("android/content/IntentSender");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "readIntentSenderOrNullFromParcel", "(Landroid/os/Parcel;)Landroid/content/IntentSender;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::content::IntentSender _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::ContentResolver::ContentResolver(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String android::content::ContentResolver::getType(const ::android::net::Uri& arg0) const {
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "(Landroid/net/Uri;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> android::content::ContentResolver::getStreamTypes(const ::android::net::Uri& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
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

::android::database::Cursor android::content::ContentResolver::query(const ::android::net::Uri& arg0, const std::vector< ::java::lang::String>& arg1, const ::java::lang::String& arg2, const std::vector< ::java::lang::String>& arg3, const ::java::lang::String& arg4) const {
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
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

::java::io::InputStream android::content::ContentResolver::openInputStream(const ::android::net::Uri& arg0) const {
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "openInputStream", "(Landroid/net/Uri;)Ljava/io/InputStream;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::io::OutputStream android::content::ContentResolver::openOutputStream(const ::android::net::Uri& arg0) const {
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "openOutputStream", "(Landroid/net/Uri;)Ljava/io/OutputStream;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::OutputStream _ret(ret);
    return _ret;
}

::java::io::OutputStream android::content::ContentResolver::openOutputStream(const ::android::net::Uri& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "openOutputStream", "(Landroid/net/Uri;Ljava/lang/String;)Ljava/io/OutputStream;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::io::OutputStream _ret(ret);
    return _ret;
}

::android::os::ParcelFileDescriptor android::content::ContentResolver::openFileDescriptor(const ::android::net::Uri& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "openFileDescriptor", "(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::os::ParcelFileDescriptor _ret(ret);
    return _ret;
}

::android::content::res::AssetFileDescriptor android::content::ContentResolver::openAssetFileDescriptor(const ::android::net::Uri& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "openAssetFileDescriptor", "(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::res::AssetFileDescriptor _ret(ret);
    return _ret;
}

::android::content::res::AssetFileDescriptor android::content::ContentResolver::openTypedAssetFileDescriptor(const ::android::net::Uri& arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "openTypedAssetFileDescriptor", "(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/res/AssetFileDescriptor;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::content::res::AssetFileDescriptor _ret(ret);
    return _ret;
}

::android::net::Uri android::content::ContentResolver::insert(const ::android::net::Uri& arg0, const ::android::content::ContentValues& arg1) const {
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::net::Uri _ret(ret);
    return _ret;
}

std::vector< ::android::content::ContentProviderResult> android::content::ContentResolver::applyBatch(const ::java::lang::String& arg0, const ::java::util::ArrayList& arg1) const {
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "applyBatch", "(Ljava/lang/String;Ljava/util/ArrayList;)[Landroid/content/ContentProviderResult;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::content::ContentProviderResult> _ret(rets, ::android::content::ContentProviderResult((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::content::ContentProviderResult retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

int32_t android::content::ContentResolver::bulkInsert(const ::android::net::Uri& arg0, const std::vector< ::android::content::ContentValues>& arg1) const {
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
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

int32_t android::content::ContentResolver::delete_(const ::android::net::Uri& arg0, const ::java::lang::String& arg1, const std::vector< ::java::lang::String>& arg2) const {
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
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

int32_t android::content::ContentResolver::update(const ::android::net::Uri& arg0, const ::android::content::ContentValues& arg1, const ::java::lang::String& arg2, const std::vector< ::java::lang::String>& arg3) const {
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
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

::android::os::Bundle android::content::ContentResolver::call(const ::android::net::Uri& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::android::os::Bundle& arg3) const {
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "call", "(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::content::ContentProviderClient android::content::ContentResolver::acquireContentProviderClient(const ::android::net::Uri& arg0) const {
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "acquireContentProviderClient", "(Landroid/net/Uri;)Landroid/content/ContentProviderClient;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::ContentProviderClient _ret(ret);
    return _ret;
}

::android::content::ContentProviderClient android::content::ContentResolver::acquireContentProviderClient(const ::java::lang::String& arg0) const {
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "acquireContentProviderClient", "(Ljava/lang/String;)Landroid/content/ContentProviderClient;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::ContentProviderClient _ret(ret);
    return _ret;
}

void android::content::ContentResolver::registerContentObserver(const ::android::net::Uri& arg0, bool arg1, const ::android::database::ContentObserver& arg2) const {
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerContentObserver", "(Landroid/net/Uri;ZLandroid/database/ContentObserver;)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::content::ContentResolver::unregisterContentObserver(const ::android::database::ContentObserver& arg0) const {
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterContentObserver", "(Landroid/database/ContentObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::ContentResolver::notifyChange(const ::android::net::Uri& arg0, const ::android::database::ContentObserver& arg1) const {
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyChange", "(Landroid/net/Uri;Landroid/database/ContentObserver;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::ContentResolver::notifyChange(const ::android::net::Uri& arg0, const ::android::database::ContentObserver& arg1, bool arg2) const {
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyChange", "(Landroid/net/Uri;Landroid/database/ContentObserver;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::content::ContentResolver::startSync(const ::android::net::Uri& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "startSync", "(Landroid/net/Uri;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::ContentResolver::requestSync(const ::android::accounts::Account& arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2){
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "requestSync", "(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::content::ContentResolver::validateSyncExtrasBundle(const ::android::os::Bundle& arg0){
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "validateSyncExtrasBundle", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::content::ContentResolver::cancelSync(const ::android::net::Uri& arg0) const {
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancelSync", "(Landroid/net/Uri;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::ContentResolver::cancelSync(const ::android::accounts::Account& arg0, const ::java::lang::String& arg1){
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cancelSync", "(Landroid/accounts/Account;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

std::vector< ::android::content::SyncAdapterType> android::content::ContentResolver::getSyncAdapterTypes(){
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSyncAdapterTypes", "()[Landroid/content/SyncAdapterType;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::content::SyncAdapterType> _ret(rets, ::android::content::SyncAdapterType((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::content::SyncAdapterType retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool android::content::ContentResolver::getSyncAutomatically(const ::android::accounts::Account& arg0, const ::java::lang::String& arg1){
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSyncAutomatically", "(Landroid/accounts/Account;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

void android::content::ContentResolver::setSyncAutomatically(const ::android::accounts::Account& arg0, const ::java::lang::String& arg1, bool arg2){
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setSyncAutomatically", "(Landroid/accounts/Account;Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::content::ContentResolver::addPeriodicSync(const ::android::accounts::Account& arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2, int64_t arg3){
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "addPeriodicSync", "(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int64_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::content::ContentResolver::removePeriodicSync(const ::android::accounts::Account& arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2){
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "removePeriodicSync", "(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

::java::util::List android::content::ContentResolver::getPeriodicSyncs(const ::android::accounts::Account& arg0, const ::java::lang::String& arg1){
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getPeriodicSyncs", "(Landroid/accounts/Account;Ljava/lang/String;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

int32_t android::content::ContentResolver::getIsSyncable(const ::android::accounts::Account& arg0, const ::java::lang::String& arg1){
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getIsSyncable", "(Landroid/accounts/Account;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

void android::content::ContentResolver::setIsSyncable(const ::android::accounts::Account& arg0, const ::java::lang::String& arg1, int32_t arg2){
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setIsSyncable", "(Landroid/accounts/Account;Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

bool android::content::ContentResolver::getMasterSyncAutomatically(){
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMasterSyncAutomatically", "()Z");
    return java::jni->CallStaticBooleanMethod(_class, mid);
}

void android::content::ContentResolver::setMasterSyncAutomatically(bool arg0){
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setMasterSyncAutomatically", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

bool android::content::ContentResolver::isSyncActive(const ::android::accounts::Account& arg0, const ::java::lang::String& arg1){
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isSyncActive", "(Landroid/accounts/Account;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

::android::content::SyncInfo android::content::ContentResolver::getCurrentSync(){
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCurrentSync", "()Landroid/content/SyncInfo;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::content::SyncInfo _ret(ret);
    return _ret;
}

::java::util::List android::content::ContentResolver::getCurrentSyncs(){
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCurrentSyncs", "()Ljava/util/List;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

bool android::content::ContentResolver::isSyncPending(const ::android::accounts::Account& arg0, const ::java::lang::String& arg1){
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isSyncPending", "(Landroid/accounts/Account;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

::java::lang::Object android::content::ContentResolver::addStatusChangeListener(int32_t arg0, const ::android::content::SyncStatusObserver& arg1){
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "addStatusChangeListener", "(ILandroid/content/SyncStatusObserver;)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::content::ContentResolver::removeStatusChangeListener(const ::java::lang::Object& arg0){
    if (!::android::content::ContentResolver::_class) ::android::content::ContentResolver::_class = java::fetch_class("android/content/ContentResolver");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "removeStatusChangeListener", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::content::IntentSender_OnFinished::onSendFinished(const ::android::content::IntentSender& arg0, const ::android::content::Intent& arg1, int32_t arg2, const ::java::lang::String& arg3, const ::android::os::Bundle& arg4) const {
    if (!::android::content::IntentSender_OnFinished::_class) ::android::content::IntentSender_OnFinished::_class = java::fetch_class("android/content/IntentSender$OnFinished");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSendFinished", "(Landroid/content/IntentSender;Landroid/content/Intent;ILjava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::CursorLoader::CursorLoader(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::content::AsyncTaskLoader((jobject)0), ::android::content::Loader((jobject)0) {
    if (!::android::content::CursorLoader::_class) ::android::content::CursorLoader::_class = java::fetch_class("android/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::CursorLoader::CursorLoader(const ::android::content::Context& arg0, const ::android::net::Uri& arg1, const std::vector< ::java::lang::String>& arg2, const ::java::lang::String& arg3, const std::vector< ::java::lang::String>& arg4, const ::java::lang::String& arg5) : ::java::lang::Object((jobject)0), ::android::content::AsyncTaskLoader((jobject)0), ::android::content::Loader((jobject)0) {
    if (!::android::content::CursorLoader::_class) ::android::content::CursorLoader::_class = java::fetch_class("android/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V");
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
    jobject _arg3 = arg3.obj;
    unsigned arg4s = arg4.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg4 = java::jni->NewObjectArray(arg4s, ::java::lang::String::_class, nullptr);
    for (unsigned arg4i = 0; arg4i < arg4s; ++arg4i) {
      const ::java::lang::String& arg4e = arg4[arg4i];
        jobject arg4d = arg4e.obj;
      java::jni->SetObjectArrayElement(_arg4, arg4i, arg4d);
    }
    jobject _arg5 = arg5.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}
#pragma GCC diagnostic pop

::android::database::Cursor android::content::CursorLoader::loadInBackground() const {
    if (!::android::content::CursorLoader::_class) ::android::content::CursorLoader::_class = java::fetch_class("android/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadInBackground", "()Landroid/database/Cursor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

void android::content::CursorLoader::deliverResult(const ::android::database::Cursor& arg0) const {
    if (!::android::content::CursorLoader::_class) ::android::content::CursorLoader::_class = java::fetch_class("android/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "deliverResult", "(Landroid/database/Cursor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::CursorLoader::onCanceled(const ::android::database::Cursor& arg0) const {
    if (!::android::content::CursorLoader::_class) ::android::content::CursorLoader::_class = java::fetch_class("android/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCanceled", "(Landroid/database/Cursor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::net::Uri android::content::CursorLoader::getUri() const {
    if (!::android::content::CursorLoader::_class) ::android::content::CursorLoader::_class = java::fetch_class("android/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUri", "()Landroid/net/Uri;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::Uri _ret(ret);
    return _ret;
}

void android::content::CursorLoader::setUri(const ::android::net::Uri& arg0) const {
    if (!::android::content::CursorLoader::_class) ::android::content::CursorLoader::_class = java::fetch_class("android/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUri", "(Landroid/net/Uri;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::java::lang::String> android::content::CursorLoader::getProjection() const {
    if (!::android::content::CursorLoader::_class) ::android::content::CursorLoader::_class = java::fetch_class("android/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProjection", "()[Ljava/lang/String;");
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

void android::content::CursorLoader::setProjection(const std::vector< ::java::lang::String>& arg0) const {
    if (!::android::content::CursorLoader::_class) ::android::content::CursorLoader::_class = java::fetch_class("android/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProjection", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::content::CursorLoader::getSelection() const {
    if (!::android::content::CursorLoader::_class) ::android::content::CursorLoader::_class = java::fetch_class("android/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelection", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::content::CursorLoader::setSelection(const ::java::lang::String& arg0) const {
    if (!::android::content::CursorLoader::_class) ::android::content::CursorLoader::_class = java::fetch_class("android/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelection", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::java::lang::String> android::content::CursorLoader::getSelectionArgs() const {
    if (!::android::content::CursorLoader::_class) ::android::content::CursorLoader::_class = java::fetch_class("android/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectionArgs", "()[Ljava/lang/String;");
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

void android::content::CursorLoader::setSelectionArgs(const std::vector< ::java::lang::String>& arg0) const {
    if (!::android::content::CursorLoader::_class) ::android::content::CursorLoader::_class = java::fetch_class("android/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelectionArgs", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::content::CursorLoader::getSortOrder() const {
    if (!::android::content::CursorLoader::_class) ::android::content::CursorLoader::_class = java::fetch_class("android/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSortOrder", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::content::CursorLoader::setSortOrder(const ::java::lang::String& arg0) const {
    if (!::android::content::CursorLoader::_class) ::android::content::CursorLoader::_class = java::fetch_class("android/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSortOrder", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::CursorLoader::dump(const ::java::lang::String& arg0, const ::java::io::FileDescriptor& arg1, const ::java::io::PrintWriter& arg2, const std::vector< ::java::lang::String>& arg3) const {
    if (!::android::content::CursorLoader::_class) ::android::content::CursorLoader::_class = java::fetch_class("android/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V");
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
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::content::CursorLoader::onCanceled(const ::java::lang::Object& arg0) const {
    if (!::android::content::CursorLoader::_class) ::android::content::CursorLoader::_class = java::fetch_class("android/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCanceled", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::CursorLoader::deliverResult(const ::java::lang::Object& arg0) const {
    if (!::android::content::CursorLoader::_class) ::android::content::CursorLoader::_class = java::fetch_class("android/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "deliverResult", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::IntentSender_SendIntentException::IntentSender_SendIntentException() : ::java::lang::Object((jobject)0), ::android::util::AndroidException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::content::IntentSender_SendIntentException::_class) ::android::content::IntentSender_SendIntentException::_class = java::fetch_class("android/content/IntentSender$SendIntentException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::IntentSender_SendIntentException::IntentSender_SendIntentException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::util::AndroidException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::content::IntentSender_SendIntentException::_class) ::android::content::IntentSender_SendIntentException::_class = java::fetch_class("android/content/IntentSender$SendIntentException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::IntentSender_SendIntentException::IntentSender_SendIntentException(const ::java::lang::Exception& arg0) : ::java::lang::Object((jobject)0), ::android::util::AndroidException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::content::IntentSender_SendIntentException::_class) ::android::content::IntentSender_SendIntentException::_class = java::fetch_class("android/content/IntentSender$SendIntentException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Exception;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::ContentProviderResult::ContentProviderResult(const ::android::net::Uri& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::ContentProviderResult::_class) ::android::content::ContentProviderResult::_class = java::fetch_class("android/content/ContentProviderResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/net/Uri;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::ContentProviderResult::ContentProviderResult(int32_t arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::ContentProviderResult::_class) ::android::content::ContentProviderResult::_class = java::fetch_class("android/content/ContentProviderResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::ContentProviderResult::ContentProviderResult(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::ContentProviderResult::_class) ::android::content::ContentProviderResult::_class = java::fetch_class("android/content/ContentProviderResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::content::ContentProviderResult::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::ContentProviderResult::_class) ::android::content::ContentProviderResult::_class = java::fetch_class("android/content/ContentProviderResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::content::ContentProviderResult::describeContents() const {
    if (!::android::content::ContentProviderResult::_class) ::android::content::ContentProviderResult::_class = java::fetch_class("android/content/ContentProviderResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::content::ContentProviderResult::toString() const {
    if (!::android::content::ContentProviderResult::_class) ::android::content::ContentProviderResult::_class = java::fetch_class("android/content/ContentProviderResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::content::SyncStatusObserver::onStatusChanged(int32_t arg0) const {
    if (!::android::content::SyncStatusObserver::_class) ::android::content::SyncStatusObserver::_class = java::fetch_class("android/content/SyncStatusObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStatusChanged", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::ClipDescription::ClipDescription(const ::java::lang::CharSequence& arg0, const std::vector< ::java::lang::String>& arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::ClipDescription::_class) ::android::content::ClipDescription::_class = java::fetch_class("android/content/ClipDescription");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/CharSequence;[Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool android::content::ClipDescription::compareMimeTypes(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::android::content::ClipDescription::_class) ::android::content::ClipDescription::_class = java::fetch_class("android/content/ClipDescription");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "compareMimeTypes", "(Ljava/lang/String;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

::java::lang::CharSequence android::content::ClipDescription::getLabel() const {
    if (!::android::content::ClipDescription::_class) ::android::content::ClipDescription::_class = java::fetch_class("android/content/ClipDescription");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLabel", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

bool android::content::ClipDescription::hasMimeType(const ::java::lang::String& arg0) const {
    if (!::android::content::ClipDescription::_class) ::android::content::ClipDescription::_class = java::fetch_class("android/content/ClipDescription");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasMimeType", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

std::vector< ::java::lang::String> android::content::ClipDescription::filterMimeTypes(const ::java::lang::String& arg0) const {
    if (!::android::content::ClipDescription::_class) ::android::content::ClipDescription::_class = java::fetch_class("android/content/ClipDescription");
    static jmethodID mid = java::jni->GetMethodID(_class, "filterMimeTypes", "(Ljava/lang/String;)[Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
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

int32_t android::content::ClipDescription::getMimeTypeCount() const {
    if (!::android::content::ClipDescription::_class) ::android::content::ClipDescription::_class = java::fetch_class("android/content/ClipDescription");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMimeTypeCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::content::ClipDescription::getMimeType(int32_t arg0) const {
    if (!::android::content::ClipDescription::_class) ::android::content::ClipDescription::_class = java::fetch_class("android/content/ClipDescription");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMimeType", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::content::ClipDescription::describeContents() const {
    if (!::android::content::ClipDescription::_class) ::android::content::ClipDescription::_class = java::fetch_class("android/content/ClipDescription");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::ClipDescription::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::ClipDescription::_class) ::android::content::ClipDescription::_class = java::fetch_class("android/content/ClipDescription");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::Entity_NamedContentValues::Entity_NamedContentValues(const ::android::net::Uri& arg0, const ::android::content::ContentValues& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::content::Entity_NamedContentValues::_class) ::android::content::Entity_NamedContentValues::_class = java::fetch_class("android/content/Entity$NamedContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/net/Uri;Landroid/content/ContentValues;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::Intent_FilterComparison::Intent_FilterComparison(const ::android::content::Intent& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::content::Intent_FilterComparison::_class) ::android::content::Intent_FilterComparison::_class = java::fetch_class("android/content/Intent$FilterComparison");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::content::Intent android::content::Intent_FilterComparison::getIntent() const {
    if (!::android::content::Intent_FilterComparison::_class) ::android::content::Intent_FilterComparison::_class = java::fetch_class("android/content/Intent$FilterComparison");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntent", "()Landroid/content/Intent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Intent _ret(ret);
    return _ret;
}

bool android::content::Intent_FilterComparison::equals(const ::java::lang::Object& arg0) const {
    if (!::android::content::Intent_FilterComparison::_class) ::android::content::Intent_FilterComparison::_class = java::fetch_class("android/content/Intent$FilterComparison");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::content::Intent_FilterComparison::hashCode() const {
    if (!::android::content::Intent_FilterComparison::_class) ::android::content::Intent_FilterComparison::_class = java::fetch_class("android/content/Intent$FilterComparison");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::DialogInterface_OnMultiChoiceClickListener::onClick(const ::android::content::DialogInterface& arg0, int32_t arg1, bool arg2) const {
    if (!::android::content::DialogInterface_OnMultiChoiceClickListener::_class) ::android::content::DialogInterface_OnMultiChoiceClickListener::_class = java::fetch_class("android/content/DialogInterface$OnMultiChoiceClickListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onClick", "(Landroid/content/DialogInterface;IZ)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::PeriodicSync::PeriodicSync(const ::android::accounts::Account& arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2, int64_t arg3) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::PeriodicSync::_class) ::android::content::PeriodicSync::_class = java::fetch_class("android/content/PeriodicSync");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int64_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

int32_t android::content::PeriodicSync::describeContents() const {
    if (!::android::content::PeriodicSync::_class) ::android::content::PeriodicSync::_class = java::fetch_class("android/content/PeriodicSync");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::PeriodicSync::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::PeriodicSync::_class) ::android::content::PeriodicSync::_class = java::fetch_class("android/content/PeriodicSync");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::content::PeriodicSync::equals(const ::java::lang::Object& arg0) const {
    if (!::android::content::PeriodicSync::_class) ::android::content::PeriodicSync::_class = java::fetch_class("android/content/PeriodicSync");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::content::SyncContext::onFinished(const ::android::content::SyncResult& arg0) const {
    if (!::android::content::SyncContext::_class) ::android::content::SyncContext::_class = java::fetch_class("android/content/SyncContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "onFinished", "(Landroid/content/SyncResult;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::os::IBinder android::content::SyncContext::getSyncContextBinder() const {
    if (!::android::content::SyncContext::_class) ::android::content::SyncContext::_class = java::fetch_class("android/content/SyncContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSyncContextBinder", "()Landroid/os/IBinder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::SyncResult::SyncResult() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::SyncResult::_class) ::android::content::SyncResult::_class = java::fetch_class("android/content/SyncResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::content::SyncResult::hasHardError() const {
    if (!::android::content::SyncResult::_class) ::android::content::SyncResult::_class = java::fetch_class("android/content/SyncResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasHardError", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::content::SyncResult::hasSoftError() const {
    if (!::android::content::SyncResult::_class) ::android::content::SyncResult::_class = java::fetch_class("android/content/SyncResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasSoftError", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::content::SyncResult::hasError() const {
    if (!::android::content::SyncResult::_class) ::android::content::SyncResult::_class = java::fetch_class("android/content/SyncResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasError", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::content::SyncResult::madeSomeProgress() const {
    if (!::android::content::SyncResult::_class) ::android::content::SyncResult::_class = java::fetch_class("android/content/SyncResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "madeSomeProgress", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::content::SyncResult::clear() const {
    if (!::android::content::SyncResult::_class) ::android::content::SyncResult::_class = java::fetch_class("android/content/SyncResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::content::SyncResult::describeContents() const {
    if (!::android::content::SyncResult::_class) ::android::content::SyncResult::_class = java::fetch_class("android/content/SyncResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::SyncResult::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::SyncResult::_class) ::android::content::SyncResult::_class = java::fetch_class("android/content/SyncResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::content::SyncResult::toString() const {
    if (!::android::content::SyncResult::_class) ::android::content::SyncResult::_class = java::fetch_class("android/content/SyncResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::content::SyncResult::toDebugString() const {
    if (!::android::content::SyncResult::_class) ::android::content::SyncResult::_class = java::fetch_class("android/content/SyncResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "toDebugString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::ContentProvider::ContentProvider() : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0) {
    if (!::android::content::ContentProvider::_class) ::android::content::ContentProvider::_class = java::fetch_class("android/content/ContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::content::Context android::content::ContentProvider::getContext() const {
    if (!::android::content::ContentProvider::_class) ::android::content::ContentProvider::_class = java::fetch_class("android/content/ContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContext", "()Landroid/content/Context;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Context _ret(ret);
    return _ret;
}

::java::lang::String android::content::ContentProvider::getReadPermission() const {
    if (!::android::content::ContentProvider::_class) ::android::content::ContentProvider::_class = java::fetch_class("android/content/ContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReadPermission", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::content::ContentProvider::getWritePermission() const {
    if (!::android::content::ContentProvider::_class) ::android::content::ContentProvider::_class = java::fetch_class("android/content/ContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWritePermission", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::android::content::pm::PathPermission> android::content::ContentProvider::getPathPermissions() const {
    if (!::android::content::ContentProvider::_class) ::android::content::ContentProvider::_class = java::fetch_class("android/content/ContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPathPermissions", "()[Landroid/content/pm/PathPermission;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::content::pm::PathPermission> _ret(rets, ::android::content::pm::PathPermission((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::content::pm::PathPermission retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool android::content::ContentProvider::onCreate() const {
    if (!::android::content::ContentProvider::_class) ::android::content::ContentProvider::_class = java::fetch_class("android/content/ContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreate", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::content::ContentProvider::onConfigurationChanged(const ::android::content::res::Configuration& arg0) const {
    if (!::android::content::ContentProvider::_class) ::android::content::ContentProvider::_class = java::fetch_class("android/content/ContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "onConfigurationChanged", "(Landroid/content/res/Configuration;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::ContentProvider::onLowMemory() const {
    if (!::android::content::ContentProvider::_class) ::android::content::ContentProvider::_class = java::fetch_class("android/content/ContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "onLowMemory", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::content::ContentProvider::onTrimMemory(int32_t arg0) const {
    if (!::android::content::ContentProvider::_class) ::android::content::ContentProvider::_class = java::fetch_class("android/content/ContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTrimMemory", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::database::Cursor android::content::ContentProvider::query(const ::android::net::Uri& arg0, const std::vector< ::java::lang::String>& arg1, const ::java::lang::String& arg2, const std::vector< ::java::lang::String>& arg3, const ::java::lang::String& arg4) const {
    if (!::android::content::ContentProvider::_class) ::android::content::ContentProvider::_class = java::fetch_class("android/content/ContentProvider");
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

::java::lang::String android::content::ContentProvider::getType(const ::android::net::Uri& arg0) const {
    if (!::android::content::ContentProvider::_class) ::android::content::ContentProvider::_class = java::fetch_class("android/content/ContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "(Landroid/net/Uri;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::net::Uri android::content::ContentProvider::insert(const ::android::net::Uri& arg0, const ::android::content::ContentValues& arg1) const {
    if (!::android::content::ContentProvider::_class) ::android::content::ContentProvider::_class = java::fetch_class("android/content/ContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::net::Uri _ret(ret);
    return _ret;
}

int32_t android::content::ContentProvider::bulkInsert(const ::android::net::Uri& arg0, const std::vector< ::android::content::ContentValues>& arg1) const {
    if (!::android::content::ContentProvider::_class) ::android::content::ContentProvider::_class = java::fetch_class("android/content/ContentProvider");
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

int32_t android::content::ContentProvider::delete_(const ::android::net::Uri& arg0, const ::java::lang::String& arg1, const std::vector< ::java::lang::String>& arg2) const {
    if (!::android::content::ContentProvider::_class) ::android::content::ContentProvider::_class = java::fetch_class("android/content/ContentProvider");
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

int32_t android::content::ContentProvider::update(const ::android::net::Uri& arg0, const ::android::content::ContentValues& arg1, const ::java::lang::String& arg2, const std::vector< ::java::lang::String>& arg3) const {
    if (!::android::content::ContentProvider::_class) ::android::content::ContentProvider::_class = java::fetch_class("android/content/ContentProvider");
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

::android::os::ParcelFileDescriptor android::content::ContentProvider::openFile(const ::android::net::Uri& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::ContentProvider::_class) ::android::content::ContentProvider::_class = java::fetch_class("android/content/ContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "openFile", "(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::os::ParcelFileDescriptor _ret(ret);
    return _ret;
}

::android::content::res::AssetFileDescriptor android::content::ContentProvider::openAssetFile(const ::android::net::Uri& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::ContentProvider::_class) ::android::content::ContentProvider::_class = java::fetch_class("android/content/ContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "openAssetFile", "(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::res::AssetFileDescriptor _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> android::content::ContentProvider::getStreamTypes(const ::android::net::Uri& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::ContentProvider::_class) ::android::content::ContentProvider::_class = java::fetch_class("android/content/ContentProvider");
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

::android::content::res::AssetFileDescriptor android::content::ContentProvider::openTypedAssetFile(const ::android::net::Uri& arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::content::ContentProvider::_class) ::android::content::ContentProvider::_class = java::fetch_class("android/content/ContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "openTypedAssetFile", "(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/res/AssetFileDescriptor;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::content::res::AssetFileDescriptor _ret(ret);
    return _ret;
}

::android::os::ParcelFileDescriptor android::content::ContentProvider::openPipeHelper(const ::android::net::Uri& arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2, const ::java::lang::Object& arg3, const ::android::content::ContentProvider_PipeDataWriter& arg4) const {
    if (!::android::content::ContentProvider::_class) ::android::content::ContentProvider::_class = java::fetch_class("android/content/ContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "openPipeHelper", "(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;Ljava/lang/Object;Landroid/content/ContentProvider$PipeDataWriter;)Landroid/os/ParcelFileDescriptor;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::os::ParcelFileDescriptor _ret(ret);
    return _ret;
}

void android::content::ContentProvider::attachInfo(const ::android::content::Context& arg0, const ::android::content::pm::ProviderInfo& arg1) const {
    if (!::android::content::ContentProvider::_class) ::android::content::ContentProvider::_class = java::fetch_class("android/content/ContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "attachInfo", "(Landroid/content/Context;Landroid/content/pm/ProviderInfo;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

std::vector< ::android::content::ContentProviderResult> android::content::ContentProvider::applyBatch(const ::java::util::ArrayList& arg0) const {
    if (!::android::content::ContentProvider::_class) ::android::content::ContentProvider::_class = java::fetch_class("android/content/ContentProvider");
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

::android::os::Bundle android::content::ContentProvider::call(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::content::ContentProvider::_class) ::android::content::ContentProvider::_class = java::fetch_class("android/content/ContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "call", "(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

void android::content::ContentProvider::shutdown() const {
    if (!::android::content::ContentProvider::_class) ::android::content::ContentProvider::_class = java::fetch_class("android/content/ContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "shutdown", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::content::DialogInterface_OnCancelListener::onCancel(const ::android::content::DialogInterface& arg0) const {
    if (!::android::content::DialogInterface_OnCancelListener::_class) ::android::content::DialogInterface_OnCancelListener::_class = java::fetch_class("android/content/DialogInterface$OnCancelListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCancel", "(Landroid/content/DialogInterface;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::SharedPreferences_Editor android::content::SharedPreferences_Editor::putString(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::SharedPreferences_Editor::_class) ::android::content::SharedPreferences_Editor::_class = java::fetch_class("android/content/SharedPreferences$Editor");
    static jmethodID mid = java::jni->GetMethodID(_class, "putString", "(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::SharedPreferences_Editor _ret(ret);
    return _ret;
}

::android::content::SharedPreferences_Editor android::content::SharedPreferences_Editor::putStringSet(const ::java::lang::String& arg0, const ::java::util::Set& arg1) const {
    if (!::android::content::SharedPreferences_Editor::_class) ::android::content::SharedPreferences_Editor::_class = java::fetch_class("android/content/SharedPreferences$Editor");
    static jmethodID mid = java::jni->GetMethodID(_class, "putStringSet", "(Ljava/lang/String;Ljava/util/Set;)Landroid/content/SharedPreferences$Editor;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::SharedPreferences_Editor _ret(ret);
    return _ret;
}

::android::content::SharedPreferences_Editor android::content::SharedPreferences_Editor::putInt(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::content::SharedPreferences_Editor::_class) ::android::content::SharedPreferences_Editor::_class = java::fetch_class("android/content/SharedPreferences$Editor");
    static jmethodID mid = java::jni->GetMethodID(_class, "putInt", "(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::SharedPreferences_Editor _ret(ret);
    return _ret;
}

::android::content::SharedPreferences_Editor android::content::SharedPreferences_Editor::putLong(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::android::content::SharedPreferences_Editor::_class) ::android::content::SharedPreferences_Editor::_class = java::fetch_class("android/content/SharedPreferences$Editor");
    static jmethodID mid = java::jni->GetMethodID(_class, "putLong", "(Ljava/lang/String;J)Landroid/content/SharedPreferences$Editor;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::SharedPreferences_Editor _ret(ret);
    return _ret;
}

::android::content::SharedPreferences_Editor android::content::SharedPreferences_Editor::putFloat(const ::java::lang::String& arg0, float arg1) const {
    if (!::android::content::SharedPreferences_Editor::_class) ::android::content::SharedPreferences_Editor::_class = java::fetch_class("android/content/SharedPreferences$Editor");
    static jmethodID mid = java::jni->GetMethodID(_class, "putFloat", "(Ljava/lang/String;F)Landroid/content/SharedPreferences$Editor;");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::SharedPreferences_Editor _ret(ret);
    return _ret;
}

::android::content::SharedPreferences_Editor android::content::SharedPreferences_Editor::putBoolean(const ::java::lang::String& arg0, bool arg1) const {
    if (!::android::content::SharedPreferences_Editor::_class) ::android::content::SharedPreferences_Editor::_class = java::fetch_class("android/content/SharedPreferences$Editor");
    static jmethodID mid = java::jni->GetMethodID(_class, "putBoolean", "(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::SharedPreferences_Editor _ret(ret);
    return _ret;
}

::android::content::SharedPreferences_Editor android::content::SharedPreferences_Editor::remove(const ::java::lang::String& arg0) const {
    if (!::android::content::SharedPreferences_Editor::_class) ::android::content::SharedPreferences_Editor::_class = java::fetch_class("android/content/SharedPreferences$Editor");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::SharedPreferences_Editor _ret(ret);
    return _ret;
}

::android::content::SharedPreferences_Editor android::content::SharedPreferences_Editor::clear() const {
    if (!::android::content::SharedPreferences_Editor::_class) ::android::content::SharedPreferences_Editor::_class = java::fetch_class("android/content/SharedPreferences$Editor");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()Landroid/content/SharedPreferences$Editor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::SharedPreferences_Editor _ret(ret);
    return _ret;
}

bool android::content::SharedPreferences_Editor::commit() const {
    if (!::android::content::SharedPreferences_Editor::_class) ::android::content::SharedPreferences_Editor::_class = java::fetch_class("android/content/SharedPreferences$Editor");
    static jmethodID mid = java::jni->GetMethodID(_class, "commit", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::content::SharedPreferences_Editor::apply() const {
    if (!::android::content::SharedPreferences_Editor::_class) ::android::content::SharedPreferences_Editor::_class = java::fetch_class("android/content/SharedPreferences$Editor");
    static jmethodID mid = java::jni->GetMethodID(_class, "apply", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::ComponentName::ComponentName(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::content::ComponentName::_class) ::android::content::ComponentName::_class = java::fetch_class("android/content/ComponentName");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::ComponentName::ComponentName(const ::android::content::Context& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::content::ComponentName::_class) ::android::content::ComponentName::_class = java::fetch_class("android/content/ComponentName");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::ComponentName::ComponentName(const ::android::content::Context& arg0, const ::java::lang::Class& arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::content::ComponentName::_class) ::android::content::ComponentName::_class = java::fetch_class("android/content/ComponentName");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Ljava/lang/Class;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::ComponentName::ComponentName(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::content::ComponentName::_class) ::android::content::ComponentName::_class = java::fetch_class("android/content/ComponentName");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::content::ComponentName android::content::ComponentName::clone() const {
    if (!::android::content::ComponentName::_class) ::android::content::ComponentName::_class = java::fetch_class("android/content/ComponentName");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Landroid/content/ComponentName;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::ComponentName _ret(ret);
    return _ret;
}

::java::lang::String android::content::ComponentName::getPackageName() const {
    if (!::android::content::ComponentName::_class) ::android::content::ComponentName::_class = java::fetch_class("android/content/ComponentName");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::content::ComponentName::getClassName() const {
    if (!::android::content::ComponentName::_class) ::android::content::ComponentName::_class = java::fetch_class("android/content/ComponentName");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClassName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::content::ComponentName::getShortClassName() const {
    if (!::android::content::ComponentName::_class) ::android::content::ComponentName::_class = java::fetch_class("android/content/ComponentName");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShortClassName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::content::ComponentName::flattenToString() const {
    if (!::android::content::ComponentName::_class) ::android::content::ComponentName::_class = java::fetch_class("android/content/ComponentName");
    static jmethodID mid = java::jni->GetMethodID(_class, "flattenToString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::content::ComponentName::flattenToShortString() const {
    if (!::android::content::ComponentName::_class) ::android::content::ComponentName::_class = java::fetch_class("android/content/ComponentName");
    static jmethodID mid = java::jni->GetMethodID(_class, "flattenToShortString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::content::ComponentName android::content::ComponentName::unflattenFromString(const ::java::lang::String& arg0){
    if (!::android::content::ComponentName::_class) ::android::content::ComponentName::_class = java::fetch_class("android/content/ComponentName");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "unflattenFromString", "(Ljava/lang/String;)Landroid/content/ComponentName;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::content::ComponentName _ret(ret);
    return _ret;
}

::java::lang::String android::content::ComponentName::toShortString() const {
    if (!::android::content::ComponentName::_class) ::android::content::ComponentName::_class = java::fetch_class("android/content/ComponentName");
    static jmethodID mid = java::jni->GetMethodID(_class, "toShortString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::content::ComponentName::toString() const {
    if (!::android::content::ComponentName::_class) ::android::content::ComponentName::_class = java::fetch_class("android/content/ComponentName");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::content::ComponentName::equals(const ::java::lang::Object& arg0) const {
    if (!::android::content::ComponentName::_class) ::android::content::ComponentName::_class = java::fetch_class("android/content/ComponentName");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::content::ComponentName::hashCode() const {
    if (!::android::content::ComponentName::_class) ::android::content::ComponentName::_class = java::fetch_class("android/content/ComponentName");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::content::ComponentName::compareTo(const ::android::content::ComponentName& arg0) const {
    if (!::android::content::ComponentName::_class) ::android::content::ComponentName::_class = java::fetch_class("android/content/ComponentName");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Landroid/content/ComponentName;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::content::ComponentName::describeContents() const {
    if (!::android::content::ComponentName::_class) ::android::content::ComponentName::_class = java::fetch_class("android/content/ComponentName");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::ComponentName::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::ComponentName::_class) ::android::content::ComponentName::_class = java::fetch_class("android/content/ComponentName");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::ComponentName::writeToParcel(const ::android::content::ComponentName& arg0, const ::android::os::Parcel& arg1){
    if (!::android::content::ComponentName::_class) ::android::content::ComponentName::_class = java::fetch_class("android/content/ComponentName");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "writeToParcel", "(Landroid/content/ComponentName;Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::android::content::ComponentName android::content::ComponentName::readFromParcel(const ::android::os::Parcel& arg0){
    if (!::android::content::ComponentName::_class) ::android::content::ComponentName::_class = java::fetch_class("android/content/ComponentName");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "readFromParcel", "(Landroid/os/Parcel;)Landroid/content/ComponentName;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::content::ComponentName _ret(ret);
    return _ret;
}

int32_t android::content::ComponentName::compareTo(const ::java::lang::Object& arg0) const {
    if (!::android::content::ComponentName::_class) ::android::content::ComponentName::_class = java::fetch_class("android/content/ComponentName");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::database::Cursor android::content::ContentProviderClient::query(const ::android::net::Uri& arg0, const std::vector< ::java::lang::String>& arg1, const ::java::lang::String& arg2, const std::vector< ::java::lang::String>& arg3, const ::java::lang::String& arg4) const {
    if (!::android::content::ContentProviderClient::_class) ::android::content::ContentProviderClient::_class = java::fetch_class("android/content/ContentProviderClient");
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

::java::lang::String android::content::ContentProviderClient::getType(const ::android::net::Uri& arg0) const {
    if (!::android::content::ContentProviderClient::_class) ::android::content::ContentProviderClient::_class = java::fetch_class("android/content/ContentProviderClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "(Landroid/net/Uri;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> android::content::ContentProviderClient::getStreamTypes(const ::android::net::Uri& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::ContentProviderClient::_class) ::android::content::ContentProviderClient::_class = java::fetch_class("android/content/ContentProviderClient");
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

::android::net::Uri android::content::ContentProviderClient::insert(const ::android::net::Uri& arg0, const ::android::content::ContentValues& arg1) const {
    if (!::android::content::ContentProviderClient::_class) ::android::content::ContentProviderClient::_class = java::fetch_class("android/content/ContentProviderClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::net::Uri _ret(ret);
    return _ret;
}

int32_t android::content::ContentProviderClient::bulkInsert(const ::android::net::Uri& arg0, const std::vector< ::android::content::ContentValues>& arg1) const {
    if (!::android::content::ContentProviderClient::_class) ::android::content::ContentProviderClient::_class = java::fetch_class("android/content/ContentProviderClient");
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

int32_t android::content::ContentProviderClient::delete_(const ::android::net::Uri& arg0, const ::java::lang::String& arg1, const std::vector< ::java::lang::String>& arg2) const {
    if (!::android::content::ContentProviderClient::_class) ::android::content::ContentProviderClient::_class = java::fetch_class("android/content/ContentProviderClient");
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

int32_t android::content::ContentProviderClient::update(const ::android::net::Uri& arg0, const ::android::content::ContentValues& arg1, const ::java::lang::String& arg2, const std::vector< ::java::lang::String>& arg3) const {
    if (!::android::content::ContentProviderClient::_class) ::android::content::ContentProviderClient::_class = java::fetch_class("android/content/ContentProviderClient");
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

::android::os::ParcelFileDescriptor android::content::ContentProviderClient::openFile(const ::android::net::Uri& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::ContentProviderClient::_class) ::android::content::ContentProviderClient::_class = java::fetch_class("android/content/ContentProviderClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "openFile", "(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::os::ParcelFileDescriptor _ret(ret);
    return _ret;
}

::android::content::res::AssetFileDescriptor android::content::ContentProviderClient::openAssetFile(const ::android::net::Uri& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::ContentProviderClient::_class) ::android::content::ContentProviderClient::_class = java::fetch_class("android/content/ContentProviderClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "openAssetFile", "(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::res::AssetFileDescriptor _ret(ret);
    return _ret;
}

::android::content::res::AssetFileDescriptor android::content::ContentProviderClient::openTypedAssetFileDescriptor(const ::android::net::Uri& arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::content::ContentProviderClient::_class) ::android::content::ContentProviderClient::_class = java::fetch_class("android/content/ContentProviderClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "openTypedAssetFileDescriptor", "(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/res/AssetFileDescriptor;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::content::res::AssetFileDescriptor _ret(ret);
    return _ret;
}

std::vector< ::android::content::ContentProviderResult> android::content::ContentProviderClient::applyBatch(const ::java::util::ArrayList& arg0) const {
    if (!::android::content::ContentProviderClient::_class) ::android::content::ContentProviderClient::_class = java::fetch_class("android/content/ContentProviderClient");
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

bool android::content::ContentProviderClient::release() const {
    if (!::android::content::ContentProviderClient::_class) ::android::content::ContentProviderClient::_class = java::fetch_class("android/content/ContentProviderClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::content::ContentProvider android::content::ContentProviderClient::getLocalContentProvider() const {
    if (!::android::content::ContentProviderClient::_class) ::android::content::ContentProviderClient::_class = java::fetch_class("android/content/ContentProviderClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalContentProvider", "()Landroid/content/ContentProvider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::ContentProvider _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::SyncAdapterType::SyncAdapterType(const ::java::lang::String& arg0, const ::java::lang::String& arg1, bool arg2, bool arg3) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::SyncAdapterType::_class) ::android::content::SyncAdapterType::_class = java::fetch_class("android/content/SyncAdapterType");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;ZZ)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    bool _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::SyncAdapterType::SyncAdapterType(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::SyncAdapterType::_class) ::android::content::SyncAdapterType::_class = java::fetch_class("android/content/SyncAdapterType");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool android::content::SyncAdapterType::supportsUploading() const {
    if (!::android::content::SyncAdapterType::_class) ::android::content::SyncAdapterType::_class = java::fetch_class("android/content/SyncAdapterType");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsUploading", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::content::SyncAdapterType::isUserVisible() const {
    if (!::android::content::SyncAdapterType::_class) ::android::content::SyncAdapterType::_class = java::fetch_class("android/content/SyncAdapterType");
    static jmethodID mid = java::jni->GetMethodID(_class, "isUserVisible", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::content::SyncAdapterType::allowParallelSyncs() const {
    if (!::android::content::SyncAdapterType::_class) ::android::content::SyncAdapterType::_class = java::fetch_class("android/content/SyncAdapterType");
    static jmethodID mid = java::jni->GetMethodID(_class, "allowParallelSyncs", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::content::SyncAdapterType::isAlwaysSyncable() const {
    if (!::android::content::SyncAdapterType::_class) ::android::content::SyncAdapterType::_class = java::fetch_class("android/content/SyncAdapterType");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAlwaysSyncable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String android::content::SyncAdapterType::getSettingsActivity() const {
    if (!::android::content::SyncAdapterType::_class) ::android::content::SyncAdapterType::_class = java::fetch_class("android/content/SyncAdapterType");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSettingsActivity", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::content::SyncAdapterType android::content::SyncAdapterType::newKey(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::android::content::SyncAdapterType::_class) ::android::content::SyncAdapterType::_class = java::fetch_class("android/content/SyncAdapterType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newKey", "(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SyncAdapterType;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::content::SyncAdapterType _ret(ret);
    return _ret;
}

bool android::content::SyncAdapterType::equals(const ::java::lang::Object& arg0) const {
    if (!::android::content::SyncAdapterType::_class) ::android::content::SyncAdapterType::_class = java::fetch_class("android/content/SyncAdapterType");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::content::SyncAdapterType::hashCode() const {
    if (!::android::content::SyncAdapterType::_class) ::android::content::SyncAdapterType::_class = java::fetch_class("android/content/SyncAdapterType");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::content::SyncAdapterType::toString() const {
    if (!::android::content::SyncAdapterType::_class) ::android::content::SyncAdapterType::_class = java::fetch_class("android/content/SyncAdapterType");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::content::SyncAdapterType::describeContents() const {
    if (!::android::content::SyncAdapterType::_class) ::android::content::SyncAdapterType::_class = java::fetch_class("android/content/SyncAdapterType");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::SyncAdapterType::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::SyncAdapterType::_class) ::android::content::SyncAdapterType::_class = java::fetch_class("android/content/SyncAdapterType");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::DialogInterface_OnDismissListener::onDismiss(const ::android::content::DialogInterface& arg0) const {
    if (!::android::content::DialogInterface_OnDismissListener::_class) ::android::content::DialogInterface_OnDismissListener::_class = java::fetch_class("android/content/DialogInterface$OnDismissListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDismiss", "(Landroid/content/DialogInterface;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::Loader_ForceLoadContentObserver::Loader_ForceLoadContentObserver(const ::android::content::Loader& arg0) : ::java::lang::Object((jobject)0), ::android::database::ContentObserver((jobject)0) {
    if (!::android::content::Loader_ForceLoadContentObserver::_class) ::android::content::Loader_ForceLoadContentObserver::_class = java::fetch_class("android/content/Loader$ForceLoadContentObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Loader;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool android::content::Loader_ForceLoadContentObserver::deliverSelfNotifications() const {
    if (!::android::content::Loader_ForceLoadContentObserver::_class) ::android::content::Loader_ForceLoadContentObserver::_class = java::fetch_class("android/content/Loader$ForceLoadContentObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "deliverSelfNotifications", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::content::Loader_ForceLoadContentObserver::onChange(bool arg0) const {
    if (!::android::content::Loader_ForceLoadContentObserver::_class) ::android::content::Loader_ForceLoadContentObserver::_class = java::fetch_class("android/content/Loader$ForceLoadContentObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "onChange", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::ClipboardManager::setPrimaryClip(const ::android::content::ClipData& arg0) const {
    if (!::android::content::ClipboardManager::_class) ::android::content::ClipboardManager::_class = java::fetch_class("android/content/ClipboardManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPrimaryClip", "(Landroid/content/ClipData;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::ClipData android::content::ClipboardManager::getPrimaryClip() const {
    if (!::android::content::ClipboardManager::_class) ::android::content::ClipboardManager::_class = java::fetch_class("android/content/ClipboardManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrimaryClip", "()Landroid/content/ClipData;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::ClipData _ret(ret);
    return _ret;
}

::android::content::ClipDescription android::content::ClipboardManager::getPrimaryClipDescription() const {
    if (!::android::content::ClipboardManager::_class) ::android::content::ClipboardManager::_class = java::fetch_class("android/content/ClipboardManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrimaryClipDescription", "()Landroid/content/ClipDescription;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::ClipDescription _ret(ret);
    return _ret;
}

bool android::content::ClipboardManager::hasPrimaryClip() const {
    if (!::android::content::ClipboardManager::_class) ::android::content::ClipboardManager::_class = java::fetch_class("android/content/ClipboardManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasPrimaryClip", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::content::ClipboardManager::addPrimaryClipChangedListener(const ::android::content::ClipboardManager_OnPrimaryClipChangedListener& arg0) const {
    if (!::android::content::ClipboardManager::_class) ::android::content::ClipboardManager::_class = java::fetch_class("android/content/ClipboardManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPrimaryClipChangedListener", "(Landroid/content/ClipboardManager$OnPrimaryClipChangedListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::ClipboardManager::removePrimaryClipChangedListener(const ::android::content::ClipboardManager_OnPrimaryClipChangedListener& arg0) const {
    if (!::android::content::ClipboardManager::_class) ::android::content::ClipboardManager::_class = java::fetch_class("android/content/ClipboardManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "removePrimaryClipChangedListener", "(Landroid/content/ClipboardManager$OnPrimaryClipChangedListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::content::ClipboardManager::getText() const {
    if (!::android::content::ClipboardManager::_class) ::android::content::ClipboardManager::_class = java::fetch_class("android/content/ClipboardManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::content::ClipboardManager::setText(const ::java::lang::CharSequence& arg0) const {
    if (!::android::content::ClipboardManager::_class) ::android::content::ClipboardManager::_class = java::fetch_class("android/content/ClipboardManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setText", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::content::ClipboardManager::hasText() const {
    if (!::android::content::ClipboardManager::_class) ::android::content::ClipboardManager::_class = java::fetch_class("android/content/ClipboardManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasText", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::content::DialogInterface_OnShowListener::onShow(const ::android::content::DialogInterface& arg0) const {
    if (!::android::content::DialogInterface_OnShowListener::_class) ::android::content::DialogInterface_OnShowListener::_class = java::fetch_class("android/content/DialogInterface$OnShowListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onShow", "(Landroid/content/DialogInterface;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::OperationApplicationException::OperationApplicationException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::content::OperationApplicationException::_class) ::android::content::OperationApplicationException::_class = java::fetch_class("android/content/OperationApplicationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::OperationApplicationException::OperationApplicationException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::content::OperationApplicationException::_class) ::android::content::OperationApplicationException::_class = java::fetch_class("android/content/OperationApplicationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::OperationApplicationException::OperationApplicationException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::content::OperationApplicationException::_class) ::android::content::OperationApplicationException::_class = java::fetch_class("android/content/OperationApplicationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::OperationApplicationException::OperationApplicationException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::content::OperationApplicationException::_class) ::android::content::OperationApplicationException::_class = java::fetch_class("android/content/OperationApplicationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::OperationApplicationException::OperationApplicationException(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::content::OperationApplicationException::_class) ::android::content::OperationApplicationException::_class = java::fetch_class("android/content/OperationApplicationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::OperationApplicationException::OperationApplicationException(const ::java::lang::String& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::content::OperationApplicationException::_class) ::android::content::OperationApplicationException::_class = java::fetch_class("android/content/OperationApplicationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

int32_t android::content::OperationApplicationException::getNumSuccessfulYieldPoints() const {
    if (!::android::content::OperationApplicationException::_class) ::android::content::OperationApplicationException::_class = java::fetch_class("android/content/OperationApplicationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNumSuccessfulYieldPoints", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::Loader::Loader(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::content::Loader::_class) ::android::content::Loader::_class = java::fetch_class("android/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::content::Loader::deliverResult(const ::java::lang::Object& arg0) const {
    if (!::android::content::Loader::_class) ::android::content::Loader::_class = java::fetch_class("android/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "deliverResult", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::Context android::content::Loader::getContext() const {
    if (!::android::content::Loader::_class) ::android::content::Loader::_class = java::fetch_class("android/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContext", "()Landroid/content/Context;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Context _ret(ret);
    return _ret;
}

int32_t android::content::Loader::getId() const {
    if (!::android::content::Loader::_class) ::android::content::Loader::_class = java::fetch_class("android/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::Loader::registerListener(int32_t arg0, const ::android::content::Loader_OnLoadCompleteListener& arg1) const {
    if (!::android::content::Loader::_class) ::android::content::Loader::_class = java::fetch_class("android/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerListener", "(ILandroid/content/Loader$OnLoadCompleteListener;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::Loader::unregisterListener(const ::android::content::Loader_OnLoadCompleteListener& arg0) const {
    if (!::android::content::Loader::_class) ::android::content::Loader::_class = java::fetch_class("android/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterListener", "(Landroid/content/Loader$OnLoadCompleteListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::content::Loader::isStarted() const {
    if (!::android::content::Loader::_class) ::android::content::Loader::_class = java::fetch_class("android/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStarted", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::content::Loader::isAbandoned() const {
    if (!::android::content::Loader::_class) ::android::content::Loader::_class = java::fetch_class("android/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAbandoned", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::content::Loader::isReset() const {
    if (!::android::content::Loader::_class) ::android::content::Loader::_class = java::fetch_class("android/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "isReset", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::content::Loader::startLoading() const {
    if (!::android::content::Loader::_class) ::android::content::Loader::_class = java::fetch_class("android/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "startLoading", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::content::Loader::forceLoad() const {
    if (!::android::content::Loader::_class) ::android::content::Loader::_class = java::fetch_class("android/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "forceLoad", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::content::Loader::stopLoading() const {
    if (!::android::content::Loader::_class) ::android::content::Loader::_class = java::fetch_class("android/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopLoading", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::content::Loader::abandon() const {
    if (!::android::content::Loader::_class) ::android::content::Loader::_class = java::fetch_class("android/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "abandon", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::content::Loader::reset() const {
    if (!::android::content::Loader::_class) ::android::content::Loader::_class = java::fetch_class("android/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::content::Loader::takeContentChanged() const {
    if (!::android::content::Loader::_class) ::android::content::Loader::_class = java::fetch_class("android/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "takeContentChanged", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::content::Loader::onContentChanged() const {
    if (!::android::content::Loader::_class) ::android::content::Loader::_class = java::fetch_class("android/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "onContentChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String android::content::Loader::dataToString(const ::java::lang::Object& arg0) const {
    if (!::android::content::Loader::_class) ::android::content::Loader::_class = java::fetch_class("android/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "dataToString", "(Ljava/lang/Object;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::content::Loader::toString() const {
    if (!::android::content::Loader::_class) ::android::content::Loader::_class = java::fetch_class("android/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::content::Loader::dump(const ::java::lang::String& arg0, const ::java::io::FileDescriptor& arg1, const ::java::io::PrintWriter& arg2, const std::vector< ::java::lang::String>& arg3) const {
    if (!::android::content::Loader::_class) ::android::content::Loader::_class = java::fetch_class("android/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V");
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
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::ContentValues::ContentValues() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::ContentValues::ContentValues(int32_t arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool android::content::ContentValues::equals(const ::java::lang::Object& arg0) const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::content::ContentValues::hashCode() const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::ContentValues::put(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::ContentValues::putAll(const ::android::content::ContentValues& arg0) const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "putAll", "(Landroid/content/ContentValues;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::ContentValues::put(const ::java::lang::String& arg0, const ::java::lang::Byte& arg1) const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/String;Ljava/lang/Byte;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::ContentValues::put(const ::java::lang::String& arg0, const ::java::lang::Short& arg1) const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/String;Ljava/lang/Short;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::ContentValues::put(const ::java::lang::String& arg0, const ::java::lang::Integer& arg1) const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/String;Ljava/lang/Integer;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::ContentValues::put(const ::java::lang::String& arg0, const ::java::lang::Long& arg1) const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/String;Ljava/lang/Long;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::ContentValues::put(const ::java::lang::String& arg0, const ::java::lang::Float& arg1) const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/String;Ljava/lang/Float;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::ContentValues::put(const ::java::lang::String& arg0, const ::java::lang::Double& arg1) const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/String;Ljava/lang/Double;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::ContentValues::put(const ::java::lang::String& arg0, const ::java::lang::Boolean& arg1) const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/String;Ljava/lang/Boolean;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::ContentValues::put(const ::java::lang::String& arg0, const std::vector< int8_t>& arg1) const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/String;[B)V");
    jobject _arg0 = arg0.obj;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::ContentValues::putNull(const ::java::lang::String& arg0) const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "putNull", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::content::ContentValues::size() const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::ContentValues::remove(const ::java::lang::String& arg0) const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::ContentValues::clear() const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::content::ContentValues::containsKey(const ::java::lang::String& arg0) const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsKey", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object android::content::ContentValues::get(const ::java::lang::String& arg0) const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::String android::content::ContentValues::getAsString(const ::java::lang::String& arg0) const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAsString", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Long android::content::ContentValues::getAsLong(const ::java::lang::String& arg0) const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAsLong", "(Ljava/lang/String;)Ljava/lang/Long;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Long _ret(ret);
    return _ret;
}

::java::lang::Integer android::content::ContentValues::getAsInteger(const ::java::lang::String& arg0) const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAsInteger", "(Ljava/lang/String;)Ljava/lang/Integer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Integer _ret(ret);
    return _ret;
}

::java::lang::Short android::content::ContentValues::getAsShort(const ::java::lang::String& arg0) const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAsShort", "(Ljava/lang/String;)Ljava/lang/Short;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Short _ret(ret);
    return _ret;
}

::java::lang::Byte android::content::ContentValues::getAsByte(const ::java::lang::String& arg0) const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAsByte", "(Ljava/lang/String;)Ljava/lang/Byte;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Byte _ret(ret);
    return _ret;
}

::java::lang::Double android::content::ContentValues::getAsDouble(const ::java::lang::String& arg0) const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAsDouble", "(Ljava/lang/String;)Ljava/lang/Double;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Double _ret(ret);
    return _ret;
}

::java::lang::Float android::content::ContentValues::getAsFloat(const ::java::lang::String& arg0) const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAsFloat", "(Ljava/lang/String;)Ljava/lang/Float;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Float _ret(ret);
    return _ret;
}

::java::lang::Boolean android::content::ContentValues::getAsBoolean(const ::java::lang::String& arg0) const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAsBoolean", "(Ljava/lang/String;)Ljava/lang/Boolean;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Boolean _ret(ret);
    return _ret;
}

std::vector< int8_t> android::content::ContentValues::getAsByteArray(const ::java::lang::String& arg0) const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAsByteArray", "(Ljava/lang/String;)[B");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::util::Set android::content::ContentValues::valueSet() const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "valueSet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::Set android::content::ContentValues::keySet() const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "keySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

int32_t android::content::ContentValues::describeContents() const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::ContentValues::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::content::ContentValues::toString() const {
    if (!::android::content::ContentValues::_class) ::android::content::ContentValues::_class = java::fetch_class("android/content/ContentValues");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::content::ClipboardManager_OnPrimaryClipChangedListener::onPrimaryClipChanged() const {
    if (!::android::content::ClipboardManager_OnPrimaryClipChangedListener::_class) ::android::content::ClipboardManager_OnPrimaryClipChangedListener::_class = java::fetch_class("android/content/ClipboardManager$OnPrimaryClipChangedListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPrimaryClipChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::content::SharedPreferences_OnSharedPreferenceChangeListener::onSharedPreferenceChanged(const ::android::content::SharedPreferences& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::SharedPreferences_OnSharedPreferenceChangeListener::_class) ::android::content::SharedPreferences_OnSharedPreferenceChangeListener::_class = java::fetch_class("android/content/SharedPreferences$OnSharedPreferenceChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSharedPreferenceChanged", "(Landroid/content/SharedPreferences;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::DialogInterface_OnClickListener::onClick(const ::android::content::DialogInterface& arg0, int32_t arg1) const {
    if (!::android::content::DialogInterface_OnClickListener::_class) ::android::content::DialogInterface_OnClickListener::_class = java::fetch_class("android/content/DialogInterface$OnClickListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onClick", "(Landroid/content/DialogInterface;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::BroadcastReceiver::BroadcastReceiver() : ::java::lang::Object((jobject)0) {
    if (!::android::content::BroadcastReceiver::_class) ::android::content::BroadcastReceiver::_class = java::fetch_class("android/content/BroadcastReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::content::BroadcastReceiver::onReceive(const ::android::content::Context& arg0, const ::android::content::Intent& arg1) const {
    if (!::android::content::BroadcastReceiver::_class) ::android::content::BroadcastReceiver::_class = java::fetch_class("android/content/BroadcastReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "onReceive", "(Landroid/content/Context;Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::content::BroadcastReceiver_PendingResult android::content::BroadcastReceiver::goAsync() const {
    if (!::android::content::BroadcastReceiver::_class) ::android::content::BroadcastReceiver::_class = java::fetch_class("android/content/BroadcastReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "goAsync", "()Landroid/content/BroadcastReceiver$PendingResult;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::BroadcastReceiver_PendingResult _ret(ret);
    return _ret;
}

::android::os::IBinder android::content::BroadcastReceiver::peekService(const ::android::content::Context& arg0, const ::android::content::Intent& arg1) const {
    if (!::android::content::BroadcastReceiver::_class) ::android::content::BroadcastReceiver::_class = java::fetch_class("android/content/BroadcastReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "peekService", "(Landroid/content/Context;Landroid/content/Intent;)Landroid/os/IBinder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

void android::content::BroadcastReceiver::setResultCode(int32_t arg0) const {
    if (!::android::content::BroadcastReceiver::_class) ::android::content::BroadcastReceiver::_class = java::fetch_class("android/content/BroadcastReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "setResultCode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::content::BroadcastReceiver::getResultCode() const {
    if (!::android::content::BroadcastReceiver::_class) ::android::content::BroadcastReceiver::_class = java::fetch_class("android/content/BroadcastReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResultCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::BroadcastReceiver::setResultData(const ::java::lang::String& arg0) const {
    if (!::android::content::BroadcastReceiver::_class) ::android::content::BroadcastReceiver::_class = java::fetch_class("android/content/BroadcastReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "setResultData", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::content::BroadcastReceiver::getResultData() const {
    if (!::android::content::BroadcastReceiver::_class) ::android::content::BroadcastReceiver::_class = java::fetch_class("android/content/BroadcastReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResultData", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::content::BroadcastReceiver::setResultExtras(const ::android::os::Bundle& arg0) const {
    if (!::android::content::BroadcastReceiver::_class) ::android::content::BroadcastReceiver::_class = java::fetch_class("android/content/BroadcastReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "setResultExtras", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::os::Bundle android::content::BroadcastReceiver::getResultExtras(bool arg0) const {
    if (!::android::content::BroadcastReceiver::_class) ::android::content::BroadcastReceiver::_class = java::fetch_class("android/content/BroadcastReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResultExtras", "(Z)Landroid/os/Bundle;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

void android::content::BroadcastReceiver::setResult(int32_t arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::content::BroadcastReceiver::_class) ::android::content::BroadcastReceiver::_class = java::fetch_class("android/content/BroadcastReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "setResult", "(ILjava/lang/String;Landroid/os/Bundle;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::content::BroadcastReceiver::getAbortBroadcast() const {
    if (!::android::content::BroadcastReceiver::_class) ::android::content::BroadcastReceiver::_class = java::fetch_class("android/content/BroadcastReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAbortBroadcast", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::content::BroadcastReceiver::abortBroadcast() const {
    if (!::android::content::BroadcastReceiver::_class) ::android::content::BroadcastReceiver::_class = java::fetch_class("android/content/BroadcastReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "abortBroadcast", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::content::BroadcastReceiver::clearAbortBroadcast() const {
    if (!::android::content::BroadcastReceiver::_class) ::android::content::BroadcastReceiver::_class = java::fetch_class("android/content/BroadcastReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearAbortBroadcast", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::content::BroadcastReceiver::isOrderedBroadcast() const {
    if (!::android::content::BroadcastReceiver::_class) ::android::content::BroadcastReceiver::_class = java::fetch_class("android/content/BroadcastReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOrderedBroadcast", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::content::BroadcastReceiver::isInitialStickyBroadcast() const {
    if (!::android::content::BroadcastReceiver::_class) ::android::content::BroadcastReceiver::_class = java::fetch_class("android/content/BroadcastReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "isInitialStickyBroadcast", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::content::BroadcastReceiver::setOrderedHint(bool arg0) const {
    if (!::android::content::BroadcastReceiver::_class) ::android::content::BroadcastReceiver::_class = java::fetch_class("android/content/BroadcastReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOrderedHint", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::BroadcastReceiver::setDebugUnregister(bool arg0) const {
    if (!::android::content::BroadcastReceiver::_class) ::android::content::BroadcastReceiver::_class = java::fetch_class("android/content/BroadcastReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDebugUnregister", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::content::BroadcastReceiver::getDebugUnregister() const {
    if (!::android::content::BroadcastReceiver::_class) ::android::content::BroadcastReceiver::_class = java::fetch_class("android/content/BroadcastReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDebugUnregister", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::content::DialogInterface::cancel() const {
    if (!::android::content::DialogInterface::_class) ::android::content::DialogInterface::_class = java::fetch_class("android/content/DialogInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::content::DialogInterface::dismiss() const {
    if (!::android::content::DialogInterface::_class) ::android::content::DialogInterface::_class = java::fetch_class("android/content/DialogInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "dismiss", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::content::ContentProviderOperation::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::ContentProviderOperation::_class) ::android::content::ContentProviderOperation::_class = java::fetch_class("android/content/ContentProviderOperation");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::content::ContentProviderOperation_Builder android::content::ContentProviderOperation::newInsert(const ::android::net::Uri& arg0){
    if (!::android::content::ContentProviderOperation::_class) ::android::content::ContentProviderOperation::_class = java::fetch_class("android/content/ContentProviderOperation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInsert", "(Landroid/net/Uri;)Landroid/content/ContentProviderOperation$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::content::ContentProviderOperation_Builder _ret(ret);
    return _ret;
}

::android::content::ContentProviderOperation_Builder android::content::ContentProviderOperation::newUpdate(const ::android::net::Uri& arg0){
    if (!::android::content::ContentProviderOperation::_class) ::android::content::ContentProviderOperation::_class = java::fetch_class("android/content/ContentProviderOperation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newUpdate", "(Landroid/net/Uri;)Landroid/content/ContentProviderOperation$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::content::ContentProviderOperation_Builder _ret(ret);
    return _ret;
}

::android::content::ContentProviderOperation_Builder android::content::ContentProviderOperation::newDelete(const ::android::net::Uri& arg0){
    if (!::android::content::ContentProviderOperation::_class) ::android::content::ContentProviderOperation::_class = java::fetch_class("android/content/ContentProviderOperation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newDelete", "(Landroid/net/Uri;)Landroid/content/ContentProviderOperation$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::content::ContentProviderOperation_Builder _ret(ret);
    return _ret;
}

::android::content::ContentProviderOperation_Builder android::content::ContentProviderOperation::newAssertQuery(const ::android::net::Uri& arg0){
    if (!::android::content::ContentProviderOperation::_class) ::android::content::ContentProviderOperation::_class = java::fetch_class("android/content/ContentProviderOperation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newAssertQuery", "(Landroid/net/Uri;)Landroid/content/ContentProviderOperation$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::content::ContentProviderOperation_Builder _ret(ret);
    return _ret;
}

::android::net::Uri android::content::ContentProviderOperation::getUri() const {
    if (!::android::content::ContentProviderOperation::_class) ::android::content::ContentProviderOperation::_class = java::fetch_class("android/content/ContentProviderOperation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUri", "()Landroid/net/Uri;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::Uri _ret(ret);
    return _ret;
}

bool android::content::ContentProviderOperation::isYieldAllowed() const {
    if (!::android::content::ContentProviderOperation::_class) ::android::content::ContentProviderOperation::_class = java::fetch_class("android/content/ContentProviderOperation");
    static jmethodID mid = java::jni->GetMethodID(_class, "isYieldAllowed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::content::ContentProviderOperation::isWriteOperation() const {
    if (!::android::content::ContentProviderOperation::_class) ::android::content::ContentProviderOperation::_class = java::fetch_class("android/content/ContentProviderOperation");
    static jmethodID mid = java::jni->GetMethodID(_class, "isWriteOperation", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::content::ContentProviderOperation::isReadOperation() const {
    if (!::android::content::ContentProviderOperation::_class) ::android::content::ContentProviderOperation::_class = java::fetch_class("android/content/ContentProviderOperation");
    static jmethodID mid = java::jni->GetMethodID(_class, "isReadOperation", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::content::ContentProviderResult android::content::ContentProviderOperation::apply(const ::android::content::ContentProvider& arg0, const std::vector< ::android::content::ContentProviderResult>& arg1, int32_t arg2) const {
    if (!::android::content::ContentProviderOperation::_class) ::android::content::ContentProviderOperation::_class = java::fetch_class("android/content/ContentProviderOperation");
    static jmethodID mid = java::jni->GetMethodID(_class, "apply", "(Landroid/content/ContentProvider;[Landroid/content/ContentProviderResult;I)Landroid/content/ContentProviderResult;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::android::content::ContentProviderResult::_class) ::android::content::ContentProviderResult::_class = java::fetch_class("android/content/ContentProviderResult");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::android::content::ContentProviderResult::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::android::content::ContentProviderResult& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::content::ContentProviderResult _ret(ret);
    return _ret;
}

::android::content::ContentValues android::content::ContentProviderOperation::resolveValueBackReferences(const std::vector< ::android::content::ContentProviderResult>& arg0, int32_t arg1) const {
    if (!::android::content::ContentProviderOperation::_class) ::android::content::ContentProviderOperation::_class = java::fetch_class("android/content/ContentProviderOperation");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveValueBackReferences", "([Landroid/content/ContentProviderResult;I)Landroid/content/ContentValues;");
    unsigned arg0s = arg0.size();
    if (!::android::content::ContentProviderResult::_class) ::android::content::ContentProviderResult::_class = java::fetch_class("android/content/ContentProviderResult");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::content::ContentProviderResult::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::content::ContentProviderResult& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::ContentValues _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> android::content::ContentProviderOperation::resolveSelectionArgsBackReferences(const std::vector< ::android::content::ContentProviderResult>& arg0, int32_t arg1) const {
    if (!::android::content::ContentProviderOperation::_class) ::android::content::ContentProviderOperation::_class = java::fetch_class("android/content/ContentProviderOperation");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveSelectionArgsBackReferences", "([Landroid/content/ContentProviderResult;I)[Ljava/lang/String;");
    unsigned arg0s = arg0.size();
    if (!::android::content::ContentProviderResult::_class) ::android::content::ContentProviderResult::_class = java::fetch_class("android/content/ContentProviderResult");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::content::ContentProviderResult::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::content::ContentProviderResult& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    int32_t _arg1 = arg1;
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

::java::lang::String android::content::ContentProviderOperation::toString() const {
    if (!::android::content::ContentProviderOperation::_class) ::android::content::ContentProviderOperation::_class = java::fetch_class("android/content/ContentProviderOperation");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::content::ContentProviderOperation::describeContents() const {
    if (!::android::content::ContentProviderOperation::_class) ::android::content::ContentProviderOperation::_class = java::fetch_class("android/content/ContentProviderOperation");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::ContentProvider_PipeDataWriter::writeDataToPipe(const ::android::os::ParcelFileDescriptor& arg0, const ::android::net::Uri& arg1, const ::java::lang::String& arg2, const ::android::os::Bundle& arg3, const ::java::lang::Object& arg4) const {
    if (!::android::content::ContentProvider_PipeDataWriter::_class) ::android::content::ContentProvider_PipeDataWriter::_class = java::fetch_class("android/content/ContentProvider$PipeDataWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeDataToPipe", "(Landroid/os/ParcelFileDescriptor;Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::ReceiverCallNotAllowedException::ReceiverCallNotAllowedException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::util::AndroidRuntimeException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::content::ReceiverCallNotAllowedException::_class) ::android::content::ReceiverCallNotAllowedException::_class = java::fetch_class("android/content/ReceiverCallNotAllowedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool android::content::DialogInterface_OnKeyListener::onKey(const ::android::content::DialogInterface& arg0, int32_t arg1, const ::android::view::KeyEvent& arg2) const {
    if (!::android::content::DialogInterface_OnKeyListener::_class) ::android::content::DialogInterface_OnKeyListener::_class = java::fetch_class("android/content/DialogInterface$OnKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKey", "(Landroid/content/DialogInterface;ILandroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::content::Loader_OnLoadCompleteListener::onLoadComplete(const ::android::content::Loader& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::content::Loader_OnLoadCompleteListener::_class) ::android::content::Loader_OnLoadCompleteListener::_class = java::fetch_class("android/content/Loader$OnLoadCompleteListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onLoadComplete", "(Landroid/content/Loader;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::ContextWrapper::ContextWrapper(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::content::Context((jobject)0) {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::content::Context android::content::ContextWrapper::getBaseContext() const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBaseContext", "()Landroid/content/Context;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Context _ret(ret);
    return _ret;
}

::android::content::res::AssetManager android::content::ContextWrapper::getAssets() const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAssets", "()Landroid/content/res/AssetManager;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::res::AssetManager _ret(ret);
    return _ret;
}

::android::content::res::Resources android::content::ContextWrapper::getResources() const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResources", "()Landroid/content/res/Resources;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::res::Resources _ret(ret);
    return _ret;
}

::android::content::pm::PackageManager android::content::ContextWrapper::getPackageManager() const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageManager", "()Landroid/content/pm/PackageManager;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::pm::PackageManager _ret(ret);
    return _ret;
}

::android::content::ContentResolver android::content::ContextWrapper::getContentResolver() const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentResolver", "()Landroid/content/ContentResolver;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::ContentResolver _ret(ret);
    return _ret;
}

::android::os::Looper android::content::ContextWrapper::getMainLooper() const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMainLooper", "()Landroid/os/Looper;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Looper _ret(ret);
    return _ret;
}

::android::content::Context android::content::ContextWrapper::getApplicationContext() const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplicationContext", "()Landroid/content/Context;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Context _ret(ret);
    return _ret;
}

void android::content::ContextWrapper::setTheme(int32_t arg0) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTheme", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::res::Resources_Theme android::content::ContextWrapper::getTheme() const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTheme", "()Landroid/content/res/Resources$Theme;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::res::Resources_Theme _ret(ret);
    return _ret;
}

::java::lang::ClassLoader android::content::ContextWrapper::getClassLoader() const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClassLoader", "()Ljava/lang/ClassLoader;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::ClassLoader _ret(ret);
    return _ret;
}

::java::lang::String android::content::ContextWrapper::getPackageName() const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::content::pm::ApplicationInfo android::content::ContextWrapper::getApplicationInfo() const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplicationInfo", "()Landroid/content/pm/ApplicationInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::pm::ApplicationInfo _ret(ret);
    return _ret;
}

::java::lang::String android::content::ContextWrapper::getPackageResourcePath() const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageResourcePath", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::content::ContextWrapper::getPackageCodePath() const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageCodePath", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::content::SharedPreferences android::content::ContextWrapper::getSharedPreferences(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSharedPreferences", "(Ljava/lang/String;I)Landroid/content/SharedPreferences;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::SharedPreferences _ret(ret);
    return _ret;
}

::java::io::FileInputStream android::content::ContextWrapper::openFileInput(const ::java::lang::String& arg0) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "openFileInput", "(Ljava/lang/String;)Ljava/io/FileInputStream;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::FileInputStream _ret(ret);
    return _ret;
}

::java::io::FileOutputStream android::content::ContextWrapper::openFileOutput(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "openFileOutput", "(Ljava/lang/String;I)Ljava/io/FileOutputStream;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::io::FileOutputStream _ret(ret);
    return _ret;
}

bool android::content::ContextWrapper::deleteFile(const ::java::lang::String& arg0) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "deleteFile", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::io::File android::content::ContextWrapper::getFileStreamPath(const ::java::lang::String& arg0) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFileStreamPath", "(Ljava/lang/String;)Ljava/io/File;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::File _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> android::content::ContextWrapper::fileList() const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
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

::java::io::File android::content::ContextWrapper::getFilesDir() const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFilesDir", "()Ljava/io/File;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::File _ret(ret);
    return _ret;
}

::java::io::File android::content::ContextWrapper::getExternalFilesDir(const ::java::lang::String& arg0) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExternalFilesDir", "(Ljava/lang/String;)Ljava/io/File;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::File _ret(ret);
    return _ret;
}

::java::io::File android::content::ContextWrapper::getObbDir() const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObbDir", "()Ljava/io/File;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::File _ret(ret);
    return _ret;
}

::java::io::File android::content::ContextWrapper::getCacheDir() const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCacheDir", "()Ljava/io/File;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::File _ret(ret);
    return _ret;
}

::java::io::File android::content::ContextWrapper::getExternalCacheDir() const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExternalCacheDir", "()Ljava/io/File;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::File _ret(ret);
    return _ret;
}

::java::io::File android::content::ContextWrapper::getDir(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDir", "(Ljava/lang/String;I)Ljava/io/File;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::io::File _ret(ret);
    return _ret;
}

::android::database::sqlite::SQLiteDatabase android::content::ContextWrapper::openOrCreateDatabase(const ::java::lang::String& arg0, int32_t arg1, const ::android::database::sqlite::SQLiteDatabase_CursorFactory& arg2) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "openOrCreateDatabase", "(Ljava/lang/String;ILandroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::database::sqlite::SQLiteDatabase _ret(ret);
    return _ret;
}

::android::database::sqlite::SQLiteDatabase android::content::ContextWrapper::openOrCreateDatabase(const ::java::lang::String& arg0, int32_t arg1, const ::android::database::sqlite::SQLiteDatabase_CursorFactory& arg2, const ::android::database::DatabaseErrorHandler& arg3) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "openOrCreateDatabase", "(Ljava/lang/String;ILandroid/database/sqlite/SQLiteDatabase$CursorFactory;Landroid/database/DatabaseErrorHandler;)Landroid/database/sqlite/SQLiteDatabase;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::database::sqlite::SQLiteDatabase _ret(ret);
    return _ret;
}

bool android::content::ContextWrapper::deleteDatabase(const ::java::lang::String& arg0) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "deleteDatabase", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::io::File android::content::ContextWrapper::getDatabasePath(const ::java::lang::String& arg0) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDatabasePath", "(Ljava/lang/String;)Ljava/io/File;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::File _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> android::content::ContextWrapper::databaseList() const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
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

::android::graphics::drawable::Drawable android::content::ContextWrapper::getWallpaper() const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWallpaper", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::content::ContextWrapper::peekWallpaper() const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "peekWallpaper", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

int32_t android::content::ContextWrapper::getWallpaperDesiredMinimumWidth() const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWallpaperDesiredMinimumWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::content::ContextWrapper::getWallpaperDesiredMinimumHeight() const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWallpaperDesiredMinimumHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::ContextWrapper::setWallpaper(const ::android::graphics::Bitmap& arg0) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWallpaper", "(Landroid/graphics/Bitmap;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::ContextWrapper::setWallpaper(const ::java::io::InputStream& arg0) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWallpaper", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::ContextWrapper::clearWallpaper() const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearWallpaper", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::content::ContextWrapper::startActivity(const ::android::content::Intent& arg0) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "startActivity", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::ContextWrapper::startActivities(const std::vector< ::android::content::Intent>& arg0) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
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

void android::content::ContextWrapper::startIntentSender(const ::android::content::IntentSender& arg0, const ::android::content::Intent& arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "startIntentSender", "(Landroid/content/IntentSender;Landroid/content/Intent;III)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::content::ContextWrapper::sendBroadcast(const ::android::content::Intent& arg0) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendBroadcast", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::ContextWrapper::sendBroadcast(const ::android::content::Intent& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendBroadcast", "(Landroid/content/Intent;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::ContextWrapper::sendOrderedBroadcast(const ::android::content::Intent& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendOrderedBroadcast", "(Landroid/content/Intent;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::ContextWrapper::sendOrderedBroadcast(const ::android::content::Intent& arg0, const ::java::lang::String& arg1, const ::android::content::BroadcastReceiver& arg2, const ::android::os::Handler& arg3, int32_t arg4, const ::java::lang::String& arg5, const ::android::os::Bundle& arg6) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
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

void android::content::ContextWrapper::sendStickyBroadcast(const ::android::content::Intent& arg0) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendStickyBroadcast", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::ContextWrapper::sendStickyOrderedBroadcast(const ::android::content::Intent& arg0, const ::android::content::BroadcastReceiver& arg1, const ::android::os::Handler& arg2, int32_t arg3, const ::java::lang::String& arg4, const ::android::os::Bundle& arg5) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendStickyOrderedBroadcast", "(Landroid/content/Intent;Landroid/content/BroadcastReceiver;Landroid/os/Handler;ILjava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::content::ContextWrapper::removeStickyBroadcast(const ::android::content::Intent& arg0) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeStickyBroadcast", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::Intent android::content::ContextWrapper::registerReceiver(const ::android::content::BroadcastReceiver& arg0, const ::android::content::IntentFilter& arg1) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerReceiver", "(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::content::ContextWrapper::registerReceiver(const ::android::content::BroadcastReceiver& arg0, const ::android::content::IntentFilter& arg1, const ::java::lang::String& arg2, const ::android::os::Handler& arg3) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerReceiver", "(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;Ljava/lang/String;Landroid/os/Handler;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::content::Intent _ret(ret);
    return _ret;
}

void android::content::ContextWrapper::unregisterReceiver(const ::android::content::BroadcastReceiver& arg0) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterReceiver", "(Landroid/content/BroadcastReceiver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::ComponentName android::content::ContextWrapper::startService(const ::android::content::Intent& arg0) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "startService", "(Landroid/content/Intent;)Landroid/content/ComponentName;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::ComponentName _ret(ret);
    return _ret;
}

bool android::content::ContextWrapper::stopService(const ::android::content::Intent& arg0) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopService", "(Landroid/content/Intent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::content::ContextWrapper::bindService(const ::android::content::Intent& arg0, const ::android::content::ServiceConnection& arg1, int32_t arg2) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "bindService", "(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::content::ContextWrapper::unbindService(const ::android::content::ServiceConnection& arg0) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "unbindService", "(Landroid/content/ServiceConnection;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::content::ContextWrapper::startInstrumentation(const ::android::content::ComponentName& arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "startInstrumentation", "(Landroid/content/ComponentName;Ljava/lang/String;Landroid/os/Bundle;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::Object android::content::ContextWrapper::getSystemService(const ::java::lang::String& arg0) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t android::content::ContextWrapper::checkPermission(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkPermission", "(Ljava/lang/String;II)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::content::ContextWrapper::checkCallingPermission(const ::java::lang::String& arg0) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkCallingPermission", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::content::ContextWrapper::checkCallingOrSelfPermission(const ::java::lang::String& arg0) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkCallingOrSelfPermission", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::content::ContextWrapper::enforcePermission(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2, const ::java::lang::String& arg3) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "enforcePermission", "(Ljava/lang/String;IILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::content::ContextWrapper::enforceCallingPermission(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "enforceCallingPermission", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::ContextWrapper::enforceCallingOrSelfPermission(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "enforceCallingOrSelfPermission", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::ContextWrapper::grantUriPermission(const ::java::lang::String& arg0, const ::android::net::Uri& arg1, int32_t arg2) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "grantUriPermission", "(Ljava/lang/String;Landroid/net/Uri;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::content::ContextWrapper::revokeUriPermission(const ::android::net::Uri& arg0, int32_t arg1) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "revokeUriPermission", "(Landroid/net/Uri;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::content::ContextWrapper::checkUriPermission(const ::android::net::Uri& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkUriPermission", "(Landroid/net/Uri;III)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::content::ContextWrapper::checkCallingUriPermission(const ::android::net::Uri& arg0, int32_t arg1) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkCallingUriPermission", "(Landroid/net/Uri;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::content::ContextWrapper::checkCallingOrSelfUriPermission(const ::android::net::Uri& arg0, int32_t arg1) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkCallingOrSelfUriPermission", "(Landroid/net/Uri;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::content::ContextWrapper::checkUriPermission(const ::android::net::Uri& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, int32_t arg3, int32_t arg4, int32_t arg5) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkUriPermission", "(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;III)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::content::ContextWrapper::enforceUriPermission(const ::android::net::Uri& arg0, int32_t arg1, int32_t arg2, int32_t arg3, const ::java::lang::String& arg4) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "enforceUriPermission", "(Landroid/net/Uri;IIILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::content::ContextWrapper::enforceCallingUriPermission(const ::android::net::Uri& arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "enforceCallingUriPermission", "(Landroid/net/Uri;ILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::content::ContextWrapper::enforceCallingOrSelfUriPermission(const ::android::net::Uri& arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "enforceCallingOrSelfUriPermission", "(Landroid/net/Uri;ILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::content::ContextWrapper::enforceUriPermission(const ::android::net::Uri& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, int32_t arg3, int32_t arg4, int32_t arg5, const ::java::lang::String& arg6) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
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

::android::content::Context android::content::ContextWrapper::createPackageContext(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "createPackageContext", "(Ljava/lang/String;I)Landroid/content/Context;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Context _ret(ret);
    return _ret;
}

bool android::content::ContextWrapper::isRestricted() const {
    if (!::android::content::ContextWrapper::_class) ::android::content::ContextWrapper::_class = java::fetch_class("android/content/ContextWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRestricted", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

