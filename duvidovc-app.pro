TEMPLATE = app
CONFIG += c++11
QT += qml quick

QML_IMPORT_PATH =
ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android
QMAKE_LFLAGS += -Wl,--retain-symbols-file,../duvidovc-app/mainsymbol

include(deployment.pri)

SOURCES += \
    main.cpp \
    facebook.cpp \
    facebookuser.cpp \
    facebookavatarprovider.cpp

HEADERS += \
    facebook.hpp \
    facebookuser.hpp \
    facebookavatarprovider.hpp

DISTFILES += \
    android/gradle/wrapper/gradle-wrapper.jar \
    android/AndroidManifest.xml \
    android/gradlew.bat \
    android/res/values/libs.xml \
    android/build.gradle \
    android/gradle/wrapper/gradle-wrapper.properties \
    android/gradlew \
    .gitignore \
    Readme.md \
    design.dot \
    android/res/values/strings.xml \
    android/src/vc/duvido/FacebookBridge.java \
    android/src/vc/duvido/DuvidoActivity.java

RESOURCES += \
    qml.qrc \
    artwork.qrc

OTHER_FILES += \
    java/java2cpp.rb

design_graph.depends = $$PWD/design.dot
design_graph.target = $$PWD/design.png
design_graph.commands = dot -Tpng $$PWD/design.dot > $$PWD/design.png
QMAKE_EXTRA_TARGETS += design_graph
PRE_TARGETDEPS += $$PWD/design.png

android: {

QT += androidextras
INCLUDEPATH += java/include

HEADERS += \
    java/src/java-core.hpp

SOURCES += \
    android/src/vc/duvido/FacebookBridge.cpp \
    java/src/android.app.cpp \
    java/src/android.content.cpp \
    java/src/android.os.cpp \
    java/src/java-core.cpp \
    java/src/java.lang.cpp \
    java/src/java.util.cpp \
    java/src/com.facebook.cpp \
    java/src/com.facebook.login.cpp \
    java/src/vc.duvido.cpp

}
