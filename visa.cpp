#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int x1,x2,y1,y2,z1,z2;
    while(t--){
        cin>>x1>>x2>>y1>>y2>>z1>>z2;
        if(x1>=20 && x2<=50 && y1>=1900 && y2 <=2100 && z1>=1 && z2<=6){
            if(x2>=x1 && y2>=y1 && z2<=z1){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}