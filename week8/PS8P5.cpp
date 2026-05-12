#include <iostream>
#include <iomanip>
#include <string>

double getLabFee(std::string department, int courseCode) {
    if (department == "CIS" && courseCode == 101) {
        return 50.0;
    }
    if (department == "CIS" && courseCode == 121) {
        return 100.0;
    }
    if (department == "MAT" && courseCode == 111) {
        return 25.0;
    }
    if (department == "MAT" && courseCode == 112) {
        return 35.0;
    }
    if (department == "ENG" && courseCode == 100) {
        return 55.0;
    }
    return 50.0;
}

int main() {
    using namespace std;

    string department;
    int courseCode;

    double totalLabFees = 0.0;
    int entryCount = 0;

    cout << "Enter department and course code for each course\n";
    cout << "(Ctrl+Z then Enter to stop):\n";

    while (cin >> department >> courseCode) {
        double fee = getLabFee(department, courseCode);

        cout << fixed << setprecision(2);
        cout << "Department: " << department
             << "  Course code: " << courseCode
             << "  Lab fee: $" << fee << '\n';

        totalLabFees += fee;
        ++entryCount;
    }

    cout << '\n';
    cout << "Total lab fees to collect: $" << fixed << setprecision(2) << totalLabFees
         << '\n';

    if (entryCount > 0) {
        double averageFee = totalLabFees / static_cast<double>(entryCount);
        cout << "Average lab fee: $" << fixed << setprecision(2) << averageFee << '\n';
    } else {
        cout << "Average lab fee: $0.00\n";
    }

    return 0;
}
