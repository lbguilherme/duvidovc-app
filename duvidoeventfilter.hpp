#pragma once

#include <QObject>

class DuvidoEventFilter : public QObject {
    Q_OBJECT

public:

    using QObject::QObject;

protected:

    virtual bool eventFilter(QObject* target, QEvent* event);

};
