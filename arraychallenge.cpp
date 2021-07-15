/*
1) Max till i
Given array a[] of size n.For every i from 0 to n-1 output max(a[0],a[1],..,a[i])
*/
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int mx=-19999999;
//     for(int i=0;i<n;i++){
//         mx=max(mx, a[i]);
//         cout<<mx<<endl;
//     }

//     return 0;
// }





/*
Problem : Given an array a[] of size n. Output sum of each subarray of the given array.
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr = 0;
        for (int j = i; j < n; j++)
        {
            curr += a[j];
            cout << curr << endl;
        }
    }

    return 0;
}