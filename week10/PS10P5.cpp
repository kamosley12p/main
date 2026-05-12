#include <iostream>
#include <iomanip>
#include <math.h>

void computeFutureValues(double investment,
                         double fiveYearRate,
                         double tenYearRate,
                         double& fiveYearAmount,
                         double& tenYearAmount) {
    fiveYearAmount = investment * pow(1.0 + fiveYearRate, 5.0);
    tenYearAmount = investment * pow(1.0 + tenYearRate, 10.0);
}

int main() {
    using namespace std;

    cout << "Enter investment amount, 5-year rate, and 10-year rate "
            "as decimals (e.g. 5% as 0.05). Ctrl+Z then Enter to stop:\n";

    double investment;
    double fiveYearRate;
    double tenYearRate;

    while (cin >> investment >> fiveYearRate >> tenYearRate) {
        double fiveYearAmount = 0.0;
        double tenYearAmount = 0.0;

        computeFutureValues(investment, fiveYearRate, tenYearRate,
                            fiveYearAmount, tenYearAmount);

        cout << fixed << setprecision(2);
        cout << "Investment: " << investment
             << "  Five-year amount: " << fiveYearAmount
             << "  Ten-year amount: " << tenYearAmount << '\n';
    }

    return 0;
}
