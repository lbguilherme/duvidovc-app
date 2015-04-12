#include "facebook.hpp"

#include <Qt>

Facebook* facebook;

#ifdef Q_OS_ANDROID
#include <QtAndroid>

#include <java.lang.String.hpp>
#include <java.util.ArrayList.hpp>
#include <android.app.Activity.hpp>
#include <com.facebook.FacebookSdk.hpp>
#include <com.facebook.login.LoginManager.hpp>
#include <com.facebook.CallbackManager.hpp>
#include <vc.duvido.FacebookStatusCallback.hpp>

using namespace java::lang;
using namespace java::util;
using namespace android::app;
using namespace com::facebook;
using namespace com::facebook::login;
using namespace vc::duvido;
#endif

Facebook::Facebook()
#ifdef Q_OS_ANDROID
    : _manager(LoginManager::getInstance())
#endif
{
#ifdef Q_OS_ANDROID
    Activity activity(QtAndroid::androidActivity().object());
    FacebookSdk::sdkInitialize(activity.getApplicationContext());
    CallbackManager callbackManager = CallbackManager_Factory::create();
    _manager.registerCallback(callbackManager, _statusCallback);
#endif
}

void Facebook::login() {
#ifdef Q_OS_ANDROID
    Activity activity(QtAndroid::androidActivity().object());
    ArrayList list;
    list.add(String("user_friends"));
    list.add(String("public_profile"));
    _manager.logInWithReadPermissions(activity, list);
#endif
}
