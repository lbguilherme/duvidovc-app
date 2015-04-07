import QtQuick 2.4
import QtGraphicalEffects 1.0

Item {
    id: root
    property string source
    height: width/img.sourceSize.width*img.sourceSize.height

    Rectangle {
        id: box
        anchors.fill: parent
        color: Qt.tint("gray", "#500f6464")

        Image {
            id: img
            anchors.fill: parent
            source: root.source
        }
    }

    InnerShadow {
        id: tempShadow
        anchors.fill: source
        source: box
        radius: 10
        samples: 16
        horizontalOffset: -3
        verticalOffset: 7
        color: "#ff000000"
        fast: true
    }

    InnerShadow {
        id: shadow
        anchors.fill: source
        source: tempShadow
        radius: 10
        samples: 16
        horizontalOffset: 3
        verticalOffset: -7
        color: "#ff000000"
        fast: true
    }
}

