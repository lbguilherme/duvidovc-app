import QtQuick 2.4

Item {
    id: root

    property bool goingDown: false
    property alias spacing: items.spacing
    default property alias data: items.data

    Flickable {
        anchors.fill: parent
        contentHeight: items.height + 2*items.spacing
        pixelAligned: true
        maximumFlickVelocity: height
        boundsBehavior: Flickable.StopAtBounds

        property real lastContentY: 0
        visibleArea.onYPositionChanged: {
            root.goingDown = (lastContentY < visibleArea.yPosition && visibleArea.yPosition > 0);
            lastContentY = visibleArea.yPosition;
        }

        // Work around Qt bug => https://bugreports.qt.io/browse/QTBUG-35608
        Component.onCompleted: {
            flickDeceleration = flickDeceleration * 4
            maximumFlickVelocity = maximumFlickVelocity * 4
        }

        Column {
            id: items
            width: parent.width
            y: spacing
            spacing: 25*dp
        }
    }
}
