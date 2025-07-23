import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    id:window
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle{
        id:rect1
        width:window.width
        height:window.height
        color:"pink"

        Rectangle{
            id:rect2
            // width:parent.width/2
            // height:parent.height/2
            anchors.top: rect1.top
            anchors.left: rect1.left
            anchors.right: rect1.horizontalCenter
            anchors.bottom: rect1.verticalCenter
            anchors.margins: 20
            // anchors.rightMargin: 20
            color:"yellow"
        }

        Rectangle{
            id:rect3
            // width:parent.width/2
            // height:parent.height/2
            anchors.top: rect1.top
            anchors.left: rect1.horizontalCenter
            anchors.right: rect1.right
            anchors.bottom: rect1.verticalCenter
            anchors.margins: 20
            // anchors.rightMargin: 20
            color:"lightblue"
        }
        Rectangle{
            id:rect4
            // width:parent.width/2
            // height:parent.height/2
            anchors.top: rect1.verticalCenter
            anchors.left: rect1.left
            anchors.right: rect1.horizontalCenter
            anchors.bottom: rect1.bottom
            anchors.margins: 20
            // anchors.rightMargin: 20
            color:"lightblue"
        }



    }
}
