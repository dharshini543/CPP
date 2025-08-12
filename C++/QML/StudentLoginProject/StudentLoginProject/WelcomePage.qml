import QtQuick 2.15
import QtQuick.Controls 2.15

Item {
    id: root
    width: 400
    height: 300

    Column {
        anchors.centerIn: parent
        spacing: 20

        Button {
            text: "Sign Up"
            onClicked: root.StackView.view.push("qrc:/SignupHandler.qml")
        }

        Button {
            text: "Login"
            onClicked: root.StackView.view.push("qrc:/LoginHandler.qml")
        }
    }
}
