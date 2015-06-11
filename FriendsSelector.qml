import QtQuick 2.4
import "qrc:/components"
import "qrc:/material"

Dialog {
    id: root
    property var friendsModel

    Item {
        width: parent.width
        height: window.height - 150*dp

        ScrollableListView {
            anchors.fill: parent
            anchors.bottomMargin: confirmFriends.height + 16*dp
            model: root.friendsModel
            delegate: friendDelegate
        }

        Button {
            id: confirmFriends
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 8*dp
            text: root.friendsModel ? "Enviar para " + root.friendsModel.selectedCount + " amigo" + (root.friendsModel.selectedCount > 1 ? "s" : "") : ""
            visible: root.friendsModel ? root.friendsModel.selectedCount > 0 : false
            color: "#0f6464"
            onClicked: dialogSource = "";
        }

    }

    Component {
        id: friendDelegate

        Item {
            width: parent.width
            height: 60*dp

            SelectionTick {
                id: selection
                x: 20*dp
                anchors.verticalCenter: parent.verticalCenter
                color: "#0f6464"
                ticked: model.selected
            }

            Avatar {
                userId: model.id
                radius: 25*dp
                x: 60*dp
                anchors.verticalCenter: parent.verticalCenter
            }

            Text {
                x: 120*dp
                anchors.verticalCenter: parent.verticalCenter
                text: model.name
            }

            MouseArea {
                anchors.fill: parent
                onClicked: model.selected = !model.selected
            }
        }
    }
}

