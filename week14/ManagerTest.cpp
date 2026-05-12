#include <iomanip>
#include <iostream>

#include "Manager.h"

using namespace std;

int main()
{
    Manager mgr;

    mgr.FirstName("Jordan");
    mgr.LastName("Rivera");
    mgr.Salary(95000.00f);

    cout << fixed << setprecision(2);
    cout << "=== Manager object (derived from Employee) ===\n\n";

    cout << "FirstName (getter): " << mgr.FirstName() << '\n';
    mgr.FirstName("Jordan Lee");
    cout << "FirstName after setter \"Jordan Lee\": " << mgr.FirstName() << '\n';

    cout << "LastName (getter): " << mgr.LastName() << '\n';
    mgr.LastName("Rivera-Chen");
    cout << "LastName after setter \"Rivera-Chen\": " << mgr.LastName() << '\n';

    cout << "Salary (getter): " << mgr.Salary() << '\n';
    mgr.Salary(110000.00f);
    cout << "Salary after setter 110000.00: " << mgr.Salary() << '\n';

    cout << "Bonus() [Manager override, 50% of annual salary]: " << mgr.Bonus() << '\n';
    cout << "Long_Term_Bonus() [50% of salary]: " << mgr.Long_Term_Bonus() << '\n';

    cout << "\n--- Polymorphism check (Employee& refers to Manager) ---\n";
    Employee& asEmployee = mgr;
    cout << "Bonus() via Employee& (expects 50% manager rule): " << asEmployee.Bonus() << '\n';

    return 0;
}
