import QtQuick 2.4
import QtQuick.Window 2.2

Item {
    Flickable {
        anchors.fill: parent
        contentHeight: feedItems.height
        pixelAligned: true
        Column {
            id: feedItems
            width: parent.width

            FeedItem {}
            FeedItem {}
            FeedItem {}
            FeedItem {}
            FeedItem {}
            FeedItem {}
            FeedItem {}
            FeedItem {}
            FeedItem {}
        }
    }
}

