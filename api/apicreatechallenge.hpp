#pragma once

#include <api/api.hpp>

class ApiCreateChallenge : public Api {
    Q_OBJECT

public:

    struct Info {
        QString title;
        QString description;
        QString reward;
        QStringList targets;
        unsigned duration;
        QString imageId;
    };

    explicit ApiCreateChallenge(Info info, QObject* parent = nullptr);

protected:

    void sendRequest() override;
    void processReply() override;

private:

    Info _info;

};
