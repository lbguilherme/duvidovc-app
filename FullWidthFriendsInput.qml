import QtQuick 2.4
import Duvido 1.0
import "qrc:/material"

Item {
    id: root
    width: parent.width
    height: Math.max(grid.contentHeight, 56*dp)
    property var model: FriendsModel {}
    property string emptyLabel: ""
    property string filledLabel: ""
    property string error: ""

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
            parent.error = ""
        }
    }

    Rectangle {
        id: editableLine
        width: parent.width
        height: Math.ceil(2*dp)
        color: error == "" ? "#ddd" : "#DD2C00"
        y: root.height + 4*dp
    }

    Text {
        id: errorLabel
        font.pixelSize: 12*dp
        color: "#DD2C00"
        text: error
        visible: error
        y: editableLine.y + 4*dp
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
