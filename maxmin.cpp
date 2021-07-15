#include <iostream>
#include <climits>
#include <math.h>
using namespace std;
// void MaxNo(int a, int b, int c)
// {
//     if (a > b)
//     {
//         if (a > c)
//         {
//             cout << "Max no. is " << a;
//         }
//         else
//         {
//             cout << "Max no. is " << c;
//         }
//     }
//     else
//     {
//         if (b > c)
//         {
//             cout << "Max no. is " << b;
//         }
//         else
//         {
//             cout << "Max no. is " << c;
//         }
//     }
// }
// void MinNo(int a, int b, int c)
// {
//     if (a < b)
//     {
//         if (a < c)
//         {
//             cout << "\nMin no. is " << a;
//         }
//         else
//         {
//             cout << "\nMin no. is " << c;
//         }
//     }
//     else
//     {
//         if (b < c)
//         {
//             cout << "\nMin no. is " << b;
//         }
//         else
//         {
//             cout << "\nMin no. is " << c;
//         }
//     }
// }

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int MaxNo = INT_MAX;
    int MinNo = INT_MIN;
    cout << "Largest number is " << max(a, b, c);
    cout << "\nSmall number is " << min(a, b, c);

    return 0;
}