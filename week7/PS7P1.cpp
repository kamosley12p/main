#include <iostream>
#include <iomanip>

int main() {
    using namespace std;

    int quantity;
    double price;

    double grandTotal = 0.0;

    cout << "Enter quantity and price (Ctrl+Z then Enter to stop):\n";

    while (cin >> quantity >> price) {
        double extended = quantity * price;
        double discountRate = (quantity > 1000) ? 0.10 : 0.0;
        double discountAmount = extended * discountRate;
        double discountedPrice = extended - discountAmount;

        grandTotal += discountedPrice;

        cout << fixed << setprecision(2);
        cout << "\nQuantity: " << quantity
             << "\nPrice: " << price
             << "\nExtended price: " << extended
             << "\nDiscount amount: " << discountAmount
             << "\nDiscounted price: " << discountedPrice
             << "\n";
    }

    cout << "\nTotal of all discounted prices: " << fixed << setprecision(2) << grandTotal << '\n';

    return 0;
}

