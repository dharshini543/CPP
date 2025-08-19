import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    id:mainwindow
    width:600
    height: 1000
    visible: true
    title: qsTr("Student Login")
    // flags:Qt.FramelessWindowHint

    WelcomePage{
    }

    Loader{
        id: loader
        anchors.centerIn: parent
        width: parent.width/1.6
        height: parent.height/1.2
        source:"WelcomePage.qml"
    }

    Connections{
    target: loader.item

        function onCloseButtonClicked(){
            loader.source = "WelcomePage.qml"
        }
        function onSignUpButtonClicked(){
            loader.source = "SignUpPage.qml"
        }
        function onLoginButtonClicked(){
            loader.source = "LoginPage.qml"
        }
        function onSubmitButtonClicked()
        {
            loader.source = "Showstudent.qml"
        }


    }
}
