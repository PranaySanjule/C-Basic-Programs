#include <stdio.h>
#include <conio.h>
void main()
{
    int i, a[20], n, data, found = 0;
    printf("Enter the size of an array \n");
    scanf("%d", &n);
    printf("Enter the array elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element which you want to find\n");
    scanf("%d", &data);

    for (i = 0; i < n; i++)
    {
        if (a[i] == data)
        {
            printf("Element found at location %d\n",i+1);
            found = 1;
            break;
        }
    }

    if(found==0){
        printf("Element not found");
    }

    getch();
}