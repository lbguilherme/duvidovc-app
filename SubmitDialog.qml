import QtQuick 2.4
import "qrc:/material"
import "qrc:/components"
import Duvido 1.0

Dialog {
    id: root
    spacing: 20*dp
    property string challenge

    Text {
        text: imageInput.mode == "none" && !imageInput.source
              ? "Ter uma câmera ou galeria é necessário."
              : "Envie uma foto para comprovar que fez o desafio"
        font.pixelSize: 14*dp
        x: 20*dp
        width: parent.width - 40*dp
        wrapMode: Text.WordWrap
    }

    ImageInput {
        id: imageInput
        width: parent.width
    }

    SubmissionSender {
        id: sender
        challenge: root.challenge
        image: imageInput.source
        orientation: imageInput.orientation
    }

    Row {
        anchors.right: parent.right
        anchors.rightMargin: 20*dp
        spacing: 8*dp

        Button {
            flat: true
            text: "Cancelar"
            color: "#977"
            onClicked: closeDialog();
        }

        Button {
            visible: !!imageInput.source
            flat: true
            text: "Enviar"
            color: "#0f6464"
            onClicked: {
                sender.submit();
                closeDialog();
            }
        }
    }
}
