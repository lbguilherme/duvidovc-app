import QtQuick 2.4
import QtGraphicalEffects 1.0
import "qrc:/material"

Card {

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

    Item {
        width: parent.width
        height: width/coverImg.sourceSize.width*coverImg.sourceSize.height
        visible: coverImg.source != ""

        Image {
            id: coverImg
            anchors.fill: parent
        }

        RemoveButton {
            anchors.right: parent.right
            anchors.top: parent.top
            anchors.margins: 8*dp
            onClicked: coverImg.source = "";
        }
    }

    Connections {
        target: duvido
        onPhotoFetched: coverImg.source = path;
    }

    Rectangle {
        id: coverPlaceholder
        width: parent.width
        height: 180*dp
        color: "#aaa"
        visible: (duvido.hasCamera || duvido.hasGallery) && coverImg.source == "";

        Column {
            anchors.centerIn: parent
            spacing: 8*dp

            Button {
                anchors.horizontalCenter: parent.horizontalCenter
                text: "Tirar uma foto"
                color: "#0f6464"
                onClicked: duvido.fetchPhotoFromCamera()
                visible: duvido.hasCamera
            }

            Text {
                visible: duvido.hasCamera && duvido.hasGallery
                text: "ou"
                color: "#000"
                anchors.horizontalCenter: parent.horizontalCenter
            }

            Button {
                anchors.horizontalCenter: parent.horizontalCenter
                text: "Escolher da galeria"
                color: "#0f6464"
                onClicked: duvido.fetchPhotoFromGallery()
                visible: duvido.hasGallery
            }
        }

    }

    CardContentArea {
        spacing: 18*dp
        verticalMargin: 16*dp
        horizontalMargin: 15*dp

        TextField {
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
