import QtQuick 2.4
import QtMultimedia 5.4

Item {
    height: width * ratio
    property real sourceRatio: output.sourceRect.height / output.sourceRect.width
    property real ratio: output.orientation % 180 == 0 ? sourceRatio : 1/sourceRatio
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
