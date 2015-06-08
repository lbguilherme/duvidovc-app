#include "duvidotempphotoprovider.hpp"
#include "duvido.hpp"

DuvidoTempPhotoProvider::DuvidoTempPhotoProvider() : QQuickImageProvider(QQuickImageProvider::Image) {

}

QImage DuvidoTempPhotoProvider::requestImage(const QString&, QSize* size, const QSize& requestedSize) {
    if (size)
        *size = duvido->tempPhoto().size();

    if (requestedSize.isValid())
        return duvido->tempPhoto().scaled(requestedSize);
    else
        return duvido->tempPhoto();
}
