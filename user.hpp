#pragma once

#include <QObject>

class FriendsModel;

class User : public QObject {
    Q_OBJECT
    Q_PROPERTY(QString id READ id CONSTANT)
    Q_PROPERTY(QString name READ name CONSTANT)

public:

    explicit User(QString id, QString name, QObject* parent = 0);

    QString id() const;
    QString name() const;

private:

    QString _id;
    QString _name;

};
