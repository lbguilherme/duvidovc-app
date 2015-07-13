import QtQuick 2.4
import "qrc:/material"

Column {
    property string source: coverImg.source
    property string mode: hasGallery || hasCamera ? "methods" : "none"
    property bool hasGallery: duvido.hasGallery
    property bool hasCamera: photoTaker.hasCamera

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

    PhotoTaker {
        id: photoTaker
        width: parent.width
        visible: mode == "camera"
        onCancel: mode = "methods"
    }

    Rectangle {
        id: coverPlaceholder
        width: parent.width
        height: 180*dp
        color: "#aaa"
        visible: mode == "methods"

        Column {
            anchors.centerIn: parent
            spacing: 8*dp

            Button {
                anchors.horizontalCenter: parent.horizontalCenter
                text: "Tirar uma foto"
                color: "#0f6464"
                onClicked: mode = "camera";
                visible: hasCamera
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
                onClicked: duvido.fetchPhotoFromGallery();
                visible: hasGallery
            }
        }
    }
}
