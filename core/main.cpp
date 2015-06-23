#include <core/duvido.hpp>

#ifdef Q_OS_ANDROID
#include "java/src/java-core.hpp>
#endif

__attribute__((visibility("default")))
int main() {
#ifdef Q_OS_ANDROID
    java::initialize();
#endif

    return Duvido().exec();
}
