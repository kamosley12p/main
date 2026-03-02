#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numTickets;
    char location;

    cout << "Enter number of concert tickets: ";
    cin >> numTickets;
    cout << "Enter location code (H or L): ";
    cin >> location;

    double pricePerTicket;

    if (numTickets > 25 || location == 'H' || location == 'h')
        pricePerTicket = 30.00;
    else if (numTickets > 10 && (location == 'L' || location == 'l'))
        pricePerTicket = 40.00;
    else
        pricePerTicket = 50.00;

    double totalCost = numTickets * pricePerTicket;

    cout << fixed << setprecision(2);
    cout << "\nNumber of tickets: " << numTickets << endl;
    cout << "Price per ticket:  $" << pricePerTicket << endl;
    cout << "Total cost:        $" << totalCost << endl;

    return 0;
}
