import QtQuick 2.4

Item {
    height: editableLine.height + editableLine.y
    property real fontSize: 18*dp
    property string label: ""
    property int alignment: Text.AlignLeft

    TextInput {
        id: editableInput
        width: parent.width
        font.pixelSize: parent.fontSize
        horizontalAlignment: parent.alignment
        wrapMode: TextInput.Wrap
    }

    Text {
        id: label
        font.pixelSize: parent.fontSize
        text: parent.label
        color: "#aaa"
        visible: editableInput.displayText == ""
        horizontalAlignment: parent.alignment
        width: parent.width
    }

    Rectangle {
        id: editableLine
        width: parent.width
        height: Math.ceil(2*dp)
        color: editableInput.focus ? "#0f6464" : "#ddd"
        y: editableInput.height + 4*dp

    }
}
