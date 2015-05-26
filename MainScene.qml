import QtQuick 2.4
import "qrc:/frags"
import "qrc:/material"
import "qrc:/singletons"

Item {
    id: scene

    property ActionBar actionBar: actionBar

    Rectangle {
        anchors.fill: parent
        color: "#10A8A1"
    }

    Loader {
        y: actionBar.height
        width: parent.width
        height: parent.height - actionBar.height
        source: StackManager.currentScene
        onLoaded: {
            actionBar.burger.arrowness = 0;
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
