import QtQuick 2.15
import QtQuick.Controls

Item
{
    signal backButtonClicked()

    MyBackButton
    {

    }

    Column
    {
        spacing: 10
        anchors.topMargin: 10
        anchors.fill: parent
        anchors.margins: 10

        Row{
            spacing: 10
            anchors.right: parent.right

            Rectangle
            {
                id:cameraIcon
                width: 40
                height: 40
                radius: 20

                Image
                {
                    width: 30
                    height: 20
                    id: cameraImg
                    source: "qrc:Downloads/camera.png"
                    anchors.centerIn: cameraIcon
                }
            }
            Rectangle
            {
                id:addRect
                width: 40
                height: 40
                radius: 20
                color: "green"

                Text
                {
                    id: addContact
                    text: qsTr("+")
                    font.pixelSize: 30
                    anchors.centerIn: addRect
                }
            }
        }


        Text
        {
            id: chats
            text: qsTr("Chats")
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

        Row
        {
            spacing: 7

            MyContactImage
            {
                anchors.verticalCenter: parent.verticalCenter
            }

            Rectangle
            {
                width: contactView.width/1.2
                height: contactView.height / 8
                color: "pink"
                radius: 20

                Row
                {
                    spacing: 30
                    anchors.verticalCenter: parent.verticalCenter
                    anchors.left: parent.left
                    anchors.leftMargin: 10

                    Column
                    {
                        spacing: 5
                        anchors.verticalCenter: parent.verticalCenter

                        Text
                        {
                            text: CONTACTNAME
                            font.bold: true
                        }

                        Text
                        {
                            text: CONTACTRECENTMESSAGE
                        }
                    }
                }

                Text
                {
                    text: CONTACTCALLTIME
                    anchors.top: parent.top
                    anchors.right: parent.right
                    anchors.topMargin: 10
                    anchors.rightMargin: 15
                    font.pointSize: 10
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

