#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

const double IN_DISTRICT_PER_CREDIT = 250.00;
const double OUT_DISTRICT_PER_CREDIT = 500.00;
const double COURSE_FEE_RATE = 0.10;

void computeTuitionAndFees(char studentCode, double creditsTaken,
                           double& tuitionOwed, double& courseFees) {
    double costPerCredit = 0.0;
    if (studentCode == 'I') {
        costPerCredit = IN_DISTRICT_PER_CREDIT;
    } else if (studentCode == 'O') {
        costPerCredit = OUT_DISTRICT_PER_CREDIT;
    }

    tuitionOwed = creditsTaken * costPerCredit;
    courseFees = tuitionOwed * COURSE_FEE_RATE;
}

int main() {
    using namespace std;

    ifstream in("student.txt");
    if (!in) {
        cerr << "Could not open student.txt\n";
        return 1;
    }

    string lastName;
    char studentCode = '\0';
    double creditsTaken = 0.0;

    double sumTuitionOwed = 0.0;
    int studentCount = 0;

    cout << fixed << setprecision(2);

    while (in >> lastName >> studentCode >> creditsTaken) {
        double tuitionOwed = 0.0;
        double courseFees = 0.0;

        computeTuitionAndFees(studentCode, creditsTaken, tuitionOwed, courseFees);

        double costPerCreditHour =
            creditsTaken > 0.0 ? tuitionOwed / creditsTaken : 0.0;

        cout << lastName
             << "  Code: " << studentCode
             << "  Cost per credit hour: " << costPerCreditHour
             << "  Credits: " << creditsTaken
             << "  Tuition owed: " << tuitionOwed
             << "  Course fees: " << courseFees << '\n';

        sumTuitionOwed += tuitionOwed;
        ++studentCount;
    }

    double averageTuition =
        studentCount > 0 ? sumTuitionOwed / studentCount : 0.0;

    cout << "Sum of tuition owed: " << sumTuitionOwed << '\n';
    cout << "Number of students: " << studentCount << '\n';
    cout << "Average tuition cost per student: " << averageTuition << '\n';

    return 0;
}
