#include "MyWidget.h"
#include<QDebug>
#include<QLabel>
MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    qDebug()<<Q_FUNC_INFO;
    setFixedSize(500,300);
    createObject();
}

MyWidget::~MyWidget()
{
    qDebug()<<Q_FUNC_INFO;
}

void MyWidget::createObject()
{
    m_label1 = new QLabel("USERNAME", this);
    m_userName = new QTextEdit(this);
    m_userName->setPlaceholderText("Enter Username");

    m_label2 = new QLabel("PASSWORD", this);
    m_password = new QTextEdit(this);
    m_password->setPlaceholderText("Enter Password");

    m_submitButton = new QPushButton("Submit", this);
    m_cancelButton = new QPushButton("Cancel", this);

    m_hboxLayout = new QHBoxLayout;
    m_hboxLayout->addWidget(m_submitButton);
    m_hboxLayout->addWidget(m_cancelButton);

    m_vboxLayout = new QVBoxLayout;
    m_vboxLayout->addWidget(m_label1);
    m_vboxLayout->addWidget(m_userName);
    m_vboxLayout->addWidget(m_label2);
    m_vboxLayout->addWidget(m_password);

    m_vboxLayout->addLayout(m_hboxLayout);
    this->setLayout(m_vboxLayout);
    connect(m_submitButton, &QPushButton::clicked, this, &MyWidget::onSubmitButtonClicked);
    connect(m_cancelButton, &QPushButton::clicked, this, &MyWidget::close);
}


void MyWidget::onSubmitButtonClicked()
{
    qDebug()<<Q_FUNC_INFO;
    QString name = m_userName->toPlainText();
    QString password = m_password->toPlainText();
    qDebug()<<"USERNAME: "<<name;
    qDebug()<<"PASSWORD: "<<password;
    m_userName->clear();
    m_password->clear();
}
