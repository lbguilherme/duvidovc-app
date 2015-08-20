#include <qml/challengecreator.hpp>
#include <qml/friendsmodel.hpp>
#include <api/apiuploadimage.hpp>
#include <core/postingchallenge.hpp>
#include <core/duvido.hpp>

ChallengeCreator::ChallengeCreator(QObject* parent)
    : QObject(parent)
    , _targets(nullptr)
    , _orientation(0) {

}

QString ChallengeCreator::title() const {
    return _info.title;
}

void ChallengeCreator::setTitle(const QString& title) {
    if (_info.title == title) return;
    _info.title = title;
    emit titleChanged();
}

QString ChallengeCreator::details() const {
    return _info.details;
}

void ChallengeCreator::setdetails(const QString& details) {
    if (_info.details == details) return;
    _info.details = details;
    emit detailsChanged();
}

QString ChallengeCreator::reward() const {
    return _info.reward;
}

void ChallengeCreator::setReward(const QString& reward) {
    if (_info.reward == reward) return;
    _info.reward = reward;
    emit rewardChanged();
}

FriendsModel* ChallengeCreator::targets() const {
    return _targets;
}

void ChallengeCreator::setTargets(FriendsModel* targets) {
    if (_targets == targets) return;
    _targets = targets;
    emit targetsChanged();
}

unsigned ChallengeCreator::duration() const {
    return _info.duration;
}

void ChallengeCreator::setDuration(unsigned duration) {
    if (_info.duration == duration) return;
    _info.duration = duration;
    emit durationChanged();
}

QUrl ChallengeCreator::image() const {
    return QUrl::fromLocalFile(_imageSource);
}

void ChallengeCreator::setImage(const QUrl& image) {
    QString imageSource;
    if (!image.isEmpty()) {
        Q_ASSERT(image.isLocalFile());
        imageSource = image.toLocalFile();
    }
    if (_imageSource == imageSource) return;
    _imageSource = imageSource;
    emit imageChanged();
}

void ChallengeCreator::submit() {
    _info.targetIds = _targets->selectedIds();

    if (!_imageSource.isEmpty())
        duvido->addPostingChallenge(new PostingChallenge(_info, new ApiUploadImage(_imageSource, _orientation)));
    else
        duvido->addPostingChallenge(new PostingChallenge(_info));

    emit submitted();
}
