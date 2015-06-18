#pragma once

#include "api.hpp"

class ApiCreateChallenge : public Api {
    Q_OBJECT

public:

    explicit ApiCreateChallenge(QString title, QString description, QString reward, QStringList targets,
                                unsigned duration, QString imageId, QObject* parent = nullptr);

protected:

    void processReply();

};
