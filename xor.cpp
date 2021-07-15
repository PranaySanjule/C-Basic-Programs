
// #include<bits/stdc++.h>
// using namespace std;
// #define int long long int
// #define endl "\n"
// #define m 1000000007
// int power(int x, unsigned int y, int p)
// {
//     int res = 1; 
//     x = x % p;
//     if (x == 0) return 0;
//     while (y > 0)
//     {
//         if (y & 1)
//             res = (res*x) % p;
//         y = y>>1; // y = y/2
//         x = (x*x) % p;
//     }
//     return res;
// }
// int32_t main()
// {
//     int t;cin>>t;
//     while(t--)
//     {
//         int n;cin>>n;
//         cout<<power(2, n-1, m)<<endl;
//     }
//     return 0;
// }


#include <iostream>
#include<cmath>
using namespace std;
#define ll unsigned long long
long long m=1000000007;
void exp(ll a,ll b){
    	ll res=1;
	    while(b>0){
	        if(b&1){
	            res=(res*a)%m;
	        }
	        a=(a*a)%m;
	        b=b>>1;
	    }
	    cout<<res<<"\n";
	}
	
int main() {
	// your code goes here

	
 int t,N;
	int no=0;
	cin>>t;
	//Long int count=0;

	while(t>0){
	    
	    cin>>N;
	     exp(2,N-1);
	    t--;
	}
	return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// const int MX = 100005;
// const int MOD = 1000000007;

// vector<int> ans(MX);

// void pre()
// {
//     ans[1] = 1;
//     for (int i = 2; i < MX; i++)
//         ans[i] = (ans[i - 1 * 2] * 2) % MOD;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     pre();
//     int t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         cout << ans[n] << "\n";
//     }
//     return 0;
// }