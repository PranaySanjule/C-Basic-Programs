#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    system("cls");
    int a, b, c;
    // cout<<"Enter three numbers :";
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "Greater number is " << a << endl;
        }
        else
        {
            cout << "Greater number is " << c << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "Greater number is " << b << endl;
        }
        else
        {
            cout << "Greater number is " << c << endl;
        }
    }

    return 0;
}