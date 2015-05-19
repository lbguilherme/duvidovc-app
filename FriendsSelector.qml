import QtQuick 2.4
import 'qrc:/components'
Rectangle {
    width: 100
    height: 200

    ListView {
        anchors.fill: parent
        anchors.margins: 10
        spacing: 10

        model: duvido.friends
        delegate: friendDelegate
    }

    Component {
        id: friendDelegate

        Rectangle {
            width: parent.width
            height: 50

            Avatar {
                userId: id
                radius: 25
                centerX: 25
                centerY: 25
            }

            Text {
                x: 60
                anchors.verticalCenter: parent.verticalCenter
                text: name
            }
        }
    }
}

