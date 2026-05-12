#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

using namespace std;

class Employee
{
public:
    Employee();
    void FirstName(string fn);
    string FirstName();
    void LastName(string ln);
    string LastName();
    void Salary(float);
    float Salary();
    virtual float Bonus();
    virtual ~Employee();

protected:
    string m_fn, m_ln;
    float m_salary;
    float m_bonus;
};

#endif
