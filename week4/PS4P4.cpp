#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string applianceName;
    double cost, warrantyCost, total;

    cout << "Enter name of appliance: ";
    getline(cin, applianceName);

    cout << "Enter cost of appliance: $";
    cin >> cost;

    if (cost > 1000.00) {
        warrantyCost = cost * 0.10;
    } else {
        warrantyCost = cost * 0.05;
    }

    total = cost + warrantyCost;

    cout << fixed << setprecision(2);
    cout << "\nAppliance:     " << applianceName << endl;
    cout << "Cost:          $" << cost << endl;
    cout << "Warranty cost:  $" << warrantyCost << endl;
    cout << "Total:         $" << total << endl;

    return 0;
}
