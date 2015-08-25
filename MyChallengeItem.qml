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
                duration: 200
            }
        }

        MouseArea {
            anchors.fill: parent
            onClicked: {
                opened = !opened;
            }
        }

        Column {
            id: content
            width: parent.width

            Row {

                height: 60*dp

                Item {
                    width: root.width - moreIcon.width - 16*dp
                    height: parent.height

                    Item {
                        x: 16*dp
                        y: 8*dp
                        width: parent.width

                        Text {
                            id: challengeTitle
                            text: title
                            width: parent.width
                            font.pixelSize: 14*dp
                            elide: Text.ElideRight
                        }

                        Text {
                            id: responseStatus
                            text: isSending ? "Enviando..." : "Respondido por " + targets.filter(function(t){return ["submitted", "rewarded"].indexOf(t.status) >= 0 }).length +  " de " + targets.length
                            y: challengeTitle.height + 4*dp
                            width: parent.width
                            font.pixelSize: 12*dp
                            elide: Text.ElideRight
                            color: "#666"
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
                            color: "#999"
                            x: 3*dp
                            anchors.verticalCenter: parent.verticalCenter
                        }

                        Rectangle {
                            width: 15*dp
                            height: 4*dp
                            rotation: -45
                            color: "#999"
                            x: 11*dp
                            anchors.verticalCenter: parent.verticalCenter
                        }
                    }
                }
            }

            Item {
                height: openess * targetsColumn.height
                width: parent.width
                visible: height > 0
                clip: true

                Column {
                    id: targetsColumn
                    width: parent.width

                    Repeater {
                        model: targets

                        Item {
                            width: parent.width
                            height: 40*dp

                            Avatar {
                                userId: modelData.id
                                radius: 16*dp
                                x: 25*dp
                                y: 4*dp
                            }

                            Text {
                                text: modelData.name
                                anchors.verticalCenter: parent.verticalCenter
                                x: 65*dp
                            }

                            Rectangle {
                                x: parent.width - width - 30*dp
                                anchors.verticalCenter: parent.verticalCenter
                                width: 110*dp
                                height: 30*dp
                                radius: 10*dp
                                color: { return {
                                        sent: "#eee",
                                        received: "#ddd5d5",
                                        refused: "#dbb",
                                        expired: "#eee",
                                        submitted: "#eee",
                                        accepted: "#eee"
                                    }[modelData.status]; }
                                border.width: Math.ceil(1*dp)
                                border.color: Qt.darker(color, 1.1)

                                Text {
                                    anchors.centerIn: parent
                                    text: { return {
                                            sent: "Não viu",
                                            received: "Viu",
                                            refused: "Caiu fora",
                                            expired: "Já era",
                                            submitted: "Respondeu",
                                            accepted: "Aprovado"
                                        }[modelData.status]; }
                                    opacity: 0.9
                                }
                            }
                        }
                    }
                }
            }
        }

        Rectangle {
            width: parent.width
            height: Math.ceil(1*dp)
            y: parent.height
            color: "#ddd"
        }
    }
}
