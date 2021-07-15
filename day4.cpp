#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int table = 0;
    int i;
    for (i = 1; i <= 10; ++i)
    {
        table = n * i;
        cout << n << " x " << i << " = " << table << endl;
    }

    return 0;
}