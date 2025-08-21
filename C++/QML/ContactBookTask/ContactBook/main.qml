import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    id:mainwindow
    width:600
    height: 750
    visible: true
    title: qsTr("Phone Book")
    color: "pink"

    ContactList{

    }
}
