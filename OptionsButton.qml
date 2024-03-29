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
            openDialog("qrc:/frags/OptionsDialog.qml");
            dialog.optionsModel = parent.model;
            dialog.optionsButton = optionsButton;
        }
    }

    Rectangle {
        anchors.fill: parent
        color: "#000"
        opacity: 0.2
        visible: mouseArea.containsPress
    }

    Column {
        spacing: 2.5*dp
        anchors.centerIn: parent

        Repeater {
            model: 3
            Rectangle {
                width: 4*dp
                height: 4*dp
                radius: 2*dp
                color: "#999"
            }
        }
    }
}
