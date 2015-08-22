import QtQuick 2.4

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
        action: "qrc:/frags/MyChallenges.qml"
    }

    ListElement {
        icon: "qrc:/artwork/icons/celebration11.png"
        name: "Participando"
        action: "qrc:/frags/Participating.qml"
    }

    ListElement {
        icon: "qrc:/artwork/icons/settings48.png"
        name: "Opções"
        action: "qrc:/frags/ConfigPanel.qml"
    }
}
