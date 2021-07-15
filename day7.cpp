#include<bits/stdc++.h>
const int N=1e4;
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[N];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=n-1;j>=0;j--){
        cout<<a[j]<<" ";
    }
    return 0;
}