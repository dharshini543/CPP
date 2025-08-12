#ifndef MYWIDGET_H
#define MYWIDGET_H
#include<QPushButton>
#include<QTextEdit>
#include<QVBoxLayout>
#include<QHBoxLayout>
#include <QWidget>
#include <qlabel.h>

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();

    void createObject();

public slots:
    void onSubmitButtonClicked();

private:
    QPushButton* m_submitButton;
    QPushButton* m_cancelButton;
    QTextEdit* m_userName;
    QTextEdit* m_password;
    QVBoxLayout* m_vboxLayout;
    QHBoxLayout* m_hboxLayout;

    QLabel* m_label1;
    QLabel* m_label2;

};
#endif // MYWIDGET_H
