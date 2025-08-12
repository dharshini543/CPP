// import QtQuick
// import QtQuick.Controls

// ApplicationWindow {
//     width: 600
//     height: 400
//     visible: true

//     Item {
//         width: 100
//         height: 100
//         anchors.centerIn: parent

//         Menu {
//             title: "Some Menu"
//             visible: true
//             MenuItem {
//                 text: "Action 1"
//             }
//         }
//     }
// }

import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 400
    height: 300
    title: "QDate vs QDateTime Bug"

    Column {
        anchors.centerIn: parent
        spacing: 10

        Text {
            text: "From QDate (UTC): " + dateFromQDate.toString()
        }

        Text {
            text: "Safe QDateTime (Local + Noon): " + dateSafeQDateTime.toString()
        }
    }
}
