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
    }
}
