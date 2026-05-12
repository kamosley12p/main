#include "Employee.h"

Employee::~Employee()
{
    cout << "Goodbye" << endl;
}

Employee::Employee()
{
    m_salary = 0.00f;
}

void Employee::FirstName(string fn)
{
    m_fn = fn;
}

string Employee::FirstName()
{
    return m_fn;
}

void Employee::LastName(string ln)
{
    m_ln = ln;
}

string Employee::LastName()
{
    return m_ln;
}

void Employee::Salary(float s)
{
    m_salary = s;
}

float Employee::Salary()
{
    return m_salary;
}

float Employee::Bonus()
{
    if (m_salary > 100000.00)
        m_bonus = m_salary * 0.20f;
    else
        m_bonus = m_salary * 0.10f;

    return m_bonus;
}
