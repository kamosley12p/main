#include <iostream>
#include <iomanip>
#include <string>

double computeTuition(int credits) {
    const double ratePerCredit = 250.0;
    return credits * ratePerCredit;
}

int main() {
    using namespace std;

    string lastName;
    int credits;

    double totalTuition = 0.0;
    int studentCount = 0;

    cout << "Enter last name and credits taken for each student\n";
    cout << "(Ctrl+Z then Enter to stop):\n";

    while (cin >> lastName >> credits) {
        double tuition = computeTuition(credits);

        cout << fixed << setprecision(2);
        cout << "Last name: " << lastName
             << "  Credits: " << credits
             << "  Tuition owed: $" << tuition << '\n';

        totalTuition += tuition;
        ++studentCount;
    }

    cout << '\n';
    cout << "Total tuition (all students): $" << fixed << setprecision(2) << totalTuition
         << '\n';
    cout << "Number of students: " << studentCount << '\n';

    return 0;
}
