#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double weight;
    double ratePerPound;
    double total;

    cout << "Enter weight (pounds): ";
    cin >> weight;

    if (weight > 100)
        ratePerPound = 0.50;
    else if (weight >= 30)
        ratePerPound = 0.25;
    else if (weight >= 20)
        ratePerPound = 0.20;
    else
        ratePerPound = 0.10;

    total = weight * ratePerPound;

    cout << fixed << setprecision(2);
    cout << "\nWeight: " << weight << " lbs" << endl;
    cout << "Rate per pound: $" << ratePerPound << endl;
    cout << "Total paid to customer: $" << total << endl;

    return 0;
}
