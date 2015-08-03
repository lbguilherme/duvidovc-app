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

    bool isFinished() const;

    QJsonObject toJson() const;
    static PostingChallenge* fromJson(const QJsonObject& obj);

    const PreChallenge& info() const { return _info; }

signals:

    void finished();

private:

    void createChallenge();

private:

    PreChallenge _info;
    ApiUploadImage* _upload;
    ApiCreateChallenge* _create;

};
