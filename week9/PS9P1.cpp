#include <iostream>
#include <iomanip>

double computeTotal(double quantity, double price) {
    return quantity * price;
}

double discountTotal(double total) {
    const double threshold = 10000.00;
    double rate = (total > threshold) ? 0.10 : 0.05;
    double discountAmount = total * rate;
    return total - discountAmount;
}

int main() {
    using namespace std;

    cout << "Enter quantity and price for each line (Ctrl+Z then Enter to stop):\n";

    double sumOfTotals = 0.0;
    double sumOfDiscountTotals = 0.0;

    double quantity;
    double price;

    while (cin >> quantity >> price) {
        double lineTotal = computeTotal(quantity, price);
        double afterDiscount = discountTotal(lineTotal);

        cout << fixed << setprecision(2);
        cout << "Total: " << lineTotal
             << "  Discount total: " << afterDiscount << '\n';

        sumOfTotals += lineTotal;
        sumOfDiscountTotals += afterDiscount;
    }

    cout << "\nSum of totals: " << fixed << setprecision(2) << sumOfTotals << '\n';
    cout << "Sum of discount totals: " << sumOfDiscountTotals << '\n';

    return 0;
}
