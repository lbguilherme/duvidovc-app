import QtQuick 2.4
import QtMultimedia 5.4
import Duvido 1.0

Item {
    height: width * ratio
    property string outputUrl
    property real sourceRatio: output.sourceRect.height / output.sourceRect.width
    property real ratio: output.orientation % 180 == 0 ? sourceRatio : 1/sourceRatio
    signal cancel()

    PhotoRotator {
        id: rotator
    }

    Camera {
        id: camera
        deviceId: QtMultimedia.defaultCamera.deviceId
        imageCapture {
            id: capture
            onImageSaved: {
                rotator.rotate(path, -output.orientation);
                outputUrl = "file:/" + path;
            }
        }
    }

    VideoOutput {
        id: output
        anchors.fill: parent
        source: camera
        autoOrientation: true
    }

    RemoveButton {
        id: removeButton
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.margins: 8*dp
        onClicked: cancel();
    }

    CameraRotateButton {
        anchors.right: parent.right
        anchors.top: removeButton.bottom
        anchors.margins: 8*dp
        visible: QtMultimedia.availableCameras.length >= 2
        onClicked: {
            var list = QtMultimedia.availableCameras;
            for (var i = 0; i < list.length; ++i) {
                if (list[i].deviceId == camera.deviceId) {
                    camera.deviceId = list[(i+1)%list.length].deviceId
                    return;
                }
            }
            camera.deviceId = list[0].deviceId;
        }
    }

    Rectangle {
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 8*dp
        radius: width
        width: 40*dp
        height: width
        border.color: "white"
        border.width: 2*dp
        color: "#88ffffff"

        MouseArea {
            anchors.fill: parent
            onClicked: {
                parent.visible = false;
                enabled = false;
                capture.capture();
            }
        }
    }
}
