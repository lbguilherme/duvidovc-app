import QtQuick 2.0

pragma Singleton

QtObject {
    id: stackManager

    property var sceneStack: []
    property string currentScene: "qrc:/components/Feed.qml"

    function go(nextScene) {
        sceneStack.push(currentScene);
        currentScene = nextScene;
    }

    function back() {
        currentScene = sceneStack.pop();
    }
}
