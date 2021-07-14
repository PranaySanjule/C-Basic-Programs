#include<stdio.h>

int main()
{
    int a,b,c;  //assign k for second apprach
    system("cls");  //to clear the output screen same as clrscn()
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    // if (a>b)
    // {
    //     if (a>c)
    //     {
    //         printf("Greatest number is %d",a);
    //     }else{
    //         printf("Greatest number is %d",c);
    //     }
    // }else{
    //     if (b>c)
    //     {
    //         printf("Greatest number is %d",b);
    //     }else
    //     {
    //         printf("Greatest number is %d",c);
    //     }       
    // }

    //Using Conditional Operator
    //k=a>b ? a>c?a:b : b>c?b:c;    //best approah

    // printf("Greatest number is %d",k);

    // most best approach
    printf("Greatest number is %d",a>b ? a>c?a:c : b>c?b:c);

    return 0;
}