import QtQuick 2.4
import "qrc:/material"
import "qrc:/singletons"

Item {
    id: root
    width: parent.width - x*2
    height: 48*dp
    x: 16*dp

    Rectangle {
        anchors.fill: parent
        color: mouseAreaOption.containsPress ? "#999" : "transparent"
    }

    Text {
        x: 8*dp
        text: model.name
        anchors.verticalCenter: parent.verticalCenter
    }

    MouseArea {
        id: mouseAreaOption
        anchors.fill: parent
        onClicked: {
            if (model.action) StackManager.go(model.action);
        }
    }

    Rectangle {
        height: 1*dp
        width: parent.width
        color: "#ddd"
        y: parent.height - 1*dp

    }
}
