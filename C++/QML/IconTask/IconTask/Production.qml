import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Controls

Rectangle {
    color: "white"
    anchors.fill: parent

    Column {
        spacing: 30
        anchors.centerIn: parent

        Row {
            spacing: 40
            Button {
                width: 70; height: 70
                background: Rectangle {
                    color: "orange"
                    radius: 8
                }
                Image{
                    source:"Icons/NC_Cutting_inner.png"
                    width: 40
                    height: 40
                    fillMode: Image.PreserveAspectFit
                }
                Text {
                    anchors.top: parent.bottom
                    text: "NC cutting"
                }
                onClicked: {
                    console.log("Button Clicked")
                }
            }

            Button{
                width: 70; height: 70
                background: Rectangle {
                    color: "orange"
                    radius: 8
                }
                Text {
                    anchors.top: parent.bottom
                    text: "Direct cutting"
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
                    text: "Easy cutting"
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
                    text: "Opti cutting"
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
                    text: "Job Management "
                }
            }
        }
    }
}

