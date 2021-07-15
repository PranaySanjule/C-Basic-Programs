#include<bits/stdc++.h>
using namespace std;

void insertionSort(int n, int arr){
    int current = 1;
    for(int i=1;i<n;i++){
        int current = arr[i];
        int j=i-1;
        if(arr[j]>current && arr[j])

    }
}
int main(){
    int n;
    cout<<"Enter the size of array :"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements in array :"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    insertionSort(n,arr);
}