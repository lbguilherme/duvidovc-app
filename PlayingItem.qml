import QtQuick 2.4
import "qrc:/material"

Component {
    Item {
        id: root
        width: parent.width
        height: content.height
        property bool opened: false
        property real openess: opened ? 1 : 0
        Behavior on openess {
            NumberAnimation {
                duration: 250
            }
        }

        MouseArea {
            anchors.fill: parent
            onClicked: {
                opened = !opened;
            }
        }

        Rectangle {
            color: "#109881"
            anchors.fill: content
        }

        Column {
            id: content
            width: parent.width

            Row {
                id: topRow
                height: 60*dp

                Item {
                    width: root.width - moreIcon.width - 16*dp
                    height: parent.height

                    Item {
                        x: 16*dp
                        y: 12*dp
                        width: parent.width

                        Text {
                            id: ownerName
                            text: "<i>" + challengeOwnerName + "</i> duvidou"
                            width: parent.width
                            font.pixelSize: 14*dp
                            elide: Text.ElideRight
                            color: "#eee"
                        }

                        Text {
                            text: title
                            y: ownerName.height + 4*dp
                            width: parent.width
                            font.pixelSize: 12*dp
                            elide: Text.ElideRight
                            color: "#ddd"
                        }
                    }
                }

                Item {
                    width: moreIcon.width
                    height: parent.height

                    Item {
                        id: moreIcon
                        width: 28*dp
                        height: 28*dp
                        transformOrigin: Item.Center
                        anchors.verticalCenter: parent.verticalCenter
                        rotation: openess*180

                        Rectangle {
                            width: 15*dp
                            height: 4*dp
                            rotation: 45
                            color: "#155"
                            x: 3*dp
                            anchors.verticalCenter: parent.verticalCenter
                        }

                        Rectangle {
                            width: 15*dp
                            height: 4*dp
                            rotation: -45
                            color: "#155"
                            x: 11*dp
                            anchors.verticalCenter: parent.verticalCenter
                        }
                    }
                }
            }

            Rectangle {
                height: openess * targetsColumn.height
                width: parent.width
                visible: height > 0
                clip: true
                color: "#155"

                Column {
                    id: targetsColumn
                    width: parent.width
                    anchors.verticalCenter: parent.verticalCenter

                    Image {
                        width: parent.width
                        source: openess > 0 && imageId && width > 0 ? apiUrl+"/image?id="+imageId+"&size="+width : ""
                        height: imageId ? Math.ceil(width / ratio) : 0
                    }

                    Item {
                        width: parent.width
                        height: 16*dp
                    }

                    Text {
                        width: parent.width
                        horizontalAlignment: Text.AlignHCenter
                        font.pixelSize: 18*dp
                        color: { return {
                                waiting: "#eee",
                                accepted: "#dfd",
                                rejected: "#fdd"
                            }[status]; }
                        text: { return {
                                waiting: "Esperando",
                                accepted: "Aceito!",
                                rejected: "Recusado!"
                            }[status]; }
                    }

                    Item {
                        width: parent.width
                        height: 16*dp
                    }
                }
            }
        }

        Rectangle {
            width: parent.width
            height: Math.ceil(1*dp)
            y: parent.height-height
            color: "#155"
        }
    }
}
