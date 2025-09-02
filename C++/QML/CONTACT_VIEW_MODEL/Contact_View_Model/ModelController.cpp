#include "ModelController.h"
#include "PhoneBook.h"
#include "CallHistory.h"
#include "WhatsApp.h"

ModelController::ModelController(QObject *parent)
    : QObject(parent),
    m_model(nullptr)
{
}

void ModelController::createModel(const QString &type)
{

    if (type == "PhoneBook")
    {
        m_model = new PhoneBook(this);
    }
    else if (type == "CallHistory")
    {
        m_model = new CallHistory(this);
    }
    else if(type == "WhatsApp")
    {
        m_model = new WhatsApp(this);
    }

    emit modelChanged();
}

ContactDataModel* ModelController::getModel() const
{
    return m_model;
}
