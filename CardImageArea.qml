import QtQuick 2.4

Item {
    property string source

    width: parent.width
    height: width/img.sourceSize.width*img.sourceSize.height + 30*dp

    Image {
        y: 15*dp
        id: img
        anchors.fill: parent
        source: parent.source
    }
}
