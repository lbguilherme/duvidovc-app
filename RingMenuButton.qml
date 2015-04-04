import QtQuick 2.4
import QtGraphicalEffects 1.0
import QtQuick.Window 2.2
import "qrc:/basic-components"

Item {
    id: root

    property real maximumExpansionValue: 100
    property real expansionValue: mouseArea.dist > button.radius ? mouseArea.dist : 0

    anchors.fill: parent

    Item {
        id: container
        anchors.fill: parent
        visible: false

        RoundImage {
            id: button
            source: "qrc:/artwork/face.jpg"
            radius: root.width/6
            centerX: root.width/18
            centerY: root.width/18
            imageX: radius-centerX
            imageY: radius-centerY
            imageWidth: radius*2-imageX
            imageHeight: radius*2-imageY
        }
    }

    DropShadow {
        id: shadow
        source: container
        anchors.fill: source
        radius: 5
        samples: 16
        color: "#a0000000"
        cached: true
        opacity: 0.5 + (root.expansionValue/root.maximumExpansionValue)/2
    }

    MouseArea {
        id: mouseArea

        property bool gestureStarted: false
        property bool moved: false
        property real dist: 0

        Behavior on dist {
            enabled: !mouseArea.gestureStarted
            NumberAnimation {
                duration: 200
            }
        }

        function computeDist() {
            var x = mouseArea.mouseX;
            var y = mouseArea.mouseY;
            var cx = button.centerX
            var cy = button.centerY;
            return Math.sqrt((x-cx)*(x-cx) + (y-cy)*(y-cy));
        }

        hoverEnabled: true
        anchors.fill: container

        onPressed: {
            if (computeDist() <= Math.max(dist, button.radius))
                gestureStarted = true;
            else if (dist > 0 && computeDist() > dist)
                dist = 0;
            else
                mouse.accepted = false;
        }
        onReleased: {
            if (!gestureStarted) return;
            mouse.accepted = false;
            gestureStarted = false;
            if (!moved && dist == 0) {
                dist = root.maximumExpansionValue;
            } else {
                if (computeDist() > root.maximumExpansionValue/2) {
                    dist = root.maximumExpansionValue;
                } else {
                    dist = 0;
                }
            }
            moved = false;
        }
        onPositionChanged: {
            if (!gestureStarted) return;
            mouse.accepted = false;
            var newDist = Math.min(root.maximumExpansionValue, computeDist());
            if (newDist > button.radius) dist = newDist;
            if (dist > 0) moved = true;
        }
    }
}
