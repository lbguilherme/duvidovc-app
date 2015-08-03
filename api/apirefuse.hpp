#pragma once

#include <api/api.hpp>

class ApiRefuse : public Api {
    Q_OBJECT

public:

    explicit ApiRefuse(QString id, QObject* parent = nullptr);

protected:

    void sendRequest() override;
    void processReply() override;

private:

    QString _id;

};
