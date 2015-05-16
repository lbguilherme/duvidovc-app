import QtQuick 2.0

Item {
    width: 24*dp
    height: 24*dp

    Column {
        anchors.centerIn: parent
        spacing: 5*dp

        Rectangle {
            id: rect1
            width: 24*dp
            height: Math.ceil(2*dp)
        }

        Rectangle {
            id: rect2
            width: 24*dp
            height: Math.ceil(2*dp)
        }

        Rectangle {
            id: rect3
            width: 24*dp
            height: Math.ceil(2*dp)
        }
    }
}
