import QtQuick 2.4
import "qrc:/components"

Item {
    property Item window
    id: scene

    Image {
        anchors.fill: parent
        source: "qrc:/artwork/login-background.png"
    }

    FacebookLoginButton {
        height: window.height/10
        anchors.leftMargin: window.width/8
        anchors.rightMargin: window.width/8
        anchors.bottomMargin: window.height/8 - height/2
        anchors.bottom: scene.bottom
        anchors.left: scene.left
        anchors.right: scene.right
    }
}

