#include <vc.duvido.gcm.RegistrationIntentService.hpp>
#include <java.lang.String.hpp>
#include <core/duvido.hpp>

using namespace vc::duvido::gcm;
using namespace java::lang;

void RegistrationIntentService::sendRegistrationToServer(const ::java::lang::String& gcmToken) const {
    Duvido::staticMetaObject.invokeMethod(::duvido, "setGcmToken", Qt::QueuedConnection, Q_ARG(QString, gcmToken));
}
