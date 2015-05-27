import QtQuick 2.4

Item {
    default property alias data: contents.data
    property real spacing: 10*dp
    property real horizontalMargin: 20*dp
    property real verticalMargin: 20*dp

    width: parent.width - horizontalMargin*2
    height: contents.height + verticalMargin*2

    Column {
        x: horizontalMargin
        y: verticalMargin
        id: contents
        width: parent.width
        spacing: parent.spacing
    }
}
