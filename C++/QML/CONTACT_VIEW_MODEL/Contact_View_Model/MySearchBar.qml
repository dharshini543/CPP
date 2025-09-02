import QtQuick 2.15
import QtQuick.Controls

Rectangle
{
    id: searchbar
    width: parent.width/1.4
    height: parent.height/20
    anchors.horizontalCenter: parent.horizontalCenter
    radius: 20
    border.color: "black"
    z: 1

    Row
    {
        spacing: 10
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: searchbar.left
        anchors.margins: 8

        Image
        {
            width: 20
            height: 20
            source: "qrc:Downloads/searchImg.png"
        }
        TextField
        {
            id: searchNameEdit
            color: "black"
            placeholderText: "Search"
            placeholderTextColor: "black"
            font.bold: true
            background: null
        }
    }
}
