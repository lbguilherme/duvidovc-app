import QtQuick 2.4
import Duvido 1.0
import "qrc:/material"
import "qrc:/components"

Item {
    ScrollableListView {
        id: list
        anchors.fill: parent
        model: FeedModel {}
        delegate: FeedItem {}
    }

    Text {
        anchors.centerIn: parent
        visible: list.model.rowCount === 0
        color: "white"
        font.weight: Font.Bold
        text: "Você não foi desafiado ainda :("
    }
}
