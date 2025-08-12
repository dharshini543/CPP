import QtQuick 2.15
import QtQuick.Controls 2.15

Rectangle {
    color: "white"
    anchors.fill: parent

    Column {
        spacing: 10
        anchors.centerIn: parent

        Row {
            spacing: 10
            Rectangle {
                width: 70; height: 70
                color: "orange"
                border.color: "black"
                radius: 10
                Text { anchors.centerIn: parent; text: "Support 1" }
            }
            Rectangle {
                width: 70; height: 70
                color: "orange"
                border.color: "black"
                radius: 10
                Text { anchors.centerIn: parent; text: "Support 2" }
            }
        }

        Row {
            spacing: 10
            Rectangle {
                width: 70; height: 70
                color: "orange"
                border.color: "black"
                radius: 10
                Text { anchors.centerIn: parent; text: "Support 3" }
            }
        }
    }
}
