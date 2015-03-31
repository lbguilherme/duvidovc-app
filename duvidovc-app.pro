TEMPLATE = app
CONFIG += c++11

QT += qml quick
android: QT += androidextras

INCLUDEPATH += java-include

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
    Readme.md

RESOURCES += \
    qml.qrc \
    artwork.qrc

OTHER_FILES += \
    java/java2cpp.rb
