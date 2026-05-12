#include <array>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

struct Student {
    std::string first;
    std::string last;
    double gpa = 0.0;
};

const int STUDENT_COUNT = 10;

bool readStudents(const std::string& filename,
                  std::array<Student, STUDENT_COUNT>& students) {
    std::ifstream in(filename);
    if (!in) {
        return false;
    }

    for (int i = 0; i < STUDENT_COUNT; ++i) {
        if (!(in >> students[i].first >> students[i].last >> students[i].gpa)) {
            return false;
        }
    }

    return true;
}

void displayStudents(const std::array<Student, STUDENT_COUNT>& students) {
    using namespace std;

    cout << left << setw(12) << "First"
         << left << setw(12) << "Last"
         << right << setw(6) << "GPA" << '\n';
    cout << string(30, '-') << '\n';

    for (int i = 0; i < STUDENT_COUNT; ++i) {
        cout << left << setw(12) << students[i].first
             << left << setw(12) << students[i].last
             << right << setw(6) << students[i].gpa << '\n';
    }
}

void displayStudentsReverse(const std::array<Student, STUDENT_COUNT>& students) {
    using namespace std;

    cout << left << setw(12) << "First"
         << left << setw(12) << "Last"
         << right << setw(6) << "GPA" << '\n';
    cout << string(30, '-') << '\n';

    for (int i = STUDENT_COUNT - 1; i >= 0; --i) {
        cout << left << setw(12) << students[i].first
             << left << setw(12) << students[i].last
             << right << setw(6) << students[i].gpa << '\n';
    }
}

int main() {
    using namespace std;

    array<Student, STUDENT_COUNT> students;

    const string inputFile = "PS12P1.txt";
    if (!readStudents(inputFile, students)) {
        cerr << "Could not open or read " << inputFile << '\n';
        return 1;
    }

    cout << fixed << setprecision(2);

    cout << "Students (in file order)\n";
    displayStudents(students);

    cout << "\nStudents (reverse order)\n";
    displayStudentsReverse(students);

    return 0;
}
