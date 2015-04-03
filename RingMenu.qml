import QtQuick 2.4
import QtGraphicalEffects 1.0
import QtQuick.Window 2.2
import "qrc:/basic-components"

Item {
    id: root
    anchors.fill: parent
    property real menuRadius: width*0.6

    Item {
        id: container
        anchors.fill: parent


        Circle {
            id: menu
            radius: button.expansionValue
            centerX: root.width/18
            centerY: root.width/18
            color: Qt.lighter("#0f6464", 2)
        }

    }

    RingMenuButton {
        id: button
        maximumExpansionValue: root.menuRadius
    }
}
