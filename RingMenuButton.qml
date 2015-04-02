import QtQuick 2.4
import QtGraphicalEffects 1.0
import QtQuick.Window 2.2

Item {
    id: root
    anchors.fill: parent
    property real maximumExpansionValue: 100
    property real expansionValue: mouseArea.dist

    Item {
        id: container
        anchors.fill: parent

        Item {
            id: avatar
            anchors.fill: button
            visible: false
            Image {
                source: "qrc:/artwork/face.jpg"
                x: -button.x
                y: -button.y
                width: button.radius*2+button.x
                height: button.radius*2+button.y
            }
        }


        Circle {
            id: button
            radius: root.width/6
            centerX: root.width/18
            centerY: root.width/18
            visible: false
            color: "black"//Qt.lighter("#0f6464")
        }

        OpacityMask {
            anchors.fill: button
            source: avatar
            maskSource: button
            opacity: 0.5+mouseArea.dist/root.maximumExpansionValue/2
        }

        MouseArea {
            id: mouseArea
            property bool gestureStarted: false
            property real dist: 0

            Behavior on dist {
                NumberAnimation {
                    duration: 200
                }
            }

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
                if (computeDist() > button.radius + (root.maximumExpansionValue-button.radius)/2) {
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

    DropShadow {
        id: shadow
        source: container
        anchors.fill: source
        radius: 5
        samples: 16
        color: "#b0000000"
    }
}
