#include <QApplication>
#include <QTextEdit>
#include <QTextCursor>
#include <QTextCharFormat>
#include <QTextFormat>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QTextEdit editor;
    QTextCursor cursor = editor.textCursor();

    // Base format with 12pt font
    QTextCharFormat format;
    format.setFontPointSize(12);  // Base size: 12pt

    // Set adjustment as a float (e.g., 3.7)
    format.setProperty(QTextFormat::FontSizeAdjustment, 3.7); // Float set

    // Check how it is stored
    QVariant value = format.property(QTextFormat::FontSizeAdjustment);
    qDebug() << "FontSizeAdjustment stored as:" << value << ", type:" << value.typeName();

    // Apply format to text
    cursor.insertText("Base size: 12pt + adjustment 3.7 => Effective size should be 15pt\n", format);

    editor.show();
    return app.exec();
}
