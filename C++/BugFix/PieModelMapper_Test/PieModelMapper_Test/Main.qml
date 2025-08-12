// File: main.qml
import QtQuick 2.15
import QtQuick.Controls 2.15
import QtGraphs 1.0

ApplicationWindow {
    visible: true
    width: 400
    height: 400
    title: "PieModelMapper Demo"

    ListModel {
        id: myModel
        ListElement { label: "A"; value: 10 }
        ListElement { label: "B"; value: 20 }
        ListElement { label: "C"; value: 30 }
        ListElement { label: "D"; value: 40 }
        ListElement { label: "E"; value: 50 }
    }

    PieSeries {
        id: mySeries
        anchors.centerIn: parent
        width: 300
        height: 300
    }

    PieModelMapper {
        series: mySeries
        model: myModel
        labelsSection: 0
        valuesSection: 1
        first: 1       // ✅ Start from 2nd element (label: "B")
        count: 3       // ✅ Map 3 elements: B, C, D
        orientation: Qt.Vertical
    }
}
