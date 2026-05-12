#include "Manager.h"

Manager::Manager() = default;

float Manager::Long_Term_Bonus()
{
    return m_salary * 0.50f;
}

float Manager::Bonus()
{
    m_bonus = m_salary * 0.50f;
    return m_bonus;
}
