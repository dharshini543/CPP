import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 400
    height: 400
    title: "Calendar DST Test"

    Calendar {
        id: calendar
        anchors.centerIn: parent
        onClicked: (date) => {
            console.log("Date clicked:", date)
        }
    }
}
