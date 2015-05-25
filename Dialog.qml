import QtQuick 2.0

Item {
    default property alias data: contents.data

    Rectangle {
        anchors.fill: parent
        color: "black"
        opacity: 0.65
    }

    Surface {
        anchors.centerIn: parent
        width: parent.width - 50*dp
        height: contents.height
        radius: 2*dp
        elevation: 5
        backgroundColor: "#FAFAFA"

        Column {
            id: contents
            width: parent.width
        }
    }
}
