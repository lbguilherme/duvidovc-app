#include "globalbackdetector.hpp"
#include "duvido.hpp"

#include <QEvent>
#include <QKeyEvent>

bool GlobalBackDetector::eventFilter(QObject* target, QEvent* event) {
    if (event->type() == QEvent::KeyPress) {
        QKeyEvent* keyEvent = static_cast<QKeyEvent*>(event);
        if (keyEvent->key() == Qt::Key_Back) {
            emit duvido->backPressed();
            return true;
        }
    }

    return QObject::eventFilter(target, event);
}
