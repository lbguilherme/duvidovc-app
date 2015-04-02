import QtQuick 2.4
import QtGraphicalEffects 1.0
import QtQuick.Window 2.2

Item {
    id: root
    signal clicked()
    property color color: "gray"
    property color textColor: "black"
    property string icon
    property string text

    width: 100
    height: 30

    Item {
        anchors.fill: parent
        id: rect_container

        Rectangle {
            id: rect
            anchors.fill: parent
            anchors.margins: 5
            radius: 6

            property color referenceColor: root.color

            gradient: Gradient {
                GradientStop { position: 0.0; color: Qt.darker(rect.referenceColor, 0.84) }
                GradientStop { position: 1.0; color: rect.referenceColor }
            }

            Image {
                source: root.icon
                anchors.verticalCenter: parent.verticalCenter
                anchors.left: parent.left
                height: parent.height*0.65
                width: height
                anchors.leftMargin: (parent.height-height)/2
            }

            Text {
                anchors.horizontalCenterOffset: root.icon ? parent.height/2 : 0
                anchors.verticalCenter: parent.verticalCenter
                anchors.horizontalCenter: parent.horizontalCenter
                font.weight: Font.Bold
                style: Text.Raised
                text: root.text
                color: root.textColor
            }
        }

        MouseArea {
            id: mouseArea
            anchors.fill: rect
            onPressed: root.state = "pressed"
            onReleased: root.state = ""
            onClicked: root.clicked()
        }
    }

    DropShadow {
        id: shadow
        source: rect_container
        anchors.fill: source
        radius: 5
        samples: 16
        verticalOffset: Screen.pixelDensity/2
        color: "#80000000"
    }


    states: [
        State {
            name: "pressed"
            PropertyChanges {
                target: rect
                referenceColor: Qt.darker(root.color, 1.1)
            }
            PropertyChanges {
                target: shadow
                radius: 3
            }
        }
    ]
    transitions: [
        Transition {
            to: "*"

            ColorAnimation {
                target: rect
                property: "referenceColor"
                duration: 100
                easing.type: Easing.InOutQuad
            }
            NumberAnimation {
                target: shadow
                property: "radius"
                duration: 100
                easing.type: Easing.InOutQuad
            }
        }
    ]
}

