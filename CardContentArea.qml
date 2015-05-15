import QtQuick 2.4

Item {
    default property alias data: contents.data

    width: parent.width - 40*dp
    height: contents.height + 40*dp

    Column {
        x: 20*dp
        y: 20*dp
        id: contents
        width: parent.width
        spacing: 10*dp
    }
}
