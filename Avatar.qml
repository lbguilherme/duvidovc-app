import QtQuick 2.4
import QtGraphicalEffects 1.0
import Duvido 1.0

Item {
    id: root
    width: radius*2
    height: radius*2
    property string userId
    property real radius: Math.max(width, height)

    Item {
        id: img
        anchors.fill: parent
        visible: false

        Image {
            id: avatar
            anchors.fill: parent
            mipmap: true
        }

        AvatarLoader {
            target: avatar
            userId: root.userId
        }

        Image {
            anchors.fill: parent
            source: "qrc:/artwork/avatar-placeholder.png"
            visible: avatar.status !== Image.Ready || !avatar.source
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
