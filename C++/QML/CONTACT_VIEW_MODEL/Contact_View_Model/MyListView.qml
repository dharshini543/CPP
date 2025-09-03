import QtQuick 2.15

ListView
{
    id: contactView
    width: parent.width
    height: parent.height - searchbar.height -60
    interactive: true
    anchors.horizontalCenter: parent.horizontalCenter
    model: ModelController.model
    delegate: myComponent
    spacing: 10

}
