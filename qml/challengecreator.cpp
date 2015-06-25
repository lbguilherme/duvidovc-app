#include <qml/challengecreator.hpp>
#include <qml/friendsmodel.hpp>
#include <api/apiupload.hpp>
#include <core/postingchallenge.hpp>
#include <core/duvido.hpp>

ChallengeCreator::ChallengeCreator(QObject* parent)
    : QObject(parent)
    , _targets(nullptr)
    , _imageUpload(nullptr) {

}

QString ChallengeCreator::title() const {
    return _title;
}

void ChallengeCreator::setTitle(const QString& title) {
    if (_title == title) return;
    _title = title;
    emit titleChanged();
}

QString ChallengeCreator::description() const {
    return _description;
}

void ChallengeCreator::setDescription(const QString& description) {
    if (_description == description) return;
    _description = description;
    emit descriptionChanged();
}

QString ChallengeCreator::reward() const {
    return _reward;
}

void ChallengeCreator::setReward(const QString& reward) {
    if (_reward == reward) return;
    _reward = reward;
    emit rewardChanged();
}

FriendsModel *ChallengeCreator::targets() const {
    return _targets;
}

void ChallengeCreator::setTargets(FriendsModel* targets) {
    if (_targets == targets) return;
    _targets = targets;
    emit targetsChanged();
}

unsigned ChallengeCreator::duration() const {
    return _duration;
}

void ChallengeCreator::setDuration(unsigned duration) {
    if (_duration == duration) return;
    _duration = duration;
    emit durationChanged();
}

QUrl ChallengeCreator::image() const {
    return _image;
}

void ChallengeCreator::setImage(const QUrl& image) {
    if (_image == image) return;
    _image = image;

    if (_imageUpload)
        _imageUpload->deleteLater();

    if (_image.isEmpty())
        _imageUpload = nullptr;
    else {
        Q_ASSERT(image.isLocalFile());
        _imageUpload = new ApiUpload(image.toLocalFile(), this);
    }
    emit imageChanged();
}

void ChallengeCreator::submit() {
    ApiCreateChallenge::Info info;
    info.title = _title;
    info.description = _description;
    info.reward = _reward;
    info.duration = _duration;
    info.targets = _targets->selectedIds();
    duvido->addPostingChallenge(new PostingChallenge(info, _imageUpload));
    emit submitted();
}
