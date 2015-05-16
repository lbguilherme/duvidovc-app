import QtQuick 2.4
import QtQuick.Window 2.2
import "qrc:/scenes"

Window {
    visible: true
    width: 400
    height: 650

    property int windowWidth: width
    property int windowHeight: height
    property real dp: Screen.pixelDensity * 25.4 / 160 // 1dp = 1 pixel in a 160 dpi screen

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

            source: duvido.me
                ? "qrc:/scenes/MainScene.qml"
                : "qrc:/scenes/LoginScene.qml"
        }
    }
}
