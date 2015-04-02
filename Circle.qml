import QtQuick 2.4

Rectangle {
    property real centerX: 0
    property real centerY: 0

    width: radius*2
    height: radius*2
    x: centerX - radius
    y: centerY - radius

}
