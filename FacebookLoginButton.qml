import QtQuick 2.0

Button {
    color: "#3b5998"

    Image {
        source: "qrc:/artwork/facebook-white.png"
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: parent.left
        height: parent.height*0.65
        width: height
        anchors.leftMargin: (parent.height-height)/2
    }

    Text {
        anchors.horizontalCenterOffset: parent.height/2
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenter: parent.horizontalCenter
        font.weight: Font.Bold
        style: Text.Raised
        text: "Entrar com o Facebook"
        color: "white"
    }
}

