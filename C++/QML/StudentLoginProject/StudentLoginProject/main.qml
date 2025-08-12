import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 400
    height: 300
    title: "Welcome"

    StackView {
        id: stackView
        anchors.fill: parent
        initialItem: WelcomePage {}
    }
}
