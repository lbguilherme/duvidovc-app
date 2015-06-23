TEMPLATE = app
CONFIG += C++14
QT += qml quick

QML_IMPORT_PATH =
ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android
QMAKE_LFLAGS += -Wl,--retain-symbols-file,../duvidovc-app/mainsymbol,--gc-sections

QMAKE_CXXFLAGS += -Wextra -fvisibility=hidden -ffunction-sections

include(deployment.pri)

SOURCES += \
    core/main.cpp \
    core/duvido.cpp \
    core/duvidoeventfilter.cpp \
    core/avatarmanager.cpp \
    qml/friendsmodel.cpp \
    qml/avatarloader.cpp \
    qml/challengecreator.cpp \
    api/api.cpp \
    api/apifriends.cpp \
    api/apilogin.cpp \
    api/apiupload.cpp \
    api/apicreatechallenge.cpp \
    api/apiavatars.cpp

HEADERS += \
    core/duvido.hpp \
    core/duvidoeventfilter.hpp \
    core/avatarmanager.hpp \
    qml/friendsmodel.hpp \
    qml/avatarloader.hpp \
    qml/challengecreator.hpp \
    api/apifriends.hpp \
    api/apilogin.hpp \
    api/api.hpp \
    api/apiupload.hpp \
    api/apicreatechallenge.hpp \
    api/apiavatars.hpp

DISTFILES += \
    android/gradle/wrapper/gradle-wrapper.jar \
    android/AndroidManifest.xml \
    android/gradlew.bat \
    android/res/values/libs.xml \
    android/build.gradle \
    android/gradle/wrapper/gradle-wrapper.properties \
    android/gradlew \
    .gitignore \
    .gitattributes \
    Readme.md \
    design.dot \
    android/res/values/strings.xml \
    android/src/vc/duvido/FacebookBridge.java \
    android/src/vc/duvido/DuvidoActivity.java \
    android/src/vc/duvido/WebLoginActivity.java

RESOURCES += \
    qml.qrc \
    artwork.qrc \
    material.qrc \
    data.qrc

OTHER_FILES += \
    java/java2cpp.rb

design_graph.depends = $$PWD/design.dot
design_graph.target = $$PWD/design.png
design_graph.commands = dot -Tpng $$PWD/design.dot > $$PWD/design.png
QMAKE_EXTRA_TARGETS += design_graph
PRE_TARGETDEPS += $$PWD/design.png

android: {

INCLUDEPATH += java/include

HEADERS += \
    java/src/java-core.hpp

SOURCES += \
    android/src/vc/duvido/DuvidoActivity.cpp \
    android/src/vc/duvido/FacebookBridge.cpp \
    java/src/java-core.cpp \
    java/src/java.lang.cpp \
    java/src/vc.duvido.cpp

}
