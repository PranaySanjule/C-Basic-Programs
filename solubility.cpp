#include <iostream>
using namespace std;

int main()
{
    int t, x, a, b;
    int sol;
    cin >> t;
    while (t--)
    {
        cin >> x >> a >> b;
        if ((x >= 31 && x <= 40) || (a >= 101 && a <= 120) || (b >= 1 && b <= 5))
        {
            sol = (a + (100 - x) * b) * 10;
            cout << sol << endl;
        }
    }

    return 0;
}