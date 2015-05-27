import QtQuick 2.4
import QtGraphicalEffects 1.0

Item {
    id: root

    property string userId
    property real radius: Math.max(width, height)
    width: radius*2
    height: radius*2

    Item {
        id: img
        anchors.fill: parent
        visible: false

        Image {
            id: avatar
            anchors.fill: parent
            source: duvido.api.avatar(root.userId)
            mipmap: true
        }

        Image {
            anchors.fill: parent
            source: "qrc:/artwork/avatar-placeholder.png"
            visible: avatar.status !== Image.Ready
        }
    }

    Rectangle {
        id: mask
        anchors.fill: parent
        radius: root.radius
        visible: false
        color: "black"
    }

    OpacityMask {
        anchors.fill: parent
        source: img
        maskSource: mask
        cached: true
    }
}
