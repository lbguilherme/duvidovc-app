/*
#include "facebookmanager.hpp"
#include <java.lang.String.hpp>
#include <java.lang.Throwable.hpp>
#include <android.app.Activity.hpp>
#include <com.facebook.Session.hpp>
#include <com.facebook.Session_OpenRequest.hpp>
#include <com.facebook.Session_Builder.hpp>
#include <QtAndroid>
#include "context.hpp"

using namespace com::facebook;


void FacebookManager::login() try {
    createSessionIfNeeded();
    Session session = Session::getActiveSession();
    if (!session.isOpened()) {
        android::app::Activity activity(QtAndroid::androidActivity().object());
        Session_OpenRequest request(activity);
        session.openForRead(request);
    }
    qDebug() << session.toString().getBytes().data();
} catch(java::lang::Throwable& thr) {
    qDebug() << thr.obj;
    qDebug() << thr.toString().getBytes().data();
}

void FacebookManager::createSessionIfNeeded() {
    auto activeSession = Session::getActiveSession();
    if (activeSession.isNull() || activeSession.isClosed()) {
        android::app::Activity activity(QtAndroid::androidActivity().object());
        Session_Builder builder(activity);
        builder.setApplicationId(appId);
        Session session = builder.build();
        qDebug() << Session::getActiveSession().toString().getBytes().data();
        qDebug() << session.toString().getBytes().data();
        Session::setActiveSession(session);
        qDebug() << Session::getActiveSession().toString().getBytes().data();
    }
}
*/
