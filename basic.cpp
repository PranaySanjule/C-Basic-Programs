#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, m1, m2;
    cin >> t;

    while (t--)
    {
        int x, m, d;
        cin >> x >> m;
        if ((x > 0 && x<=10) && (m > 0 && m<=10))
        {
            cin >> d;
            m1 = x * m;
            m2 = x + d;

            if (m1 > m2 || m1 == m2)
            {
                cout << m2 << endl;
            }
            else
            {
                cout << m1 << endl;
            }
        }
    }
    return 0;
}