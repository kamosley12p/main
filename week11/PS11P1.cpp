#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

const double SALES_TAX_RATE = 0.07;

void computeSavingsAndTax(double msrp, double salesPrice,
                          double& savings, double& salesTax) {
    savings = msrp - salesPrice;
    salesTax = salesPrice * SALES_TAX_RATE;
}

int main() {
    using namespace std;

    ifstream in("auto.txt");
    if (!in) {
        cerr << "Could not open auto.txt\n";
        return 1;
    }

    string make;
    string model;
    double msrp = 0.0;
    double salesPrice = 0.0;

    double sumSavings = 0.0;

    cout << fixed << setprecision(2);

    while (in >> make >> model >> msrp >> salesPrice) {
        double savings = 0.0;
        double salesTax = 0.0;

        computeSavingsAndTax(msrp, salesPrice, savings, salesTax);

        cout << make << ' ' << model
             << "  MSRP: " << msrp
             << "  Sales price: " << salesPrice
             << "  Savings: " << savings
             << "  Sales tax: " << salesTax << '\n';

        sumSavings += savings;
    }

    cout << "Sum of savings: " << sumSavings << '\n';

    return 0;
}
