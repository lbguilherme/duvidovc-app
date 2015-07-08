import QtQuick 2.4

ListModel {
    id: configOptionsModel

    ListElement {
        name: "Logout"
        action: "duvido.logout()"
        group: 'Geral'
    }

    ListElement {
        name: "Versão"
        action: ""
        group: 'Sobre'
    }

    ListElement {
        name: "Licença"
        action: ""
        group: 'Sobre'
    }

    ListElement {
        name: "Termos de Uso"
        action: ""
        group: 'Sobre'
    }


}
