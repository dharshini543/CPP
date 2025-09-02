#ifndef MODELCONTROLLER_H
#define MODELCONTROLLER_H

#include <QObject>
#include "ContactDataModel.h"

class ModelController : public QObject
{
    Q_OBJECT
    Q_PROPERTY(ContactDataModel* model READ getModel NOTIFY modelChanged)

public:
    explicit ModelController(QObject *parent = nullptr);

    Q_INVOKABLE void createModel(const QString &type);
    ContactDataModel* getModel() const;

signals:
    void modelChanged();

private:
    ContactDataModel* m_model;
};

#endif // MODELCONTROLLER_H
