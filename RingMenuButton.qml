import QtQuick 2.4
import QtGraphicalEffects 1.0
import QtQuick.Window 2.2
import "qrc:/basic-components"

Item {
    id: root
    anchors.fill: parent
    property real maximumExpansionValue: 100
    property real expansionValue: mouseArea.dist > button.radius ? mouseArea.dist : 0

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
        onPressed: if (computeDist() <= Math.max(dist, button.radius)) gestureStarted = true
        onReleased: {
            if (!gestureStarted) return;
            gestureStarted = false;
            if (computeDist() > root.maximumExpansionValue/2) {
                dist = root.maximumExpansionValue;
            } else {
                dist = 0;
            }
        }
        onPositionChanged: {
            if (!gestureStarted) return;
            var newDist = Math.min(root.maximumExpansionValue, computeDist());
            dist = newDist < button.radius ? 0 : newDist;
        }
    }

}
