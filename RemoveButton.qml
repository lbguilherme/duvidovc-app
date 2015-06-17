import QtQuick 2.0

Item {
    id: removeButton
    width: 32*dp
    height: 32*dp
    signal clicked();

    Rectangle {
        anchors.fill: parent
        radius: width/2
        color: "#0f6464"
        border.color: "#fff"

        Rectangle {
            width: parent.width*0.6
            height: 4*dp
            rotation: 45
            transformOrigin: Item.Center
            anchors.centerIn: parent
        }

        Rectangle {
            width: parent.width*0.6
            height: 4*dp
            rotation: -45
            transformOrigin: Item.Center
            anchors.centerIn: parent
        }

        MouseArea {
            anchors.fill: parent
            onClicked: removeButton.clicked();
        }
    }
}
