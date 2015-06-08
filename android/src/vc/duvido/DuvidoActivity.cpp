#include <vc.duvido.DuvidoActivity.hpp>
#include <android.net.Uri.hpp>
#include <java.lang.String.hpp>
#include <java.io.InputStream.hpp>
#include <java.nio.ByteBuffer.hpp>
#include <android.graphics.Bitmap.hpp>
#include <android.graphics.BitmapFactory.hpp>
#include <android.content.ContentResolver.hpp>
#include <duvido.hpp>

#include <QDebug>
#include <QImage>

using namespace vc::duvido;
using namespace android::net;
using namespace android::graphics;
using namespace java::io;
using namespace java::nio;
using namespace std;

void DuvidoActivity::onPhotoFetched(const Uri& uri) const {
    InputStream is = getContentResolver().openInputStream(uri);
    Bitmap bitmap = BitmapFactory::decodeStream(is);
    ByteBuffer buf = ByteBuffer::allocate(bitmap.getByteCount());
    bitmap.copyPixelsToBuffer(buf);
    vector<int8_t> data = buf.array();

    QImage::Format format = QImage::Format_Invalid;
    Bitmap_Config config = bitmap.getConfig();
    if (config.equals(Bitmap_Config::valueOf("ALPHA_8"))) {
        return;
    } else if (config.equals(Bitmap_Config::valueOf("ARGB_4444"))) {
        format = QImage::Format_ARGB4444_Premultiplied;
    } else if (config.equals(Bitmap_Config::valueOf("ARGB_8888"))) {
        format = QImage::Format_ARGB32;
    } else if (config.equals(Bitmap_Config::valueOf("RGB_565"))) {
        format = QImage::Format_RGB16;
    } else {
        return;
    }

    QImage img((uchar*)data.data(), bitmap.getWidth(), bitmap.getHeight(), format);
    emit ::duvido->photoFetched(img);
}
