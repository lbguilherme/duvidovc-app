import QtQuick 2.4

Item {
    id: button

    property bool flat: false
    property color color: flat ? "black" : "white"    // Text color if flat. Background color if raised.
    property string text: "Button"
    signal clicked()

    width: Math.max(88*dp, caption.contentWidth + 32*dp)
    height: 36*dp

    MouseArea {
        id: touchTarget
        height: button.height + 12*dp
        width: button.width
        y: (button.height - height)/2
        hoverEnabled: true
        onClicked: button.clicked()
    }

    Surface {
        anchors.fill: button
        radius: 2*dp
        elevation: flat ? 0 : touchTarget.containsPress ? 2 : 1
        backgroundColor:  Qt.tint(flat ? "transparent" : button.color,
                              Qt.rgba(153, 153, 153,
                                  touchTarget.containsPress ? 0.2 : 0))

        Text {
            id: caption
            anchors.centerIn: parent
            font.capitalization: Font.AllUppercase
            font.family: "Roboto"
            text: button.text
            color: button.flat ? button.color : "white"
        }
    }

}
