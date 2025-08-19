import QtQuick 2.15
import QtQuick.Controls 2.15

Rectangle {
    color: "white"
    anchors.fill: parent

    Column {
        spacing: 40
        anchors.centerIn: parent

        Row {
            spacing: 100
            Button {
                width: 70; height: 70
                background: Rectangle {
                    color: "orange"
                    radius: 8
                }
                Text {
                    anchors.top: parent.bottom
                    text: "Calculator"
                }
            }
            Button {
                width: 70; height: 70
                background: Rectangle {
                    color: "orange"
                    radius: 8
                }
                Text {
                    anchors.top: parent.bottom
                    text: "Editor"
                }
            }
        }

        Row {
            spacing: 40
            Button {
                width: 70; height: 70
                background: Rectangle {
                    color: "orange"
                    radius: 8
                }
                Text {
                    anchors.top: parent.bottom
                    text: "Manual"
                }
            }
            Button {
                width: 70; height: 70
                background: Rectangle {
                    color: "orange"
                    radius: 8
                }
                Text {
                    anchors.top: parent.bottom
                    text: "Circuit Diagram"
                }
            }
        }
    }
}

