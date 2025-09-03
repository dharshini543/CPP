import QtQuick 2.15
import QtQuick.Controls

Item
{
    signal backButtonClicked()

    MyBackButton{

    }

    Column
    {
        spacing: 10
        anchors.topMargin: 10
        anchors.fill: parent
        anchors.margins: 10

        Rectangle
        {
            id:addRect
            width: 40
            height: 40
            radius: 20
            color: "green"
            anchors.right: parent.right

            Text
            {
                id: addnewContact
                text: qsTr("+")
                font.pixelSize: 30
                anchors.centerIn: addRect
            }
        }
        Text
        {
            id: contacts
            text: qsTr("Contacts")
            font.bold: true
            font.pixelSize: 24
        }
        MySearchBar
        {
            id:searchbar
            anchors.left: parent.left
        }

        MyListView
        {
            id:contactView
            height: parent.height - searchbar.height
        }
    }

    Component
    {
        id: myComponent

        Rectangle
        {
            id: rect1
            width: contactView.width
            height: contactView.height / 9
            color: "pink"
            radius: 20

            Row
            {
                spacing: 50
                width: parent.width
                anchors.verticalCenter: parent.verticalCenter
                anchors.left: parent.left
                anchors.leftMargin: 10

                MyContactImage{

                }

                Text
                {
                    anchors.verticalCenter: parent.verticalCenter
                    text: CONTACTNAME
                    font.pixelSize: 16
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


