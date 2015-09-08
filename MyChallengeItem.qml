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
                            id: challengeTitle
                            text: title
                            width: parent.width
                            font.pixelSize: 14*dp
                            elide: Text.ElideRight
                            color: "#eee"
                        }

                        Text {
                            id: responseStatus
                            text: isSending ? "Enviando..." : "Respondido por " + targets.filter(function(t){return ["submitted", "rewarded"].indexOf(t.status) >= 0 }).length +  " de " + targets.length
                            y: challengeTitle.height + 4*dp
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
                height: openess * (targetsColumn.height + 32*dp)
                width: parent.width
                visible: height > 0
                clip: true
                color: "#155"

                Column {
                    id: targetsColumn
                    width: parent.width
                    anchors.verticalCenter: parent.verticalCenter

                    Repeater {
                        model: targets

                        Item {
                            width: parent ? parent.width : 100
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
                                color: "white"
                            }

                            Button {
                                visible: modelData.status === "submitted"
                                x: parent.width - width - 20*dp
                                anchors.verticalCenter: parent.verticalCenter
                                width: 110*dp
                                height: 30*dp
                                text: "Foto"
                                color: "#474"
                                onClicked: {
                                    openDialog("qrc:/frags/JudgeDialog.qml");
                                    dialog.userId = modelData.id;
                                    dialog.userName = modelData.name;
                                    dialog.submissionId = modelData.lastSubmissionId;
                                    dialog.imageId = modelData.imageId;
                                    dialog.imageRatio = modelData.imageRatio;
                                }
                            }

                            Text {
                                visible: modelData.status !== "submitted"
                                horizontalAlignment: Text.AlignHCenter
                                x: parent.width - width - 20*dp
                                width: 100*dp
                                anchors.verticalCenter: parent.verticalCenter
                                text: { return {
                                        sent: "Não viu",
                                        received: "Viu",
                                        refused: "Caiu fora",
                                        expired: "Já era",
                                        submitted: "Respondeu",
                                        accepted: "Aprovado"
                                    }[modelData.status]; }
                                opacity: 0.9
                                color: "#eee"
                            }
                        }
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
