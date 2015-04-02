import QtQuick 2.4
import QtGraphicalEffects 1.0
import QtQuick.Window 2.2

Item {
    id: root
    anchors.fill: parent
    property real menuRadius: width*0.5

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

    DropShadow {
        id: shadow
        source: container
        anchors.fill: source
        radius: 5
        samples: 16
        color: "#80000000"
    }

    RingMenuButton {
        id: button
        maximumExpansionValue: root.menuRadius
    }
}
