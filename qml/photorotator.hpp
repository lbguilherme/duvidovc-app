#pragma once

#include <QObject>

class QQuickItem;

class PhotoRotator : public QObject {
    Q_OBJECT

public:

    PhotoRotator(QObject* parent = nullptr);

    Q_INVOKABLE void rotate(QString filePath, int degree);

};
