import QtQuick 2.4
import QtGraphicalEffects 1.0
import QtQuick.Window 2.2
import "qrc:/basic-components"

Item {
    id: root
    height: contents.height + Screen.pixelDensity*8
    width: parent.width

    Item {
        id: container
        anchors.fill: parent
        Rectangle {
            id: box
            anchors.fill: parent
            anchors.margins: Screen.pixelDensity*2
            radius: Screen.pixelDensity
            color: Qt.lighter("#0f6464")
        }
    }

    DropShadow {
        id: shadow
        source: container
        anchors.fill: source
        radius: Screen.pixelDensity
        verticalOffset: Screen.pixelDensity/2
        samples: 16
        color: "#a0000000"
        cached: true
    }

    Column {
        id: contents
        width: container.width - Screen.pixelDensity*8
        x: Screen.pixelDensity*4
        y: Screen.pixelDensity*4
        spacing: Screen.pixelDensity

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
    }
}
