#include<iostream>
using namespace std;

void isEvenOdd(int n){
    if(n%2==0)
        cout<<n<<" is Even Number.\n";
    else
        cout<<n<<" is Odd Number.";

}
int main(){
    int n;
    cin>>n;

    isEvenOdd(n);
}