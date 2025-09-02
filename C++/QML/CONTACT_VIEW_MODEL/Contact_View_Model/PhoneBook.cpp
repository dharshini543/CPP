#include "PhoneBook.h"
#include<QDebug>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QDir>

PhoneBook::PhoneBook(QObject *parent)
    :ContactDataModel(parent)
{
    qDebug()<<Q_FUNC_INFO;
    createContactData();
}

PhoneBook::~PhoneBook()
{
    qDebug()<<Q_FUNC_INFO;
}

void PhoneBook::createContactData()
{
    QString filePath = QDir::currentPath() + "/phonebook.csv";
    QFile file(filePath);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qWarning() << "Cannot open file:" << filePath;
        return;
    }

    QTextStream in(&file);

    QString header = in.readLine();

    while (!in.atEnd())
    {
        QString line = in.readLine().trimmed();
        if (line.isEmpty()) continue;

        QStringList fields = line.split(',');

        if (fields.size() >= 3)
        {
            QString name = fields.at(0).trimmed();
            QString phone = fields.at(1).trimmed();
            QString image = fields.at(2).trimmed();

            insertContactData(new Contact(name, phone, image));
        }
    }

    file.close();
}

