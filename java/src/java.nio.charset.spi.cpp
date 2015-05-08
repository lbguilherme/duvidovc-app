#include "java-core.hpp"
#include <memory>
#include "java.lang.String.hpp"
#include "java.nio.charset.Charset.hpp"
#include "java.nio.charset.spi.CharsetProvider.hpp"
#include "java.util.Iterator.hpp"

jclass java::nio::charset::spi::CharsetProvider::_class = nullptr;

::java::util::Iterator java::nio::charset::spi::CharsetProvider::charsets() const {
    if (!::java::nio::charset::spi::CharsetProvider::_class) ::java::nio::charset::spi::CharsetProvider::_class = java::fetch_class("java/nio/charset/spi/CharsetProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "charsets", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

::java::nio::charset::Charset java::nio::charset::spi::CharsetProvider::charsetForName(const ::java::lang::String& arg0) const {
    if (!::java::nio::charset::spi::CharsetProvider::_class) ::java::nio::charset::spi::CharsetProvider::_class = java::fetch_class("java/nio/charset/spi/CharsetProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "charsetForName", "(Ljava/lang/String;)Ljava/nio/charset/Charset;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::charset::Charset _ret(ret);
    return _ret;
}

