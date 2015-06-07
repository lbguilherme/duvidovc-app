import QtQuick 2.4

Item {
    property string source

    width: parent.width
    height: width/img.sourceSize.width*img.sourceSize.height

    Image {
        id: img
        anchors.fill: parent
        source: parent.source
    }
}
