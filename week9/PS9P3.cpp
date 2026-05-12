#include <iostream>
#include <iomanip>
#include <string>

double milesPerGallon(double miles, double gallons) {
    if (gallons == 0.0) {
        return 0.0;
    }
    return miles / gallons;
}

double gasCost(double gallons) {
    const double pricePerGallon = 3.50;
    return gallons * pricePerGallon;
}

int main() {
    using namespace std;

    cout << "Enter destination city, miles travelled, and gallons used for each trip\n";
    cout << "(Ctrl+Z then Enter to stop):\n";

    string destination;
    double miles;
    double gallons;

    double totalGasCost = 0.0;

    while (cin >> destination >> miles >> gallons) {
        double mpg = milesPerGallon(miles, gallons);
        double cost = gasCost(gallons);

        cout << fixed << setprecision(2);
        cout << "Destination: " << destination
             << "  Miles per gallon: " << mpg
             << "  Cost of gas: " << cost << '\n';

        totalGasCost += cost;
    }

    cout << "\nTotal cost of gas: " << fixed << setprecision(2) << totalGasCost << '\n';

    return 0;
}
