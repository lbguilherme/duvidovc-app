import QtQuick 2.4
import QtGraphicalEffects 1.0
import "qrc:/material"

Card {
    property string title: titleInput.text
    property string description: descriptionInput.text
    property string reward: rewardInput.text
    property var targets: targetsInput.model
    property int duration: 100
    property string image: imageInput.source

    function verify() {
        var error = false;

        if (!titleInput.text) {
            titleInput.error = "O titulo do desafio está vazio";
            error = true;
        }

        if (!targetsInput.model.selectedCount) {
            targetsInput.error = "Você não selecionou ninguém para desafiar";
            error = true;
        }

        if (!rewardInput.text) {
            rewardInput.error = "Não há recompensa para este desafio";
            error = true;
        }

        return !error;
    }

    CardContentArea {
        spacing: 3*dp
        verticalMargin: 10*dp
        horizontalMargin: 10*dp

        Row {
            width: parent.width
            height: senderAvatar.height
            spacing: 8*dp

            Avatar {
                id: senderAvatar
                userId: duvido.me.id
                radius: 16*dp
                anchors.verticalCenter: senderName.verticalCenter
            }

            Text {
                id: senderName
                color: "#333"
                text: "<i>"+duvido.me.name+"</i> duvida que..."
                font.pixelSize: 14*dp
                anchors.verticalCenter: senderAvatar.verticalCenter
            }
        }

        Item {
            width: parent.width
            height: 5*dp
        }

        CardContentArea {
            spacing: 18*dp
            horizontalMargin: 5*dp

            TextField {
                id: titleInput
                label: "Título"
                width: parent.width
                alignment: Text.AlignHCenter
                fontSize: 16*dp
            }

            FullWidthFriendsInput {
                id: targetsInput
                emptyLabel: "Desafiados"
                filledLabel: "Desafiados:"
            }
        }
    }

    ImageInput {
        id: imageInput
        width: parent.width
    }

    CardContentArea {
        spacing: 18*dp
        verticalMargin: 16*dp
        horizontalMargin: 15*dp

        TextField {
            id: descriptionInput
            label: "Descrição do desafio"
            width: parent.width
            fontSize: 16*dp
        }

        Row {
            width: parent.width
            spacing: 14*dp

            TextField {
                id: rewardInput
                label: "Recompensa"
                width: parent.width - timePicker.width - parent.spacing
                fontSize: 14*dp
                anchors.bottom: parent.bottom

            }

            TimePicker {
                id: timePicker
                anchors.bottom: parent.bottom

            }

        }
    }
}
