import QtQuick 2.4
import QtGraphicalEffects 1.0
import "qrc:/basic-components"

Item {
    property real angle: 0
    property real radius: 0
    property real size: 0

    Circle {
        id: circle
        visible: false
        centerX: parent.radius * Math.cos(angle)
        centerY: parent.radius * Math.sin(angle)
        radius: parent.size
        color: Qt.lighter("#0f6464", 1.2)
    }

    InnerShadow {
        anchors.fill: source
        source: circle
        radius: 8
        samples: 16
        horizontalOffset: -3
        verticalOffset: 3
        color: "#b0000000"
        fast: true
    }
}
