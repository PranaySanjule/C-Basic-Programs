#include <stdio.h>
#include <conio.h>

void even(int n)
{
    if (n % 2 == 0)
    {
        printf("%d is an even number.\n", n);
    }
    else
    {
        printf("%d is an odd number.\n", n);
    }
}
void mypower(int n)
{
    int pow = n * n * n;
    printf("Power of %d is %d\n", n, pow);
}
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);

    even(n);

    mypower(n);

    return 0;
}