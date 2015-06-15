import QtQuick 2.4

Item {
    id: textField
    height: editableLine.height + editableLine.y + (error ? 16*dp : 0)
    property real fontSize: 18*dp
    property string label: ""
    property int alignment: Text.AlignLeft
    property real maxHeight: -1
    property string error: ""
    property alias text: editableInput.text

    Scrollable {
        id: scrollable
        width: parent.width
        height: parent.maxHeight == -1 ? contentHeight: Math.min(contentHeight, maxHeight)
        spacing: 0

        TextInput {
            id: editableInput
            width: textField.width
            font.pixelSize: textField.fontSize
            horizontalAlignment: textField.alignment
            wrapMode: TextInput.Wrap
            onTextChanged: textField.error = ""
        }
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
        color: editableInput.focus ? "#0f6464" : (error == "") ? "#ddd" : "#DD2C00"
        y: scrollable.height + 4*dp
    }

    Text {
        id: errorLabel
        font.pixelSize: 12*dp
        color: "#DD2C00"
        text: error
        visible: error
        y: editableLine.y + 4*dp
    }
}
