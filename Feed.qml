import QtQuick 2.4

Item {
    id: root

    property bool goingDown: false

    Flickable {
        anchors.fill: parent
        contentHeight: feedItems.height + 2*feedItems.spacing
        pixelAligned: true
        maximumFlickVelocity: height
        enabled: parent.enabled
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
            id: feedItems
            width: parent.width
            y: spacing
            spacing: 25*dp

            FeedItem {}
            FeedItem {}
            FeedItem {}
            FeedItem {}
            FeedItem {}
            FeedItem {}
        }
    }
}
