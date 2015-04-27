import QtQuick 2.4
import "qrc:/components"

Item {
    id: scene

    Rectangle {
        anchors.fill: parent
        color: "#30D7D0"
    }

    Feed {
        id: feed
        anchors.fill: parent
        enabled: !menu.activated
    }

    RingMenu {
        id: menu
        anchors.fill: parent
        hidden: feed.goingDown
    }
}
