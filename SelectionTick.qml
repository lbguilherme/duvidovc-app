import QtQuick 2.0

Item {
    id: root
    width: 25*dp
    height: width

    property color color: "#777"

    Rectangle {
        radius: width/2
        anchors.fill: parent
        border.color: "#999"
    }

    Rectangle {
        radius: width/2
        anchors.fill: parent
        color: root.color

        Rectangle {
            width: parent.radius/2
            height: Math.ceil(3*dp)
            transformOrigin: Item.Right
            rotation: 45
            x: 2.5*width/3
            y: 7.5*width/3
        }

        Rectangle {
            width: parent.radius
            height: Math.ceil(3*dp)
            transformOrigin: Item.Left
            rotation: -45
            x: 2.5*width/3
            y: 3.75*width/3
        }
    }
}
