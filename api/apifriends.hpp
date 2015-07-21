#pragma once

#include <api/api.hpp>
#include <data/user.hpp>

class ApiFriends : public Api {
    Q_OBJECT

public:

    explicit ApiFriends(QObject* parent = nullptr);

    const QList<User>& friends() const { return _friends; }

protected:

    void sendRequest() override;
    void processReply() override;

private:

    QList<User> _friends;

};
