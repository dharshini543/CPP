import QtQuick 2.15
import QtQuick.Controls

Rectangle{
    id:rect1
    width: parent.width
    height: parent.height
    border.color: "black"

    signal addContactButtonClicked()
    signal closeButtonClicked()
    signal contactClicked(string name, string phoneNum, string contactUrl)


    Button{
        id:closeBtn
        text:"X"
        width:rect1.width/5
        height: rect1.height/12
        anchors.right: parent.right
        anchors.top: parent.top
        onClicked:{
            closeButtonClicked()
        }
    }

    Column{

        spacing:20
        anchors.centerIn: parent

        TextField{
            id:contactNameEdit
            width:rect1.width/1.2
            height: rect1.height/12
            placeholderText: "NAME"
        }
        TextField{
            id:contactNumberEdit
            width:rect1.width/1.2
            height: rect1.height/12
            placeholderText: "PhoneNumber"
            maximumLength: 10
        }
        TextField{
            id:contactURLEdit
            width:rect1.width/1.2
            height: rect1.height/12
            placeholderText: "URL"
        }
        Button{
            id:saveBtn
            width:rect1.width/3
            height: rect1.height/12
            text: "SAVE"
            anchors.horizontalCenter: parent.horizontalCenter
            onClicked: {
                onSaveButtonClicked()
            }

        }

    }
    function onSaveButtonClicked()
    {
        var OK = ContactManager.addContact(contactNameEdit.text, contactNumberEdit.text, contactURLEdit.text)
        if(OK)
        {
            console.log("Contact added Successfully")

        }
        else
        {
            console.log("Failed to add Contact")

        }
    }
}
