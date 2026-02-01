#include <iostream>
#include <string>

int main() {
    std::string lastName;
    double hours;
    double payRate;

    std::cout << "Enter last name: ";
    std::cin >> lastName;

    std::cout << "Enter hours: ";
    std::cin >> hours;

    std::cout << "Enter pay rate: ";
    std::cin >> payRate;

    double grossPay = hours * payRate;

    std::cout << lastName << ", gross pay: " << grossPay << "\n";

    return 0;
}