#include <iostream>
#include <iomanip>
#include <string>

double costPerCreditHour(char districtCode) {
    switch (districtCode) {
        case 'I':
        case 'i':
            return 250.0;
        case 'O':
        case 'o':
            return 550.0;
        default:
            return 0.0;
    }
}

double tuitionCost(double creditHours, double costPerHour) {
    return creditHours * costPerHour;
}

int main() {
    using namespace std;

    cout << "Enter last name, credit hours, and district code (I or O)\n";
    cout << "(Ctrl+Z then Enter to stop):\n";

    string lastName;
    double creditHours;
    char districtCode;

    double totalTuition = 0.0;

    while (cin >> lastName >> creditHours >> districtCode) {
        double rate = costPerCreditHour(districtCode);
        double tuition = tuitionCost(creditHours, rate);

        cout << fixed << setprecision(2);
        cout << "Student: " << lastName
             << "  Tuition cost: " << tuition << '\n';

        totalTuition += tuition;
    }

    cout << "\nTotal of all tuition costs: " << fixed << setprecision(2)
         << totalTuition << '\n';

    return 0;
}
