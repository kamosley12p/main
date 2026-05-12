#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

const double TAX_RATE = 0.07;

double extendedPrice(double quantity, double price) {
    return quantity * price;
}

int main() {
    using namespace std;

    ifstream in("grocery.txt");
    if (!in) {
        cerr << "Could not open grocery.txt\n";
        return 1;
    }

    string item;
    double quantity = 0.0;
    double costPerItem = 0.0;

    double sumExtended = 0.0;

    cout << fixed << setprecision(2);

    while (in >> item >> quantity >> costPerItem) {
        double ext = extendedPrice(quantity, costPerItem);

        cout << item
             << "  Qty: " << quantity
             << "  Cost per item: " << costPerItem
             << "  Extended price: " << ext << '\n';

        sumExtended += ext;
    }

    double tax = sumExtended * TAX_RATE;
    double totalReceipt = sumExtended + tax;

    cout << "Sum of extended price: " << sumExtended << '\n';
    cout << "Tax (7%): " << tax << '\n';
    cout << "Total receipt: " << totalReceipt << '\n';

    return 0;
}
