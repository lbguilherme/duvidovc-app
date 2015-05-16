import QtQuick 2.4
import "qrc:/components"
import "qrc:/material"

Item {
    id: scene

    Item {
        y: actionBar.height
        width: parent.width
        height: parent.height - actionBar.height

        Rectangle {
            anchors.fill: parent
            color: "#10A8A1"
        }

        Feed {
            anchors.fill: parent
        }
    }

    ActionBar {
        id: actionBar
        color: "#0E6965"
    }
}
