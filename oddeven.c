#include <stdio.h>

int main()
{
    // Below program is a simple program to check whether a number is Even or Odd.

    // int a;

    // printf("Enter a number\n");
    // scanf("%d",&a);

    // if (a&0)
    // {
    //     printf("%d is Even Number.",a);
    // }else{
    //     printf("%d is Odd Number.",a);
    // }

    int n;
    printf("Enter a Number\n");
    scanf("%d", &n);
    if (n / 2 * 2 == n)
        printf("%d is Even Number.", n);
    else
        printf("%d is Odd Number.", n);

    return 0;
}