import QtQuick 2.15
import QtQuick.Controls

Rectangle{
    id:welcomepage
    anchors.centerIn: parent

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
                load.source = "LoginPage.qml"
            }
        }
        Button{
            id:signUp
            width: welcomepage.width/2
            text:"SIGNUP"
            onClicked: {
                load.source = "SignUpPage.qml"
            }

        }
    }
    Loader{
        id:load
        width: parent.width
        height: parent.height

    }
}
