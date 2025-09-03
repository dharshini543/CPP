#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "ContactDataModel.h"

class PhoneBook : public ContactDataModel
{
    Q_OBJECT

public:
    explicit PhoneBook(QObject* parent = nullptr);
    ~PhoneBook();

    void createContactData() override;
};

#endif // PHONEBOOK_H
