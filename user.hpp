#pragma once

#include <QObject>

class FriendsModel;

class User : public QObject {
    Q_OBJECT
    Q_PROPERTY(QString id READ id CONSTANT)

public:

    explicit User(QString id, QObject* parent = 0);

    QString id() const;

private:

    QString _id;

};

Q_DECLARE_METATYPE(User*)
