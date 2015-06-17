import QtQuick 2.4
import QtGraphicalEffects 1.0
import Duvido 1.0
import "qrc:/components"
import "qrc:/singletons"
import "qrc:/material"

Item {
    id: drawerContent

    Column {
        width: parent.width

        Item {
            id: header
            width: parent.width
            height: 200*dp
            clip: true

            Image {
                id: avatarBack
                width: parent.width
                height: width*sourceSize.height/sourceSize.width
                anchors.verticalCenter: parent.verticalCenter
                visible: false
            }

            AvatarLoader {
                target: avatarBack
                userId: duvido.me.id
            }

            GaussianBlur {
                source: avatarBack
                anchors.fill: avatarBack
                radius: 30
                samples: radius
                cached: true
            }

            Rectangle {
                anchors.fill: avatarBack
                color: Qt.lighter("#0E6965", 2)
                opacity: 0.4
            }

            Avatar {
                id: avatar
                userId: duvido.me.id
                radius: 65*dp
                anchors.centerIn: parent
                anchors.verticalCenterOffset: -15*dp
            }

            Text {
                text: duvido.me.name
                x: 0
                y: 2*avatar.radius+25*dp
                width: parent.width
                horizontalAlignment: Text.AlignHCenter
                font.pixelSize: 22*dp
                font.weight: Font.Bold
            }
        }

        ScrollableListView {
            id: drawerOptionsView
            width: parent.width
            height: drawerContent.height - header.height - parent.spacing
            model: MenuOptionsModel
            delegate: NavigationDrawerOption {}
        }
    }
}
