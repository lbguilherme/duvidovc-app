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
                    id: titleField
                    width: parent.width
                    placeholder: "Título"
                }

                MultilineTextInputBox {
                    width: parent.width
                    height: Math.max(3*titleField.height, root.height - 7*parent.spacing -
                            (titleField.height + awardField.height + friendsField.height + deadlineField.height + submit.height))
                    placeholder: "Te desafio a..."
                }

                TextInputBox {
                    id: awardField
                    width: parent.width
                    placeholder: "Recompensa"
                }

                TextInputBox {
                    id: friendsField
                    width: parent.width
                    placeholder: "Amigos"
                }

                TextInputBox {
                    id: deadlineField
                    width: parent.width
                    placeholder: "Prazo"
                }

                Button {
                    id: submit
                    text: "Duvido!"
                    width: parent.width/2
                    height: width/2
                    anchors.horizontalCenter: parent.horizontalCenter;
                }

            }
        }
    }
}
