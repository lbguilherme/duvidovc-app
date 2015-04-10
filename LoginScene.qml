import QtQuick 2.4
import "qrc:/components"

Item {
    id: scene

    signal login()

    Image {
        anchors.fill: parent
        source: "qrc:/artwork/login-background.png"
    }

    FacebookLoginButton {
        height: scene.height/10
        anchors.leftMargin: scene.width/8
        anchors.rightMargin: scene.width/8
        anchors.bottomMargin: scene.height/8 - height/2
        anchors.bottom: scene.bottom
        anchors.left: scene.left
        anchors.right: scene.right

        onClicked: {
            facebook.login();
        }
        // scene.login()
    }
}

