import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls

Item
{
    signal phoneBookIconClicked()
    signal callHistoryIconClicked()
    signal whatsappIconClicked()

    Row
    {
        spacing: 40
        anchors.centerIn: parent

        Rectangle
        {
            id: phoneBook
            width: mainWindow.width/4
            height: mainWindow.height/9

            Column
            {
                spacing: 10

                Image
                {
                    id: phoneBookimg
                    width: phoneBook.width
                    height: phoneBook.height
                    anchors.fill: phoneBook
                    anchors.horizontalCenter: parent.horizontalCenter
                    source: "qrc:/Downloads/phonebook.png"
                    fillMode: Image.PreserveAspectFit
                }
                Text
                {
                    id: phoneBookIcon
                    text: qsTr("PHONEBOOK")
                    font.bold: true
                    anchors.horizontalCenter: parent.horizontalCenter
                }
            }
            MouseArea
            {
                anchors.fill: parent
                onClicked: {
                    phoneBookIconClicked()

                }
            }
        }

        Rectangle
        {
            id: callHistory
            width: mainWindow.width/4
            height: mainWindow.height/9

            Column
            {
                spacing: 10

                Image
                {
                    id: callhistoryImg
                    width: callHistory.width
                    height: callHistory.height
                    anchors.fill: callHistory
                    anchors.horizontalCenter: parent.horizontalCenter
                    source: "qrc:/Downloads/callhistory.png"
                    fillMode: Image.PreserveAspectFit

                }
                Text
                {
                    id: callHistoryIcon
                    text: qsTr("CALLHISTORY")
                    font.bold: true
                    anchors.horizontalCenter: parent.horizontalCenter
                }
            }
            MouseArea
            {
                anchors.fill: parent
                onClicked: {
                    callHistoryIconClicked()
                }
            }
        }

        Rectangle
        {
            id: whatsApp
            width: mainWindow.width/4
            height: mainWindow.height/9
            Column
            {
                spacing: 10
                Image
                {
                    id: whatsappImg
                    width: whatsApp.width
                    height: whatsApp.height
                    anchors.fill: whatsApp
                    anchors.horizontalCenter: parent.horizontalCenter
                    source: "qrc:/Downloads/whatsapp.png"
                    fillMode: Image.PreserveAspectFit
                }
                Text
                {
                    id: whatsappIcon
                    text: qsTr("WHATSAPP")
                    font.bold: true
                    anchors.horizontalCenter: parent.horizontalCenter
                }
            }
            MouseArea
            {
                anchors.fill: parent
                onClicked: {
                    whatsappIconClicked()

                }
            }
        }
    }

    Component.onCompleted: {
        console.log("Loaded complete :", this)
    }

    Component.onDestruction: {
        console.log("Getting destroyed :", this)
    }
}
