import QtQuick 2.15
import QtQuick.Controls

Rectangle{
    id:logInPage
    anchors.centerIn: parent

    Column{
        id:column
        spacing: 20
        anchors.centerIn: parent

        Text {
            id: loginPage
            text: qsTr("LOGIN")
            anchors.horizontalCenter: column.horizontalCenter
            font.bold: true
            font.pixelSize: 22
        }
        Text {
            id: username
            text: qsTr("USERNAME")
            font.bold: true
            font.pixelSize: 15
        }

        TextField{
            id:userNameEdit
            width: logInPage.width
            height: logInPage.height/14
            placeholderText: "Enter USERNAME"
            maximumLength: 20
        }
        Text {
            id: password
            text: qsTr("PASSWORD")
            font.bold: true
            font.pixelSize: 15
        }
        TextField{
            id:passwordEdit
            width: logInPage.width
            height: logInPage.height/14
            placeholderText: "Enter PASSWORD"
            maximumLength: 20
        }
        Row{
            id:btnRow
            spacing: 10
            anchors.horizontalCenter: parent.horizontalCenter

            Button{
                id:submitBtn
                text:"Submit"
                width: logInPage.width/3
                onClicked: {
                    submitButtonClicked()
                }
            }
            Button{
                id:cancelBtn
                text:"Cancel"
                width: logInPage.width/3
                onClicked: {
                    cancelButtonClicked()
                }
            }

        }
        Button{
            id:closeBtn
            text:"Close"
            width: logInPage.width/3
            anchors.horizontalCenter: parent.horizontalCenter
            onClicked: {
                closeButtonClicked()
                login.source = "WelcomePage.qml"
            }
        }

    }
    function submitButtonClicked()
    {
        console.log("Submit Button Clicked")
        var ok = loginHandler.handleLogin(userNameEdit.text, passwordEdit.text)
        if (ok)
            console.log("Login success")
        else
            console.log("Login failed")
    }
    function cancelButtonClicked()
    {
        console.log("Cancel Button Clicked")
        userNameEdit.clear()
        passwordEdit.clear()
    }
    function closeButtonClicked()
    {
        console.log("Close button Clicked")
    }
    Loader{
        id:login
        width: parent.width
        height: parent.height
    }
}
