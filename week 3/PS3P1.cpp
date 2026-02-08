#include <iostream>
using namespace std;

int main() {
    double exam1, exam2;
    const double WEIGHT1 = 0.60;  // First exam: 60%
    const double WEIGHT2 = 0.40;  // Second exam: 40%

    cout << "Enter first exam score: ";
    cin >> exam1;

    cout << "Enter second exam score: ";
    cin >> exam2;

    double total = (exam1 * WEIGHT1) + (exam2 * WEIGHT2);

    cout << "Total score: " << total << endl;

    return 0;
}
