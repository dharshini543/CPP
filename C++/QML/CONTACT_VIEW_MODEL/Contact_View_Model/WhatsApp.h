#ifndef WHATSAPP_H
#define WHATSAPP_H

#include "ContactDataModel.h"

class WhatsApp : public ContactDataModel
{
    Q_OBJECT

public:
    explicit WhatsApp(QObject* parent = nullptr);
    ~WhatsApp();

    void createContactData() override;
};

#endif // WHATSAPP_H
