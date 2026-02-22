#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string lastName;
    double hoursWorked;
    char jobCode;
    double payRate;
    double total;

    cout << "Enter employee last name: ";
    cin >> lastName;
    cout << "Enter hours worked: ";
    cin >> hoursWorked;
    cout << "Enter job code (E, J, or A): ";
    cin >> jobCode;

    if (jobCode == 'E' || jobCode == 'e')
        payRate = 25.00;
    else if (jobCode == 'J' || jobCode == 'j')
        payRate = 20.00;
    else if (jobCode == 'A' || jobCode == 'a')
        payRate = 15.00;
    else
        payRate = 0.00;

    total = hoursWorked * payRate;

    cout << fixed << setprecision(2);
    cout << "\nEmployee last name: " << lastName << endl;
    cout << "Hours worked: " << hoursWorked << endl;
    cout << "Pay rate: $" << payRate << endl;
    cout << "Total pay: $" << total << endl;

    return 0;
}
