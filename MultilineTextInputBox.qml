import QtQuick 2.4
import QtGraphicalEffects 1.0

Item {
    id: root

    property string placeholder: ""

    width: windowWidth/2
    height: input.height + input.font.pixelSize
    clip: true

    Rectangle {
        id: back
        anchors.fill: root
        radius: input.font.pixelSize/2
        color: "white"
        visible: false
    }

    InnerShadow {
        id: tempShadow
        anchors.fill: source
        source: back
        radius: 10
        samples: 16
        horizontalOffset: -1
        verticalOffset: 5
        color: "#ff000000"
        fast: true
    }

    TextEdit {
        id: input
        anchors.left: root.left
        anchors.right: root.right
        anchors.verticalCenter: root.verticalCenter
        anchors.margins: font.pixelSize/2
        font.pointSize: 14
        height: font.pixelSize*5
        wrapMode: TextEdit.Wrap
        color: "black"
    }

    Text {
        anchors.fill: input
        text: root.placeholder
        font.pointSize: 14
        color: "gray"
        visible: input.text == "" && !input.focus
    }
}
