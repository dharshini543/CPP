import QtQuick 2.15


Component{
    id:headerDelegate

    Rectangle{
        width: studentView.width
        height: studentView.height/5
        color: "pink"

        Row{
            spacing: 10
            width: parent.width
            height: parent.height
            Text {
                id: stName
                text:"StudentName"
            }
            Text {
                id: strollno
                text:"Studentrollno"
            }
            Text {
                id: stphone
                text:"StudentPhone"
            }
        }
    }
}
