#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int amt1;
    cin >> amt1;

    int amt2;
    cin >> amt2;

    int sum = amt1 + amt2;
    cout << sum;

    return 0;
}