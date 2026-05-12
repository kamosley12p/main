#include <iostream>
#include <iomanip>

void computePostage(double weight, int zipCode,
                    double& postage, double& areaCharge, double& weightCharge) {
    if (zipCode == 60171) {
        areaCharge = 2.00;
    } else if (zipCode == 60172) {
        areaCharge = 2.50;
    } else if (zipCode == 60635) {
        areaCharge = 3.00;
    } else {
        areaCharge = 5.00;
    }

    double chargePerOunce;
    if (weight > 100.0) {
        chargePerOunce = 0.02;
    } else if (weight > 50.0) {
        chargePerOunce = 0.03;
    } else {
        chargePerOunce = 0.05;
    }

    weightCharge = weight * chargePerOunce;
    postage = areaCharge + weightCharge;
}

int main() {
    using namespace std;

    cout << "Enter package weight (ounces) and zip code (Ctrl+Z then Enter to stop):\n";

    int entryCount = 0;
    double weight;
    int zipCode;

    while (cin >> weight >> zipCode) {
        double postage = 0.0;
        double areaCharge = 0.0;
        double weightCharge = 0.0;

        computePostage(weight, zipCode, postage, areaCharge, weightCharge);

        cout << fixed << setprecision(2);
        cout << "Area charge: " << areaCharge
             << "  Weight charge: " << weightCharge
             << "  Postage: " << postage << '\n';

        ++entryCount;
    }

    cout << "\nNumber of entries: " << entryCount << '\n';

    return 0;
}
