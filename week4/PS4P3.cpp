#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numBooks;
    double costPerBook, orderTotal, shipping;

    cout << "Enter number of books to order: ";
    cin >> numBooks;

    cout << "Enter cost per book: $";
    cin >> costPerBook;

    orderTotal = numBooks * costPerBook;

    if (orderTotal > 50.00) {
        shipping = 0.00;
    } else {
        shipping = 25.00;
    }

    cout << fixed << setprecision(2);
    cout << "\nOrder total:    $" << orderTotal << endl;
    cout << "Shipping charge: $" << shipping << endl;

    return 0;
}
