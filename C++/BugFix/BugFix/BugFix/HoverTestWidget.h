#ifndef HOVERTESTWIDGET_H
#define HOVERTESTWIDGET_H

#include <QWidget>

class HoverTestWidget : public QWidget
{
    Q_OBJECT

public:
    explicit HoverTestWidget(QWidget *parent = nullptr);

protected:
    void enterEvent(QEvent *event) ;
    void mousePressEvent(QMouseEvent *event) override;
    void keyPressEvent(QKeyEvent *event) override;
};

#endif // HOVERTESTWIDGET_H
