#include <iostream>
using namespace std;

int main()
{
    int a[100], n, i, j, t, temp;
    cout << "Enter the size of list:\n";
    cin >> n;
    cout << "Enter the elements:\n";

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag = 0)
            break;
    }

    cout << "The list in sorted order:\n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}

// void bubbleSort(int n,int arr[]){
//     int counter=1;
//     while(counter<n){
//         for(int i=0;i<n-counter;i++){
//             if(arr[i]>arr[i+1]){
//                 int temp=arr[i];
//                 arr[i]=arr[i+1];
//                 arr[i+1]=temp;
//             }
//         }
//         counter++;
//     }
//         for(int i=0;i<n;i++){
//             cout<<arr[i]<<" ";
//         }
// }
// int main(){
//     int n;
//     cout<<"Enter the size of array :"<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the element in array:"<<endl;
//     for(int i=0;i<n;++i){
//         cin>>arr[i];
//     }

//     bubbleSort(n,arr);

// }

