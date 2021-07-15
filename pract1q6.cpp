#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    system("cls");
    cout << "\n\t\t\tPractical 1\n";
    cout << "Name : Pranay .R. Sanjule\n";
    cout << "Roll No.02\t Batch : C1\n";
    cout << "\nAim :- Program to print full pyramid.\n";

    cout << "\nEnter number of rows: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}