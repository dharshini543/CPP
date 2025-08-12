import QtQuick 2.5
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.2
import QtQuick.Controls

ApplicationWindow {
    visible: true
    width: 1280
    height: 480
    title: qsTr("Hello World")

    Rectangle
    {
        anchors.fill: parent
        color: "gray"

        MouseArea
        {
            anchors.fill: parent
            onClicked:
            {
                console.error("onClicked __row spacing [%1] x[%2]".arg(__clayout.spacing).arg(__clayout.x))
                ++__clayout.spacing
                ++__clayout.y

                __rlayout.spacing += 2
                __rlayout.y += 2

                __glayout.columnSpacing += 3
                __glayout.rowSpacing += 3
                __glayout.y += 3
            }
        }

        ColumnLayout
        {
            id: __clayout

            spacing: 5
            onSpacingChanged: console.error("__clayout spacing " + spacing)

            Text
            {
                text: qsTr("__clayout spacing [%1]".arg(parent.spacing))
                width: contentWidth
                height: contentHeight
            }

            Text
            {
                text: qsTr("__clayout y [%1]".arg(parent.y))
                width: contentWidth
                height: contentHeight
            }

            Text
            {
                text: qsTr("__clayout spacing [%1] y [%2]".arg(parent.spacing).arg(parent.y))
                width: contentWidth
                height: contentHeight
            }
        }

        RowLayout
        {
            id: __rlayout
            anchors.left: __clayout.right

            spacing: 5
            onSpacingChanged: console.error("__rlayout spacing " + spacing)

            Text
            {
                text: qsTr("__rlayout spacing [%1]".arg(parent.spacing))
                width: contentWidth
                height: contentHeight
            }

            Text
            {
                text: qsTr("__rlayout y [%1]".arg(parent.y))
                width: contentWidth
                height: contentHeight
            }

            Text
            {
                text: qsTr("__rlayout spacing [%1] y [%2]".arg(spacing).arg(parent.y))
                width: contentWidth
                height: contentHeight
            }
        }

        GridLayout
        {
            id: __glayout
            anchors.left: __rlayout.right

            columns: 2
            rows: 2

            rowSpacing: 5
            columnSpacing: 10
            onRowSpacingChanged: console.error("rowSpacing " + rowSpacing)
            onColumnSpacingChanged: console.error("columnSpacing " + columnSpacing)

            Text
            {
                text: qsTr("__glayout rowSpacing [%1] columnSpacing [%2]".arg(parent.rowSpacing).arg(parent.columnSpacing))
                width: contentWidth
                height: contentHeight
            }

            Text
            {
                text: qsTr("__glayout y [%1]".arg(parent.y))
                width: contentWidth
                height: contentHeight
            }

            Text
            {
                text: qsTr("__glayout rowSpacing [%1] columnSpacing [%2] y [%3]".arg(parent.rowSpacing).arg(parent.columnSpacing).arg(parent.y))
                width: contentWidth
                height: contentHeight
            }
        }
    }
}
