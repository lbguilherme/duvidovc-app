#include <vc.duvido.DuvidoActivity.hpp>
#include <java.lang.String.hpp>
#include <core/duvido.hpp>

using namespace vc::duvido;
using namespace java::lang;

void DuvidoActivity::onPhotoFetched(const String& path) const {
    emit ::duvido->photoFetched(path.isNull() ? "" : "file:/" + (QString)path);
}
