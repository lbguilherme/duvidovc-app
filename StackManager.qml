import QtQuick 2.4

pragma Singleton

QtObject {
    property var sceneStack: []
    property string currentScene: "qrc:/frags/Feed.qml"
    property bool canGoBack: false

    function go(nextScene) {
        sceneStack.push(currentScene);
        currentScene = nextScene;
        canGoBack = true;
    }

    function goBack() {
        currentScene = sceneStack.pop();
        canGoBack = sceneStack.length > 0;
    }

    function clear() {
        while (canGoBack) goBack();
    }
}
