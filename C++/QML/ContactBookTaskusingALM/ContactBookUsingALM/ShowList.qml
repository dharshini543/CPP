import QtQuick 2.15
import QtQuick.Controls

Rectangle{
    // property var nameList: []
    // property var phoneList: []
    signal closeButtonClicked()

    anchors.horizontalCenter: parent.horizontalCenter

    // Column{
    //     spacing:  10
    //     anchors.centerIn: parent
    //     Repeater{
    //         width:parent.width
    //         height: parent.height
    //         model: nameList
    //     Text{
    //         text:"Name :" + modelData

    //     }
    //     }
    //     Repeater{
    //         width:parent.width
    //         height: parent.height
    //         model: phoneList
    //     Text{
    //         text:"Phone :" + modelData

    //     }
    //     }
    //     Button{
    //         id:close
    //         text: "Close"
    //         onClicked: {
    //             closeButtonClicked()
    //         }

    //     }
    // }

    ListView{
        id: myListView
        width:parent.width
        height: parent.height
        model: PhoneBook
        delegate: myDelegate
        clip: true
        interactive: true
    }
    Component{
        id:myDelegate

        Column{
            spacing: 10
            width: myListView.width
            height: myListView.height/5

            Text{
                text:"Name :" + CONTACTNAME
                Component.onCompleted: {
                    console.log(CONTACTNAME + " Created")
                }
                Component.onDestruction: {

                    console.log(CONTACTNUM + " Destroyed")
                }
            }
            Text{
                text:"Phone :" + CONTACTNUM
            }

        }
    }
    Row{
        spacing: 10
        anchors.top:myListView.bottom

        Button{
            id:close
            text: "Close"
            anchors.top:myListView.bottom
            onClicked: {
                closeButtonClicked()
            }
        }
        Button{
            id:data
            text: "Add Number"
            onClicked: {
                PhoneBook.addNumberButtonClicked()
            }
        }
    }
}
