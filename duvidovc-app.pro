TEMPLATE = app
CONFIG += c++11
QT += qml quick

QML_IMPORT_PATH =
ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android

include(deployment.pri)

SOURCES += \
    main.cpp \
    facebookmanager.cpp

HEADERS += \
    facebookmanager.hpp

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
    android/res/values/strings.xml

RESOURCES += \
    qml.qrc \
    artwork.qrc

OTHER_FILES += \
    java/java2cpp.rb

design_graph.depends = design.dot
design_graph.target = design.png
design_graph.commands = dot -Tpng design.dot > design.png

QMAKE_EXTRA_TARGETS += design_graph

android: {

QT += androidextras
INCLUDEPATH += java/include

HEADERS += \
    java/src/java-core.hpp

SOURCES += \
    java/src/android.app.cpp \
    java/src/android.content.cpp \
    java/src/android.os.cpp \
    java/src/java-core.cpp \
    java/src/java.lang.cpp \
    java/src/java.util.cpp \
    java/src/com.facebook.cpp \
    java/src/com.facebook.login.cpp

}
