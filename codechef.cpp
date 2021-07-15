#include <iostream>
using namespace std;
int main()
{
    int t, n, w1, w2, weight;
    int totweight = 0;
    cin >> t;

    while (t--)
    {
        cin >> n >> w1 >> w2;
        for (int i = 1; i <= n; i++)
        {
            cin >> weight;
            totweight += weight;
        }
        if (totweight <= w1)
        {
            cout << "YES" << endl;
        }
        else
        {
            totweight = 0;
            cout << "NO" << endl;
        }
    }

    return 0;
}