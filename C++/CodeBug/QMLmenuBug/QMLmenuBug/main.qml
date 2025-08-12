import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material
import QtQuick.Window

ApplicationWindow {
    width: 400
    height: 200
    visible: true
    title: "SearchField Clear Test"

    Column {
        spacing: 20
        anchors.centerIn: parent

        Label {
            text: "Type some text, then press and hold the clear icon (X)"
        }

        SearchField {
            id: searchField
            placeholderText: "Search here..."
            width: 250

            onTextChanged: {
                console.log("Text changed:", text)
            }
        }
    }
}
