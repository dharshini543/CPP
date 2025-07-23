import QtQuick 2.15
import QtQuick.Controls

Rectangle{
    id:rect1
    width:500
    height: 400
    color: "Pink"

    signal  myPage1PrevClicked()
    signal  myPage1NextClicked()

    Button{
        id:prevButton
        width:100
        height: 50
        text: "prev"
        anchors.left: parent.left
        anchors.verticalCenter: parent.verticalCenter
        onClicked: {
            myPage1PrevClicked()
        }
    }

    Button{
        id:nextButton
        width:100
        height: 50
        text: "next"
        anchors.right: parent.right
        anchors.verticalCenter: parent.verticalCenter
        onClicked: {
            myPage1NextClicked()
        }
    }

    Component.onCompleted: {
        console.log("Page1 Constructed")
    }
    Component.onDestruction: {
        console.log("Page1 Destructed")
    }
    
}
