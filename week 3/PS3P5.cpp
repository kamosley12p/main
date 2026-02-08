#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double fixedCosts, pricePerUnit, costPerUnit;

    cout << "Enter fixed costs: $";
    cin >> fixedCosts;

    cout << "Enter price per unit: $";
    cin >> pricePerUnit;

    cout << "Enter cost per unit: $";
    cin >> costPerUnit;

    double contributionMargin = pricePerUnit - costPerUnit;

    if (contributionMargin <= 0) {
        cout << "Cannot break even: price per unit must be greater than cost per unit." << endl;
        return 1;
    }

    double breakEven = fixedCosts / contributionMargin;

    cout << fixed << setprecision(2);
    cout << "Break even point: " << breakEven << " units" << endl;

    return 0;
}
