import QtQuick 2.0

Item {
    id: root
    width: 20*dp
    height: 20*dp

    property real arrowness: 0
    property bool wasArrow: false

    Behavior on arrowness {
        NumberAnimation {
            duration: 400
            easing.type: Easing.OutQuint
            onRunningChanged: if (!running) wasArrow = arrowness == 1 ? true : arrowness == 0 ? false : wasArrow;
        }
    }

    rotation: 180*arrowness * (wasArrow ? -1 : 1)

    Column {
        id: column
        anchors.centerIn: parent
        spacing: Math.ceil(parent.height/5) - root.arrowness*(Math.ceil(root.height/8)+Math.ceil(root.height/5))

        Rectangle {
            width: root.width - root.arrowness*root.width/3
            height: Math.ceil(root.height/10)
            anchors.right: column.right
            transformOrigin: Item.Right
            rotation: root.arrowness*45
        }

        Rectangle {
            width: root.width
            height: Math.ceil(root.height/10)
        }

        Rectangle {
            width: root.width - root.arrowness*root.width/3
            height: Math.ceil(root.height/10)
            anchors.right: column.right
            transformOrigin: Item.Right
            rotation: -root.arrowness*45
        }
    }

    MouseArea {
        anchors.fill: parent
        anchors.margins: -20*dp
        onPressed: parent.arrowness = parent.arrowness == 1 ? 0 : 1
    }
}
