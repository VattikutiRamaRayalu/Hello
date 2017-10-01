#include "Counter.h"
void Counter::setValue(int value)
{
    cout << "Signal Value changed to value" << value << endl;

    if (value != m_value) {
        m_value = value;
        emit valueChanged(value);
    }
}
