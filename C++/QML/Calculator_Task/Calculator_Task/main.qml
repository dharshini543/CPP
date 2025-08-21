// import QtQuick 2.15
// import QtQuick.Window 2.15
// import QtQuick.Controls

// Window {
//     width: 640
//     height: 480
//     visible: true
//     title: qsTr("Hello World")

//     Rectangle{
//         id:rect1
//         width: parent.width
//         height: parent.height
//         border.color: "black"
// Column{
//     spacing:10
//         TextField{
//             id: data
//             width: rect1.width
//             height: rect1.height/6
//         }
//         GridView{
//             id:calcGrid
//             width: rect1.width/2
//             height: rect1.height
//             cellHeight: width/5
//             cellWidth: height/5
//             model: Calculator
//             delegate: myComponenet
//         }
// }
//         Component{
//             id:myComponenet
//             Button{
// width: calcGrid.cellWidth
// height: calcGrid.cellHeight
// text:
//             }
//         }


//     }
// }

import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 300
    height: 400
    title: "Calculator"

    property string displayText: ""

    Column {
        anchors.fill: parent
        spacing: 10
        anchors.margins: 10

        Rectangle {
            width: parent.width
            height: 50
            radius: 6
            color: "lightgray"

            Text {
                id: display
                text: displayText
                anchors.fill: parent
                font.pixelSize: 28
                horizontalAlignment: Text.AlignRight
                verticalAlignment: Text.AlignVCenter
                padding: 8
            }
        }

        GridView {
            id: grid
            anchors.horizontalCenter: parent.horizontalCenter
            cellWidth: 70
            cellHeight: 70
            width: cellWidth * 4
            height: cellHeight * 5
            model: [
                "7", "8", "9", "/",
                "4", "5", "6", "*",
                "1", "2", "3", "-",
                "0", ".", "=", "+",
                "C"
            ]

            delegate: Button {
                text: modelData
                width: grid.cellWidth - 10
                height: grid.cellHeight - 10
                font.pixelSize: 20

                onClicked: {
                    if (text === "C") {
                        displayText = ""
                    } else if (text === "=") {
                        var op
                        if (displayText.indexOf("+") !== -1) op = "+"
                        else if (displayText.indexOf("-") !== -1) op = "-"
                        else if (displayText.indexOf("*") !== -1) op = "*"
                        else if (displayText.indexOf("/") !== -1) op = "/"

                        if (op) {
                            var parts = displayText.split(op)
                            var a = parseFloat(parts[0])
                            var b = parseFloat(parts[1])

                            if (op === "+")
                                displayText = Calculator.add(a, b).toString()
                            else if (op === "-")
                                displayText = Calculator.subtract(a, b).toString()
                            else if (op === "*")
                                displayText = Calculator.multiply(a, b).toString()
                            else if (op === "/")
                                displayText = Calculator.divide(a, b).toString()
                        }
                    } else {
                        displayText += text
                    }
                }
            }
        }
    }
}
