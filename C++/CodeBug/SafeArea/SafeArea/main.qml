// import QtQuick
// import QtQuick.Controls

// import QtQuick.Layouts
// ApplicationWindow {
//     width: 1200
//     height: 750
//     visible: true
//     id: w

//     SafeArea.additionalMargins.top: 200
//     SafeArea.additionalMargins.bottom: 1

//     header: ToolBar {
//         ToolButton {
//             text: "top"
//             onClicked: console.log("hea")
//         }
//     }
//     Label {
//         text: "content"
//     }

//     footer: ToolBar {
//         ToolButton {
//             text: "bottom"

//             onClicked: console.log("foo")
//         }
//     }
// }


// import QtQuick
// import QtQuick.Controls

// ApplicationWindow {
//     width: 600
//     height: 400
//     visible: true

//     Menu {
//         width: 100
//         height: 100
//         title: "Some Menu"
//         visible: true
//         MenuItem {
//             text: "Action 1"
//         }
//     }
// }

import QtQuick
import QtQuick.Controls.Basic
import QtQuick.Layouts

Window {
    id: window
    width: 640
    height: 480
    visible: true
    title: "activeFocusItem: " + activeFocusItem

    property ListModel model: ListModel {
        id: fruitModel

        ListElement {
            name: "Apple"
            color: "green"
        }
        ListElement {
            name: "Cherry"
            color: "red"
        }
        ListElement {
            name: "Banana"
            color: "yellow"
        }
        ListElement {
            name: "Orange"
            color: "orange"
        }
        ListElement {
            name: "WaterMelon"
            color: "pink"
        }
    }

    SearchField {
        text: "Live SearchField"
        textRole: "name"
        suggestionModel: window.model
    }
}
