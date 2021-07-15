#include <iostream>
using namespace std;

int main()
{
    system("cls");
    float f, k;
    cout << "Enter a temperature";
    cin >> f;

    k = (f - 32) * 5 / 9;
    cout << k << endl;
    return 0;
}