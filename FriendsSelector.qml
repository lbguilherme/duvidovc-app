import QtQuick 2.4
import "qrc:/components"
import "qrc:/material"

Dialog {
    Item {
        width: parent.width
        height: window.height - 150*dp

        ScrollableListView {
            anchors.fill: parent
            anchors.margins: 15*dp
            spacing: 15*dp

            model: duvido.friends
            delegate: friendDelegate
        }
    }

    Component {
        id: friendDelegate

        Item {
            width: parent.width
            height: 50*dp

            SelectionTick {
                x: 10*dp
                anchors.verticalCenter: parent.verticalCenter
                color: "#0f6464"
            }

            Avatar {
                userId: id
                radius: 25*dp
                x: 50*dp
                anchors.verticalCenter: parent.verticalCenter
            }

            Text {
                x: 110*dp
                anchors.verticalCenter: parent.verticalCenter
                text: name
            }
        }
    }
}

