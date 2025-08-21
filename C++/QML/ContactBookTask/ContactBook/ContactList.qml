import QtQuick 2.15
import QtQuick.Controls

Rectangle{
    id:rect1
    width: parent.width
    height: parent.height/1.25
    anchors.centerIn: parent
    border.color: "black"
    anchors.horizontalCenter: parent.horizontalCenter

    property  var  contactNameList: PhoneBook.phoneBookList
    // property  var  contactNumberList: PhoneBook.phoneBookList

    signal closeButtonClicked()

    /*Column{
        spacing: 10
        anchors.centerIn: parent

        TextField{
            id:contactName
            width:rect1.width/1.25
            height: rect1.height/12
            placeholderText: " Enter ContactName"

        }
        TextField{
            id:contactNumber
            width:rect1.width/1.25
            height: rect1.height/12
            placeholderText: "Enter ContactNumber"
        }
        Button{
            id:submitBtn
            text: "Submit"
            onClicked: {
                onSubmitBtnClicked()
                showList.visible = true
            }
        }
    }
    function onSubmitBtnClicked()
    {
        contactNameList.push(contactName.displayText)
        contactNumberList.push(contactNumber.displayText)
        showList.nameList = contactNameList
        showList.phoneList = contactNumberList
        console.log("Name :"+ contactNameList)
        console.log("Phone :" + contactNumberList)
        // loader.setSource("ShowList.qml",{
        //                      nameList: contactNameList,
        //                      phoneList: contactNumberList})
    }
    // Loader{
    //     id:loader
    //     width: parent.width
    //     height: parent.height
    // }

    Connections
    {
        target: showList
        function onCloseButtonClicked()
        {
            showList.visible = false
        }
    }*/

    ShowList{
        id:showList
        width: parent.width
        height: parent.height
        visible: true
        nameList : contactNameList

    }


}
