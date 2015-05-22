import QtQuick 2.4
import "qrc:/components"
import "qrc:/material"

Item {
    id: scene

    QtObject {
        id: stackManager

        property var sceneStack: []
        property string currentScene: "qrc:/components/Feed.qml"

        function go(nextScene) {
            sceneStack.push(currentScene);
            currentScene = nextScene;
            actionBar.burger.arrowness = 0;
        }

        function back() {
            currentScene = sceneStack.pop();
        }
    }

    Item {
        y: actionBar.height
        width: parent.width
        height: parent.height - actionBar.height

        Rectangle {
            anchors.fill: parent
            color: "#10A8A1"
        }

        Loader {
            id: stackLoader
            anchors.fill: parent
            source: stackManager.currentScene
        }
    }

    ActionBar {
        id: actionBar
        color: "#0E6965"
        title: "Duvido.vc"

        NavigationDrawerContent {
            anchors.fill: parent
            stackManager: stackManager
        }
    }

}
