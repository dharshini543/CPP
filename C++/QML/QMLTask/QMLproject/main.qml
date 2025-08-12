import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle{
        id:background
        width:parent.width/2
        height:parent.height/2
        anchors.centerIn: parent
        border.color: "black"
        radius: parent.width/20

        Column{
            id:column
            spacing: 10
            anchors.centerIn: parent

            Text {
                id:userlabel
                text: qsTr("USERNAME")
            }
            TextField{
                id:usernameEdit
                width: background.width/1.5
                height: background.height/6
                placeholderText: "Enter Username"
            }

            Text {
                id:passlabel
                text: qsTr("PASSWORD")
            }
            TextField{
                id:passwordEdit
                width: background.width/1.5
                height: background.height/6
                placeholderText: "Enter Password"
            }

            Row{
                id:btnRow
                spacing: 10
                anchors.horizontalCenter: parent.horizontalCenter
                Button{
                    id:submitBtn
                    text:"Submit"
                    width: background.width/4
                    height:background.height/8
                    onClicked: {
                        submitButtonClicked()
                    }
                }
                Button{
                    id:cancelBtn
                    text:"Cancel"
                    width: background.width/4
                    height:background.height/8
                    onClicked: {
                        cancelButtonClicked()
                    }
                }

            }
        }

    }
    function submitButtonClicked()
    {
        console.log("Submit Button Clicked :"+usernameEdit.displayText)
        console.log("Submit Button Clicked :"+passwordEdit.displayText)
        lhandler.username = usernameEdit.displayText;
        lhandler.password = passwordEdit.displayText;

    }
    function cancelButtonClicked()
    {
        console.log("Cancel Button Clicked")
    }
}

