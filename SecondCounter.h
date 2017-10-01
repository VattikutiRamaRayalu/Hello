#ifndef SECONDCOUNTER_H
#define SECONDCOUNTER_H

#include <QObject>
#include <iostream>


using namespace std;


class SecondCounter : public QObject
{
    Q_OBJECT

public:
    SecondCounter() { m_value = 0; }

    int value() const { return m_value; }

public slots:
    void setValue(int value);

signals:
    void valueChanged(int newValue);

private:
    int m_value;
};


#endif // SECONDCOUNTER_H
