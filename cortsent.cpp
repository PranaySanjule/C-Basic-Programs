#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string str;

    string str1,str2;

    cin>>n>>str;

    for(int i=1;i<n;++i){
        cin>>str[i];
    }

    if(str1.size()>='a' && str1.size()<='m' || str2.size()>='N' && str2.size()<='Z'){
       for(int i=0;i<=str.size();i++){
           if(str[i]==str1.size() || str[i]==str2.size()){
               cout<<"Yes"<<endl;
           }else{
               cout<<"No"<<endl;
           }
       }       
    }

    return 0;
}