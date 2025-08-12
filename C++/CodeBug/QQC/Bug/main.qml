// // main.qml
// import QtQuick 2.15
// import QtQuick.Controls 2.15

// ApplicationWindow {
//     visible: true
//     width: 400
//     height: 200
//     title: "QTBUG-138389 Bug Reproduction"

//     Rectangle {
//         width: 300
//         height: 50
//         anchors.centerIn: parent
//         border.color: "gray"
//         radius: 5

//         Row {
//             anchors.fill: parent
//             spacing: 5
//             anchors.margins: 5

//             TextField {
//                 id: searchField
//                 width: 240
//                 placeholderText: "Search..."
//                 text: "Bug Example"
//             }

//             // Clear button that clears on press (BUG)
//             ToolButton {
//                 text: "❌"
//                 onPressed: {
//                     searchField.text = ""; // This is the bug
//                     console.log("Cleared on press")
//                 }
//             }
//         }
//     }
// }

// import QtQuick 2.15
// import QtQuick.Controls 2.15

// DropArea {
//         id: dropAreag
//         anchors.fill: parent
//         keys: ["application/x-color"]
//         onDropped: drop => {
//             if (drop.hasColor) {
//                 if (drop.proposedAction === Qt.CopyAction) {
//                     internal.setColor(drop.colorData);
//                     drop.acceptProposedAction();
//                 }
//             }
//         }
//         onEntered: drag => {
//             if (!drag.hasColor) {
//                 drag.accepted = false;
//             }
//         }
//     }
