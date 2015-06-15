import QtQuick 2.4

Item {
    id: root

    property bool goingDown: false
    property alias spacing: list.spacing
    property alias model: list.model
    property alias delegate: list.delegate
    property real topMargin: spacing
    property real bottomMargin: spacing
    property real count: list.count

    ListView {
        id: list
        anchors.fill: parent
        topMargin: parent.topMargin
        bottomMargin: parent.bottomMargin
        pixelAligned: true
        maximumFlickVelocity: 8000*dp
        flickDeceleration: 2000*dp
        spacing: 8*dp
        boundsBehavior: Flickable.StopAtBounds
        clip: true

        property real lastContentY: 0
        visibleArea.onYPositionChanged: {
            root.goingDown = (lastContentY < visibleArea.yPosition && visibleArea.yPosition > 0);
            lastContentY = visibleArea.yPosition;
        }
    }
}
