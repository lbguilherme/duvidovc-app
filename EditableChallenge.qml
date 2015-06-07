import QtQuick 2.4
import QtGraphicalEffects 1.0
import "qrc:/material"

Card {
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
                userId: duvido.me.id
                radius: 16*dp
                anchors.verticalCenter: senderName.verticalCenter
            }

            Text {
                id: senderName
                color: "#333"
                text: "<i>"+duvido.me.name+"</i> duvida que..."
                font.pixelSize: 14*dp
                anchors.verticalCenter: senderAvatar.verticalCenter
            }
        }

        Item {
            width: parent.width
            height: 5*dp
        }

        TextField {
            label: "Título"
            width: parent.width
            alignment: Text.AlignHCenter
            fontSize: 16*dp
        }

        FullWidthFriendsInput {
            id: targets
            emptyLabel: "Desafiados"
            filledLabel: "Desafiados:"
        }

    }

    Rectangle {
        width: parent.width
        height: 180*dp
        color: "#aaa"

        Row {
            anchors.centerIn: parent
            spacing: 8*dp

            Button {
                text: "Camera"
                color: "#33a"
            }
            Button {
                text: "Galeria"
                color: "#33a"
            }
        }
    }

    CardContentArea {
        spacing: 18*dp
        verticalMargin: 16*dp
        horizontalMargin: 15*dp

        TextField {
            label: "Descrição do desafio"
            width: parent.width
            fontSize: 16*dp
        }

        Row {
            width: parent.width
            spacing: 14*dp

            TextField {
                label: "Recompensa"
                width: parent.width - timeLeftZone.width - parent.spacing
                fontSize: 12*dp
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
                    opacity: 0.5
                }

                Text {
                    id: timeLeft
                    text: "Tempo"
                    color: "#999"
                }

            }
        }
    }
}
