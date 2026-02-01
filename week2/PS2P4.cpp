#include <iostream>
#include <string>

int main() {
    std::string lastName;
    int credits;

    std::cout << "Enter last name: ";
    std::cin >> lastName;

    std::cout << "Enter credits taken: ";
    std::cin >> credits;

    double tuition = credits * 250.0;
    double labFee = 100.0;
    double total = tuition + labFee;

    std::cout << lastName << ", total cost: $" << total << "\n";

    return 0;
}