#pragma once

#include <QObject>

class User : public QObject {
    Q_OBJECT
    Q_PROPERTY(QString id READ id CONSTANT)
    Q_PROPERTY(QString name READ name CONSTANT)

public:

    explicit User(QString id, QString name);

    QString id() const;
    QString name() const;

private:

    QString _id;
    QString _name;

};
