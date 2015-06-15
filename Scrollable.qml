import QtQuick 2.4

Item {
    id: root

    property bool goingDown: false
    property alias spacing: items.spacing
    default property alias data: items.data
    property alias contentHeight: flickable.contentHeight

    Flickable {
        id: flickable
        anchors.fill: parent
        topMargin: items.spacing
        bottomMargin: items.spacing
        contentHeight: items.height
        pixelAligned: true
        maximumFlickVelocity: 8000*dp
        flickDeceleration: 2000*dp
        boundsBehavior: Flickable.StopAtBounds
        clip: true

        property real lastContentY: 0
        visibleArea.onYPositionChanged: {
            root.goingDown = (lastContentY < visibleArea.yPosition && visibleArea.yPosition > 0);
            lastContentY = visibleArea.yPosition;
        }

        Column {
            id: items
            width: parent.width
            spacing: 25*dp
        }
    }
}
