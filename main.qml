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

    function openDialog(source) {
        dialogSource = source;
    }

    function closeDialog() {
        dialogSource = "";
    }

    property bool canBack: dialog || StackManager.canGoBack

    function goBack() {
        if (dialog)
            closeDialog();
        else if (StackManager.canGoBack)
            StackManager.goBack();
        else
            Qt.quit();
    }

    Connections {
        target: duvido
        onBackPressed: goBack()
    }

    function formatTime(time) {
        var minutes = ((time / 60)|0) % 60;
        var hours = ((time / 60 / 60)|0) % 24;
        var days = (time / 60 / 60 / 24)|0;
        var str = "";
        if (days > 0) {
            str += days+"d";
            if (hours > 0 || minutes > 0) str += " ";
        }
        if (hours > 0) {
            str += hours+"h";
            if (minutes > 0) str += " ";
        }
        if (minutes > 0) {
            str += minutes+"min";
        }
        return str;
    }
}
