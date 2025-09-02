import QtQuick 2.15

Rectangle
{
    id: imageRect
    width: 50
    height: 50
    radius: 25

    Image
    {
        source: CONTACTIMAGE
        anchors.fill: imageRect
        fillMode: Image.PreserveAspectFit
        visible: CONTACTIMAGE !== ""
    }
    Text
    {
        id: contactImageTxt
        anchors.centerIn: parent
        text: CONTACTNAME.length > 0 ? CONTACTNAME.charAt(0).toUpperCase() : ""
        font.bold: true
        font.pixelSize: 28
        visible: CONTACTIMAGE === ""
        color: "orange"
    }
}
