#include <vc.duvido.DuvidoActivity.hpp>
#include <android.net.Uri.hpp>
#include <java.lang.String.hpp>
#include <duvido.hpp>

#include <QDebug>

using namespace vc::duvido;
using namespace android::net;

void DuvidoActivity::onPhotoFetched(const Uri& path) const {
    qDebug() << path.toString();
}
