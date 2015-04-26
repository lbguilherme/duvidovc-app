import QtQuick 2.4
import QtGraphicalEffects 1.0

Item {
    id: root

    property string placeholder: ""

    width: windowWidth/2
    height: input.height*2
    clip: true

    Rectangle {
        id: back
        anchors.fill: root
        radius: height/4
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
        verticalOffset: 10
        color: "#ff000000"
        fast: true
    }

    TextInput {
        id: input
        anchors.left: root.left
        anchors.right: root.right
        anchors.verticalCenter: root.verticalCenter
        anchors.margins: height/2
        font.pointSize: 14
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

