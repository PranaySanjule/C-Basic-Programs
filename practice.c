#include<stdio.h>

int main(){
    system("cls");
    // int n=9;
    int a[]={12,15,14,11,32,17,45,10,20};

    int length = sizeof(a)/sizeof(a[0]);  

    for(int i=0;i<length;i++){
        for(int j=i+1;j<length;j++){
            if(a[j]<a[i]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }

    for(int i=0;i<length;++i){
        printf("%d ",a[i]);
    }

    return 0;
}