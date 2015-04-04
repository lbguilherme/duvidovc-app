import QtQuick 2.4
import QtGraphicalEffects 1.0

Item {
    Rectangle {
        id: box
        anchors.fill: parent
        color: Qt.tint("gray", "#500f6464")
    }

    InnerShadow {
        id: tempShadow
        anchors.fill: source
        source: box
        radius: 12
        samples: 16
        horizontalOffset: -2
        verticalOffset: 3
        color: "#b0000000"
        fast: true
    }

    InnerShadow {
        id: shadow
        anchors.fill: source
        source: tempShadow
        radius: 12
        samples: 16
        horizontalOffset: 2
        verticalOffset: -3
        color: "#b0000000"
        fast: true
    }
}

