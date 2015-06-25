#pragma once

#include <api/api.hpp>

class ApiUpload : public Api {
    Q_OBJECT

public:

    explicit ApiUpload(QString sourcePath, QObject* parent = nullptr);

    QString id() const;

protected:

    void sendRequest() override;
    void processReply() override;

private:

    QString _sourcePath;
    QString _id;

};
