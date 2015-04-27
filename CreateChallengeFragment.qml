import QtQuick 2.4
import "qrc:/components"
import "qrc:/basic-components"

Item {
    id: root

    Item {
        anchors.fill: parent

        Flickable {
            anchors.fill: parent
            contentHeight: createForm.height + 2*createForm.margin
            pixelAligned: true
            boundsBehavior: Flickable.StopAtBounds

            Column {
                id: createForm

                property int margin: windowWidth/30

                width: parent.width - 2*margin
                x: margin
                y: margin
                spacing: margin

                TextInputBox {
                    width: parent.width
                    placeholder: "Título"
                }

                MultilineTextInputBox {
                    width: parent.width
                    placeholder: "Te desafio a..."
                }

                TextInputBox {
                    width: parent.width
                    placeholder: "Recompensa"
                }

                TextInputBox {
                    width: parent.width
                    placeholder: "Amigos"
                }

                TextInputBox {
                    width: parent.width
                    placeholder: "Prazo"
                }

                Button {
                    text: "Duvido!"
                    width: parent.width/2
                    height: width/2
                    anchors.horizontalCenter: parent.horizontalCenter;
                }

            }
        }
    }
}
