import QtQuick 2.4
import QtMultimedia 5.4

Item {
    height: width * output.sourceRect.height / output.sourceRect.width
    property bool hasCamera: QtMultimedia.availableCameras.length > 0
    signal cancel()

    Camera {
        id: camera
        deviceId: QtMultimedia.defaultCamera.deviceId
    }

    VideoOutput {
        id: output
        anchors.fill: parent
        source: camera
        autoOrientation: true
    }

    RemoveButton {
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.margins: 8*dp
        onClicked: cancel();
    }
}
