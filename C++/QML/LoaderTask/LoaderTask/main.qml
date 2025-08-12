import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    Row
    {
        anchors.left: parent.left
        anchors.bottom: parent.bottom
        MyButton{
            id:myPage1
            text:"1"
        }
        MyButton{
            id:myPage2
            text:"2"
        }
        MyButton{
            id:myPage3
            text:"3"
        }
        MyButton{
            id:myPage4
            text:"4"
        }
        MyButton{
            id:myPage5
            text:"5"
        }
    }
    Connections{
        target:myLoader.item
        function onMyPage1PrevClicked()
        {
            console.log("Page1 Previous Clicked")
        }
        function onMyPage1NextClicked()
        {
            console.log("Page1 Next Clicked")
            myLoader.source = "Page2.qml"
        }
        function onMyPage2PrevClicked()
        {
            console.log("Page2 Previous Clicked")
            myLoader.source = "Page1.qml"
        }
        function onMyPage2NextClicked()
        {
            console.log("Page2 Next Clicked")
            myLoader.source = "Page3.qml"
        }
        function onMyPage3PrevClicked()
        {
            console.log("Page3 Previous Clicked")
            myLoader.source = "Page2.qml"
        }
        function onMyPage3NextClicked()
        {
            console.log("Page3 Next Clicked")
            myLoader.source = "Page4.qml"
        }
        function onMyPage4PrevClicked()
        {
            console.log("Page4 Previous Clicked")
            myLoader.source = "Page3.qml"
        }
        function onMyPage4NextClicked()
        {
            console.log("Page4 Next Clicked")
            myLoader.source = "Page5.qml"
        }
        function onMyPage5PrevClicked()
        {
            console.log("Page5 Previous Clicked")
            myLoader.source = "Page4.qml"
        }
        function onMyPage5NextClicked()
        {
            console.log("Page5 Next Clicked")
        }
    }
    Loader{
        id:myLoader
        source: "Page1.qml"
        //anchors.fill: parent
        width:400
        height: 300
    }
}
