#include<bits/stdc++.h>
using namespace std;
void selectionSort(int n,int arr[]){
    int i,j;

    for(i=0;i<n-1;i++){     
        //I have to always think about selection sort, we always start outer 1st loop from i=0 to i<n-1

        for(j=i+1;j<n;j++){        
        //& inner 2nd loop from (j=i+1 OR J=1 i.e 2nd element) to j<n 
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){    //Remember always keep in a mind that i=0 to i<n when we take input to sort any array. 
        cin>>arr[i];
    }

    selectionSort(n,arr);

    return 0;
}