import QtQuick 2.0

Item {
    width: parent.width
    height: 56*dp

    property string label
    property bool labelVisible: true

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
        font.pixelSize: 16*dp
        x: 20*dp
        y: 20*dp
        text: parent.label
        color: "#aaa"
        visible: parent.labelVisible
    }
}
