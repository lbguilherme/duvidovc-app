import QtQuick 2.4
import QtGraphicalEffects 1.0
import QtQuick.Window 2.2
import "qrc:/basic-components"

Item {
    id: root

    property real maximumExpansionValue: 100
    property real expansionValue: mouseArea.dist > root.width/6 ? mouseArea.dist : 0
    property bool backMode: false

    function enterBackMode() {
        backMode = true;
        mouseArea.dist = 0;
    }

    RoundAvatar {
        id: button
        userId: facebook.me.id
        radius: root.width/6 + (root.width/10)*(root.expansionValue/root.maximumExpansionValue)
        centerX: root.width/18
        centerY: root.width/18
        imageX: radius-centerX-2
        imageY: radius-centerY-2
        imageWidth: radius*2-imageX
        imageHeight: radius*2-imageY
    }

    MouseArea {
        id: mouseArea
        enabled: !root.backMode

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
        anchors.fill: parent

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
