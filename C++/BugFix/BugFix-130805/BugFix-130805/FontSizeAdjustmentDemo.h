#ifndef FONTSIZEADJUSTMENTDEMO_H
#define FONTSIZEADJUSTMENTDEMO_H

#include <QWidget>

class QTextEdit;

class FontSizeAdjustmentDemo : public QWidget {
    Q_OBJECT

public:
    FontSizeAdjustmentDemo(QWidget *parent = nullptr);

private:
    QTextEdit *normalText;
    QTextEdit *adjustedText;
};

#endif // FONTSIZEADJUSTMENTDEMO_H
