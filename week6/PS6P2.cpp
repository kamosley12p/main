#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int partNumber, quantity;

    cout << "Enter part number (10, 99, 55, 70, or 50): ";
    cin >> partNumber;
    cout << "Enter quantity: ";
    cin >> quantity;

    double costPerUnit;

    if (partNumber == 10 && quantity > 1000)
        costPerUnit = 1.00;
    else if (partNumber == 99 && quantity > 500)
        costPerUnit = 2.00;
    else
        costPerUnit = 5.00;

    double totalCost = quantity * costPerUnit;

    cout << fixed << setprecision(2);
    cout << "\nPart number:   " << partNumber << endl;
    cout << "Cost per unit: $" << costPerUnit << endl;
    cout << "Total cost:    $" << totalCost << endl;

    return 0;
}
