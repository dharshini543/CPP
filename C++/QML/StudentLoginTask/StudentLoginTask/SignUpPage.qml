import QtQuick 2.15
import QtQuick.Controls

Rectangle{
    id:signUpPage
    anchors.centerIn: parent

    Column{
        id:column
        spacing: 10
        anchors.centerIn: parent

        Text {
            id: loginPage
            text: qsTr("SIGN UP")
            anchors.horizontalCenter: column.horizontalCenter
            font.bold: true
            font.pixelSize: 22
        }
        Text {
            id: studentName
            text: qsTr("STUDENT NAME")
            font.bold: true
            font.pixelSize: 15
        }

        TextField{
            id:studentNameEdit
            width: signUpPage.width
            height: signUpPage.height/15
            placeholderText: "Enter StudentName"
            maximumLength: 30
        }
        Text {
            id: studentMobile
            text: qsTr("PHONE NUMBER")
            font.bold: true
            font.pixelSize: 15
        }
        TextField{
            id:studenMobileEdit
            width: signUpPage.width
            height: signUpPage.height/15
            placeholderText: "Enter Phone No"
            maximumLength: 10
        }
        Text {
            id: studentmail
            text: qsTr("EMAIL-ID")
            font.bold: true
            font.pixelSize: 15
        }
        TextField{
            id:studentmailEdit
            width: signUpPage.width
            height: signUpPage.height/15
            placeholderText: "Enter Email ID"
            maximumLength: 30
        }
        Text {
            id: fatherName
            text: qsTr("FATHER NAME")
            font.bold: true
            font.pixelSize: 15
        }
        TextField{
            id:fatherNameEdit
            width: signUpPage.width
            height: signUpPage.height/15
            placeholderText: "Enter FatherName"
            maximumLength: 30
        }
        Text {
            id: userName
            text: qsTr("USERNAME")
            font.bold: true
            font.pixelSize: 15
        }
        TextField{
            id:userNameEdit
            width: signUpPage.width
            height: signUpPage.height/15
            placeholderText: "Enter Username"
            maximumLength: 30
        }
        Text {
            id: password
            text: qsTr("PASSWORD")
            font.bold: true
            font.pixelSize: 15
        }
        TextField{
            id:passwordEdit
            width: signUpPage.width
            height: signUpPage.height/15
            placeholderText: "Enter Password"
            maximumLength: 20
        }
        Text {
            id: confirmPassword
            text: qsTr("CONFIRM PASSWORD")
            font.bold: true
            font.pixelSize: 15
        }
        TextField{
            id:confirmPasswordedit
            width: signUpPage.width
            height: signUpPage.height/15
            placeholderText: "Enter Password"
            maximumLength: 20
        }
        Row{
            id:btnRow
            spacing: 10
            anchors.horizontalCenter: parent.horizontalCenter
            Button{
                id:submitBtn
                text:"Submit"
                width: signUpPage.width/3
                height:signUpPage.height/14
                onClicked: {
                    submitButtonClicked()
                }
            }
            Button{
                id:cancelBtn
                text:"Cancel"
                width: signUpPage.width/3
                height:signUpPage.height/14
                onClicked: {
                    cancelButtonClicked()
                }
            }

        }
        Button{
            id:closeBtn
            text:"Close"
            width: signUpPage.width/3
            height:signUpPage.height/14
            anchors.horizontalCenter: parent.horizontalCenter
            onClicked: {
                closeButtonClicked()
                signUp.source = "WelcomePage.qml"
            }
        }
    }
    function submitButtonClicked()
    {
        console.log("Submit Button Clicked")
        var ok = signupHandler.handleSignup(studentNameEdit.text, studenMobileEdit.text,studentmailEdit.text, fatherNameEdit.text, userNameEdit.text, passwordEdit.text, confirmPasswordedit.text)
        if (ok)
            console.log("SignUp success")
        else
            console.log("SignUp failed")
    }
    function cancelButtonClicked()
    {
        console.log("Cancel Button Clicked")
        studentNameEdit.clear()
        studenMobileEdit.clear()
        studentmailEdit.clear()
        fatherNameEdit.clear()
        userNameEdit.clear()
        passwordEdit.clear()
        confirmPasswordedit.clear()
    }
    function closeButtonClicked()
    {
        console.log("Close button Clicked")
    }
    Loader{
        id:signUp
        width: parent.width
        height: parent.height
    }
}
