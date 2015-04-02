import QtQuick 2.4
import QtGraphicalEffects 1.0
import QtQuick.Window 2.2

Item {
    id: root
    anchors.fill: parent
    property real maximumExpansionValue: 100
    signal expansionChanged(real value)

    Item {
        id: container
        anchors.fill: parent

        Circle {
            id: button
            radius: root.width/6
            centerX: root.width/18
            centerY: root.width/18
            color: Qt.lighter("#0f6464")
        }

        MouseArea {
            id: mouseArea
            property bool gestureStarted: false
            property real dist: 0
            property real lastDist: 0

            function computeDist() {
                var x = mouseArea.mouseX;
                var y = mouseArea.mouseY;
                var cx = button.x + button.width/2;
                var cy = button.y + button.height/2;
                return Math.sqrt((x-cx)*(x-cx) + (y-cy)*(y-cy));
            }

            hoverEnabled: true
            anchors.fill: container
            onPressed: if (computeDist() <= Math.max(dist, button.radius)) gestureStarted = true
            onReleased: {
                gestureStarted = false;
                if (dist > lastDist) {
                    root.expansionChanged(dist = root.maximumExpansionValue)
                } else {
                    root.expansionChanged(dist = 0)
                }
            }
            onPositionChanged: {
                if (!gestureStarted) return;
                lastDist = dist
                dist = computeDist();
                root.expansionChanged(Math.min(root.maximumExpansionValue, dist))
            }
        }
    }

    DropShadow {
        id: shadow
        source: container
        anchors.fill: source
        radius: 5
        samples: 16
        color: "#b0000000"
    }
}
