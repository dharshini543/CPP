#include "WhatsApp.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QDir>

WhatsApp::WhatsApp(QObject *parent)
    :ContactDataModel(parent)
{
    qDebug()<<Q_FUNC_INFO;
    createContactData();
}

WhatsApp::~WhatsApp()
{
    qDebug()<<Q_FUNC_INFO;
}

void WhatsApp::createContactData()
{
    QString filePath = QDir::currentPath() + "/whatsapp.csv";
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
        if (fields.size() >= 5) {
            QString name = fields.at(0).trimmed();
            QString phone = fields.at(1).trimmed();
            QString image = fields.at(2).trimmed();
            QString time = fields.at(3).trimmed();
            QString recentMsg = fields.at(4).trimmed();

            insertContactData(new Contact(name, phone, image, time, recentMsg));
        }
    }

    file.close();

}
