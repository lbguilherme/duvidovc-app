import QtQuick 2.4
import QtGraphicalEffects 1.0
import "qrc:/material"

Card {
    id: root

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

        Text {
            id: challengeName
            color: "#111"
            text: "você faça a dança da macarena de toalha no meio do morrinho da ufba"
            font.pixelSize: 18*dp
            width: parent.width
            horizontalAlignment: Text.AlignHCenter
            wrapMode: Text.WordWrap
        }
    }

    CardImageArea {
        source: "qrc:/artwork/sample.jpg"
    }

    CardContentArea {
        verticalMargin: 10*dp
        horizontalMargin: 15*dp
        Text {
            text: "Me mostre o quanto você gosta de livros! Vale tudo."
            width: parent.width
            wrapMode: Text.WordWrap
            font.pixelSize: 16*dp
        }

        Row {
            width: parent.width
            spacing: 8*dp

            Text {
                text: "<b>Recompensa:</b> Um dos meus livros velhos, você escolhe. Estou de mudança."
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
                    text: "6:31"
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
            }
            Button {
                width: parent.width/2 - parent.spacing/2
                color: Qt.darker("#36C77B", 1.1)
                text: "Tô Dentro"
            }
        }
    }
}
