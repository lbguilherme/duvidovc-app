import QtQuick 2.0

Item {
    width: parent.width
    height: 56*dp

    property string label

    Rectangle {
        anchors.fill: parent
        color: "white"
    }

    Rectangle {
        y: parent.height
        width: parent.width
        height: Math.max(1, Math.ceil(1*dp))
        color: "#ddd"
    }

    Text {
        font.pixelSize: 16*dp
        x: 20*dp
        y: 20*dp
        text: parent.label
        color: "#aaa"
        visible: input.displayText == ""
    }

    MouseArea {
        anchors.fill: parent
        onClicked: input.forceActiveFocus()
    }

    TextInput {
        id: input
        font.pixelSize: 16*dp
        x: 20*dp
        y: 20*dp
        width: parent.width - 40*dp
    }

    // On hide onscreen keyboard
    Connections {
        target: Qt.inputMethod
        onVisibleChanged:
            if (Qt.inputMethod.visible === false)
                parent.forceActiveFocus();
    }
}
