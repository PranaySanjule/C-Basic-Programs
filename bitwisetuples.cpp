// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;

//     long int n,m;
//     cin>>n>>m;  
//     long int a[n];
//     long int x=a[n]-1;
//     long int y=m;
//     long int temp=1;
//     for(int i=1;i<=t;i++){
//         while(y>0){
//             if(y%2==1){
//                 temp=x*temp%1000000007;
//                 x=(x*x)%1000000007;
//                 y=y/2;
//             }
//         }
//         cout<<temp<<endl;
//     }

//     return 0;
// }

#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=1e9+7;

int power(int x,int n){
    if(n==0) return 1;
    if(n%2==0) return power((x%mod)*(x%mod),n/2)%mod;
    return ((x%mod)*power((x%mod)*(x%mod),n/2)%mod);
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int ans=power(2,n)-1;
        ans=power(ans,m);
        cout<<ans<<endl;
    }
    
}