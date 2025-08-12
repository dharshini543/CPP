import QtQuick
import QtQuick.Window
import QtQuick.Controls
import QtQuick.Controls.impl  // to access MonthGrid (private)

ApplicationWindow {
    visible: true
    width: 400
    height: 400
    title: "MonthGrid DST Bug Demo"

    Column {
        anchors.centerIn: parent

        Label {
            id: dateLabel
            text: "Click a day below"
        }

        MonthGrid {
            id: grid
            month: 2   // March
            year: 2020 // DST change month (e.g. March 8, 2020 in US)
            width: 300
            height: 300

            // Hacky way to track when pressedDate changes:
            MouseArea {
                anchors.fill: parent
                onClicked: {
                    // Use a small delay to ensure pressedDate is updated
                    Qt.callLater(() => {
                        dateLabel.text = "Pressed date: " + grid.pressedDate
                        console.log("Pressed date:", grid.pressedDate)
                    })
                }
            }
        }
    }
}
