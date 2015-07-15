#pragma once

#include <api/api.hpp>

class ApiFeed : public Api {
    Q_OBJECT

public:

    struct Info {
        QString id;
        QString owner;
        QString ownerName;
        QString title;
        QString description;
        QString reward;
        unsigned duration;
        QString image;
    };

    explicit ApiFeed(QObject* parent = nullptr);

    const Info& operator[](int index) const;
    int count() const;

protected:

    void sendRequest() override;
    void processReply() override;

private:

    QList<Info> _challenges;

};
