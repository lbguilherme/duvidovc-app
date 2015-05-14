import QtQuick 2.4
import "qrc:/basic-components"

Rectangle {
    width: 100
    height: 62

    ListView {
        model: duvido.friends
        delegate: friendDelegate
    }

    Component {
        id: friendDelegate

        Rectangle {
            Avatar {
                userId: id
            }
            Text {
                text: name
            }
        }
    }
}

