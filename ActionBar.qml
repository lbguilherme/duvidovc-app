import QtQuick 2.0

Item {

    property color color: "white"

    width: parent.width
    height: 56*dp

    Surface {
        anchors.fill: parent
        backgroundColor: parent.color
        elevation: 3
        radius: 0

        BurgerButton {
            x: 16*dp
            y: 16*dp
        }

        Text {
            x: 72*dp
            anchors.verticalCenter: parent.verticalCenter
            font.pixelSize: 20*dp
            text: "Duvido.vc"
            color: "white"
        }
    }

}
