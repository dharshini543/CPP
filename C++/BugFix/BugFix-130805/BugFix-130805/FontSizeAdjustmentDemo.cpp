#include "FontSizeAdjustmentDemo.h"

#include <QVBoxLayout>
#include <QTextEdit>
#include <QTextCursor>
#include <QTextCharFormat>
#include <QTextFormat>

FontSizeAdjustmentDemo::FontSizeAdjustmentDemo(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *layout = new QVBoxLayout(this);

    // --- Normal font (12pt) ---
    normalText = new QTextEdit(this);
    normalText->setReadOnly(true);
    QTextCursor cursor1(normalText->textCursor());
    QTextCharFormat format1;
    format1.setFontPointSize(12);
    cursor1.insertText("Normal font size (12pt)", format1);
    layout->addWidget(normalText);

    // --- FontSizeAdjustment = +3 ---
    adjustedText = new QTextEdit(this);
    adjustedText->setReadOnly(true);
    QTextCursor cursor2(adjustedText->textCursor());
    QTextCharFormat format2;
    format2.setFontPointSize(12);
    format2.setProperty(QTextFormat::FontSizeAdjustment, 3); // Adds +3 → 15pt
    cursor2.insertText("FontSizeAdjustment = +3 → becomes 15pt", format2);
    layout->addWidget(adjustedText);

    setLayout(layout);
    setWindowTitle("FontSizeAdjustment Demo");
    resize(400, 150);
}
