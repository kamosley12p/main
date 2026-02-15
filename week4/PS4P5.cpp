#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string lastName;
    int numDependents;
    double grossIncome, adjustedGross, taxRate, incomeTax;

    cout << "Enter last name: ";
    cin >> lastName;

    cout << "Enter number of dependents: ";
    cin >> numDependents;

    cout << "Enter gross income: $";
    cin >> grossIncome;

    adjustedGross = grossIncome - (numDependents * 12000.00);

    if (adjustedGross > 50000.00) {
        taxRate = 0.20;
    } else {
        taxRate = 0.10;
    }

    incomeTax = adjustedGross * taxRate;
    if (incomeTax < 0) {
        incomeTax = 100.00;
    }

    cout << fixed << setprecision(2);
    cout << "\nLast name:            " << lastName << endl;
    cout << "Gross income:         $" << grossIncome << endl;
    cout << "Number of dependents: " << numDependents << endl;
    cout << "Adjusted gross income: $" << adjustedGross << endl;
    cout << "Income tax:           $" << incomeTax << endl;

    return 0;
}
