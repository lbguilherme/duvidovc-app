import QtQuick 2.4
import QtQuick.Extras 1.4
import QtQuick.Controls.Styles 1.4
import "qrc:/material"
import "qrc:/components"

Dialog {
    shadowOpacity: 0.5
    surfaceWidth: window.width - 48*dp
    property alias days: daysColumn.currentIndex
    property alias hours: hoursColumn.currentIndex
    property alias minutes: minutesColumn.currentIndex
    property TimePicker timePicker

    function set(days, hours, minutes) {
        tumbler.setCurrentIndexAt(0, days);
        tumbler.setCurrentIndexAt(1, hours);
        tumbler.setCurrentIndexAt(2, minutes);
    }

    function generateSequenceModel(from, to, postfix) {
        var result = [];
        for (var i = from; i <= to; i++) {
            result.push(i + postfix)
        }
        return result;
    }

    Item {
        height: 300*dp
        width: surfaceWidth

        Tumbler {
            id: tumbler
            y: 16*dp
            anchors.horizontalCenter: parent.horizontalCenter
            style: TumblerStyle {
                frame: Item {}
            }

            TumblerColumn {
                id: daysColumn
                model: generateSequenceModel(0, 7, "d");
            }

            TumblerColumn {
                id: hoursColumn
                model: generateSequenceModel(0, 23, "h");
            }

            TumblerColumn {
                id: minutesColumn
                model: generateSequenceModel(0, 59, "min");
            }
        }

        Row {
            anchors.right: parent.right
            anchors.bottom: parent.bottom
            anchors.rightMargin: 12*dp
            anchors.bottomMargin: 8*dp
            spacing: 8*dp

            Button {
                flat: true
                text: "Ok"
                color: "#0f6464"
                onClicked: {
                    timePicker.days = days;
                    timePicker.hours = hours;
                    timePicker.minutes = minutes;
                    window.dialogSource = "";
                }
            }
        }
    }
}
