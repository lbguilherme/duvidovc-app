import QtQuick 2.4

Item {
    id: root

    property string userId

    Image {
        id: avatar
        anchors.fill: parent
        source: duvido.api.avatar(root.userId)
    }

    Image {
        anchors.fill: parent
        source: "qrc:/artwork/avatar-placeholder.png"
        visible: avatar.status !== Image.Ready
    }
}
