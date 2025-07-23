import QtQuick
import QtQuick.Window

Window {
    width: 400
    height: 300
    visible: true
    flags: Qt.FramelessWindowHint

    Rectangle {
        id: titleBar
        width: parent.width
        height: 40
        color: "lightgray"

        MouseArea {
            anchors.fill: parent
            drag.target: null // Let the system handle dragging

            onPressed: {
                // Start dragging the whole window
                startSystemMove()
            }
        }
    }

    Text {
        text: "Drag me by the top bar"
        anchors.centerIn: parent
    }
}
