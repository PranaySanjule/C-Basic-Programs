#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int salary;
    // cout<<"Enter the salary";
    cin>>salary;

    if(salary>6000)
    {
        if(salary>12000){
            cout<<"Dinner party with GF\n";
        }else{
            cout<<"Lunch party with GF\n";
        }
    }else if(salary>3000){
        cout<<"Party with second gf\n";
    }else{
        cout<<"Party with Friends\n";
    }

    return 0;
}