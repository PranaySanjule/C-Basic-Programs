#include<stdio.h>

int main()
{   
    int n;
    system("cls");
    
    printf("Enter a number\n");
    scanf("%d",&n);
    if (n%5==0 )
    {
        printf("%d is divisible by 5",n);
    }else{
        printf("%d is not divisible by 5",n);
    }
    
    return 0;
}