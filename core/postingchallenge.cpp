#include <core/postingchallenge.hpp>
#include <api/apiupload.hpp>

PostingChallenge::PostingChallenge(ApiCreateChallenge::Info info, QObject* parent)
    : QObject(parent), _info(info), _upload(nullptr), _create(nullptr) {

    Q_ASSERT(info.imageId.isEmpty());
    createChallenge();
}

PostingChallenge::PostingChallenge(ApiCreateChallenge::Info info, ApiUpload* upload, QObject* parent)
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

    _create = new ApiCreateChallenge(_info, this);
    connect(_create, &Api::finished, [this]{
        emit progressChanged();
        emit finished();
    });
}
