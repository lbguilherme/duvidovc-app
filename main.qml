import QtQuick 2.4
import QtQuick.Window 2.2
import "qrc:/scenes"

Window {
    visible: true
    width: 400
    height: 650

    property int windowWidth: width;
    property int windowHeight: height;
    property int dpi: Screen.pixelDensity;

    Item {
        id: root
        anchors.fill: parent

        Rectangle {
            anchors.fill: parent
            color: "#ff0f6464"
        }

        Loader {
            id: loader
            anchors.fill: parent

            source: duvido.loggedIn
                ? "qrc:/scenes/MainScene.qml"
                : "qrc:/scenes/LoginScene.qml"
        }
    }
}
