import QtQuick 2.4
import "qrc:/scenes"
import "qrc:/singletons"

Item {
    id: window
    width: 400
    height: 650

    property Item window: window
    property Item scene: sceneLoader.item
    property alias sceneSource: sceneLoader.source
    property Item dialog: dialogLoader.item
    property alias dialogSource: dialogLoader.source

    Rectangle {
        anchors.fill: parent
        color: "#0f6464"
    }

    Loader {
        id: sceneLoader
        anchors.fill: parent

        source: duvido.myId !== ""
            ? "qrc:/scenes/MainScene.qml"
            : "qrc:/scenes/LoginScene.qml"
    }

    Loader {
        id: dialogLoader
        anchors.fill: parent
    }

    property bool canBack: dialog || StackManager.canGoBack

    function back() {
        if (dialog)
            dialogSource = "";
        else if (StackManager.canGoBack)
            StackManager.back();
        else
            Qt.quit();
    }

    Connections {
        target: duvido
        onBackPressed: window.back()
    }
}
