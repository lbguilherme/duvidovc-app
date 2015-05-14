TEMPLATE = app
CONFIG += C++11
QT += qml quick

QML_IMPORT_PATH =
ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android
QMAKE_LFLAGS += -Wl,--retain-symbols-file,../duvidovc-app/mainsymbol

QMAKE_CXXFLAGS += -Wextra

include(deployment.pri)

SOURCES += \
    main.cpp \
    facebook.cpp \
    duvido.cpp \
    user.cpp \
    friendsmodel.cpp \
    duvidoapi.cpp

HEADERS += \
    facebook.hpp \
    duvido.hpp \
    user.hpp \
    friendsmodel.hpp \
    duvidoapi.hpp

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
    java/src/java-core.cpp \
    java/src/java.lang.cpp \
    java/src/com.facebook.cpp \
    java/src/vc.duvido.cpp

}
