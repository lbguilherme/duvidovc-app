import QtQuick 2.4
import "qrc:/material"

Item {
    id: root
    property var friendsModel: duvido.friendsModel()

    Column {
        anchors.fill: parent
        spacing: Math.max(1, Math.ceil(1*dp))

        FullWidthInput {
            id: targets
            label: "Desafiados"
            onClicked: {
                window.dialogLoader.source = "qrc:/frags/FriendsSelector.qml";
                window.dialogLoader.item.friendsModel = root.friendsModel;
            }
        }

        FullWidthTextInput {
            id: title
            label: "Título"
        }

        FullWidthTextInput {
            id: prize
            label: "Recompensa"
        }

        FullWidthTextInput {
            id: body
            height: root.height - targets.height - title.height - prize.height - 3*parent.spacing
            label: "Eu duvido que..."
        }
    }
}
