import QtQuick 2.0

FullWidthInput {
    labelVisible: input.displayText == ""
    onClicked: input.forceActiveFocus()

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
