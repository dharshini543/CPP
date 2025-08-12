import QtQuick
import QtQuick.Window

Window {
    width: 400
    height: 300
    visible: true
    flags: Qt.FramelessWindowHint

    Rectangle {
        id: resizeCorner
        width: 20
        height: 20
        color: "darkgray"
        anchors.bottom: parent.bottom
        anchors.right: parent.right

        MouseArea {
            anchors.fill: parent
            onPressed: {
                // Start resizing from the bottom-right corner
                startSystemResize(Qt.BottomEdge | Qt.RightEdge)
            }
        }
    }

    Text {
        text: "Resize me from bottom right corner"
        anchors.centerIn: parent
    }
}
