#include "lineitem.h"
#include <QSGGeometryNode>
#include <QSGFlatColorMaterial>

LineItem::LineItem()
{
    setFlag(ItemHasContents, true);
}

QSGNode *LineItem::updatePaintNode(QSGNode *oldNode, UpdatePaintNodeData *)
{
    QSGGeometryNode *node = static_cast<QSGGeometryNode *>(oldNode);
    if (!node) {
        node = new QSGGeometryNode;

        QSGGeometry *geometry = new QSGGeometry(QSGGeometry::defaultAttributes_Point2D(), 2);

       // geometry->setDrawingMode(QSGGeometry::DrawLines);
        geometry->setDrawingMode(GL_LINES);

        QSGGeometry::Point2D *vertices = geometry->vertexDataAsPoint2D();
        vertices[0].set(0, 0);
        vertices[1].set(width(), height());

        geometry->setLineWidth(2);

        node->setGeometry(geometry);
        node->setFlag(QSGNode::OwnsGeometry);

        QSGFlatColorMaterial *material = new QSGFlatColorMaterial;
        material->setColor(Qt::red);
        node->setMaterial(material);
        node->setFlag(QSGNode::OwnsMaterial);
    }

    return node;
}
