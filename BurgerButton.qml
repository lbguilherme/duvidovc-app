import QtQuick 2.0

Item {
    id: root
    width: 20*dp
    height: 20*dp

    Column {
        id: column
        anchors.centerIn: parent
        spacing: Math.ceil(parent.height/5)

        Rectangle {
            id: rect1
            width: root.width
            anchors.right: column.right
            height: Math.ceil(root.height/10)
            transformOrigin: Item.Right
        }

        Rectangle {
            id: rect2
            width: root.width
            height: Math.ceil(root.height/10)
        }

        Rectangle {
            id: rect3
            width: root.width
            anchors.right: column.right
            height: Math.ceil(root.height/10)
            transformOrigin: Item.Right
        }
    }

    MouseArea {
        anchors.fill: parent
        anchors.margins: -20*dp
        onClicked: {
            parent.state = parent.state == "arrow" ? "burger" : "arrow"
        }
    }

    state: "burger"
    states: State {
        name: "arrow"
        PropertyChanges {
            target: root
            rotation: 180
        }
        PropertyChanges {
            target: column
            spacing: -Math.ceil(root.height/8)
        }
        PropertyChanges {
            target: rect1
            width: root.width/1.5
            rotation: 45
        }
        PropertyChanges {
            target: rect3
            width: root.width/1.5
            rotation: -45
        }
    }

    transitions: [
        Transition {
            from: "burger"
            to: "arrow"
            NumberAnimation { target: root; duration: 400; property: "rotation"; easing.type: Easing.InOutQuad }
            NumberAnimation { target: column; duration: 400; property: "spacing"; easing.type: Easing.InOutQuad }
            NumberAnimation { target: rect1; duration: 400; properties: "width,rotation"; easing.type: Easing.InOutQuad }
            NumberAnimation { target: rect3; duration: 400; properties: "width,rotation"; easing.type: Easing.InOutQuad }
        },
        Transition {
            from: "arrow"
            to: "burger"
            NumberAnimation { target: root; from: 180; to: 360; duration: 400; property: "rotation"; easing.type: Easing.InOutQuad }
            NumberAnimation { target: column; duration: 400; property: "spacing"; easing.type: Easing.InOutQuad }
            NumberAnimation { target: rect1; duration: 400; properties: "width,rotation"; easing.type: Easing.InOutQuad }
            NumberAnimation { target: rect3; duration: 400; properties: "width,rotation"; easing.type: Easing.InOutQuad }
        }
    ]
}
