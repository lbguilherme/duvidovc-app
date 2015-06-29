#pragma once

#include <api/api.hpp>

class ApiFriends : public Api {
    Q_OBJECT

public:

    struct Info {
        QString id;
        QString name;
    };

    explicit ApiFriends(QObject* parent = nullptr);

    const Info& operator[](int index) const;
    int count() const;

protected:

    void sendRequest() override;
    void processReply() override;

private:

    QList<Info> _friends;

};
