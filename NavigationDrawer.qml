import QtQuick 2.4

Item {
    y: parent.height
    width: window.width
    height: window.height-parent.height

    property BurgerButton burger
    default property alias data: drawer.data

    Rectangle {
        anchors.fill: parent
        color: Qt.rgba(0, 0, 0, 0.7)
        opacity: burger.arrowness
    }

    MouseArea {
        anchors.fill: parent
        preventStealing: true

        property bool holding
        property bool draging
        property real startV
        property real pressX
        property real pressY
        property real lastX
        property real tempX

        onPositionChanged: {
            if (!holding) return;

            if (draging) {
                mouse.accepted = true;
                burger.arrowness = Math.max(0, Math.min(1, startV+(mouse.x-pressX)/drawer.width));
                lastX = tempX;
                tempX = mouse.x;
            } else {
                if (Math.abs(mouse.y-pressY) >= 15*dp) {
                    holding = false;
                } else if (Math.abs(mouse.x-pressX) > 15*dp) {
                    draging = true;
                    burger.animationEnabled = false;
                }
            }
        }

        onPressed: {
            if (burger.arrowness == 0 && mouse.x > 20*dp) {
                mouse.accepted = false;
                return;
            }

            holding = true;
            pressX = mouse.x;
            pressY = mouse.y;
            lastX = mouse.x;
            startV = burger.arrowness;
        }

        onReleased: {
            burger.animationEnabled = true;
            if (holding) {
                holding = false;
                if (draging) {
                    draging = false;
                    if (mouse.x > lastX)
                        burger.arrowness = 1;
                    else
                        burger.arrowness = 0;
                } else {
                    if (pressX > drawer.width)
                        burger.arrowness = 0;
                }
            }
            mouse.accepted = false;
        }
    }

    Surface {
        id: drawer
        width: Math.min(360*dp, window.width - 60*dp)
        height: parent.height
        x: (burger.arrowness - 1) * width
        elevation: burger.arrowness > 0 ? 4 : 0
        backgroundColor: "#FAFAFA"
    }
}
