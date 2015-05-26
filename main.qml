import QtQuick 2.4
import "qrc:/scenes"

Item {
    id: window
    width: 400
    height: 650

    property Item window: window
    property Item frag: fragLoader.item
    property alias fragSource: fragLoader.source
    property Item dialog: dialogLoader.item
    property alias dialogSource: dialogLoader.source

    Item {
        id: root
        anchors.fill: parent

        Rectangle {
            anchors.fill: parent
            color: "#0f6464"
        }

        Loader {
            id: fragLoader
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
