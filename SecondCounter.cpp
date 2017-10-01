
#include "SecondCounter.h"


void SecondCounter::setValue(int value)
{
    cout << "SecondCounter Signal Value changed to value" << value << endl;

    if (value != m_value) {
        m_value = value;
    }
}
