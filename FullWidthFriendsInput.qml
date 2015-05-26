import QtQuick 2.4
import "qrc:/material"

FullWidthInput {
    id: root
    height: Math.max(grid.contentHeight, 56*dp)

    property var model: duvido.friendsModel()
    labelVisible: grid.count === 0

    GridView {
        id: grid
        anchors.fill: parent
        model: root.model.selectedFriends
        cellWidth: 53*dp
        cellHeight: 56*dp
        delegate: selectedFriendDelegate
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            window.dialogLoader.source = "qrc:/frags/FriendsSelector.qml";
            window.dialogLoader.item.friendsModel = root.model;
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

