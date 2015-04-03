import QtQuick 2.0
import QtGraphicalEffects 1.0

Item {
    id: root

    property string source
    property real radius: 1
    property real centerX: 0
    property real centerY: 0
    property real imageX: 0
    property real imageY: 0
    property real imageWidth: radius*2
    property real imageHeight: radius*2

    Item {
        id: img
        anchors.fill: mask
        visible: false
        Image {
            source: root.source
            x: root.imageX
            y: root.imageY
            width: root.imageWidth
            height: root.imageHeight
        }
    }

    Circle {
        id: mask
        radius: root.radius
        centerX: root.centerX
        centerY: root.centerY
        visible: false
        color: "black"
    }

    OpacityMask {
        anchors.fill: mask
        source: img
        maskSource: mask
        cached: true
    }
}
