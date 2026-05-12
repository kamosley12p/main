#include <iostream>
#include <iomanip>
#include <string>

double milesPerGallon(double miles, double gallons) {
    return miles / gallons;
}

int main() {
    using namespace std;

    string destination;
    double miles;
    double gallons;

    double totalMiles = 0.0;
    int tripCount = 0;

    cout << "Enter destination city, miles travelled, and gallons used for each trip\n";
    cout << "(Ctrl+Z then Enter to stop):\n";

    while (cin >> destination >> miles >> gallons) {
        double mpg = milesPerGallon(miles, gallons);

        cout << fixed << setprecision(2);
        cout << "Destination: " << destination
             << "  Miles per gallon: " << mpg << '\n';

        totalMiles += miles;
        ++tripCount;
    }

    cout << "\nTotal miles travelled: " << fixed << setprecision(2) << totalMiles << '\n';
    cout << "Number of trips: " << tripCount << '\n';

    return 0;
}
