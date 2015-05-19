import QtQuick 2.4

Item {
    id: drawerContent

    property QtObject stackManager

    Column {
        spacing: 8*dp
        width: parent.width

        Rectangle {
            id: header
            color: "#cacaca"
            width: parent.width
            height: 200*dp

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
                font.pixelSize: 26*dp
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
