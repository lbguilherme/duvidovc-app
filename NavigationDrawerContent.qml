import QtQuick 2.4
import QtGraphicalEffects 1.0

Item {
    id: drawerContent

    property QtObject stackManager

    Column {
        spacing: 8*dp
        width: parent.width

        Item {
            id: header
            width: parent.width
            height: 200*dp
            clip: true

            Image {
                id: avatarBack
                source: duvido.api.avatar(duvido.me.id)
                width: parent.width
                anchors.verticalCenter: parent.verticalCenter
                visible: false
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
                centerX: parent.width /2
                centerY: 10*dp+radius
            }

            Text {
                text: duvido.me.name
                x: 0
                width: parent.width
                horizontalAlignment: Text.AlignHCenter
                y: 2*avatar.radius+25*dp
                font.pixelSize: 22*dp
                font.weight: Font.Bold
            }
        }

        ListModel {
            id: drawerOptions

            ListElement {
                icon: 'qrc:/artwork/icons/settings48.png'
                name: 'Selecionar amigo'
                action: 'qrc:/frags/FriendsSelector.qml'
            }


            ListElement {
                icon: ''
                name: 'Ola'
            }


            ListElement {
                icon: ''
                name: 'Hi'
            }


            ListElement {
                icon: ''
                name: 'Alo'

            }

            ListElement {
                icon: ''
                name: 'Alo'
            }
        }

        ListView {
            width: parent.width
            id: drawerOptionsView
            model: drawerOptions
            delegate: NavigationDrawerOption{
                stackManager: drawerContent.stackManager
            }
            height: drawerContent.height - header.height - parent.spacing
            boundsBehavior: Flickable.StopAtBounds
            clip: true
        }

    }

}
