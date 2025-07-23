#include <QVariant>
#include <QDebug>
#include <QMetaType>
#include <QString>

int main() {
    QVariant v1 = QString("Hello");
    QVariant v2 = 42;

    // Legacy way (Qt 5 or earlier pattern)
    int legacyType = v1.userType();
    qDebug() << "Legacy userType (QString):" << legacyType;
    qDebug() << "QMetaType name:" << QMetaType(legacyType).name();  // need manual wrap

    // Modern, type-safe way (Qt 6+)
    int safeType = v1.typeId();
    qDebug() << "Modern typeId (QString):" << safeType;
    qDebug() << "QMetaType name:" << v1.metaType().name(); // direct, no error-prone wrapping

    // Danger zone: mistakenly comparing against QVariant::Type (deprecated)
    if (v1.userType() == QVariant::String) // ❌ not guaranteed to be valid in Qt 6
        qDebug() << "Matched with QVariant::Type::String (deprecated)";

    // Safe and modern: use type-safe comparisons
    if (v1.metaType().id() == QMetaType::fromType<QString>().id())
        qDebug() << "Correctly identified as QString using typeId()";
}
