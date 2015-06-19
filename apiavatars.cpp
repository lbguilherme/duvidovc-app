#include "apiavatars.hpp"
#include "duvido.hpp"

#include <QNetworkReply>

ApiAvatars::ApiAvatars(QStringList ids, QObject* parent) : Api(parent), _ids(ids) {
    _reply = duvido->http().get(request("/avatars", QVariantMap{{"id", ids.join(",")}}));
    setupReply();
}

void ApiAvatars::processReply() {
    for (QString id : _ids) {
        char b0, b1, b2, b3;
        _reply->getChar(&b0);
        _reply->getChar(&b1);
        _reply->getChar(&b2);
        _reply->getChar(&b3);
        const uint32_t size = (static_cast<uint8_t>(b0) << 24) | (static_cast<uint8_t>(b1) << 16) | (static_cast<uint8_t>(b2) << 8) | static_cast<uint8_t>(b3);

        _avatars[id] = _reply->read(size);
    }
}

QMap<QString, QByteArray> ApiAvatars::avatars() const {
    return _avatars;
}
