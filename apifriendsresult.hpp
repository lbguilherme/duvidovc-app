#pragma once

#include "apiresult.hpp"

class User;

class ApiFriendsResult : public ApiResult {
    Q_OBJECT

public:

    using ApiResult::ApiResult;

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
