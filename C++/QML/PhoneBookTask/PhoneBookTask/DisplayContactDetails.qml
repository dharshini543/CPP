
import QtQuick 2.15
import QtQuick.Controls

Rectangle {
    id: root

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
            saveBtn.visible = true
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
            saveBtn.visible = false
            myPopup.open()
        }
    }
    Popup {
        id: myPopup
        modal: true
        focus: true
        width: 250
        height: 150
        anchors.centerIn: parent
        Rectangle {
            anchors.fill: parent
            color: "white"
            radius: 8

            Column {
                anchors.centerIn: parent
                spacing: 10

                Text {
                    text: "Are you sure?"
                }

                Row {
                    spacing: 20
                    Button {
                        text: "Yes"
                        onClicked: {
                            console.log("User clicked Yes")
                            var OK = ContactManager.deleteContact(root.contactName,root.contactNumber,root.contactURL)
                            if(OK)
                            {
                                console.log("Contact deleted Successfully")
                                root.contactName = ""
                                root.contactNumber = ""
                                root.contactURL = ""
                                closeButtonClicked()

                            }
                            else
                            {
                                console.log("Failed to delete contact")
                            }
                            myPopup.close()

                        }
                    }
                    Button {
                        text: "No"
                        onClicked: {
                            console.log("User clicked No")
                            myPopup.close()
                        }
                    }
                }
            }
        }
    }
    Column {
        anchors.centerIn: parent
        spacing: 20
        Image{
            id:imageTxt
            source: root.contactURL
            height: 50
            width: 50
            fillMode: Image.PreserveAspectFit
            anchors.horizontalCenter: parent.horizontalCenter
        }

        TextInput {
            id: nameTxt
            text: root.contactName === "" ? "" : "Name: " + root.contactName
            font.pixelSize: 20
            anchors.horizontalCenter: parent.horizontalCenter
            visible: root.isEditing
            selectByMouse: true
        }
        TextInput {
            id: phoneTxt
            text: root.contactNumber === "" ? "" : "Phone: " + root.contactNumber
            font.pixelSize: 20
            anchors.horizontalCenter: parent.horizontalCenter
            visible: root.isEditing
            selectByMouse: true
        }


        Button{
            id: saveBtn
            text: "Save"
            visible: false
            anchors.horizontalCenter: parent.horizontalCenter
            onClicked: {
                root.contactName = nameTxt.text
                root.contactNumber = phoneTxt.text

            }
        }
    }

}
