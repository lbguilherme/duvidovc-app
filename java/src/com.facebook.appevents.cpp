#include "java-core.hpp"
#include <memory>
#include "android.content.Context.hpp"
#include "android.os.Bundle.hpp"
#include "com.facebook.AccessToken.hpp"
#include "com.facebook.GraphRequest.hpp"
#include "com.facebook.appevents.AppEventsConstants.hpp"
#include "com.facebook.appevents.AppEventsLogger.hpp"
#include "com.facebook.appevents.FacebookTimeSpentData.hpp"
#include "com.facebook.internal.AttributionIdentifiers.hpp"
#include "java.lang.Double.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.math.BigDecimal.hpp"
#include "java.util.Currency.hpp"
#include "java.util.List.hpp"
#include "java.util.Map.hpp"
#include "java.util.Set.hpp"
#include "org.json.JSONObject.hpp"

jclass com::facebook::appevents::AppEventsConstants::_class = nullptr;
jclass com::facebook::appevents::AppEventsLogger_AccessTokenAppIdPair_SerializationProxyV1::_class = nullptr;
jclass com::facebook::appevents::AppEventsLogger_AccessTokenAppIdPair::_class = nullptr;
jclass com::facebook::appevents::AppEventsLogger_AppEvent_SerializationProxyV1::_class = nullptr;
jclass com::facebook::appevents::AppEventsLogger_AppEvent::_class = nullptr;
jclass com::facebook::appevents::AppEventsLogger_FlushBehavior::_class = nullptr;
jclass com::facebook::appevents::AppEventsLogger_FlushReason::_class = nullptr;
jclass com::facebook::appevents::AppEventsLogger_FlushResult::_class = nullptr;
jclass com::facebook::appevents::AppEventsLogger_FlushStatistics::_class = nullptr;
jclass com::facebook::appevents::AppEventsLogger_PersistedAppSessionInfo::_class = nullptr;
jclass com::facebook::appevents::AppEventsLogger_PersistedEvents::_class = nullptr;
jclass com::facebook::appevents::AppEventsLogger_SessionEventsState::_class = nullptr;
jclass com::facebook::appevents::AppEventsLogger::_class = nullptr;
jclass com::facebook::appevents::FacebookTimeSpentData_SerializationProxyV1::_class = nullptr;
jclass com::facebook::appevents::FacebookTimeSpentData_SerializationProxyV2::_class = nullptr;
jclass com::facebook::appevents::FacebookTimeSpentData::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::appevents::AppEventsConstants::AppEventsConstants() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::appevents::AppEventsConstants::_class) ::com::facebook::appevents::AppEventsConstants::_class = java::fetch_class("com/facebook/appevents/AppEventsConstants");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t com::facebook::appevents::AppEventsLogger_AccessTokenAppIdPair::hashCode() const {
    if (!::com::facebook::appevents::AppEventsLogger_AccessTokenAppIdPair::_class) ::com::facebook::appevents::AppEventsLogger_AccessTokenAppIdPair::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger$AccessTokenAppIdPair");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool com::facebook::appevents::AppEventsLogger_AccessTokenAppIdPair::equals(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::appevents::AppEventsLogger_AccessTokenAppIdPair::_class) ::com::facebook::appevents::AppEventsLogger_AccessTokenAppIdPair::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger$AccessTokenAppIdPair");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::appevents::AppEventsLogger_AppEvent::AppEventsLogger_AppEvent(const ::android::content::Context& arg0, const ::java::lang::String& arg1, const ::java::lang::Double& arg2, const ::android::os::Bundle& arg3, bool arg4) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::com::facebook::appevents::AppEventsLogger_AppEvent::_class) ::com::facebook::appevents::AppEventsLogger_AppEvent::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger$AppEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Double;Landroid/os/Bundle;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    bool _arg4 = arg4;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

