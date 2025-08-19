
import QtQuick 2.15
import QtQuick.Controls

Rectangle {
    id: root
    width: parent.width
    height: parent.height
    border.color: "black"

    signal addContactButtonClicked()
    signal closeButtonClicked()
    signal contactClicked(string name, string phoneNum, string contactUrl)

    property string contactName: ""
    property string contactNumber: ""
    property string contactURL:""

    Button{
        id:closeBtn
        text:"<-"
        width:root.width/5
        height: root.height/12
        anchors.left: root.left
        anchors.top: root.top
        onClicked:{
            closeButtonClicked()
        }
    }
    Button{
        id:editBtn
        text:"EDIT"
        width:root.width/5
        height: root.height/12
        anchors.horizontalCenter: root.horizontalCenter
        anchors.top: root.top
        onClicked:{
            editButtonClicked()
        }
    }
    Button{
        id:deleteBtn
        text:"DELETE"
        width:root.width/5
        height: root.height/12
        anchors.right: root.right
        anchors.top: root.top
        onClicked:{
            deleteButtonClicked()
        }
    }
    Column {
        anchors.centerIn: parent
        spacing: 20
        Image{
            source: root.contactURL
            height: 50
            width: 50
            fillMode: Image.PreserveAspectFit
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Text {
            text: "Name: " + root.contactName
            font.pixelSize: 20
            anchors.horizontalCenter: parent.horizontalCenter
        }
        Text {
            text: "Phone: " + root.contactNumber
            font.pixelSize: 20
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }

    function editButtonClicked()
    {

    }
    function deleteButtonClicked()
    {

    }
}

