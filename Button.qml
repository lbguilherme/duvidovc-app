import QtQuick 2.4

Item {
    id: button
    width: Math.max(88*dp, caption.contentWidth + 32*dp)
    height: 36*dp

    property bool flat: false
    property color color: flat ? "black" : "white"    // Text color if flat. Background color if raised.
    property string text: "Button"
    signal clicked()

    MouseArea {
        id: touchTarget
        height: parent.height + 12*dp
        width: parent.width
        y: (parent.height - height)/2
        hoverEnabled: true
        onClicked: parent.clicked()
    }

    Surface {
        anchors.fill: parent
        radius: 2*dp
        elevation: flat ? 0 : touchTarget.containsPress ? 2 : 1
        backgroundColor:  Qt.tint(flat ? "transparent" : color,
                              Qt.rgba(153, 153, 153,
                                  touchTarget.containsPress ? 0.2 : 0))

        Text {
            id: caption
            anchors.centerIn: parent
            font.capitalization: Font.AllUppercase
            font.family: "Roboto"
            text: button.text
            color: flat ? button.color : "white"
            font.pixelSize: 16*dp
        }
    }
}
