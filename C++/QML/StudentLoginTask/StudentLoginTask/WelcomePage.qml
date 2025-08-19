import QtQuick 2.15
import QtQuick.Controls

Rectangle{
    id:welcomepage
    anchors.centerIn: parent

    signal closeButtonClicked()
    signal signUpButtonClicked()
    signal loginButtonClicked()
    signal submitButtonClicked()


    Column{
        id:column
        spacing: 25
        anchors.centerIn: parent

        Text {
            id: welcome
            text: qsTr("WELCOME")
            font.bold: true
            font.pixelSize: 22
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Button{
            id:logIn
            width: welcomepage.width/2
            text:"LOGIN"
            onClicked: {
                loginButtonClicked()
            }
        }
        Button{
            id:signUp
            width: welcomepage.width/2
            text:"SIGNUP"
            onClicked: {
                signUpButtonClicked()
            }

        }
    }
}
