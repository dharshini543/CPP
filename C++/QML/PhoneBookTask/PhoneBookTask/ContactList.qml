import QtQuick 2.15
import QtQuick.Controls

Item {

    signal addContactButtonClicked()
    signal closeButtonClicked()
    signal contactClicked(string name, string phoneNum, string contactUrl)

    Column{
        spacing:20
        anchors.topMargin: 20
        anchors.fill: parent

        Rectangle{
            id:searchbar
            width:parent.width/1.4
            height:parent.height/20
            anchors.horizontalCenter: parent.horizontalCenter
            radius: 20
            color: "black"

            TextField
            {
                id:searchNameEdit
                anchors.fill: searchbar
                anchors.leftMargin: 20
                placeholderText: "Search"
                font.bold: true
                background: null
                anchors.verticalCenter: parent.verticalCenter
            }
        }

        ListView
        {
            id:contactView
            width: parent.width/1.15
            height: parent.height/1.5
            interactive: true
            anchors.horizontalCenter: parent.horizontalCenter
            model: ContactManager
            delegate: myComponent
            spacing: 5

        }

        Rectangle{
            id:addContactbar
            width:parent.width/1.4
            height:parent.height/18
            anchors.horizontalCenter: parent.horizontalCenter
            radius: 20
            color: "black"
            Button
            {
                id:addContact
                anchors.fill: addContactbar
                background: null
                font.bold: true
                text: "+  ADD NEW CONTACT"
                onClicked:{
                    addContactButtonClicked()
                }
            }
        }

    }
    Component{
        id:myComponent

        Rectangle{
            width: contactView.width
            height: contactView.height/8
            color: "white"
            radius: 20

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
                    text:CONTACTNAME
                }
            }
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    contactClicked(CONTACTNAME, PHONENUM, ImageURL)
                }
            }
        }
    }

}
