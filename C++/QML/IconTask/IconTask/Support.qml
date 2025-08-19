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
                id:rect1
                width: 70; height: 70
                background: Rectangle {
                    color: "orange"
                    radius: 8
                }
                Text {
                    anchors.top: parent.bottom
                    text: "Maintenance Schedule"
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
                    text: "Data Backup"
                }
            }
        }

        Row {
            spacing: 70
            Button {
                width: 70; height: 70
                background: Rectangle {
                    color: "orange"
                    radius: 8
                }
                Text {
                    anchors.top: parent.bottom
                    text: "Remote Support"
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
                    text: "Status Display"
                }
            }
        }
    }
}

