import QtQuick 2.4
import QtGraphicalEffects 1.0
import "qrc:/material"

Component {
    Card {
        id: card

        Item {
            OptionsButton {
                x: card.width - width
                model: ListModel {
                    ListElement {
                        name: "Redesafiar"
                        action: ""
                    }

                    ListElement {
                        name: "Denunciar"
                        action: "qrc:/frags/ComplaintDialog.qml"
                    }
                }
            }
        }

        CardContentArea {
            spacing: 3*dp
            verticalMargin: 10*dp
            horizontalMargin: 10*dp

            Row {
                width: parent.width
                height: senderAvatar.height
                spacing: 8*dp

                Avatar {
                    id: senderAvatar
                    userId: owner
                    radius: 16*dp
                    anchors.verticalCenter: senderName.verticalCenter
                }

                Text {
                    id: senderName
                    color: "#333"
                    text: "<i>"+ownerName+"</i> duvida"
                    font.pixelSize: 14*dp
                    anchors.verticalCenter: senderAvatar.verticalCenter
                }

            }

            Text {
                id: challengeName
                color: "#111"
                text: title
                font.pixelSize: 18*dp
                width: parent.width
                horizontalAlignment: Text.AlignHCenter
                wrapMode: Text.WordWrap
            }
        }

        CardImageArea {
            source: imageId && width > 0 ? apiUrl+"/image?id="+imageId+"&size="+width : ""
            height: imageId ? Math.ceil(width / imageRatio) : 0
        }

        CardContentArea {
            verticalMargin: 10*dp
            horizontalMargin: 15*dp

            Text {
                text: details
                width: parent.width
                wrapMode: Text.WordWrap
                font.pixelSize: 16*dp
            }

            Row {
                width: parent.width
                spacing: 8*dp

                Text {
                    text: "<b>Recompensa:</b> " + reward
                    width: parent.width - timeLeftZone.width - parent.spacing
                    wrapMode: Text.WordWrap
                    font.pixelSize: 12*dp
                }

                Row {
                    id: timeLeftZone
                    anchors.bottom: parent.bottom
                    spacing: 4*dp

                    Image {
                        width: 16*dp
                        height: width
                        source: "qrc:/artwork/icons/clock.png"
                        mipmap: true
                    }

                    Text {
                        id: timeLeft
                        text: formatTime(duration)
                    }
                }
            }
        }

        CardSplitLine {}

        CardActionArea {
            Row {
                width: parent.width
                spacing: 10*dp

                Button {
                    width: parent.width/2 - parent.spacing/2
                    color: Qt.darker("#FB5240", 1.1)
                    text: "Tô Fora"
                    onClicked: duvido.refuseChallenge(id)
                }
                Button {
                    width: parent.width/2 - parent.spacing/2
                    color: Qt.darker("#36C77B", 1.1)
                    text: "Tô Dentro"
                }
            }
        }
    }
}
