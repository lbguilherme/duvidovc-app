import QtQuick 2.4
import QtGraphicalEffects 1.0

Item {
    property real elevation: 0
    property color backgroundColor: "white"
    property real radius: 0
    default property alias data: rect.data

    RectangularGlow {
        width: parent.width
        height: parent.height
        anchors.centerIn: parent
        anchors.verticalCenterOffset: parent.elevation * 1.8*dp
        glowRadius: parent.elevation * 1.5*dp
        opacity: 0.35 + parent.elevation * 0.05
        spread: 0.1
        color: "black"
        cornerRadius: rect.radius + glowRadius * 2.5
        cached: true
        visible: parent.elevation > 0
    }

    Rectangle {
        id: rect
        anchors.fill: parent
        color: backgroundColor
        radius: parent.radius
        clip: true

        Behavior on color {
            ColorAnimation { duration: 100 }
        }
    }
}
