#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

const int PAY_PERIODS_PER_YEAR = 26;

double biWeeklyPay(double annualSalary) {
    return annualSalary / PAY_PERIODS_PER_YEAR;
}

int main() {
    using namespace std;

    ifstream in("empl.txt");
    if (!in) {
        cerr << "Could not open empl.txt\n";
        return 1;
    }

    string lastName;
    double annualSalary = 0.0;

    double sumAnnualSalary = 0.0;
    int employeeCount = 0;

    cout << fixed << setprecision(2);

    while (in >> lastName >> annualSalary) {
        double biWeekly = biWeeklyPay(annualSalary);

        cout << lastName
             << "  Annual salary: " << annualSalary
             << "  Bi-weekly salary: " << biWeekly << '\n';

        sumAnnualSalary += annualSalary;
        ++employeeCount;
    }

    double averageAnnual =
        employeeCount > 0 ? sumAnnualSalary / employeeCount : 0.0;

    cout << "Sum of annual salary: " << sumAnnualSalary << '\n';
    cout << "Count of employees: " << employeeCount << '\n';
    cout << "Average annual salary: " << averageAnnual << '\n';

    return 0;
}
