import QtQuick 2.15
import QtQuick.Window 2.15

Window {
  id:mainwindow
  width:600
  height: 1000
  visible: true
  title: qsTr("Phone Book")
  // flags:Qt.FramelessWindowHint

  ContactList{
  }

  Loader{
    id: loader
    anchors.centerIn: parent
    width: parent.width/1.6
    height: parent.height/1.2
    source:"ContactList.qml"
  }
  Connections
  {
    target: loader.item

    function onAddContactButtonClicked()
    {
      loader.source = "AddContact.qml"
    }
    function onCloseButtonClicked()
    {
      loader.source = "ContactList.qml"
    }
    function onContactClicked(name, phoneNum, contactUrl)
    {
      loader.setSource("DisplayContactDetails.qml", {
                   contactName: name,
                   contactNumber: phoneNum,
                   contactURL: contactUrl
                       })
    }



  }
}
