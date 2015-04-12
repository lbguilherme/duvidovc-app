#include <vc.duvido.FacebookStatusCallback.hpp>
#include <facebook.hpp>

using namespace vc::duvido;
using namespace com::facebook;
using namespace java::lang;

void FacebookStatusCallback::onSuccess(const Object& obj) {
    (void)obj;
    emit facebook->javaCallbackSuccess();
}

void FacebookStatusCallback::onError(const FacebookException& ex) {
    (void)ex;
    emit facebook->javaCallbackError();
}

void FacebookStatusCallback::onCancel() {
    emit facebook->javaCallbackCancel();
}
