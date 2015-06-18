import QtQuick 2.4

Item {
    height: pickerColumn.height
    width: pickerColumn.width
    property int days: 0
    property int hours: 0
    property int minutes: 0
    property int time: days*24*60*60 + hours*60*60 + minutes*60
    property bool error: false

    Column {
        id: pickerColumn
        spacing: 4*dp

        Row {
            spacing: 4*dp

            Image {
                width: 16*dp
                height: width
                source: "qrc:/artwork/icons/clock.png"
                mipmap: true
                opacity: time!=0 ? 1 : 0.5
            }

            Text {
                id: timeLeft
                text: time !=0 ? (days!=0 ? days+"d " : "") + (hours!=0 ? +hours+"h " : "") + (minutes!=0 ? +minutes+"min": "") : "Tempo"
                color: time!=0 ? "000": "#999"
                onTextChanged: error = false
            }
        }

        Rectangle {
            id: editableLine
            width: parent.width
            height: Math.ceil(2*dp)
            color: error ? "#DD2C00" : "#ddd"
        }
    }

    MouseArea {
        id: mouseArea
        anchors.fill: parent
        onClicked: {
            forceActiveFocus();
            window.dialogSource = "qrc:/frags/TimePickerDialog.qml";
            window.dialog.timePicker = parent;
            window.dialog.set (parent.days, parent.hours, parent.minutes);
        }
    }
}

