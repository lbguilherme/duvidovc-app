import QtQuick 2.4

pragma Singleton

QtObject {
    id: stackManager

    property var sceneStack: []
    property string currentScene: "qrc:/frags/Feed.qml"

    function go(nextScene) {
        sceneStack.push(currentScene);
        currentScene = nextScene;
    }

    function back() {
        currentScene = sceneStack.pop();
    }
}
