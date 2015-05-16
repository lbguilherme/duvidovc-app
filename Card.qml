import QtQuick 2.4

Surface {
    default property alias data: contents.data

    width: parent.width - 15*dp
    height: contents.height
    anchors.horizontalCenter: parent.horizontalCenter
    radius: 2*dp
    elevation: 2
    backgroundColor: "#FAFAFA"

    Column {
        id: contents
        width: parent.width
    }
}
