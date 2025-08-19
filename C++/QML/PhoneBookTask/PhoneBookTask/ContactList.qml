import QtQuick 2.15
import QtQuick.Controls

Rectangle{
    id:rect1
    border.color: "black"

    signal addContactButtonClicked()
    signal closeButtonClicked()
    signal contactClicked(string name, string phoneNum, string contactUrl)

    Column{
        spacing:10
        anchors.horizontalCenter: parent.horizontalCenter

        Row
        {
            TextField
            {
                id:searchNameEdit
                width:rect1.width/1.2
                height: rect1.height/12
                placeholderText: "Search"

            }
            // Button
            // {
            //     id:cancelButton
            //     text:"X"
            //     width:rect1.width/8
            //     height: rect1.height/12

            //     onClicked:
            //     {
            //         cancelButtonClicked();
            //     }

            // }

        }

        ListView
        {
            id:contactView
            width: parent.width
            height: parent.height/2
            interactive: true
            model: ContactManager
            delegate: myComponent
            spacing: 5

        }


        Button
        {
            id:addContact
            width:rect1.width/1.25
            height:rect1.height/13
            anchors.bottom: parent.bottom
            // anchors.right: parent.right
            text: "ADD CONTACT"
            onClicked:{
                addContactButtonClicked()
            }
        }

    }
    Component{
        id:myComponent


        Rectangle{
            width: contactView.width
            height: contactView.height/5
            color: "pink"

            Row{
                spacing: 30
                width: parent.width
                Image{
                    source: ImageURL
                    height: 50
                    width: 50
                    fillMode: Image.PreserveAspectFit
                }

                Text {
                    id: stName
                    anchors.verticalCenter: parent.verticalCenter
                    text:ContactName
                }
            }
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    contactClicked(ContactName, PhoneNum, ImageURL)
                }
            }
        }
    }
    function cancelButtonClicked()
    {
        searchNameEdit.clear()
    }

}
