import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls

Window
{
    id: mainWindow
    width: 420
    height: 750
    visible: true
    title: qsTr("Contacts App")

    Loader
    {
       id: loader
       anchors.fill: parent
       source : "HomePage.qml"
    }

    Connections
    {
           target: loader.item

           function onBackButtonClicked()
           {
                 loader.source = "HomePage.qml"
           }
           function onPhoneBookIconClicked()
           {
                 ModelController.createModel("PhoneBook")
                 loader.source = "PhoneBook.qml"
           }
           function onCallHistoryIconClicked()
           {
                 ModelController.createModel("CallHistory")
                 loader.source = "CallHistory.qml"
           }
           function onWhatsappIconClicked()
           {
                 ModelController.createModel("WhatsApp")
                 loader.source = "WhatsApp.qml"
           }
}

           Component.onCompleted: {
                      console.log("Loaded complete :", this)
           }

           Component.onDestruction: {
                      console.log("Getting destroyed :", this)
           }
}


