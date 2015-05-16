import QtQuick 2.0

Item {
    width: 24*dp
    height: 24*dp

    Column {
        anchors.centerIn: parent
        spacing: parent.height/5
        width: parent.width

        Rectangle {
            id: rect1
            width: parent.width
            height: Math.ceil(parent.spacing/2)
        }

        Rectangle {
            id: rect2
            width: parent.width
            height: Math.ceil(parent.spacing/2)
        }

        Rectangle {
            id: rect3
            width: parent.width
            height: Math.ceil(parent.spacing/2)
        }
    }
}
