import QtQuick 2.4
import "qrc:/material"
import "qrc:/singletons"

Item {
    id: root
    width: parent.width
    height: 56*dp

    Rectangle {
        anchors.fill: parent
        color: mouseAreaOption.containsPress ? "#f2f2e3" : "transparent"
    }

    Text {
        x: 8*dp
        text: model.name
        anchors.verticalCenter: parent.verticalCenter
        font.pixelSize: 18*dp
    }

    MouseArea {
        id: mouseAreaOption
        anchors.fill: parent
        onClicked: {
            if (model.action) StackManager.go(model.action);
        }
    }

    Rectangle {
        height: Math.ceil(1*dp)
        width: parent.width
        color: "#ddd"
        y: parent.height - 1*dp

    }
}
