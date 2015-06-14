#pragma once

#include <QQuickImageProvider>

class AvatarProvider : public QQuickImageProvider {
public:

    AvatarProvider();

    QPixmap requestPixmap(const QString& id, QSize* size, const QSize& requestedSize);

};
