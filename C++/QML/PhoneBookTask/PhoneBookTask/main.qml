import QtQuick 2.15
import QtQuick.Window 2.15

Window {
  id:mainwindow
  width:400
  height: 750
  visible: true
  title: qsTr("Phone Book")
  color: "pink"
  // flags:Qt.FramelessWindowHint

  ContactList{
  }

  Loader{
    id: loader
    anchors.centerIn: parent
    width: parent.width
    height: parent.height
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
