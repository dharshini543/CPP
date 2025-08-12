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
import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15

ApplicationWindow {
    visible: true
    width: 360; height: 240

    ColumnLayout {
        anchors.fill: parent
        Text {
            id: t
            objectName: "testText"
            text: "Hello — resize me"
            font.pointSize: 20
            Layout.fillWidth: true
        }
        Rectangle { Layout.fillWidth: true; height: 20; color: "salmon" }
    }
}



