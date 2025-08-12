import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Window 2.15

ApplicationWindow
{
    width: 400
    height: 300
    visible: true
    title: "Enabled = true Test"

    Rectangle
    {
        id: hoverBox
        width: 300
        height: 200
        anchors.centerIn: parent
        color: hovered ? "#aaccff" : "#cccccc"
        enabled: false

        property bool hovered: false

        ToolTip.visible: hovered
        ToolTip.text: "Hover is working"

        MouseArea
        {
            anchors.fill: parent
            hoverEnabled: true
            focus: true

            onEntered:
            {
                hoverBox.hovered = true
                eventLogger.logHover()
            }

            onExited:
            {
                hoverBox.hovered = false
            }

            onClicked:
            {
                eventLogger.logClick()
            }

            Keys.onPressed:
            {
                eventLogger.logKey()
            }
        }
    }
}
