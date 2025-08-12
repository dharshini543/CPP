import QtQuick 2.15
import QtQuick.Controls 2.15

Item {
    id:signUp
    width: 400
    height: 300

    Column {
        anchors.centerIn: parent
        spacing: 10

        TextField {
            id: nameField;
            placeholderText: "Name"
        }
        TextField {
            id: phoneField;
            placeholderText: "Phone"
        }
        TextField {
            id: emailField;
            placeholderText: "Email"
        }
        TextField {
            id: fatherField;
            placeholderText: "Father's Name"
        }
        TextField {
            id: usernamefield;
            placeholderText: "Username"
        }
        TextField {
            id: passwordfield;
            placeholderText: "Password"
        }


        Button {
            text: "Submit"
            onClicked: {
                var ok = signupHandler.handleSignup(
                    nameField.text,
                    phoneField.text,
                    emailField.text,
                    fatherField.text,
                    usernamefield.text,
                    passwordfield.text
                )
                if (ok)
                    console.log("Signup succeeded")
                else
                    console.log("Signup failed")
                onClicked: signUp.StackView.view.push("qrc:/WelcomePage.qml")

            }
        }
    }
}
