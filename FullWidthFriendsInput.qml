import QtQuick 2.4
import "qrc:/material"

Item {
    id: root
    width: parent.width
    height: Math.max(grid.contentHeight, 56*dp)

    property var model: duvido.friendsModel()
    property string emptyLabel: ""
    property string filledLabel: ""

    Text {
        id: label
        font.pixelSize: 16*dp
        width: parent.width
        y: 20*dp
        text: grid.count == 0 ? parent.emptyLabel : parent.filledLabel
        color: "#aaa"
        horizontalAlignment: grid.count == 0 ? Text.AlignHCenter : Text.AlignLeft
    }

    GridView {
        id: grid
        anchors.fill: parent
        anchors.leftMargin: label.contentWidth + 10*dp
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

