#include "photorotator.hpp"
#include <QPixmap>

PhotoRotator::PhotoRotator(QObject* parent) : QObject(parent) {}

void PhotoRotator::rotate(QString filePath, int degree) {
    QPixmap(filePath).transformed(QTransform().rotate(degree)).save(filePath);
}
