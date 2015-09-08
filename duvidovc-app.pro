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
    api/apicreatechallenge.cpp \
    api/apiavatars.cpp \
    core/postingchallenge.cpp \
    qml/mychallengesmodel.cpp \
    api/apimychallenges.cpp \
    api/apifeed.cpp \
    qml/feedmodel.cpp \
    data/user.cpp \
    data/me.cpp \
    data/prechallenge.cpp \
    data/challenge.cpp \
    api/apiuploadimage.cpp \
    data/mychallenge.cpp \
    data/submission.cpp \
    data/target.cpp \
    api/apisendgcmtoken.cpp \
    api/apirefuse.cpp \
    api/apisendsubmission.cpp \
    data/presubmission.cpp \
    core/postingsubmission.cpp \
    qml/submissionsender.cpp \
    api/apiplaying.cpp \

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
    api/apicreatechallenge.hpp \
    api/apiavatars.hpp \
    core/postingchallenge.hpp \
    qml/mychallengesmodel.hpp \
    api/apimychallenges.hpp \
    api/apifeed.hpp \
    qml/feedmodel.hpp \
    data/user.hpp \
    data/me.hpp \
    data/list.hpp \
    data/prechallenge.hpp \
    data/challenge.hpp \
    api/apiuploadimage.hpp \
    data/mychallenge.hpp \
    data/submission.hpp \
    data/target.hpp \
    api/apisendgcmtoken.hpp \
    api/apirefuse.hpp \
    api/apisendsubmission.hpp \
    data/presubmission.hpp \
    core/postingsubmission.hpp \
    qml/submissionsender.hpp \
    api/apiplaying.hpp \

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
    android/google-services.json \
    android/src/vc/duvido/FacebookBridge.java \
    android/src/vc/duvido/DuvidoActivity.java \
    android/src/vc/duvido/WebLoginActivity.java \
    android/src/vc/duvido/gcm/MessageListenerService.java \
    android/src/vc/duvido/gcm/RegistrationIntentService.java \
    android/src/vc/duvido/gcm/TokenListenerService.java \
    android/src/vc/duvido/util/DeviceId.java \
    android/newrelic.properties

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
    android/vc.duvido.DuvidoActivity.cpp \
    android/vc.duvido.FacebookBridge.cpp \
    android/vc.duvido.gcm.RegistrationIntentService.cpp \
    java/src/java-core.cpp \
    java/src/java.lang.cpp \
    java/src/vc.duvido.cpp \
    java/src/vc.duvido.gcm.cpp \
    java/src/vc.duvido.util.cpp

}
