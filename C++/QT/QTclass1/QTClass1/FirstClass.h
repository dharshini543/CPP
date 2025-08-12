#ifndef FIRSTCLASS_H
#define FIRSTCLASS_H

#include <QObject>

class FirstClass : public QObject
{
    Q_OBJECT

private:
    std::string m_applicationName1;

public:
    explicit FirstClass(QObject *parent = nullptr);
    ~FirstClass();
    std::string getApplicationName() const;
    void setApplicationName(const std::string &newApplicationName);

signals:
    void applicationNameChanged(std::string applicationName);


};

#endif // FIRSTCLASS_H
