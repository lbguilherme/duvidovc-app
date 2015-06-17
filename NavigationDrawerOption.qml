import QtQuick 2.4
import "qrc:/material"
import "qrc:/singletons"

Item {
    id: root
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
        mipmap: true
        anchors.verticalCenter: parent.verticalCenter
        x: 16*dp
    }

    Text {
        x: 72*dp
        text: model.name
        anchors.verticalCenter: parent.verticalCenter
    }

    MouseArea {
        id: mouseAreaOption
        anchors.fill: parent
        onClicked: {
            StackManager.go(model.action);
        }
    }
}
