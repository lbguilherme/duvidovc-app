import QtQuick 2.4
import "qrc:/material"
import "qrc:/components"

Dialog {
    id: optionsDialog
    shadowOpacity: 0
    onCenter: false
    surfaceWidth: 156*dp
    surfaceX: optionsButton ? optionsButton.mapToItem(optionsDialog, 0, 0).x + optionsButton.width - surfaceWidth-4*dp : 0
    surfaceY: optionsButton ? Math.min(optionsButton.mapToItem(optionsDialog, 0, 0).y + optionsButton.height, window.height - surfaceHeight - 4*dp) : 0
    property var optionsModel
    property OptionsButton optionsButton

    Item {
        height: optionsList.count*48*dp + 16*dp
        width: optionsDialog.surfaceWidth

        ScrollableListView {
            id: optionsList
            model: optionsModel
            delegate: optionDelegate
            topMargin: 8*dp
            bottomMargin: 8*dp
            spacing: 0
            anchors.fill: parent
        }
    }

    Component {
        id: optionDelegate

        Item {
            width: optionsDialog.surfaceWidth
            height: 48*dp

            MouseArea {
                id: mouseArea
                anchors.fill: parent
                onClicked: window.dialogSource = action
            }

            Rectangle {
                anchors.fill: parent
                color: "#000"
                opacity: 0.2
                visible: mouseArea.containsPress
            }

            Text {
                font.pixelSize: 16*dp
                anchors.verticalCenter: parent.verticalCenter
                text: name
                x: 16*dp
            }
        }
    }
}
