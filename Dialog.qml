import QtQuick 2.4

Item {
    default property alias data: contents.data

    Rectangle {
        anchors.fill: parent
        color: "black"
        opacity: 0.65
    }

    MouseArea {
        anchors.fill: parent
        onClicked: window.dialogSource = ""
    }

    Surface {
        anchors.centerIn: parent
        width: parent.width - 50*dp
        height: contents.height
        radius: 2*dp
        elevation: 5
        backgroundColor: "#FAFAFA"

        MouseArea {
            anchors.fill: parent
        }

        Column {
            id: contents
            width: parent.width
        }
    }
}
