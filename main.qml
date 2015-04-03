import QtQuick 2.4
import QtQuick.Window 2.2
import "qrc:/scenes"

Window {
    visible: true
    width: 400
    height: 650

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

        }

        Connections {
            target: root.state == "login" ? loader.item : null
            onLogin: root.state = "main"
        }

        state: "login"
        states: [
            State {
                name: "login"
                PropertyChanges {
                    target: loader
                    source: "qrc:/scenes/LoginScene.qml"
                }
            },
            State {
                name: "main"
                PropertyChanges {
                    target: loader
                    source: "qrc:/scenes/MainScene.qml"
                }
            }

        ]

    }

}
