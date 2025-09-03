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
        anchors.topMargin: 50
        anchors.fill: parent
        anchors.margins: 10

        Text
        {
            id: recents
            text: qsTr("Recents")
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
            height: parent.height - searchbar.height - 80
        }
    }

    Component
    {
        id: myComponent

        Rectangle
        {
            width: contactView.width
            height: contactView.height / 8
            color: "pink"
            radius: 20
            Row
            {
                spacing: 30
                anchors.verticalCenter: parent.verticalCenter
                anchors.left: parent.left
                anchors.leftMargin: 10

                MyContactImage
                {
                    anchors.verticalCenter: parent.verticalCenter
                }
                Column
                {
                    spacing: 10
                    anchors.verticalCenter: parent.verticalCenter

                    Text
                    {
                        text: CONTACTNAME
                        font.bold: true
                    }
                    Row
                    {
                        spacing: 10
                        Image
                        {
                            width: 24
                            height: 24
                            source: (CONTACTISINCOMING === true)
                                    ? "qrc:Downloads/incoming.png"
                                    : (CONTACTISOUTGOING === true)
                                      ? "qrc:Downloads/outgoing.png"
                                      : "qrc:Downloads/missedCall.png"
                        }
                        Text
                        {
                            text: "mobile"
                        }
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

    Component.onCompleted: {
        console.log("Loaded complete :", this)
    }

    Component.onDestruction: {
        console.log("Getting destroyed :", this)
    }
}

