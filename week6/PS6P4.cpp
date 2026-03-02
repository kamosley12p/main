#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char equipmentCode, dayCode;

    cout << "Enter equipment code (A, B, or C): ";
    cin >> equipmentCode;
    cout << "Enter day code (F = full day, H = half day): ";
    cin >> dayCode;

    double rentalCost;

    if (equipmentCode == 'A' || equipmentCode == 'a') {
        if (dayCode == 'F' || dayCode == 'f')
            rentalCost = 10.00;
        else if (dayCode == 'H' || dayCode == 'h')
            rentalCost = 15.00;
        else
            rentalCost = 50.00;
    }
    else if (equipmentCode == 'B' || equipmentCode == 'b') {
        if (dayCode == 'F' || dayCode == 'f')
            rentalCost = 20.00;
        else if (dayCode == 'H' || dayCode == 'h')
            rentalCost = 35.00;
        else
            rentalCost = 50.00;
    }
    else if (equipmentCode == 'C' || equipmentCode == 'c') {
        if (dayCode == 'H' || dayCode == 'h')
            rentalCost = 40.00;
        else if (dayCode == 'F' || dayCode == 'f')
            rentalCost = 45.00;
        else
            rentalCost = 50.00;
    }
    else
        rentalCost = 50.00;

    cout << fixed << setprecision(2);
    cout << "\nRental cost: $" << rentalCost << endl;

    return 0;
}
