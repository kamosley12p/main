#include <iostream>
#include <string>
using namespace std;

int main() {
    string lastName;
    int score;
    char letterGrade;

    cout << "Enter your last name: ";
    cin >> lastName;
    cout << "Enter your score: ";
    cin >> score;

    if (score >= 90)
        letterGrade = 'A';
    else if (score >= 80)
        letterGrade = 'B';
    else if (score >= 70)
        letterGrade = 'C';
    else if (score >= 60)
        letterGrade = 'D';
    else
        letterGrade = 'F';

    cout << "\nStudent: " << lastName << endl;
    cout << "Letter Grade: " << letterGrade << endl;

    return 0;
}
