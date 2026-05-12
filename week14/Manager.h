#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

class Manager : public Employee
{
public:
    Manager();

    float Long_Term_Bonus();

    float Bonus() override;

    ~Manager() override = default;
};

#endif
