import QtQuick 2.15
import QtQuick.Controls 2.15

Item {
    width: 400
    height: 300

    Column {
        anchors.centerIn: parent
        spacing: 10

        TextField { id: usernameField; placeholderText: "USERNAME" }
        TextField { id: passwordField; placeholderText: "PASSWORD" }

        Button {
            text: "Login"
            onClicked: {
                var ok = loginHandler.handleLogin(usernameField.text, passwordField.text)
                if (ok)
                    console.log("Login success")
                else
                    console.log("Login failed")
            }
        }
    }
}
