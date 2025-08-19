import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls

Rectangle{
    id:showStudentPage

    signal closeButtonClicked()
    signal signUpButtonClicked()
    signal loginButtonClicked()
    signal submitButtonClicked()

    ListView{
        id:studentView
        width: parent.width
        height: parent.height
        interactive: true
        model: viewModel
        delegate: myComponent
        spacing: 5

    }
    Button{
        id:button1
        text: "Cancel"
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        width:showStudentPage.width/5
        onClicked: {
            closeButtonClicked()
        }
    }

    Component{
        id:myComponent

        Rectangle{
            width: studentView.width
            height: studentView.height/5
            color: "pink"

            Row{
                spacing: 10
                width: parent.width
                Text{
                    id:slno
                    text: model.index + 1
                }

                Text {
                    id: stName
                    text:studentName
                }
                Text {
                    id: phone
                    text:phoneNum
                }
                Text {
                    id: email
                    text:emailID
                }
                Text {
                    id: fathername
                    text:fatherName
                }
                Text {
                    id: username
                    text:userName
                }
                Text {
                    id: password
                    text:passWord
                }
            }
        }
    }

}


