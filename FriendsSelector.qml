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
            model: root.friendsModel
            delegate: friendDelegate
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

