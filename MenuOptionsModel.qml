import QtQuick 2.0

pragma Singleton

ListModel {
    id: drawerOptions

    ListElement {
        icon: "qrc:/artwork/icons/settings48.png"
        name: "Criar desafio"
        action: "qrc:/frags/ChallengeCreator.qml"
    }

    ListElement {
        icon: ""
        name: "Ola"
    }

    ListElement {
        icon: ""
        name: "Hi"
    }

    ListElement {
        icon: ""
        name: "Alo"
    }

    ListElement {
        icon: ""
        name: "Alo"
    }
}