import QtQuick 2.15
import QtQuick.Window 2.15
import Test 1.0

Window {
    visible: true
    width: 400
    height: 400
    title: "QSGRectangleNode Color Test"

    MyRectangleItem {
        anchors.fill: parent
    }
}
