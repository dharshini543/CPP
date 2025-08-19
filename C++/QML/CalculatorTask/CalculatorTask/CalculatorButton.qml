import QtQuick 2.15
import QtQuick.Controls 2.15

Rectangle {
    id: btn
    property string text: ""
    property color bgColor: "#333333"
    property color textColor: "white"
    signal clicked()

    radius: width / 2
    color: bgColor
    implicitWidth: 80
    implicitHeight: 80

    Text {
        anchors.centerIn: parent
        text: btn.text
        color: btn.textColor
        font.pixelSize: 24
    }

    MouseArea {
        anchors.fill: parent
        onPressed: btn.color = Qt.darker(btn.bgColor, 1.2)
        onReleased: btn.color = btn.bgColor
        onClicked: btn.clicked()
    }
}
