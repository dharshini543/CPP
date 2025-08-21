import QtQuick 2.15
import QtQuick.Controls

Rectangle{
    property var nameList: []
    property var phoneList: []
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
            model: nameList.length
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
               text:"Name :" + nameList[index].contactName
               Component.onCompleted: {
                   console.log(nameList[index].contactName + " Created")
               }
               Component.onDestruction: {

                   console.log(nameList[index].contactName + " Destroyed")
               }
           }
           Text{
               text:"Phone :" + nameList[index].contactNumber
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
        text: "add Number"
        onClicked: {
            PhoneBook.addNumberButtonClicked()
        }
    }
    }


}
