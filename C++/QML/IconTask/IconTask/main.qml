import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 800
    height: 500
    title: "Right-side Buttons & Left-side Icons"

    property string currentPage: "Production.qml"

    Row {
        anchors.fill: parent

        Loader {
            id: pageLoader
            width: parent.width * 0.75
            height: parent.height
            source: currentPage
        }

        Rectangle {
            width: parent.width * 0.25
            height: parent.height
            color: "grey"

            Column {
                anchors.centerIn: parent
                spacing: 20

                Button {
                    text: "Production"
                    width: 120;
                    height: 40
                    onClicked: currentPage = "Production.qml"
                }

                Button {
                    text: "Setup"
                    width: 120;
                    height: 40
                    onClicked: currentPage = "SetUp.qml"
                }

                Button {
                    text: "Support"
                    width: 120;
                    height: 40
                    onClicked: currentPage = "Support.qml"
                }

                Button {
                    text: "Tools"
                    width: 120;
                    height: 40
                    onClicked: currentPage = "Tools.qml"
                }
            }

        }
    }
}

