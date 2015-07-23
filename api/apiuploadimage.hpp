#pragma once

#include <api/api.hpp>

class ApiUploadImage : public Api {
    Q_OBJECT

public:

    explicit ApiUploadImage(QString sourcePath, int orientation, QObject* parent = nullptr);

    const QString& sourcePath() const { return _sourcePath; }
    int orientation() const { return _orientation; }
    const QString& id() const { return _id; }

protected:

    void sendRequest() override;
    void processReply() override;

private:

    QString _sourcePath;
    int _orientation;
    QString _id;

};
