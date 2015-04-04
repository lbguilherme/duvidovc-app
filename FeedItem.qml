import QtQuick 2.4
import QtGraphicalEffects 1.0
import QtQuick.Window 2.2
import "qrc:/basic-components"

Item {
    id: root
    height: Screen.pixelDensity*60
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
        anchors.fill: container
        anchors.margins: Screen.pixelDensity*4
        spacing: Screen.pixelDensity

        Text {
            text: "Desafio Teste"
        }

        ImageBox {
            width: parent.width
            height: root.height/2
        }

        Text {
            text: "aaaa"
        }
    }
}
