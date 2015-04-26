import QtQuick 2.4
import QtGraphicalEffects 1.0
import "qrc:/basic-components"

Item {
    id: root
    height: contents.height + dpi*8
    width: parent.width

    Item {
        id: container
        anchors.fill: parent
        Rectangle {
            id: box
            anchors.fill: parent
            anchors.margins: dpi*2
            radius: dpi
            color: "#eee"
        }
    }

    DropShadow {
        id: shadow
        source: container
        anchors.fill: source
        radius: dpi
        verticalOffset: dpi/2
        samples: 16
        color: "#a0000000"
        cached: true
    }

    Column {
        id: contents
        width: container.width - dpi*8
        x: dpi*4
        y: dpi*4
        spacing: dpi

        Text {
            id: senderName
            color: "#333"
            text: "Fulano de Tal"
            width: parent.width
            horizontalAlignment: Text.AlignRight
        }

        RoundImage {
            id: senderAvatar
            source: "qrc:/artwork/face.jpg"
            radius: senderName.contentHeight/1.7
            centerX: senderName.x + senderName.width - senderName.contentWidth - radius*1.5
            centerY: senderName.y + senderName.contentHeight/2
        }

        ImageBox {
            width: parent.width
            source: "qrc:/artwork/sample.jpg"
        }

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

        Row {
            width: parent.width
            Button {
                width: parent.width/2
                color: Qt.darker("#FB5240", 1.1)
                text: "Tô Fora"
            }
            Button {
                width: parent.width/2
                color: Qt.darker("#36C77B", 1.1)
                text: "Tô Dentro"
            }
        }
    }
}
