// #include "DrawingArea.h"
// #include <QPainter>
// #include <QPolygon>

// DrawingArea::DrawingArea(QWidget *parent)
//     : QWidget(parent) {}

// void DrawingArea::drawShape(const QString &shape, const ShapeStyle &style) {
//     currentShape = shape;
//     shapeStyles[shape] = style;
//     update();
// }

// void DrawingArea::updateShapeStyle(const QString &shape, const ShapeStyle &style) {
//     if (shapeStyles.contains(shape)) {
//         shapeStyles[shape] = style;
//         if (shape == currentShape) update();
//     }
// }

// void DrawingArea::paintEvent(QPaintEvent *) {
//     if (currentShape.isEmpty() || !shapeStyles.contains(currentShape)) return;

//     QPainter painter(this);
//     painter.setRenderHint(QPainter::Antialiasing);

//     ShapeStyle style = shapeStyles[currentShape];
//     painter.setPen(QPen(style.outlineColor, style.penWidth));
//     painter.setBrush(QBrush(style.fillColor));

//     int w = width();
//     int h = height();
//     int size = qMin(w, h) * 0.6;
//     int cx = w / 2 - size / 2;
//     int cy = h / 2 - size / 2;
//     QRectF rect(cx, cy, size, size);

//     if (currentShape == "circle") {
//         painter.drawEllipse(rect);
//     } else if (currentShape == "square") {
//         painter.drawRect(rect);
//     } else if (currentShape == "rectangle") {
//         QRectF rectWide(cx, cy + size / 4, size, size / 2);
//         painter.drawRect(rectWide);
//     } else if (currentShape == "diamond") {
//         QPoint center = rect.center().toPoint();
//         QPolygon polygon;
//         polygon << QPoint(center.x(), rect.top())
//                 << QPoint(rect.right(), center.y())
//                 << QPoint(center.x(), rect.bottom())
//                 << QPoint(rect.left(), center.y());
//         painter.drawPolygon(polygon);
//     } else if (currentShape == "arc") {
//         QRectF arcRect = rect.adjusted(10, 10, -10, -10);
//         painter.drawArc(arcRect, 30 * 16, 120 * 16);
//     }
// }
