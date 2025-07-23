import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    id:win
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle{
        id:rect
        width:800
        height: 500
        color: "pink"
        anchors.centerIn: parent

        Rectangle{
            id:circle1
            width: 200
            height: 200
            radius:width/2
            color: "blue"

            anchors.horizontalCenter: parent.left
            anchors.verticalCenter: parent.top
        }
        Rectangle{
            id:circle2
            width: 200
            height: 200
            radius:width/2
            color: "lightgreen"

            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.top
        }
        Rectangle{
            id:circle3
            width: 200
            height: 200
            radius:width/2
            color: "green"

            anchors.top: parent.top
            anchors.left: parent.horizontalCenter
        }
        Rectangle{
            id:circle4
            width: 210
            height: 210
            radius:width/2
            color: "yellow"

            // anchors.top: parent.top
            // anchors.right: parent.right
            anchors.left:circle3.right
            anchors.top: parent.top

        }
        Rectangle{
            id:circle5
            width: 200
            height: 200
            radius:width/2
            color: "orange"

            anchors.bottom: parent.bottom
            anchors.right: parent.right
        }

        Rectangle{
            id:circle6
            width: 200
            height: 200
            radius:width/2
            color: "red"

            anchors.top: parent.bottom
            anchors.horizontalCenter: parent.right
        }

    }
}
