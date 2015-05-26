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
        icon: "qrc:/artwork/icons/swing1.png"
        name: "Meus desafios"
        action: ""
    }

    ListElement {
        icon: "qrc:/artwork/icons/celebration11.png"
        name: "Participando"
        action: ""
    }

    ListElement {
        icon: "qrc:/artwork/icons/molecule10.png"
        name: "Feed"
        action: "qrc:/frags/Feed.qml"
    }

    ListElement {
        icon: "qrc:/artwork/icons/settings48.png"
        name: "Opções"
        action: ""
    }
}
