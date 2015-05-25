import QtQuick 2.4
import "qrc:/scenes"

Item {
    id: window
    width: 400
    height: 650

    property Item window: window
    property Loader dialogLoader: dialogLoader

    Item {
        id: root
        anchors.fill: parent

        Rectangle {
            anchors.fill: parent
            color: "#0f6464"
        }

        Loader {
            id: loader
            anchors.fill: parent

            source: duvido.me
                ? "qrc:/scenes/MainScene.qml"
                : "qrc:/scenes/LoginScene.qml"
        }

        Loader {
            id: dialogLoader
            anchors.fill: parent
        }
    }
}