::java::lang::String com::facebook::appevents::AppEventsLogger_AppEvent::getName() const {
    if (!::com::facebook::appevents::AppEventsLogger_AppEvent::_class) ::com::facebook::appevents::AppEventsLogger_AppEvent::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger$AppEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool com::facebook::appevents::AppEventsLogger_AppEvent::getIsImplicit() const {
    if (!::com::facebook::appevents::AppEventsLogger_AppEvent::_class) ::com::facebook::appevents::AppEventsLogger_AppEvent::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger$AppEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIsImplicit", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::org::json::JSONObject com::facebook::appevents::AppEventsLogger_AppEvent::getJSONObject() const {
    if (!::com::facebook::appevents::AppEventsLogger_AppEvent::_class) ::com::facebook::appevents::AppEventsLogger_AppEvent::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger$AppEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getJSONObject", "()Lorg/json/JSONObject;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::json::JSONObject _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::appevents::AppEventsLogger_AppEvent::toString() const {
    if (!::com::facebook::appevents::AppEventsLogger_AppEvent::_class) ::com::facebook::appevents::AppEventsLogger_AppEvent::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger$AppEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::com::facebook::appevents::AppEventsLogger_FlushBehavior> com::facebook::appevents::AppEventsLogger_FlushBehavior::values(){
    if (!::com::facebook::appevents::AppEventsLogger_FlushBehavior::_class) ::com::facebook::appevents::AppEventsLogger_FlushBehavior::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger$FlushBehavior");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/appevents/AppEventsLogger$FlushBehavior;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::appevents::AppEventsLogger_FlushBehavior> _ret(rets, ::com::facebook::appevents::AppEventsLogger_FlushBehavior((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::appevents::AppEventsLogger_FlushBehavior retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::appevents::AppEventsLogger_FlushBehavior com::facebook::appevents::AppEventsLogger_FlushBehavior::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::appevents::AppEventsLogger_FlushBehavior::_class) ::com::facebook::appevents::AppEventsLogger_FlushBehavior::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger$FlushBehavior");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/appevents/AppEventsLogger$FlushBehavior;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::appevents::AppEventsLogger_FlushBehavior _ret(ret);
    return _ret;
}

std::vector< ::com::facebook::appevents::AppEventsLogger_FlushReason> com::facebook::appevents::AppEventsLogger_FlushReason::values(){
    if (!::com::facebook::appevents::AppEventsLogger_FlushReason::_class) ::com::facebook::appevents::AppEventsLogger_FlushReason::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger$FlushReason");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/appevents/AppEventsLogger$FlushReason;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::appevents::AppEventsLogger_FlushReason> _ret(rets, ::com::facebook::appevents::AppEventsLogger_FlushReason((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::appevents::AppEventsLogger_FlushReason retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::appevents::AppEventsLogger_FlushReason com::facebook::appevents::AppEventsLogger_FlushReason::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::appevents::AppEventsLogger_FlushReason::_class) ::com::facebook::appevents::AppEventsLogger_FlushReason::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger$FlushReason");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/appevents/AppEventsLogger$FlushReason;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::appevents::AppEventsLogger_FlushReason _ret(ret);
    return _ret;
}

std::vector< ::com::facebook::appevents::AppEventsLogger_FlushResult> com::facebook::appevents::AppEventsLogger_FlushResult::values(){
    if (!::com::facebook::appevents::AppEventsLogger_FlushResult::_class) ::com::facebook::appevents::AppEventsLogger_FlushResult::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger$FlushResult");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/appevents/AppEventsLogger$FlushResult;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::appevents::AppEventsLogger_FlushResult> _ret(rets, ::com::facebook::appevents::AppEventsLogger_FlushResult((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::appevents::AppEventsLogger_FlushResult retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::appevents::AppEventsLogger_FlushResult com::facebook::appevents::AppEventsLogger_FlushResult::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::appevents::AppEventsLogger_FlushResult::_class) ::com::facebook::appevents::AppEventsLogger_FlushResult::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger$FlushResult");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/appevents/AppEventsLogger$FlushResult;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::appevents::AppEventsLogger_FlushResult _ret(ret);
    return _ret;
}

::com::facebook::appevents::AppEventsLogger_PersistedEvents com::facebook::appevents::AppEventsLogger_PersistedEvents::readAndClearStore(const ::android::content::Context& arg0){
    if (!::com::facebook::appevents::AppEventsLogger_PersistedEvents::_class) ::com::facebook::appevents::AppEventsLogger_PersistedEvents::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger$PersistedEvents");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "readAndClearStore", "(Landroid/content/Context;)Lcom/facebook/appevents/AppEventsLogger$PersistedEvents;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::appevents::AppEventsLogger_PersistedEvents _ret(ret);
    return _ret;
}

