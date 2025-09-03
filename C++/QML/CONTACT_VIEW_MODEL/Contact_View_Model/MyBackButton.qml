import QtQuick 2.15
import QtQuick.Controls

Button
{
    anchors.left: parent.left
    anchors.top: parent.top
    text: "<-"
    width: parent.width/8
    height: parent.height/20
    onClicked: {
        backButtonClicked()
    }
}
