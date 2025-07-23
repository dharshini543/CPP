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
        width:win.width/2
        height: win.height/2
        // x:50
        // y:50
        anchors.left:win.left
        color:"yellow"
    }

    Rectangle{
        id:rect1
        width:win.width/2
        height:win.height/2
        anchors.left: rect.right
        // y:50
        color: "pink"

        Rectangle{
            id:rect2
            width:rect1.width/2-40
            height:rect1.height-40
            color: "lightblue"
            x:50
            y:20
        }

        Rectangle{
            id:rect4
            width:rect1.width/2-40
            height:rect1.height-40
            anchors.left:rect2.right
            color: "lightgreen"
            x:50
            y:20
    }
}
    Rectangle{
        id:rect5
        width:win.width
        height: win.height/2
        anchors.top: rect1.bottom
        anchors.left:win.left
        color:"grey"

        Rectangle{
            id:rect6
            width:win.width/2-60
            height:rect5.height/2
            color: "violet"
            x:50
            y:20

        }
        Rectangle{
            id:rect7
            width:win.width/2-60
            height:rect5.height/2
            anchors.left:rect6.right
            color: "orange"
            x:50
            y:20

        }
        Rectangle{
            id:rect8
            width:win.width/2-60
            height:rect5.height/2
            anchors.top:rect6.bottom
            color: "orange"
            x:50
            y:20

        }
        Rectangle{
            id:rect9
            width:win.width/2-60
            height:rect5.height/2
            anchors.left:rect8.right
            anchors.top:rect7.bottom
            color: "pink"
            x:50
            y:20

        }
    }
}
