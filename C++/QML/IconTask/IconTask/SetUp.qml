import QtQuick 2.15
import QtQuick.Controls 2.15

Rectangle {
    color: "white"
    anchors.fill: parent

    Column {
        spacing: 40
        anchors.centerIn: parent

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
                    text: "Referencing"
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
                    text: "Saw Blade"
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
                    text: "Saw Management"
                }
            }
        }
        Row {
            spacing: 80
            Button {
                width: 70; height: 70
                background: Rectangle {
                    color: "orange"
                    radius: 8
                }
                Text {
                    anchors.top: parent.bottom
                    text: "Measurement Dialog"
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
                    text: "Hand Stock"
                }
            }
        }
    }
}

