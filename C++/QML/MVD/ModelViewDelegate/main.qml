import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    ListModel{
        id:studentModel

        ListElement{name:"Dharshini"; rollno:"25";Phone:"7894561237"}
        ListElement{name:"Dharshini"; rollno:"25";Phone:"7894561237"}
        ListElement{name:"Dharshini"; rollno:"25";Phone:"7894561237"}
        ListElement{name:"Dharshini"; rollno:"25";Phone:"7894561237"}
        ListElement{name:"Dharshini"; rollno:"25";Phone:"7894561237"}
        ListElement{name:"Dharshini"; rollno:"25";Phone:"7894561237" }
        ListElement{name:"Dharshini"; rollno:"25";Phone:"7894561237"}
    }
    Component{
        id:headerDelegate
        Header{
        }
    }

        ListView{
            id:studentView
            width: parent.width
            height: parent.height
            model: studentModel
            delegate: stuDelegate
            header: headerDelegate

        }

        Component{
            id:stuDelegate

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
                        text:name
                    }
                    Text {
                        id: strollno
                        text:rollno
                    }
                    Text {
                        id: stphone
                        text:Phone
                    }
                }
            }
        }
        }
