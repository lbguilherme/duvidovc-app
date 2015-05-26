import QtQuick 2.4

Item {
    id: root

    property color color: "white"
    property string title
    default property alias data: drawer.data
    property BurgerButton burger: burgerButton
    property Row buttonRow: buttonRow

    width: parent.width
    height: 56*dp

    Surface {
        anchors.fill: parent
        backgroundColor: parent.color
        elevation: 1.2
        radius: 0

        BurgerButton {
            id: burgerButton
            anchors.verticalCenter: parent.verticalCenter
            x: y
        }

        Text {
            x: 68*dp
            anchors.verticalCenter: parent.verticalCenter
            font.pixelSize: 20*dp
            text: root.title
            color: "white"
        }

        Row {
            id: buttonRow
            height: parent.height
            x: parent.width - width
        }
    }

    NavigationDrawer {
        id: drawer
        burger: burgerButton
    }
}
