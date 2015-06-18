import QtQuick 2.4
import QtQuick.Extras 1.4
import QtQuick.Controls.Styles 1.4
import "qrc:/material"
import "qrc:/components"

Dialog {
    id: dialog
    shadowOpacity: 0.5
    surfaceWidth: window.width - 48*dp
    property alias days: daysColumn.currentIndex
    property alias hours: hoursColumn.currentIndex
    property alias minutes: minutesColumn.currentIndex
    property TimePicker timePicker
    function set (days, hours, minutes) {
        tumbler.setCurrentIndexAt(0, days);
        tumbler.setCurrentIndexAt(1, hours);
        tumbler.setCurrentIndexAt(2, minutes);
    }

    Item {
        height: 300*dp
        width: dialog.surfaceWidth

        Tumbler {
            id: tumbler
            anchors.horizontalCenter: parent.horizontalCenter
            y: 16*dp

            style: TumblerStyle {
                frame: Item {}
            }

            TumblerColumn {
                id: daysColumn
                model: (function() {
                    var result = [];

                    for (var i=0; i<=7; i++) {
                        result.push(i+"d")
                    }
                    return result; // 0d - 7d
                })()
            }
            TumblerColumn {
                id: hoursColumn
                model: (function() {
                    var result = [];
                    for (var i=0; i<=23; i++) {
                        result.push(i+"h")
                    }
                    return result;
                })()
            }
            TumblerColumn {
                id: minutesColumn
                model: (function() {
                    var result = [];
                    for (var i=0; i<=59; i++) {
                        result.push(i+"min")
                    }
                    return result;
                })()
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
                    timePicker.days = dialog.days;
                    timePicker.hours = dialog.hours;
                    timePicker.minutes = dialog.minutes;
                    window.dialogSource = "";

                }
            }
        }
    }

}
