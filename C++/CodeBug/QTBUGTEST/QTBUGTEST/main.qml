//QTBUG-110085
// import QtQuick 2.12
// import QtQuick.Window 2.12
// import QtQuick.Controls 2.12

// Window {
//     width: 250; height: 150
//     visible: true
//     LayoutMirroring.enabled: true
//     LayoutMirroring.childrenInherit: true

//     TextField {
//         anchors.fill: parent
//         text: "Test"
//         // horizontalAlignment: TextField.AlignLeft // NOT set
//     }
// }

// //QTBUG-110035

// import QtQuick 2.12
// import QtQuick.Window 2.12
// import QtQuick.Layouts 1.12
// import QtQuick.Controls 2.12
// Window {
//     id: root    width: 250
//     height: 150
//     visible: true
//     title: qsTr("Hello World")
//     ComboBox {
//         model: 10
//         LayoutMirroring.enabled: true
//         LayoutMirroring.childrenInherit: true
//     }
// }

// //QTBUG-106348
// import QtQuick 2.15
// import QtQuick.Layouts 1.15
// import QtQuick.Controls 2.15

// ApplicationWindow {
//     visible: true; width: 400; height: 300

//     ColumnLayout {
//         anchors.fill: parent
//         spacing: 0

//         Text {
//             id: t
//             text: "Hello\nWorld"
//             font.pixelSize: 20
//             wrapMode: Text.Wrap
//             Layout.fillWidth: true
//         }

//         Rectangle { height: 100; color: "lightgray"; Layout.fillWidth: true }
//     }
// }

// QTBUG-106348
// import QtQuick 2.15
// import QtQuick.Controls 2.15
// import QtQuick.Layouts 1.15

// ApplicationWindow {
//     visible: true
//     width: 420
//     height: 220
//     title: "QTBUG-106348 repro: baseline + layout ping-pong"

//     // Animate the window width to force frequent relayouts & wrapping changes.
//     NumberAnimation on width {
//         from: 360; to: 520; duration: 600
//         loops: Animation.Infinite; running: true; easing.type: Easing.InOutSine
//     }

//     RowLayout {
//         anchors.fill: parent
//         spacing: 12

//         // Long, wrapping text so baseline depends on line metrics/width
//         Text {
//             id: longText
//             text: "This is a long piece of text that wraps across multiple lines when the width is narrow."
//             wrapMode: Text.WordWrap
//             Layout.fillWidth: true
//             Layout.alignment: Qt.AlignBaseline
//         }

//         // Another baseline-participating control
//         TextField {
//             id: tf
//             placeholderText: "baseline-aligned"
//             Layout.alignment: Qt.AlignBaseline
//             Layout.preferredWidth: 160
//         }
//     }
// }

//QTBUG-68246


// import QtQuick 2.6
// import QtQuick.Layouts 1.3
// import QtQuick.Controls 2.2
// import QtQuick.Window 2.0

// ApplicationWindow {
//     id: mainWindow
//     visible: true

//     property int baseSize: 20

//     Component.onCompleted: app.quickLoadGame();
//     RowLayout {
//         Button { text: "+"; onClicked: repeater.model += 1; }
//         Text   { text: repeater.model; }
//         Button { text: "-"; onClicked: repeater.model -= 1; }

//         GridLayout {
//             columns: 8

//             Repeater {
//                 id: repeater
//                 model: 16

//                 Rectangle {
//                     color:  "red"
//                     Layout.preferredWidth: baseSize
//                     Layout.preferredHeight: baseSize

//                     width:  baseSize
//                     height: baseSize

//                     Text { anchors.fill: parent; text: index; }
//                 }
//             }
//         }
//     }
// }

import QtQuick 2.6
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.2

ApplicationWindow {
    visible: true
    width: 640
    height: 480

    ColumnLayout
    {
        id: layout
        anchors.fill: parent
        anchors.margins: spacing
        height: parent.height/3
        Rectangle
        {
            Layout.fillHeight: true
            Layout.fillWidth: true
        }
        Rectangle
        {
            Layout.fillHeight: true
            Layout.fillWidth: true
        }
    }

    Rectangle
    {
        anchors.fill: layout
        color: "transparent"
        border.color: "red"
    }
}
