

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b, A, B;

    float d1, d2;
    while (t--)
    {
        cin >> a >> b >> A >> B;

        if (a >= 100 && a <= 200 && b >= 400 && b <= 500 && A >= 1000 && A <= 1200 && B >= 1000 && B <= 1500)
        {

            d1 = A / a;
            d2 = B / b;

            int res = d1 + d2;
            cout << res << endl;
        }
    }

    return 0;
}