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
        width: parent.width/1.6
        height: parent.height/1.2
    }
}
