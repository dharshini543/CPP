import QtQuick 2.15
import QtQuick.Controls

Rectangle{
    id:rect2
    width:500
    height: 400
    color: "lightblue"

    signal  myPage2PrevClicked()
    signal  myPage2NextClicked()

    Button{
        id:prevButton
        width:100
        height: 50
        text: "prev"
        anchors.left: parent.left
        anchors.verticalCenter: parent.verticalCenter
        onClicked: {
            myPage2PrevClicked()
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
            myPage2NextClicked()
        }
    }

    Component.onCompleted: {
        console.log("Page2 Constructed")
    }
    Component.onDestruction: {
        console.log("Page2 Destructed")
    }

}
