#pragma once

#include <api/api.hpp>

class ApiUploadImage : public Api {
    Q_OBJECT

public:

    explicit ApiUploadImage(QString sourcePath, QObject* parent = nullptr);

    QString sourcePath() const;
    QString id() const;

protected:

    void sendRequest() override;
    void processReply() override;

private:

    QString _sourcePath;
    QString _id;

};
