import QtQuick 2.4
import QtQuick.Window 2.2

Item {
    id: root

    property bool goingDown: false

    Flickable {
        anchors.fill: parent
        contentHeight: feedItems.height
        pixelAligned: true
        maximumFlickVelocity: height

        property real lastContentY: 0
        visibleArea.onYPositionChanged: {
            root.goingDown = (lastContentY < visibleArea.yPosition && visibleArea.yPosition > 0);
            lastContentY = visibleArea.yPosition;
        }

        Column {
            id: feedItems
            width: parent.width

            FeedItem {}
            FeedItem {}
            FeedItem {}
            FeedItem {}
            FeedItem {}
            FeedItem {}
        }
    }
}

