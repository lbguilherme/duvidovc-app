import QtQuick 2.4
import QtGraphicalEffects 1.0
import "qrc:/basic-components"

Item {
    id: root

    property real angle: 0
    property real radius: 0
    property real size: 0
    property bool enabled: true
    property string icon

    signal clicked()

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

    Image {
        id: img
        anchors.centerIn: circle
        width: circle.radius
        height: circle.radius
        source: root.icon
        visible: false
        smooth: true
    }

    DropShadow {
        anchors.fill: source
        source: img
        radius: 8
        samples: 16
        horizontalOffset: -3
        verticalOffset: 3
        color: "#b0000000"
        cached: true
    }

    MouseArea {
        enabled: root.enabled
        anchors.fill: circle
        propagateComposedEvents: true
        onClicked: {
            var dx = (mouse.x + x - circle.centerX);
            var dy = (mouse.y + y - circle.centerY);
            if (Math.sqrt(dx*dx + dy*dy) <= circle.radius) {
                root.clicked();
            } else {
                mouse.accepted = false;
            }
        }
    }
}
