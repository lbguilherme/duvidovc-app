import QtQuick 2.4
import "qrc:/material"

FullWidthInput {
    id: root
    height: Math.max(grid.contentHeight, 40*dp) + 2*grid.topMargin

    property var model: duvido.friendsModel()
    labelVisible: grid.count === 0

    GridView {
        id: grid
        topMargin: Math.floor(8*dp)
        bottomMargin: topMargin
        anchors.fill: parent
        anchors.leftMargin: topMargin
        anchors.rightMargin: topMargin
        model: root.model.selectedFriends
        cellWidth: 40*dp
        cellHeight: cellWidth
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
            width: 40*dp
            height: width

            Avatar {
                userId: model.id
                radius: 17*dp
                anchors.centerIn: parent
            }
        }
    }
}

