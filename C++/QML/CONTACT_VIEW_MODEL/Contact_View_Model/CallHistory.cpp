#include "CallHistory.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QDir>

CallHistory::CallHistory(QObject *parent)
    :ContactDataModel(parent)
{
    qDebug()<<Q_FUNC_INFO;
    createContactData();
}

CallHistory::~CallHistory()
{
    qDebug()<<Q_FUNC_INFO;
}

void CallHistory::createContactData()
{
    QString filePath = QDir::currentPath() + "/callHistory.csv";
    QFile file(filePath);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qWarning() << "Cannot open file:" << filePath;
        return;
    }

    QTextStream in(&file);
    QString header = in.readLine();

    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        if (line.isEmpty()) continue;

        QStringList fields = line.split(',');
        if (fields.size() >= 6)
        {
            QString name = fields.at(0).trimmed();
            QString phone = fields.at(1).trimmed();
            QString image = fields.at(2).trimmed();
            QString callTime = fields.at(3).trimmed();
            bool isIncoming = (fields.at(4).trimmed() == "1");
            bool isOutgoing = (fields.at(5).trimmed() == "1");

            insertContactData(new Contact(name, phone, image, callTime, isIncoming, isOutgoing));
        }
    }

    file.close();
}
