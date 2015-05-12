#pragma once

#include <QObject>

class FriendsModel;

class User : public QObject {
    Q_OBJECT
    Q_PROPERTY(QString id READ id CONSTANT)
    Q_PROPERTY(FriendsModel* friendsModel READ friendsModel CONSTANT)

public:

    explicit User(QString id, QObject* parent = 0);

    QString id() const;
    FriendsModel* friendsModel() const;

private:

    QString _id;
    mutable FriendsModel* _friends;

};

Q_DECLARE_METATYPE(User*)
