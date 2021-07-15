#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll D, d, P, Q;
        cin>>D>>d>>P>>Q;
        ll sum=0;
        // int n=D/d;
        // sum=((P*n)+(Q*(n-1)*(n))/2)*d;
        // if(D%d!=0)
        // {
        //     sum=sum+(D/d)*(P+n*Q);
        // }
        if(D%d!=0){
            ll rem = D%d;
            ll last = (D-1)/d;
            last+=1;
            ll lastAmt = (((last-1)*Q)+P)*rem;
            ll restDays=(D-1)/d;
            ll restAmt= (restDays*(2*P+(restDays-1)*Q))/2;
            sum=restAmt*d+lastAmt;
        }else{
            ll days=D/d;
            ll amt= (days*(2*P+(days-1)*Q))/2;
            sum=amt*d;
        }

        printf("%d\n",sum);

    }

    return 0;
}