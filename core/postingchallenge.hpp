#pragma once

#include <QObject>
#include <api/apicreatechallenge.hpp>

class ApiUpload;

class PostingChallenge : public QObject {
    Q_OBJECT

public:

    PostingChallenge(ApiCreateChallenge::Info info, QObject* parent = nullptr);
    PostingChallenge(ApiCreateChallenge::Info info, ApiUpload* upload, QObject* parent = nullptr);

    float progress() const;
    bool isFinished() const;

signals:

    void finished();
    void progressChanged();

private:

    void createChallenge();

private:

    ApiCreateChallenge::Info _info;
    ApiUpload* _upload;
    ApiCreateChallenge* _create;

};
