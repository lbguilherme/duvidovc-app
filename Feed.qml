import QtQuick 2.4
import Duvido 1.0
import "qrc:/material"
import "qrc:/components"

ScrollableListView {
    model: FeedModel {}
    delegate: FeedItem {}
}
