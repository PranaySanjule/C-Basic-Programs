#include <iostream>
using namespace std;
int main()
{
    int t, n, x, k, cond;
    cin >> t;
    while (t--)
    {
        cin >> n >> x >> k;
        int result;
        result = (n + 1) % k;

        if (x % k == 0 || x % k == result)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}