import QtQuick 2.4
import "qrc:/components"
import "qrc:/material"

Item {

    ActionBarButton {
        icon: "qrc:/artwork/icons/send12.png"
        onClicked: {
            print("send clicked");
        }
    }

    Column {
        anchors.fill: parent
        spacing: Math.max(1, Math.ceil(1*dp))

        FullWidthFriendsInput {
            id: targets
            label: "Desafiados"
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
