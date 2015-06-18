#pragma once

#include "api.hpp"

class ApiUpload : public Api {
    Q_OBJECT

public:

    explicit ApiUpload(QString sourcePath, QObject* parent = nullptr);

    QString id();

protected:

    void processReply();

private:

    QString _id;

};
