#pragma once

#include <data/prechallenge.hpp>
#include <api/apicreatechallenge.hpp>
#include <QObject>

class ApiUploadImage;

class PostingChallenge : public QObject {
    Q_OBJECT

public:

    PostingChallenge(PreChallenge info, QObject* parent = nullptr);
    PostingChallenge(PreChallenge info, ApiUploadImage* upload, QObject* parent = nullptr);

    float progress() const;
    bool isFinished() const;

signals:

    void finished();
    void progressChanged();

private:

    void createChallenge();

private:

    PreChallenge _info;
    ApiUploadImage* _upload;
    ApiCreateChallenge* _create;

};
