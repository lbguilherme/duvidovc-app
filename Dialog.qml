import QtQuick 2.4

Item {
    id: dialog
    default property alias data: contents.data
    property real shadowOpacity: 0.65
    property bool onCenter: true
    property real surfaceWidth: -1
    property real surfaceX: 0
    property real surfaceY: 0

    Rectangle {
        anchors.fill: parent
        color: "black"
        opacity: parent.shadowOpacity
    }

    MouseArea {
        anchors.fill: parent
        onClicked: window.dialogSource = ""
    }

    Surface {
        anchors.centerIn: onCenter ? parent : null
        width: dialog.surfaceWidth < 0 ? parent.width - 50*dp : dialog.surfaceWidth
        height: contents.height
        x: surfaceX
        y: surfaceY
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
