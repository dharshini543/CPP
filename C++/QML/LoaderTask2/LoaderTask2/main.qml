import QtQuick
import QtQuick.Shapes as QQS

Window {
    id: root

    height: 150
    visible: true
    width: 150

    QQS.Shape {
        anchors.fill: parent
        preferredRendererType: QQS.Shape.GeometryRenderer

        QQS.ShapePath {
            fillColor: "red"
            strokeColor: "black"

            PathPolyline {
                path: [Qt.point(0, 100), Qt.point(50, 100), Qt.point(75, 0), Qt.point(100, 100), Qt.point(150, 100)]
            }
        }
    }
}
