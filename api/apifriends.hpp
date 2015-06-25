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

    void sendRequest() override;
    void processReply() override;

private:

    struct FriendInfo {
        QString id;
        QString name;
    };

    QList<FriendInfo> _friends;

};
