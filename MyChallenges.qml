import QtQuick 2.4
import "qrc:/material"
import "qrc:/components"
import Duvido 1.0

Item {

    Rectangle {
        anchors.fill: parent
        color: Qt.lighter("#10A8A1", 0.2)
    }

    ScrollableListView {
        anchors.fill: parent
        spacing: 0
        model: MyChallengesModel {}
        delegate: MyChallengeItem {}
    }

}
