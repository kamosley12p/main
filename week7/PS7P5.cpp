#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>

int main() {
    using namespace std;

    string lastName;
    int creditHours;
    char districtCode;

    double totalTuition = 0.0;
    int totalCreditHours = 0;
    int studentCount = 0;

    cout << "Enter last name, credit hours, and district code (I/O)\n"
         << "(Ctrl+Z then Enter to stop):\n";

    while (cin >> lastName >> creditHours >> districtCode) {
        districtCode = static_cast<char>(toupper(static_cast<unsigned char>(districtCode)));

        double ratePerHour = 0.0;
        if (districtCode == 'I') {
            ratePerHour = 250.0;
        } else if (districtCode == 'O') {
            ratePerHour = 550.0;
        }

        double tuitionOwed = creditHours * ratePerHour;

        totalTuition += tuitionOwed;
        totalCreditHours += creditHours;
        ++studentCount;

        cout << fixed << setprecision(2);
        cout << "\nStudent: " << lastName
             << "\nTuition owed: $" << tuitionOwed
             << "\n";
    }

    cout << fixed << setprecision(2);
    cout << "\nTotal tuition owed: $" << totalTuition
         << "\nTotal credit hours taken: " << totalCreditHours
         << "\nNumber of students: " << studentCount << '\n';

    return 0;
}

