import QtQuick 2.4
import "qrc:/material"

Item {
    Rectangle {
        anchors.fill: parent
        color: "#fff"
    }

    Scrollable {
        anchors.fill: parent

        Text {
            text: duvido.terms
            x: 15*dp
            width: parent.width - 2*x
            wrapMode: Text.WrapAtWordBoundaryOrAnywhere
        }
    }
}
