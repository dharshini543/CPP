// import QtQuick
// import QtQuick.Shapes as QQS

// Window {
//     id: root

//     height: 150
//     visible: true
//     width: 150

//     QQS.Shape {
//         anchors.fill: parent
//         preferredRendererType: QQS.Shape.GeometryRenderer

//         QQS.ShapePath {
//             fillColor: "red"
//             strokeColor: "black"

//             PathPolyline {
//                 path: [Qt.point(0, 100), Qt.point(50, 100), Qt.point(75, 0), Qt.point(100, 100), Qt.point(150, 100)]
//             }
//         }
//     }
// }


// import QtQuick 2.0
// import QtQuick.Window 2.0

// Window {
//     width: 500
//     height: 500
//     visible: true

//     Item {
//         id: track_item
//         x: 50
//         y: 50

//         Rectangle {
//             id: label
//             property bool expanded: false

//             radius: 5
//             border.width: 3
//             border.color: "green"

//             width: grid.width + 10
//             height: grid.height + 10
//             color: "lightblue"

//             MouseArea {
//                 anchors.fill: parent
//                 hoverEnabled: true
//                 onEntered: label.expanded = true
//                 onExited: label.expanded = false

//                 drag.target: label
//                 drag.axis: Drag.XandYAxis
//                 drag.minimumX: 0 - track_item.x
//                 drag.minimumY: 0 - track_item.y
//             }

//             Grid {
//                 id: grid
//                 anchors.margins: 5
//                 anchors.top: label.top
//                 anchors.left: label.left

//                 columns: 2
//                 spacing: 5

//                 Text { id: callsign_text; text: "a" }
//                 Text { id: acceleration_text; text: "b" }
//                 Text { id: name_text; text: "ccccccccc" }
//                 Text { id: type_text; text: "d" }
//                 Text { id: ifplid_text; text: "e" }
//             }

//             states: [
//                 State {
//                     name: "reduced"
//                     when: !label.expanded
//                     PropertyChanges { target: name_text; opacity: 0; visible: false }
//                     PropertyChanges { target: type_text; opacity: 0; visible: false }
//                     PropertyChanges { target: ifplid_text; opacity: 0; visible: false }
//                     PropertyChanges { target: label; color: "lightblue" }
//                 },
//                 State {
//                     name: "expanded"
//                     when: label.expanded
//                     PropertyChanges { target: name_text; opacity: 1; visible: true }
//                     PropertyChanges { target: type_text; opacity: 1; visible: true }
//                     PropertyChanges { target: ifplid_text; opacity: 1; visible: true }
//                     PropertyChanges { target: label; color: "yellow" }
//                     PropertyChanges { target: label; width: grid.width + 10 }
//                     PropertyChanges { target: label; height: grid.height + 10 }
//                 }
//             ]

//             transitions: [
//                 Transition {
//                     from: "reduced"
//                     to: "expanded"
//                     reversible: true
//                     SequentialAnimation {
//                         ParallelAnimation {
//                             PropertyAction {
//                                 targets: [name_text, type_text, ifplid_text]
//                                 property: "visible"
//                             }
//                             ColorAnimation { target: label; duration: 500 }
//                             NumberAnimation { target: label; property: "width"; duration: 500 }
//                             NumberAnimation { target: label; property: "height"; duration: 500 }
//                         }
//                         ParallelAnimation {
//                             NumberAnimation { target: name_text; property: "opacity"; duration: 500 }
//                             NumberAnimation { target: type_text; property: "opacity"; duration: 500 }
//                             NumberAnimation { target: ifplid_text; property: "opacity"; duration: 500 }
//                         }
//                     }
//                 }
//             ]
//         }
//     }
// }
