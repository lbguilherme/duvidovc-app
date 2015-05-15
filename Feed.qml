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

        property real lastContentY: 0
        visibleArea.onYPositionChanged: {
            root.goingDown = (lastContentY < visibleArea.yPosition && visibleArea.yPosition > 0);
            lastContentY = visibleArea.yPosition;
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
