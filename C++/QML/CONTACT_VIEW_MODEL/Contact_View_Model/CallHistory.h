#ifndef CALLHISTORY_H
#define CALLHISTORY_H

#include "ContactDataModel.h"

class CallHistory : public ContactDataModel
{
    Q_OBJECT

public:
    explicit CallHistory(QObject* parent = nullptr);
    ~CallHistory();

    void createContactData() override;

};

#endif // CALLHISTORY_H
