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
// import QtQuick
// import QtQuick.Controls

// ApplicationWindow {
//     visible: true
//     width: 600
//     height: 400

//     Button {
//         text: "Open Menu"
//         anchors.centerIn: parent
//         onClicked: myMenu.open()
//     }

//     Menu {
//         id: myMenu
//         MenuItem { text: "Item 1" }
//         MenuItem { text: "Item 2" }
//     }
// }

import QtQuick
import QtQuick.Controls
ApplicationWindow {
    width: 600
    height: 400
    visible: true

    Button {
        text: "Show Menu"
        anchors.centerIn: parent

        Menu {
            id: menu
            MenuItem { text: "Action 1" }
        }

        onClicked: menu.open()
    }
}
