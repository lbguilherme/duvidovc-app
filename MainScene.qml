import QtQuick 2.4
import "qrc:/components"
import "qrc:/material"

Item {
    id: scene

    QtObject {
        id: stackManager
        property variant sceneStack: ['qrc:/components/Feed.qml']

        function go (nextScene) {
            sceneStack.push(nextScene);
            stackLoader.source = nextScene;
            actionBar.burger.arrowness = 0;
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
            source: stackManager.sceneStack[stackManager.sceneStack.length-1]
        }
    }

    ActionBar {
        id: actionBar
        color: "#0E6965"
        title: "Duvido.vc"

        NavigationDrawerContent {
            anchors.fill: parent
        }
    }

}
