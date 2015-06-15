import QtQuick 2.4

Item {
    id: dialog
    default property alias data: contents.data
    property real shadowOpacity: 0.65
    property bool onCenter: true
    property real surfaceWidth: -1
    property real surfaceX: 0
    property real surfaceY: 0
    property alias spacing: contents.spacing
    property real topMargin: spacing
    property real bottomMargin: spacing

    Rectangle {
        anchors.fill: parent
        color: "black"
        opacity: parent.shadowOpacity
    }

    MouseArea {
        anchors.fill: parent
        onClicked: window.dialogSource = ""
    }

    MouseArea {
        anchors.fill: surface
    }
    Surface {
        id: surface
        anchors.centerIn: onCenter ? parent : null
        width: dialog.surfaceWidth < 0 ? parent.width - 50*dp : dialog.surfaceWidth
        height: contents.height + parent.topMargin + parent.bottomMargin
        x: surfaceX
        y: surfaceY
        radius: 2*dp
        elevation: 5
        backgroundColor: "#FAFAFA"

        Column {
            id: contents
            width: parent.width
            y: dialog.topMargin
        }
    }
}
