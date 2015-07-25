import QtQuick 2.4
import QtMultimedia 5.4
import Duvido 1.0

Item {
    height: width * ratio
    property string outputUrl
    property real sourceRatio: output.sourceRect.height / output.sourceRect.width
    property real ratio: orientation % 180 == 0 ? sourceRatio : 1/sourceRatio
    property int orientation: output.orientation
    signal cancel()

    Camera {
        id: camera
        deviceId: QtMultimedia.defaultCamera.deviceId
        imageCapture {
            id: capture
            resolution.width: 1600
            resolution.height: 1200
            onImageSaved: {
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

    MouseArea {
        anchors.fill: parent
        onClicked: {
            enabled = false;
            capture.capture();
        }
    }

    RemoveButton {
        id: removeButton
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.margins: 8*dp
        onClicked: cancel();
    }

    RoundIconButton {
        anchors.right: parent.right
        anchors.top: removeButton.bottom
        anchors.margins: 8*dp
        visible: QtMultimedia.availableCameras.length >= 2
        icon: "qrc:/artwork/icons/phone353.png"
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
}
