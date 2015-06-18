#pragma once

#include "api.hpp"

class User;

class ApiFriends : public Api {
    Q_OBJECT

public:

    explicit ApiFriends(QObject* parent = nullptr);

    QList<User*> friends() const;
    int count() const;

protected:

    void processReply();

private:

    struct FriendInfo {
        QString id;
        QString name;
    };

    QList<FriendInfo> _friends;

};
