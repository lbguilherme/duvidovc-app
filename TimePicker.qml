import QtQuick 2.4

Column {
    spacing: 4*dp

    Row {
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

    Rectangle {
        id: editableLine
        width: parent.width
        height: Math.ceil(2*dp)
        color: "#ddd"
    }
}



