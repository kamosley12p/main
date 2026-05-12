#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

const int SIZE = 10;

bool loadEmployees(const string& filename, string first[], string last[], double salary[], int size)
{
    ifstream fin(filename);
    if (!fin)
        return false;

    for (int i = 0; i < size; i++)
    {
        if (!(fin >> first[i] >> last[i] >> salary[i]))
            return false;
    }

    return true;
}

void displayEmployees(const string first[], const string last[], const double salary[], int size)
{
    cout << left << setw(12) << "First"
         << left << setw(12) << "Last"
         << right << setw(12) << "Salary" << "\n";
    cout << string(36, '-') << "\n";

    cout << fixed << setprecision(2);
    for (int i = 0; i < size; i++)
    {
        cout << left << setw(12) << first[i]
             << left << setw(12) << last[i]
             << right << setw(12) << salary[i] << "\n";
    }
    cout << "\n";
}

int sequentialSearchLastName(const string last[], int size, const string& targetLast)
{
    for (int i = 0; i < size; i++)
    {
        if (last[i] == targetLast)
            return i;
    }
    return -1;
}

int main()
{
    string first[SIZE];
    string last[SIZE];
    double salary[SIZE];

    const string filename = "Empldata.txt";
    if (!loadEmployees(filename, first, last, salary, SIZE))
    {
        cout << "Could not read data from " << filename << ".\n";
        cout << "Make sure the file exists in the program folder and has 10 lines.\n";
        return 1;
    }

    displayEmployees(first, last, salary, SIZE);

    while (true)
    {
        string query;
        cout << "Enter a last name to search (or QUIT to stop): ";
        cin >> query;

        if (query == "QUIT" || query == "quit" || query == "Quit")
            break;

        int idx = sequentialSearchLastName(last, SIZE, query);
        if (idx != -1)
        {
            cout << fixed << setprecision(2);
            cout << first[idx] << " " << last[idx] << " " << salary[idx] << "\n\n";
        }
        else
        {
            cout << query << " not found\n\n";
        }
    }

    return 0;
}
