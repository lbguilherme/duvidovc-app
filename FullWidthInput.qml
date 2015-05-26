import QtQuick 2.4

Item {
    width: parent.width
    height: 56*dp

    property string label
    property alias labelVisible: label.visible
    property alias labelWidth: label.contentWidth

    Rectangle {
        anchors.fill: parent
        color: "white"
    }

    Rectangle {
        y: parent.height
        width: parent.width
        height: Math.max(1, Math.ceil(1*dp))
        color: "#ddd"
    }

    Text {
        id: label
        font.pixelSize: 16*dp
        x: 20*dp
        y: 20*dp
        text: parent.label
        color: "#aaa"
    }
}
