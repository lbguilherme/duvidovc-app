import QtQuick 2.0

Item {
    id: optionsButton
    width: 32*dp
    height: 32*dp
    property var model

    MouseArea {
        id: mouseArea
        anchors.fill: parent
        onClicked: {
            forceActiveFocus();
            window.dialogSource = "qrc:/frags/OptionsDialog.qml";
            window.dialog.optionsModel = parent.model;
            window.dialog.optionsButton = optionsButton;
        }
    }

    Rectangle {
        anchors.fill: parent
        color: "#000"
        opacity: 0.2
        visible: mouseArea.containsPress
    }

    Column {
        spacing: 2*dp
        anchors.centerIn: parent

        Repeater {
            model: 3
            Rectangle {
                width: 4*dp
                height: 4*dp
                color: "#bbb"
            }
        }
    }
}
