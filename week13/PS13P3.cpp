#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
    string firstName;
    string lastName;
    char districtCode;
    int enrolledCredits;
    double tuitionBalance;
};

double computeTuition(char districtCode, int enrolledCredits) {
    double ratePerCredit = (districtCode == 'I' || districtCode == 'i') ? 250.0 : 500.0;
    return enrolledCredits * ratePerCredit;
}

void displayStudents(const vector<Student>& students) {
    cout << fixed << setprecision(2);
    cout << "\nStudent Records:\n";

    for (const Student& s : students) {
        cout << s.firstName << ' ' << s.lastName
             << ", District Code: " << s.districtCode
             << ", Credits: " << s.enrolledCredits
             << ", Tuition Balance: $" << s.tuitionBalance << '\n';
    }
}

int main() {
    vector<Student> students;
    Student temp;

    cout << "Enter student data. Press Ctrl+Z (then Enter) to stop input.\n";

    while (true) {
        cout << "\nFirst name: ";
        if (!(cin >> temp.firstName)) {
            break;
        }

        cout << "Last name: ";
        cin >> temp.lastName;

        cout << "District code (I or O): ";
        cin >> temp.districtCode;

        cout << "Enrolled credit hours: ";
        cin >> temp.enrolledCredits;

        temp.tuitionBalance = computeTuition(temp.districtCode, temp.enrolledCredits);
        students.push_back(temp);
    }

    displayStudents(students);
    cout << "\nNumber of students: " << students.size() << '\n';

    return 0;
}
