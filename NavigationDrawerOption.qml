import QtQuick 2.0
import "qrc:/material"
Item {
    id: root
    property QtObject stackManager

    width: parent.width
    height: 48*dp

    Rectangle {
        anchors.fill: parent
        color: mouseAreaOption.containsPress ? "#999" : "transparent"
    }

    Image {
        source: icon
        width: 24*dp
        height: 24*dp
        anchors.verticalCenter: parent.verticalCenter
        x: 16*dp
    }

    Text {
        x: 72*dp
        text: name
        anchors.verticalCenter: parent.verticalCenter
    }

    MouseArea {
        id: mouseAreaOption
        anchors.fill: parent

        onClicked: {
            root.stackManager.go(action);
        }
    }
}

