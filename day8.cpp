#include<bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    
    string name, number,key;
    map<string,string>phone;
    
    for(int i=0;i<n;i++){
        cin>>name>>number;
        phone[name]=number;
    }
    
    while(cin>>key){
        if(phone.find(key)!=phone.end())
        {
            cout<<key<<"="<<phone.find(key)->second<<endl;
        }
        else
        {
            cout<<"Not found"<<endl;
        }    
    }
    
    return 0;
}