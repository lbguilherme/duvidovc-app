#pragma once

#include <api/api.hpp>

class ApiFriends : public Api {
    Q_OBJECT

public:

    explicit ApiFriends(QObject* parent = nullptr);

    QString id(int index) const;
    QString name(int index) const;
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
