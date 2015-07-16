import QtQuick 2.0

Item {
    id: button
    width: 32*dp
    height: 32*dp
    signal clicked();

    Rectangle {
        anchors.fill: parent
        radius: width/2
        color: "#0f6464"
        border.color: "#fff"

        Image {
            anchors.fill: parent
            anchors.margins: parent.radius/4
            source: "qrc:/artwork/icons/phone353.png"
        }

        MouseArea {
            anchors.fill: parent
            onClicked: button.clicked();
        }
    }
}
