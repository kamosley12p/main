#include <iostream>
#include <iomanip>

const double TAX_RATE = 0.07;

void computeLineTotals(double quantity, double price,
                       double& total, double& tax, double& totalOrder) {
    total = quantity * price;
    tax = total * TAX_RATE;
    totalOrder = total + tax;
}

int main() {
    using namespace std;

    cout << "Enter quantity and price for each order (Ctrl+Z then Enter to stop):\n";

    double sumOfTotals = 0.0;
    double sumOfTaxes = 0.0;

    double quantity;
    double price;

    while (cin >> quantity >> price) {
        double total = 0.0;
        double tax = 0.0;
        double totalOrder = 0.0;

        computeLineTotals(quantity, price, total, tax, totalOrder);

        cout << fixed << setprecision(2);
        cout << "Total: " << total
             << "  Tax: " << tax
             << "  Total order: " << totalOrder << '\n';

        sumOfTotals += total;
        sumOfTaxes += tax;
    }

    cout << "\nTotal of all orders (before tax): " << fixed << setprecision(2)
         << sumOfTotals << '\n';
    cout << "Tax for all orders: " << sumOfTaxes << '\n';

    return 0;
}
