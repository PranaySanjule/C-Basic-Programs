#include<bits/stdc++.h>
using namespace std;
const int n=1e6;

int main(){
    int n;
    cin>>n;
    int i=0,rem,arr[10],sum=0;
    
    while(n){
        rem=n%2;
        n=n/2;
        arr[i]=rem;
        i++;
    }

    for(int j=i-1;j>=1;j--){
        sum += arr[j];
    }
        cout<<sum;

    return 0;
}   