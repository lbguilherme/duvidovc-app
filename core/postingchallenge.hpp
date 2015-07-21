#pragma once

#include <data/prechallenge.hpp>
#include <api/apicreatechallenge.hpp>
#include <QObject>

class ApiUpload;

class PostingChallenge : public QObject {
    Q_OBJECT

public:

    PostingChallenge(PreChallenge info, QObject* parent = nullptr);
    PostingChallenge(PreChallenge info, ApiUpload* upload, QObject* parent = nullptr);

    float progress() const;
    bool isFinished() const;

signals:

    void finished();
    void progressChanged();

private:

    void createChallenge();

private:

    PreChallenge _info;
    ApiUpload* _upload;
    ApiCreateChallenge* _create;

};
