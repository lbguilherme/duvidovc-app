import QtQuick 2.4

pragma Singleton

QtObject {

    property list<QtObject> model: [
        QtObject {
            property string name: "Logout"
            property string group: "Geral"
            function action() {
                duvido.logout();
            }
        },

        QtObject {
            property string name: "Versão"
            property string group: "Sobre"
            property string subtext: duvido.version
        },

        QtObject {
            property string name: "Termos de Uso"
            property string group: "Sobre"
        }
    ]

}
