#include "facebook.hpp"

#include <Qt>

#ifdef Q_OS_ANDROID
#include <QtAndroid>

#include <java.lang.String.hpp>
#include <java.util.ArrayList.hpp>
#include <android.app.Activity.hpp>
#include <com.facebook.FacebookSdk.hpp>
#include <com.facebook.login.LoginManager.hpp>

using namespace java::lang;
using namespace java::util;
using namespace android::app;
using namespace com::facebook;
using namespace com::facebook::login;

#include <QDebug>
#include <java.lang.String.hpp>

QDebug& operator<<(QDebug s, java::lang::String str) {
    auto bytes = str.getBytes();
    bytes.push_back(0);
    return s << QString::fromUtf8((const char*)bytes.data());
}
#endif

Facebook::Facebook() {
#ifdef Q_OS_ANDROID
    Activity activity(QtAndroid::androidActivity().object());
    FacebookSdk::sdkInitialize(activity.getApplicationContext());
#endif
}

void Facebook::login() {
#ifdef Q_OS_ANDROID
    Activity activity(QtAndroid::androidActivity().object());
    LoginManager manager = LoginManager::getInstance();
    ArrayList list;
    list.add(String("user_friends"));
    list.add(String("public_profile"));
    manager.logInWithReadPermissions(activity, list);
#endif
}
