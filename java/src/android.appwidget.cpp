#include "java-core.hpp"
#include <memory>
#include "android.appwidget.AppWidgetHost.hpp"
#include "android.appwidget.AppWidgetHostView.hpp"
#include "android.appwidget.AppWidgetManager.hpp"
#include "android.appwidget.AppWidgetProvider.hpp"
#include "android.appwidget.AppWidgetProviderInfo.hpp"
#include "android.content.ComponentName.hpp"
#include "android.content.Context.hpp"
#include "android.content.Intent.hpp"
#include "android.graphics.Rect.hpp"
#include "android.os.Parcel.hpp"
#include "android.util.AttributeSet.hpp"
#include "android.widget.FrameLayout.hpp"
#include "android.widget.RemoteViews.hpp"
#include "java.lang.String.hpp"
#include "java.util.List.hpp"

jclass android::appwidget::AppWidgetProvider::_class = nullptr;
jclass android::appwidget::AppWidgetManager::_class = nullptr;
jclass android::appwidget::AppWidgetHostView::_class = nullptr;
jclass android::appwidget::AppWidgetHost::_class = nullptr;
jclass android::appwidget::AppWidgetProviderInfo::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::appwidget::AppWidgetProvider::AppWidgetProvider() : ::java::lang::Object((jobject)0), ::android::content::BroadcastReceiver((jobject)0) {
    if (!::android::appwidget::AppWidgetProvider::_class) ::android::appwidget::AppWidgetProvider::_class = java::fetch_class("android/appwidget/AppWidgetProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::appwidget::AppWidgetProvider::onReceive(const ::android::content::Context& arg0, const ::android::content::Intent& arg1) const {
    if (!::android::appwidget::AppWidgetProvider::_class) ::android::appwidget::AppWidgetProvider::_class = java::fetch_class("android/appwidget/AppWidgetProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "onReceive", "(Landroid/content/Context;Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::appwidget::AppWidgetProvider::onUpdate(const ::android::content::Context& arg0, const ::android::appwidget::AppWidgetManager& arg1, const std::vector< int32_t>& arg2) const {
    if (!::android::appwidget::AppWidgetProvider::_class) ::android::appwidget::AppWidgetProvider::_class = java::fetch_class("android/appwidget/AppWidgetProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "onUpdate", "(Landroid/content/Context;Landroid/appwidget/AppWidgetManager;[I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::appwidget::AppWidgetProvider::onDeleted(const ::android::content::Context& arg0, const std::vector< int32_t>& arg1) const {
    if (!::android::appwidget::AppWidgetProvider::_class) ::android::appwidget::AppWidgetProvider::_class = java::fetch_class("android/appwidget/AppWidgetProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDeleted", "(Landroid/content/Context;[I)V");
    jobject _arg0 = arg0.obj;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::appwidget::AppWidgetProvider::onEnabled(const ::android::content::Context& arg0) const {
    if (!::android::appwidget::AppWidgetProvider::_class) ::android::appwidget::AppWidgetProvider::_class = java::fetch_class("android/appwidget/AppWidgetProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "onEnabled", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::appwidget::AppWidgetProvider::onDisabled(const ::android::content::Context& arg0) const {
    if (!::android::appwidget::AppWidgetProvider::_class) ::android::appwidget::AppWidgetProvider::_class = java::fetch_class("android/appwidget/AppWidgetProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDisabled", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::appwidget::AppWidgetManager android::appwidget::AppWidgetManager::getInstance(const ::android::content::Context& arg0){
    if (!::android::appwidget::AppWidgetManager::_class) ::android::appwidget::AppWidgetManager::_class = java::fetch_class("android/appwidget/AppWidgetManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Landroid/content/Context;)Landroid/appwidget/AppWidgetManager;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::appwidget::AppWidgetManager _ret(ret);
    return _ret;
}

void android::appwidget::AppWidgetManager::updateAppWidget(const std::vector< int32_t>& arg0, const ::android::widget::RemoteViews& arg1) const {
    if (!::android::appwidget::AppWidgetManager::_class) ::android::appwidget::AppWidgetManager::_class = java::fetch_class("android/appwidget/AppWidgetManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateAppWidget", "([ILandroid/widget/RemoteViews;)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::appwidget::AppWidgetManager::updateAppWidget(int32_t arg0, const ::android::widget::RemoteViews& arg1) const {
    if (!::android::appwidget::AppWidgetManager::_class) ::android::appwidget::AppWidgetManager::_class = java::fetch_class("android/appwidget/AppWidgetManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateAppWidget", "(ILandroid/widget/RemoteViews;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::appwidget::AppWidgetManager::partiallyUpdateAppWidget(const std::vector< int32_t>& arg0, const ::android::widget::RemoteViews& arg1) const {
    if (!::android::appwidget::AppWidgetManager::_class) ::android::appwidget::AppWidgetManager::_class = java::fetch_class("android/appwidget/AppWidgetManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "partiallyUpdateAppWidget", "([ILandroid/widget/RemoteViews;)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::appwidget::AppWidgetManager::partiallyUpdateAppWidget(int32_t arg0, const ::android::widget::RemoteViews& arg1) const {
    if (!::android::appwidget::AppWidgetManager::_class) ::android::appwidget::AppWidgetManager::_class = java::fetch_class("android/appwidget/AppWidgetManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "partiallyUpdateAppWidget", "(ILandroid/widget/RemoteViews;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::appwidget::AppWidgetManager::updateAppWidget(const ::android::content::ComponentName& arg0, const ::android::widget::RemoteViews& arg1) const {
    if (!::android::appwidget::AppWidgetManager::_class) ::android::appwidget::AppWidgetManager::_class = java::fetch_class("android/appwidget/AppWidgetManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateAppWidget", "(Landroid/content/ComponentName;Landroid/widget/RemoteViews;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::appwidget::AppWidgetManager::notifyAppWidgetViewDataChanged(const std::vector< int32_t>& arg0, int32_t arg1) const {
    if (!::android::appwidget::AppWidgetManager::_class) ::android::appwidget::AppWidgetManager::_class = java::fetch_class("android/appwidget/AppWidgetManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyAppWidgetViewDataChanged", "([II)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::appwidget::AppWidgetManager::notifyAppWidgetViewDataChanged(int32_t arg0, int32_t arg1) const {
    if (!::android::appwidget::AppWidgetManager::_class) ::android::appwidget::AppWidgetManager::_class = java::fetch_class("android/appwidget/AppWidgetManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyAppWidgetViewDataChanged", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::util::List android::appwidget::AppWidgetManager::getInstalledProviders() const {
    if (!::android::appwidget::AppWidgetManager::_class) ::android::appwidget::AppWidgetManager::_class = java::fetch_class("android/appwidget/AppWidgetManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInstalledProviders", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::android::appwidget::AppWidgetProviderInfo android::appwidget::AppWidgetManager::getAppWidgetInfo(int32_t arg0) const {
    if (!::android::appwidget::AppWidgetManager::_class) ::android::appwidget::AppWidgetManager::_class = java::fetch_class("android/appwidget/AppWidgetManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAppWidgetInfo", "(I)Landroid/appwidget/AppWidgetProviderInfo;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::appwidget::AppWidgetProviderInfo _ret(ret);
    return _ret;
}

void android::appwidget::AppWidgetManager::bindAppWidgetId(int32_t arg0, const ::android::content::ComponentName& arg1) const {
    if (!::android::appwidget::AppWidgetManager::_class) ::android::appwidget::AppWidgetManager::_class = java::fetch_class("android/appwidget/AppWidgetManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "bindAppWidgetId", "(ILandroid/content/ComponentName;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

std::vector< int32_t> android::appwidget::AppWidgetManager::getAppWidgetIds(const ::android::content::ComponentName& arg0) const {
    if (!::android::appwidget::AppWidgetManager::_class) ::android::appwidget::AppWidgetManager::_class = java::fetch_class("android/appwidget/AppWidgetManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAppWidgetIds", "(Landroid/content/ComponentName;)[I");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::appwidget::AppWidgetHostView::AppWidgetHostView(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::appwidget::AppWidgetHostView::_class) ::android::appwidget::AppWidgetHostView::_class = java::fetch_class("android/appwidget/AppWidgetHostView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::appwidget::AppWidgetHostView::AppWidgetHostView(const ::android::content::Context& arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::appwidget::AppWidgetHostView::_class) ::android::appwidget::AppWidgetHostView::_class = java::fetch_class("android/appwidget/AppWidgetHostView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::appwidget::AppWidgetHostView::setAppWidget(int32_t arg0, const ::android::appwidget::AppWidgetProviderInfo& arg1) const {
    if (!::android::appwidget::AppWidgetHostView::_class) ::android::appwidget::AppWidgetHostView::_class = java::fetch_class("android/appwidget/AppWidgetHostView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAppWidget", "(ILandroid/appwidget/AppWidgetProviderInfo;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::graphics::Rect android::appwidget::AppWidgetHostView::getDefaultPaddingForWidget(const ::android::content::Context& arg0, const ::android::content::ComponentName& arg1, const ::android::graphics::Rect& arg2){
    if (!::android::appwidget::AppWidgetHostView::_class) ::android::appwidget::AppWidgetHostView::_class = java::fetch_class("android/appwidget/AppWidgetHostView");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefaultPaddingForWidget", "(Landroid/content/Context;Landroid/content/ComponentName;Landroid/graphics/Rect;)Landroid/graphics/Rect;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::graphics::Rect _ret(ret);
    return _ret;
}

int32_t android::appwidget::AppWidgetHostView::getAppWidgetId() const {
    if (!::android::appwidget::AppWidgetHostView::_class) ::android::appwidget::AppWidgetHostView::_class = java::fetch_class("android/appwidget/AppWidgetHostView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAppWidgetId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::appwidget::AppWidgetProviderInfo android::appwidget::AppWidgetHostView::getAppWidgetInfo() const {
    if (!::android::appwidget::AppWidgetHostView::_class) ::android::appwidget::AppWidgetHostView::_class = java::fetch_class("android/appwidget/AppWidgetHostView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAppWidgetInfo", "()Landroid/appwidget/AppWidgetProviderInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::appwidget::AppWidgetProviderInfo _ret(ret);
    return _ret;
}

::android::widget::FrameLayout_LayoutParams android::appwidget::AppWidgetHostView::generateLayoutParams(const ::android::util::AttributeSet& arg0) const {
    if (!::android::appwidget::AppWidgetHostView::_class) ::android::appwidget::AppWidgetHostView::_class = java::fetch_class("android/appwidget/AppWidgetHostView");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateLayoutParams", "(Landroid/util/AttributeSet;)Landroid/widget/FrameLayout$LayoutParams;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::widget::FrameLayout_LayoutParams _ret(ret);
    return _ret;
}

void android::appwidget::AppWidgetHostView::updateAppWidget(const ::android::widget::RemoteViews& arg0) const {
    if (!::android::appwidget::AppWidgetHostView::_class) ::android::appwidget::AppWidgetHostView::_class = java::fetch_class("android/appwidget/AppWidgetHostView");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateAppWidget", "(Landroid/widget/RemoteViews;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::appwidget::AppWidgetHost::AppWidgetHost(const ::android::content::Context& arg0, int32_t arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::appwidget::AppWidgetHost::_class) ::android::appwidget::AppWidgetHost::_class = java::fetch_class("android/appwidget/AppWidgetHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::appwidget::AppWidgetHost::startListening() const {
    if (!::android::appwidget::AppWidgetHost::_class) ::android::appwidget::AppWidgetHost::_class = java::fetch_class("android/appwidget/AppWidgetHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "startListening", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::appwidget::AppWidgetHost::stopListening() const {
    if (!::android::appwidget::AppWidgetHost::_class) ::android::appwidget::AppWidgetHost::_class = java::fetch_class("android/appwidget/AppWidgetHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopListening", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::appwidget::AppWidgetHost::allocateAppWidgetId() const {
    if (!::android::appwidget::AppWidgetHost::_class) ::android::appwidget::AppWidgetHost::_class = java::fetch_class("android/appwidget/AppWidgetHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "allocateAppWidgetId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::appwidget::AppWidgetHost::deleteAppWidgetId(int32_t arg0) const {
    if (!::android::appwidget::AppWidgetHost::_class) ::android::appwidget::AppWidgetHost::_class = java::fetch_class("android/appwidget/AppWidgetHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "deleteAppWidgetId", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::appwidget::AppWidgetHost::deleteHost() const {
    if (!::android::appwidget::AppWidgetHost::_class) ::android::appwidget::AppWidgetHost::_class = java::fetch_class("android/appwidget/AppWidgetHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "deleteHost", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::appwidget::AppWidgetHost::deleteAllHosts(){
    if (!::android::appwidget::AppWidgetHost::_class) ::android::appwidget::AppWidgetHost::_class = java::fetch_class("android/appwidget/AppWidgetHost");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "deleteAllHosts", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

::android::appwidget::AppWidgetHostView android::appwidget::AppWidgetHost::createView(const ::android::content::Context& arg0, int32_t arg1, const ::android::appwidget::AppWidgetProviderInfo& arg2) const {
    if (!::android::appwidget::AppWidgetHost::_class) ::android::appwidget::AppWidgetHost::_class = java::fetch_class("android/appwidget/AppWidgetHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "createView", "(Landroid/content/Context;ILandroid/appwidget/AppWidgetProviderInfo;)Landroid/appwidget/AppWidgetHostView;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::appwidget::AppWidgetHostView _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::appwidget::AppWidgetProviderInfo::AppWidgetProviderInfo() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::appwidget::AppWidgetProviderInfo::_class) ::android::appwidget::AppWidgetProviderInfo::_class = java::fetch_class("android/appwidget/AppWidgetProviderInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::appwidget::AppWidgetProviderInfo::AppWidgetProviderInfo(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::appwidget::AppWidgetProviderInfo::_class) ::android::appwidget::AppWidgetProviderInfo::_class = java::fetch_class("android/appwidget/AppWidgetProviderInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::appwidget::AppWidgetProviderInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::appwidget::AppWidgetProviderInfo::_class) ::android::appwidget::AppWidgetProviderInfo::_class = java::fetch_class("android/appwidget/AppWidgetProviderInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::appwidget::AppWidgetProviderInfo::describeContents() const {
    if (!::android::appwidget::AppWidgetProviderInfo::_class) ::android::appwidget::AppWidgetProviderInfo::_class = java::fetch_class("android/appwidget/AppWidgetProviderInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::appwidget::AppWidgetProviderInfo::toString() const {
    if (!::android::appwidget::AppWidgetProviderInfo::_class) ::android::appwidget::AppWidgetProviderInfo::_class = java::fetch_class("android/appwidget/AppWidgetProviderInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

