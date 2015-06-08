#pragma once

#include <QQuickImageProvider>

class DuvidoTempPhotoProvider : public QQuickImageProvider {
public:

    DuvidoTempPhotoProvider();

    QImage requestImage(const QString& id, QSize* size, const QSize& requestedSize);

};
