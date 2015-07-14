import QtQuick 2.4
import "qrc:/material"
import Duvido 1.0

Item {
    ScrollableListView {
        anchors.fill: parent
        model: MyChallengesModel {}
        delegate: myChallengeDelegate
    }

    Component {
        id: myChallengeDelegate

        Item {
            width: parent.width
            height: 60*dp

            Text {
                text: title
            }
        }
    }
}
