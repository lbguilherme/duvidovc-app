import QtQuick 2.4
import "qrc:/material"
import "qrc:/frags"
import "qrc:/singletons"

Item {
    id: configPanel

    Rectangle {
        anchors.fill: parent
        color: "#fafafa"
    }

    ScrollableListView {
        id: configOptions
        anchors.fill: parent
        model: ConfigOptionsModel {}
        delegate: ConfigOption {}
    }
}

