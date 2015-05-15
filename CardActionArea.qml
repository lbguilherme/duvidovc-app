import QtQuick 2.4

Item {
    default property alias data: contents.data

    width: parent.width - 20*dp
    height: contents.height + 20*dp

    Column {
        x: 10*dp
        y: 10*dp
        id: contents
        width: parent.width
        spacing: 10*dp
    }
}
