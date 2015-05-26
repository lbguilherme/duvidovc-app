#include "globalbackdetector.hpp"

#include <QEvent>
#include <QKeyEvent>
#include <QDebug>

bool GlobalBackDetector::eventFilter(QObject* target, QEvent* event) {
    if (event->type() == QEvent::KeyPress) {
        QKeyEvent* keyEvent = static_cast<QKeyEvent*>(event);
        if (keyEvent->key() == Qt::Key_Back) {
            qDebug() << "back";
            return true;
        }
    }

    return QObject::eventFilter(target, event);
}
