#include <iostream>
using namespace std;

int main() {
    double mealTotal;
    const double TIP_RATE = 0.15;

    cout << "Enter the total for the meal: $";
    cin >> mealTotal;

    double tip = mealTotal * TIP_RATE;
    double totalWithTip = mealTotal + tip;

    cout << "Meal total: $" << mealTotal << endl;
    cout << "Tip (15%): $" << tip << endl;
    cout << "Total with tip: $" << totalWithTip << endl;

    return 0;
}
