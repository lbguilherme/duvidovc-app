#pragma once

#include <api/api.hpp>

class ApiSendGcmToken : public Api {
    Q_OBJECT

public:

    explicit ApiSendGcmToken(QString gcmToken, QObject* parent = nullptr);

protected:

    void sendRequest() override;
    void processReply() override;

private:

    QString _gcmToken;

};
