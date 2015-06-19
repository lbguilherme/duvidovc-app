import QtQuick 2.4

Item {
    height: line.height + line.y + (error ? 16*dp : 0)

    property real fontSize: 18*dp
    property string label: ""
    property int alignment: Text.AlignLeft
    property real maxHeight: -1
    property string error: ""
    property alias text: input.text

    Scrollable {
        id: scrollable
        width: parent.width
        height: parent.maxHeight == -1 ? contentHeight: Math.min(contentHeight, maxHeight)
        spacing: 0

        TextInput {
            id: input
            width: parent.width
            font.pixelSize: fontSize
            horizontalAlignment: alignment
            wrapMode: TextInput.Wrap
            onTextChanged: error = ""
        }
    }

    Text {
        id: label
        font.pixelSize: parent.fontSize
        text: parent.label
        color: "#aaa"
        visible: input.displayText == ""
        horizontalAlignment: parent.alignment
        width: parent.width
    }

    Rectangle {
        id: line
        width: parent.width
        height: Math.ceil(2*dp)
        color: input.focus ? "#0f6464" : error == "" ? "#ddd" : "#dd2c00"
        y: scrollable.height + 4*dp
    }

    Text {
        id: errorLabel
        font.pixelSize: 12*dp
        color: "#DD2C00"
        text: error
        visible: error
        y: line.y + 4*dp
    }
}
