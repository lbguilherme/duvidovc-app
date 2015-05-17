import QtQuick 2.0

Item {

    property color color: "white"

    width: parent.width
    height: 64*dp

    Surface {
        anchors.fill: parent
        backgroundColor: parent.color
        elevation: 2
        radius: 0

        BurgerButton {
            anchors.verticalCenter: parent.verticalCenter
            x: y
        }

        Text {
            x: 68*dp
            anchors.verticalCenter: parent.verticalCenter
            font.pixelSize: 20*dp
            text: "Duvido.vc"
            color: "white"
        }
    }

}
