#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, D, d;
    long long a, b, c;
    int d1 = 10, d2 = 21, d3 = 42;
    int distance;
    cin >> t;
    while (t--)
    {
        cin >> D >> d;
        if (D <= 10 && d <= 5)
        {
            cin >> a >> b >> c;
            if (b > a && b < c)
            {
                distance = D * d;
                if (distance < d1)
                {
                    cout << "0"<< endl;
                }else if (distance >= d1 && distance < d2){
                    cout <<  a << endl;
                }else if(distance >= d2 && distance < d3){
                    cout<< b << endl;
                }else
                {
                    cout << c << endl;
                }
            }
        }
    }

    return 0;
}