import QtQuick 2.0

pragma Singleton

ListModel {
    id: drawerOptions

    ListElement {
        icon: "qrc:/artwork/icons/create3.png"
        name: "Criar desafio"
        action: "qrc:/frags/ChallengeCreator.qml"
    }

    ListElement {
        icon: ""
        name: "Meus desafios"
        action: ""
    }

    ListElement {
        icon: ""
        name: "Participando"
        action: ""
    }

    ListElement {
        icon: ""
        name: "Feed"
        action: "qrc:/frags/Feed.qml"
    }

    ListElement {
        icon: "qrc:/artwork/icons/settings48.png"
        name: "Opções"
        action: ""
    }
}
