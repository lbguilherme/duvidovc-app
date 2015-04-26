import QtQuick 2.4
import "qrc:/components"
import "qrc:/basic-components"

Item {
    id: root

    Item {
        anchors.fill: parent
        anchors.margins: windowWidth/25

        Column {
            anchors.fill: parent
            spacing: windowHeight/35

            TextInputBox {
                width: parent.width
            }

            TextInputBox {
                width: parent.width
            }

            TextInputBox {
                width: parent.width
            }

            Button {
                text: "Duvido!"
                width: parent.width/3
                anchors.horizontalCenter: parent.horizontalCenter;
            }

        }
    }
}
