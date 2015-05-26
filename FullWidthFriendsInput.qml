import QtQuick 2.4
import "qrc:/material"

FullWidthInput {
    id: root
    height: Math.max(grid.contentHeight, 56*dp)

    property var model: duvido.friendsModel()

    GridView {
        id: grid
        anchors.fill: parent
        anchors.leftMargin: root.labelWidth + 30*dp
        model: root.model.selectedFriends
        cellWidth: 53*dp
        cellHeight: 56*dp
        delegate: selectedFriendDelegate
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            forceActiveFocus();
            window.dialogSource = "qrc:/frags/FriendsSelector.qml";
            window.dialog.friendsModel = root.model;
        }
    }

    Component {
        id: selectedFriendDelegate

        Item {
            width: grid.cellWidth
            height: grid.cellHeight

            Avatar {
                userId: model.id
                radius: 23*dp
                anchors.centerIn: parent
            }
        }
    }
}

