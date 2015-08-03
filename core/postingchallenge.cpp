#include <core/postingchallenge.hpp>
#include <api/apiuploadimage.hpp>
#include <QFile>
#include <QDir>
#include <QJsonObject>

PostingChallenge::PostingChallenge(PreChallenge info, QObject* parent)
    : QObject(parent), _info(info), _upload(nullptr), _create(nullptr) {
    createChallenge();
}

PostingChallenge::PostingChallenge(PreChallenge info, ApiUploadImage* upload, QObject* parent)
    : QObject(parent), _info(info), _upload(upload), _create(nullptr) {

    Q_ASSERT(info.imageId.isEmpty());
    Q_ASSERT(_upload);

    _upload->setParent(this);
    if (_upload->isFinished()) {
        createChallenge();
    } else {
        connect(_upload, &Api::finished, this, &PostingChallenge::createChallenge);
        connect(_upload, &Api::uploadProgressChanged, [this]{
            emit progressChanged();
        });
    }
}

float PostingChallenge::progress() const {
    if (_create && _create->isFinished())
        return 1.0;
    else if (!_upload || _upload->isFinished())
        return 0;
    else
        return _upload->uploadProgress() * 0.95;
}

bool PostingChallenge::isFinished() const {
    return _create && _create->isFinished();
}

void PostingChallenge::createChallenge() {
    if (_upload)
        _info.imageId = _upload->id();

    _upload->deleteLater();
    _upload = nullptr;

    _create = new ApiCreateChallenge(_info, this);
    connect(_create, &Api::finished, [this]{
        emit progressChanged();
        emit finished();
    });
}

QJsonObject PostingChallenge::toJson() const {
    QJsonObject obj = _info.toJson();
    if (_upload) {
        obj["imageSourcePath"] = _upload->sourcePath();
        obj["imageOrientation"] = _upload->orientation();
    }

    return _info.toJson();
}

PostingChallenge* PostingChallenge::fromJson(const QJsonObject& obj) {
    PreChallenge info;
    info.fromJson(obj);
    QString sourcePath = obj["imageSourcePath"].toString();
    int orientation = obj["imageOrientation"].toDouble();

    if (sourcePath.isEmpty())
        return new PostingChallenge(info);
    else
        return new PostingChallenge(info, new ApiUploadImage(sourcePath, orientation));
}
