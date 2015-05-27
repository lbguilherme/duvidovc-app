import QtQuick 2.4
import QtGraphicalEffects 1.0
import "qrc:/material"

Card {
    id: root

    CardContentArea {
        Item {
            width: parent.width
            height: senderName.height

            Text {
                id: senderName
                color: "#333"
                text: "Fulano de Tal"
                width: parent.width
                horizontalAlignment: Text.AlignRight
            }

            Avatar {
                id: senderAvatar
                userId: "4"
                radius: senderName.contentHeight/1.7
                anchors.verticalCenter: senderName.verticalCenter
                x: senderName.x + senderName.width - senderName.contentWidth - radius*3
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
        Text {
            text: "Me mostre o quanto você gosta de livros! Vale tudo."
            width: parent.width
            wrapMode: Text.WordWrap
        }

        Text {
            text: "<b>Recompensa:</b> Um dos meus livros velhos, você escolhe. Estou de mudança."
            width: parent.width
            wrapMode: Text.WordWrap
            font.pointSize: 11
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
