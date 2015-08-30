#pragma once

#include <data/presubmission.hpp>
#include <api/apisendsubmission.hpp>
#include <QObject>

class ApiUploadImage;

class PostingSubmission : public QObject {
    Q_OBJECT

public:

    PostingSubmission(PreSubmission info, ApiUploadImage* upload, QObject* parent = nullptr);

    bool isFinished() const;

    QJsonObject toJson() const;
    static PostingSubmission* fromJson(const QJsonObject& obj);

    const PreSubmission& info() const { return _info; }

signals:

    void finished();

private:

    void sendSubmission();

private:

    PreSubmission _info;
    ApiUploadImage* _upload;
    ApiSendSubmission* _send;
};
