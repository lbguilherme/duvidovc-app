import QtQuick 2.4
import "qrc:/material"
import Duvido 1.0

Item {
    id: myChallenges
    width: window.width

    Rectangle {
        anchors.fill: parent
        color: "#fafafa"
    }

    ScrollableListView {
        anchors.fill: parent
        model: MyChallengesModel {}
        delegate: myChallengeDelegate
    }

    Component {
        id: myChallengeDelegate

        Item {
            id: challengeMade
            width: parent.width
            height: 60*dp
            property bool opened: false
            property real openess: opened ? 1 : 0
            Behavior on openess {
                NumberAnimation {
                    duration: 200
                }
            }

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    challengeMade.opened = !challengeMade.opened;
                }
            }

            Rectangle {
                id: statusIcon
                width: 40*dp
                height: 40*dp
                x: 16*dp
                y: 8*dp
                color: "#ccc"
                radius: width
            }

            Item {
                width: parent.width - (statusIcon.width + statusIcon.x + 16*dp) - moreIcon.width - 16*dp
                x: statusIcon.width+ statusIcon.x + 16*dp
                y: 10*dp

                Text {
                    id: challengeTitle
                    text: title
                    width: parent.width
                    font.pixelSize: 14*dp
                    elide: Text.ElideRight
                }

                Text {
                    id: responseStatus
                    text: "Respondido por x de y"
                    y: challengeTitle.height + 4*dp
                    font.pixelSize: 12*dp
                    elide: Text.ElideRight
                    color: "#666"
                    opacity: 1-challengeMade.openess
                }
            }

            Item {
                id: moreIcon
                width: 28*dp
                height: 28*dp
                x: parent.width - width - 16*dp
                transformOrigin: Item.Center
                anchors.verticalCenter: parent.verticalCenter
                rotation: challengeMade.openess*180

                Rectangle {
                    width: 15*dp
                    height: 4*dp
                    rotation: 45
                    color: "#999"
                    x: 3*dp
                    anchors.verticalCenter: parent.verticalCenter
                }

                Rectangle {
                    width: 15*dp
                    height: 4*dp
                    rotation: -45
                    color: "#999"
                    x: 11*dp
                    anchors.verticalCenter: parent.verticalCenter
                }
            }

            Rectangle {
                width: parent.width
                height: Math.ceil(1*dp)
                y: parent.height
                color: "#ddd"
            }
        }
    }
}
