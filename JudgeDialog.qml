import QtQuick 2.4
import "qrc:/material"
import "qrc:/components"
import Duvido 1.0

Dialog {
    id: root
    spacing: 20*dp

    property string userName
    property string userId
    property string imageId
    property string imageRatio
    property string submissionId

    Row {
        width: parent.width
        x: 2*spacing
        height: 32*dp
        spacing: 8*dp

        Avatar {
            userId: root.userId
            radius: parent.height/2
            anchors.verticalCenter: parent.verticalCenter
        }

        Text {
            color: "#333"
            text: "<i>"+userName+"</i>"
            font.pixelSize: 14*dp
            anchors.verticalCenter: parent.verticalCenter
        }
    }

    Image {
        width: parent.width
        source: imageId && width > 0 ? apiUrl+"/image?id="+imageId+"&size="+width : ""
        height: imageId ? Math.ceil(width / imageRatio) : 0
    }

    Row {
        width: parent.width
        x: 2*spacing
        spacing: 10*dp

        Button {
            width: parent.width/2 - 2.5*parent.spacing
            color: Qt.darker("#FB5240", 1.1)
            text: "Recusar"
            onClicked: {
                duvido.judgeSubmission(submissionId, false);
                closeDialog();
            }
        }

        Button {
            width: parent.width/2 - 2.5*parent.spacing
            color: Qt.darker("#36C77B", 1.1)
            text: "Aceitar"
            onClicked: {
                duvido.judgeSubmission(submissionId, true);
                closeDialog();
            }
        }
    }
}
