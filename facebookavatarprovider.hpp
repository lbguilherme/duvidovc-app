#pragma once

#include <QQuickImageProvider>

class FacebookAvatarProvider : public QQuickImageProvider {
public:

    FacebookAvatarProvider();

    QImage requestImage(const QString& id, QSize* size, const QSize& requestedSize);

};