void com::facebook::appevents::AppEventsLogger_PersistedEvents::persistEvents(const ::android::content::Context& arg0, const ::com::facebook::appevents::AppEventsLogger_AccessTokenAppIdPair& arg1, const ::com::facebook::appevents::AppEventsLogger_SessionEventsState& arg2){
    if (!::com::facebook::appevents::AppEventsLogger_PersistedEvents::_class) ::com::facebook::appevents::AppEventsLogger_PersistedEvents::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger$PersistedEvents");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "persistEvents", "(Landroid/content/Context;Lcom/facebook/appevents/AppEventsLogger$AccessTokenAppIdPair;Lcom/facebook/appevents/AppEventsLogger$SessionEventsState;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void com::facebook::appevents::AppEventsLogger_PersistedEvents::persistEvents(const ::android::content::Context& arg0, const ::java::util::Map& arg1){
    if (!::com::facebook::appevents::AppEventsLogger_PersistedEvents::_class) ::com::facebook::appevents::AppEventsLogger_PersistedEvents::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger$PersistedEvents");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "persistEvents", "(Landroid/content/Context;Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::util::Set com::facebook::appevents::AppEventsLogger_PersistedEvents::keySet() const {
    if (!::com::facebook::appevents::AppEventsLogger_PersistedEvents::_class) ::com::facebook::appevents::AppEventsLogger_PersistedEvents::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger$PersistedEvents");
    static jmethodID mid = java::jni->GetMethodID(_class, "keySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::List com::facebook::appevents::AppEventsLogger_PersistedEvents::getEvents(const ::com::facebook::appevents::AppEventsLogger_AccessTokenAppIdPair& arg0) const {
    if (!::com::facebook::appevents::AppEventsLogger_PersistedEvents::_class) ::com::facebook::appevents::AppEventsLogger_PersistedEvents::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger$PersistedEvents");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEvents", "(Lcom/facebook/appevents/AppEventsLogger$AccessTokenAppIdPair;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

void com::facebook::appevents::AppEventsLogger_PersistedEvents::addEvents(const ::com::facebook::appevents::AppEventsLogger_AccessTokenAppIdPair& arg0, const ::java::util::List& arg1) const {
    if (!::com::facebook::appevents::AppEventsLogger_PersistedEvents::_class) ::com::facebook::appevents::AppEventsLogger_PersistedEvents::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger$PersistedEvents");
    static jmethodID mid = java::jni->GetMethodID(_class, "addEvents", "(Lcom/facebook/appevents/AppEventsLogger$AccessTokenAppIdPair;Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::appevents::AppEventsLogger_SessionEventsState::AppEventsLogger_SessionEventsState(const ::com::facebook::internal::AttributionIdentifiers& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::appevents::AppEventsLogger_SessionEventsState::_class) ::com::facebook::appevents::AppEventsLogger_SessionEventsState::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger$SessionEventsState");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lcom/facebook/internal/AttributionIdentifiers;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void com::facebook::appevents::AppEventsLogger_SessionEventsState::addEvent(const ::com::facebook::appevents::AppEventsLogger_AppEvent& arg0) const {
    if (!::com::facebook::appevents::AppEventsLogger_SessionEventsState::_class) ::com::facebook::appevents::AppEventsLogger_SessionEventsState::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger$SessionEventsState");
    static jmethodID mid = java::jni->GetMethodID(_class, "addEvent", "(Lcom/facebook/appevents/AppEventsLogger$AppEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t com::facebook::appevents::AppEventsLogger_SessionEventsState::getAccumulatedEventCount() const {
    if (!::com::facebook::appevents::AppEventsLogger_SessionEventsState::_class) ::com::facebook::appevents::AppEventsLogger_SessionEventsState::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger$SessionEventsState");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccumulatedEventCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::appevents::AppEventsLogger_SessionEventsState::clearInFlightAndStats(bool arg0) const {
    if (!::com::facebook::appevents::AppEventsLogger_SessionEventsState::_class) ::com::facebook::appevents::AppEventsLogger_SessionEventsState::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger$SessionEventsState");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearInFlightAndStats", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t com::facebook::appevents::AppEventsLogger_SessionEventsState::populateRequest(const ::com::facebook::GraphRequest& arg0, bool arg1, bool arg2) const {
    if (!::com::facebook::appevents::AppEventsLogger_SessionEventsState::_class) ::com::facebook::appevents::AppEventsLogger_SessionEventsState::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger$SessionEventsState");
    static jmethodID mid = java::jni->GetMethodID(_class, "populateRequest", "(Lcom/facebook/GraphRequest;ZZ)I");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    bool _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::util::List com::facebook::appevents::AppEventsLogger_SessionEventsState::getEventsToPersist() const {
    if (!::com::facebook::appevents::AppEventsLogger_SessionEventsState::_class) ::com::facebook::appevents::AppEventsLogger_SessionEventsState::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger$SessionEventsState");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEventsToPersist", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

void com::facebook::appevents::AppEventsLogger_SessionEventsState::accumulatePersistedEvents(const ::java::util::List& arg0) const {
    if (!::com::facebook::appevents::AppEventsLogger_SessionEventsState::_class) ::com::facebook::appevents::AppEventsLogger_SessionEventsState::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger$SessionEventsState");
    static jmethodID mid = java::jni->GetMethodID(_class, "accumulatePersistedEvents", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::appevents::AppEventsLogger::activateApp(const ::android::content::Context& arg0){
    if (!::com::facebook::appevents::AppEventsLogger::_class) ::com::facebook::appevents::AppEventsLogger::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "activateApp", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void com::facebook::appevents::AppEventsLogger::activateApp(const ::android::content::Context& arg0, const ::java::lang::String& arg1){
    if (!::com::facebook::appevents::AppEventsLogger::_class) ::com::facebook::appevents::AppEventsLogger::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "activateApp", "(Landroid/content/Context;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void com::facebook::appevents::AppEventsLogger::deactivateApp(const ::android::content::Context& arg0){
    if (!::com::facebook::appevents::AppEventsLogger::_class) ::com::facebook::appevents::AppEventsLogger::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "deactivateApp", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void com::facebook::appevents::AppEventsLogger::deactivateApp(const ::android::content::Context& arg0, const ::java::lang::String& arg1){
    if (!::com::facebook::appevents::AppEventsLogger::_class) ::com::facebook::appevents::AppEventsLogger::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "deactivateApp", "(Landroid/content/Context;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::com::facebook::appevents::AppEventsLogger com::facebook::appevents::AppEventsLogger::newLogger(const ::android::content::Context& arg0){
    if (!::com::facebook::appevents::AppEventsLogger::_class) ::com::facebook::appevents::AppEventsLogger::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newLogger", "(Landroid/content/Context;)Lcom/facebook/appevents/AppEventsLogger;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::appevents::AppEventsLogger _ret(ret);
    return _ret;
}

::com::facebook::appevents::AppEventsLogger com::facebook::appevents::AppEventsLogger::newLogger(const ::android::content::Context& arg0, const ::com::facebook::AccessToken& arg1){
    if (!::com::facebook::appevents::AppEventsLogger::_class) ::com::facebook::appevents::AppEventsLogger::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newLogger", "(Landroid/content/Context;Lcom/facebook/AccessToken;)Lcom/facebook/appevents/AppEventsLogger;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::com::facebook::appevents::AppEventsLogger _ret(ret);
    return _ret;
}

::com::facebook::appevents::AppEventsLogger com::facebook::appevents::AppEventsLogger::newLogger(const ::android::content::Context& arg0, const ::java::lang::String& arg1, const ::com::facebook::AccessToken& arg2){
    if (!::com::facebook::appevents::AppEventsLogger::_class) ::com::facebook::appevents::AppEventsLogger::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newLogger", "(Landroid/content/Context;Ljava/lang/String;Lcom/facebook/AccessToken;)Lcom/facebook/appevents/AppEventsLogger;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::com::facebook::appevents::AppEventsLogger _ret(ret);
    return _ret;
}

::com::facebook::appevents::AppEventsLogger com::facebook::appevents::AppEventsLogger::newLogger(const ::android::content::Context& arg0, const ::java::lang::String& arg1){
    if (!::com::facebook::appevents::AppEventsLogger::_class) ::com::facebook::appevents::AppEventsLogger::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newLogger", "(Landroid/content/Context;Ljava/lang/String;)Lcom/facebook/appevents/AppEventsLogger;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::com::facebook::appevents::AppEventsLogger _ret(ret);
    return _ret;
}

::com::facebook::appevents::AppEventsLogger_FlushBehavior com::facebook::appevents::AppEventsLogger::getFlushBehavior(){
    if (!::com::facebook::appevents::AppEventsLogger::_class) ::com::facebook::appevents::AppEventsLogger::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getFlushBehavior", "()Lcom/facebook/appevents/AppEventsLogger$FlushBehavior;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::com::facebook::appevents::AppEventsLogger_FlushBehavior _ret(ret);
    return _ret;
}

void com::facebook::appevents::AppEventsLogger::setFlushBehavior(const ::com::facebook::appevents::AppEventsLogger_FlushBehavior& arg0){
    if (!::com::facebook::appevents::AppEventsLogger::_class) ::com::facebook::appevents::AppEventsLogger::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setFlushBehavior", "(Lcom/facebook/appevents/AppEventsLogger$FlushBehavior;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void com::facebook::appevents::AppEventsLogger::logEvent(const ::java::lang::String& arg0) const {
    if (!::com::facebook::appevents::AppEventsLogger::_class) ::com::facebook::appevents::AppEventsLogger::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger");
    static jmethodID mid = java::jni->GetMethodID(_class, "logEvent", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::appevents::AppEventsLogger::logEvent(const ::java::lang::String& arg0, double arg1) const {
    if (!::com::facebook::appevents::AppEventsLogger::_class) ::com::facebook::appevents::AppEventsLogger::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger");
    static jmethodID mid = java::jni->GetMethodID(_class, "logEvent", "(Ljava/lang/String;D)V");
    jobject _arg0 = arg0.obj;
    double _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::appevents::AppEventsLogger::logEvent(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::com::facebook::appevents::AppEventsLogger::_class) ::com::facebook::appevents::AppEventsLogger::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger");
    static jmethodID mid = java::jni->GetMethodID(_class, "logEvent", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::appevents::AppEventsLogger::logEvent(const ::java::lang::String& arg0, double arg1, const ::android::os::Bundle& arg2) const {
    if (!::com::facebook::appevents::AppEventsLogger::_class) ::com::facebook::appevents::AppEventsLogger::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger");
    static jmethodID mid = java::jni->GetMethodID(_class, "logEvent", "(Ljava/lang/String;DLandroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    double _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void com::facebook::appevents::AppEventsLogger::logPurchase(const ::java::math::BigDecimal& arg0, const ::java::util::Currency& arg1) const {
    if (!::com::facebook::appevents::AppEventsLogger::_class) ::com::facebook::appevents::AppEventsLogger::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger");
    static jmethodID mid = java::jni->GetMethodID(_class, "logPurchase", "(Ljava/math/BigDecimal;Ljava/util/Currency;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::appevents::AppEventsLogger::logPurchase(const ::java::math::BigDecimal& arg0, const ::java::util::Currency& arg1, const ::android::os::Bundle& arg2) const {
    if (!::com::facebook::appevents::AppEventsLogger::_class) ::com::facebook::appevents::AppEventsLogger::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger");
    static jmethodID mid = java::jni->GetMethodID(_class, "logPurchase", "(Ljava/math/BigDecimal;Ljava/util/Currency;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void com::facebook::appevents::AppEventsLogger::flush() const {
    if (!::com::facebook::appevents::AppEventsLogger::_class) ::com::facebook::appevents::AppEventsLogger::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::appevents::AppEventsLogger::onContextStop(){
    if (!::com::facebook::appevents::AppEventsLogger::_class) ::com::facebook::appevents::AppEventsLogger::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "onContextStop", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

bool com::facebook::appevents::AppEventsLogger::isValidForAccessToken(const ::com::facebook::AccessToken& arg0) const {
    if (!::com::facebook::appevents::AppEventsLogger::_class) ::com::facebook::appevents::AppEventsLogger::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger");
    static jmethodID mid = java::jni->GetMethodID(_class, "isValidForAccessToken", "(Lcom/facebook/AccessToken;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void com::facebook::appevents::AppEventsLogger::logSdkEvent(const ::java::lang::String& arg0, const ::java::lang::Double& arg1, const ::android::os::Bundle& arg2) const {
    if (!::com::facebook::appevents::AppEventsLogger::_class) ::com::facebook::appevents::AppEventsLogger::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger");
    static jmethodID mid = java::jni->GetMethodID(_class, "logSdkEvent", "(Ljava/lang/String;Ljava/lang/Double;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::String com::facebook::appevents::AppEventsLogger::getApplicationId() const {
    if (!::com::facebook::appevents::AppEventsLogger::_class) ::com::facebook::appevents::AppEventsLogger::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplicationId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::appevents::AppEventsLogger::getAnonymousAppDeviceGUID(const ::android::content::Context& arg0){
    if (!::com::facebook::appevents::AppEventsLogger::_class) ::com::facebook::appevents::AppEventsLogger::_class = java::fetch_class("com/facebook/appevents/AppEventsLogger");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAnonymousAppDeviceGUID", "(Landroid/content/Context;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

