import QtQuick 2.4
import QtGraphicalEffects 1.0
import QtQuick.Window 2.2
import "qrc:/basic-components"

Item {
    id: root

    property bool hidden: false
    property real menuRadius: width*0.65

    anchors.fill: parent
    anchors.topMargin: hidden ? -menuRadius : 0

    Behavior on anchors.topMargin {
        NumberAnimation {
            duration: 200
        }
    }

    Rectangle {
        anchors.fill: parent
        color: "black"
        opacity: button.expansionValue/button.maximumExpansionValue/1.5
    }

    Circle {
        id: menu
        radius: button.expansionValue
        centerX: root.width/18
        centerY: root.width/18
        color: Qt.lighter("#0f6464", 2)
    }

    Circle {
        id: fragmentBackground
        radius: button.backMode ? Screen.height*2 : 0
        centerX: root.width/18
        centerY: root.width/18
        color: Qt.lighter("#0f6464", 2)
        Behavior on radius {
            NumberAnimation {
                duration: 1000
            }
        }
    }

    RingMenuButton {
        id: button
        maximumExpansionValue: root.menuRadius
    }

    Item {
        opacity: Math.max(0, 3*button.expansionValue/root.menuRadius-2)

        RingMenuItem {
            x: menu.centerX
            y: menu.centerY
            radius: root.menuRadius*0.3 + root.menuRadius*0.4*button.expansionValue/root.menuRadius
            angle: Math.PI/15
            size: root.width/9
            enabled : button.expansionValue == button.maximumExpansionValue
            icon: "qrc:/artwork/icons/paper20-white.png"
            onClicked: {
                button.enterBackMode();
            }
        }

        RingMenuItem {
            x: menu.centerX
            y: menu.centerY
            radius: root.menuRadius*0.3 + root.menuRadius*0.4*button.expansionValue/root.menuRadius
            angle: Math.PI/4
            size: root.width/9
            enabled : button.expansionValue == button.maximumExpansionValue
            icon: "qrc:/artwork/icons/flag32-white.png"
            onClicked: {
                button.enterBackMode();
            }
        }

        RingMenuItem {
            x: menu.centerX
            y: menu.centerY
            radius: root.menuRadius*0.3 + root.menuRadius*0.4*button.expansionValue/root.menuRadius
            angle: Math.PI/2 - Math.PI/15
            size: root.width/9
            enabled : button.expansionValue == button.maximumExpansionValue
            icon: "qrc:/artwork/icons/settings48-white.png"
            onClicked: {
                button.enterBackMode();
            }
        }
    }
}
