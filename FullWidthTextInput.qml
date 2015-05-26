import QtQuick 2.4

FullWidthInput {
    labelVisible: input.displayText == ""

    ActionBarButton {
        icon: "qrc:/artwork/icons/clipboard99.png"
        enabled: input.focus
    }

    TextInput {
        id: input
        font.pixelSize: 16*dp
        x: 20*dp
        y: 20*dp
        width: parent.width - 40*dp
    }

    MouseArea {
        anchors.fill: parent
        onClicked: input.forceActiveFocus()
    }

    // On hide onscreen keyboard
    Connections {
        target: Qt.inputMethod
        onVisibleChanged:
            if (Qt.inputMethod.visible === false)
                parent.forceActiveFocus();
    }
}
