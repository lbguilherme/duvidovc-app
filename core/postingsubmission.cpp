#include <core/postingsubmission.hpp>
#include <api/apiuploadimage.hpp>
#include <QJsonObject>

PostingSubmission::PostingSubmission(PreSubmission info, ApiUploadImage* upload, QObject* parent)
    : QObject(parent), _info(info), _upload(upload), _send(nullptr) {

    Q_ASSERT(info.imageId.isEmpty());
    Q_ASSERT(_upload);

    _upload->setParent(this);
    if (_upload->isFinished()) {
        sendSubmission();
    } else {
        connect(_upload, &Api::finished, this, &PostingSubmission::sendSubmission);
    }
}

bool PostingSubmission::isFinished() const {
    return _send && _send->isFinished();
}

void PostingSubmission::sendSubmission() {
    _info.imageId = _upload->id();
    _upload->deleteLater();
    _upload = nullptr;

    _send = new ApiSendSubmission(_info, this);
    connect(_send, &Api::finished, [this]{
        emit finished();
    });
}

QJsonObject PostingSubmission::toJson() const {
    QJsonObject obj = _info.toJson();
    obj["imageSourcePath"] = _upload->sourcePath();
    obj["imageOrientation"] = _upload->orientation();

    return obj;
}

PostingSubmission* PostingSubmission::fromJson(const QJsonObject& obj) {
    PreSubmission info;
    info.fromJson(obj);
    QString sourcePath = obj["imageSourcePath"].toString();
    int orientation = obj["imageOrientation"].toDouble();

    return new PostingSubmission(info, new ApiUploadImage(sourcePath, orientation));
}
