#include <iostream>
using namespace std;

int fact(int n)
{
    if (n > 0)
        return n * fact(n - 1);
    else
        return(1);
}
int main()
{
    int n, r;
    cin >> n >> r;
    int ans = fact(n) / (fact(r) * fact(n - r));
    cout << ans;
}