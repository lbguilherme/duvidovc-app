#include <qml/submissionsender.hpp>
#include <api/apiuploadimage.hpp>
#include <core/postingsubmission.hpp>
#include <core/duvido.hpp>

SubmissionSender::SubmissionSender(QObject* parent)
    : QObject(parent)
    , _orientation(0) {

}

QString SubmissionSender::challenge() const {
    return _info.challenge;
}

void SubmissionSender::setChallenge(const QString& challenge) {
    if (_info.text == challenge) return;
    _info.challenge = challenge;
    emit challengeChanged();
}

QString SubmissionSender::text() const {
    return _info.text;
}

void SubmissionSender::setText(const QString& text) {
    if (_info.text == text) return;
    _info.text = text;
    emit textChanged();
}

QUrl SubmissionSender::image() const {
    return QUrl::fromLocalFile(_imageSource);
}

void SubmissionSender::setImage(const QUrl& image) {
    QString imageSource;
    if (!image.isEmpty()) {
        Q_ASSERT(image.isLocalFile());
        imageSource = image.toLocalFile();
    }
    if (_imageSource == imageSource) return;
    _imageSource = imageSource;
    emit imageChanged();
}

void SubmissionSender::submit() {
    Q_ASSERT(!_imageSource.isEmpty());
    duvido->addPostingSubmission(new PostingSubmission(_info, new ApiUploadImage(_imageSource, _orientation)));
    emit submitted();
}
