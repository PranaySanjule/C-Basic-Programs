#include <iostream>
using namespace std;
int main()
{
    int num, i, a, b;
    cin >> a >> b;

    cout << "Prime Numbers are ";
    for (num = a; num <= b; num++)
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }

        if (i == num)
        {
            cout << num << " ";
        }
    }

    return 0;
}