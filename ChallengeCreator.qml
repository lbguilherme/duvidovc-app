import QtQuick 2.4
import "qrc:/components"
import "qrc:/material"

Item {

    ActionBarButton {
        icon: "qrc:/artwork/icons/send12.png"
        onClicked: {
            forceActiveFocus();
            print("send clicked");
        }
    }

    Scrollable {
        anchors.fill: parent

        EditableChallenge {

        }
    }
}
