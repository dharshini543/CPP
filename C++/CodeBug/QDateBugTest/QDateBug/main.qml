import QtQuick
import QtQuick.Controls
import QtQuick.Window

ApplicationWindow {
    visible: true
    width: 400
    height: 300
    title: "QDate Bug Test"

    Column {
        anchors.centerIn: parent

        Text {
            text: "QML sees date as: " + myDate.toString()
        }
    }
}

// test.qml
// import QtQuick
// import QtQuick.Controls

// Window {
//     visible: true
//     width: 400
//     height: 200

//     property date dateOnly: new Date(2025, 6, 11) // July 11, 2025

//     Component.onCompleted: {
//         console.log("QML Date:", dateOnly)
//     }
// }
