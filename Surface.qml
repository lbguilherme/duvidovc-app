import QtQuick 2.4
import QtGraphicalEffects 1.0

Item {
    property int elevation: 0
    property color backgroundColor: elevation > 0 ? "white" : "transparent"
    property real radius: 2*dp
    default property alias data: rect.data

    property var topShadow: [
        {"opacity": 0,    "offset": 0*dp,  "blur": 0*dp},
        {"opacity": 0.12, "offset": 1*dp,  "blur": 1.5*dp},
        {"opacity": 0.16, "offset": 3*dp,  "blur": 3*dp},
        {"opacity": 0.19, "offset": 10*dp, "blur": 10*dp},
        {"opacity": 0.25, "offset": 14*dp, "blur": 14*dp},
        {"opacity": 0.30, "offset": 19*dp, "blur": 19*dp}
    ]

    property var bottomShadow: [
        {"opacity": 0,    "offset": 0*dp,  "blur": 0*dp},
        {"opacity": 0.24, "offset": 1*dp,  "blur": 1*dp},
        {"opacity": 0.23, "offset": 3*dp,  "blur": 3*dp},
        {"opacity": 0.23, "offset": 6*dp,  "blur": 3*dp},
        {"opacity": 0.22, "offset": 10*dp, "blur": 5*dp},
        {"opacity": 0.22, "offset": 15*dp, "blur": 6*dp}
    ]

    RectangularGlow {
        property var elevationInfo: bottomShadow[Math.min(elevation, 5)]

        anchors.fill: parent
        anchors.verticalCenterOffset: elevationInfo.offset
        glowRadius: elevationInfo.blur
        opacity: elevationInfo.opacity
        spread: 0.05
        color: "black"
        cornerRadius: glowRadius * 2.5
        cached: true
    }

    RectangularGlow {
        property var elevationInfo: topShadow[Math.min(elevation, 5)]

        anchors.fill: parent
        anchors.verticalCenterOffset: elevationInfo.offset
        glowRadius: elevationInfo.blur
        opacity: elevationInfo.opacity
        spread: 0.05
        color: "black"
        cornerRadius: rect.radius + glowRadius * 2.5
        cached: true
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
