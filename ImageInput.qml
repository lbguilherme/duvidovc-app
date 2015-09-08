import QtQuick 2.4
import QtMultimedia 5.4
import "qrc:/material"

Column {
    property string source: preview.source
    property int orientation: preview.rotation
    property string mode: hasGallery || hasCamera ? "methods" : "none"
    property bool hasGallery: duvido.hasGallery
    property bool hasCamera: QtMultimedia.availableCameras.length > 0

    Item {
        property real sourceRatio: preview.sourceSize.height / preview.sourceSize.width
        property real ratio: preview.rotation % 180 == 0 ? sourceRatio : 1/sourceRatio
        width: parent.width
        height: width * ratio
        visible: preview.source != ""

        Image {
            id: preview
            rotation: 90
            width: rotation % 180 == 0 ? parent.width : parent.height
            height: rotation % 180 == 0 ? parent.height : parent.width
            anchors.centerIn: parent
        }

        RemoveButton {
            id: removeButton
            anchors.right: parent.right
            anchors.top: parent.top
            anchors.margins: 8*dp
            onClicked: {
                mode = "methods";
                preview.source = "";
            }
        }

        RoundIconButton {
            anchors.right: parent.right
            anchors.top: removeButton.bottom
            anchors.margins: 8*dp
            visible: QtMultimedia.availableCameras.length >= 2
            icon: "qrc:/artwork/icons/refresh57.png"
            onClicked: {
                preview.rotation += 90;
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
            if (output !== "") {
                mode = "none";
                preview.source = output;
                preview.rotation = photoTaker.item.orientation;
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
