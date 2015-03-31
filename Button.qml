import QtQuick 2.4
import QtGraphicalEffects 1.0

Item {
    id: root
    property color color: "gray"

    width: 100
    height: 30

    Rectangle {
        id: rect
        anchors.fill: parent
        radius: 6

        gradient: Gradient {
            GradientStop { position: 0.0; color: Qt.darker(root.color, 0.88) }
            GradientStop { position: 1.0; color: root.color }
        }
    }

    DropShadow {
        anchors.fill: rect
        source: rect
        radius: 5
        samples: 16
        verticalOffset: 2
        color: "#80000000"
    }
}

