import QtQuick 2.4
import QtMultimedia 5.4
import "qrc:/material"

Column {
    property string source: coverImg.source
    property string mode: hasGallery || hasCamera ? "methods" : "none"
    property bool hasGallery: duvido.hasGallery
    property bool hasCamera: QtMultimedia.availableCameras.length > 0

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
            onClicked: {
                mode = "methods";
                coverImg.source = "";
            }
        }
    }

    Connections {
        target: duvido
        onPhotoFetched: {
            if (path) {
                mode = "none";
                preview.source = path;
            }
        }
    }

    Loader {
        active: mode == "camera"
        visible: active
        source: "qrc:/components/PhotoTaker.qml"
        id: photoTaker
        width: parent.width
    }

    Connections {
        target: photoTaker.item
        onCancel: mode = "methods"
        onOutputUrlChanged: {
            var output = photoTaker.item.outputUrl;
            console.log(output);
            if (output !== "") {
                mode = "none";
                coverImg.source = output;
            }
        }
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
                text: "Câmera"
                color: "#0f6464"
                onClicked: mode = "camera";
                visible: hasCamera
            }

            Text {
                visible: hasCamera && hasGallery
                text: "ou"
                color: "#000"
                anchors.horizontalCenter: parent.horizontalCenter
            }

            Button {
                anchors.horizontalCenter: parent.horizontalCenter
                text: "Galeria"
                color: "#0f6464"
                onClicked: duvido.fetchPhotoFromGallery();
                visible: hasGallery
            }
        }
    }
}
