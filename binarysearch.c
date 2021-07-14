#include <stdio.h>
#include <conio.h>
void main()
{
    int a[20], i, n, data, low, high, mid;
    printf("Enter the size of an array \n");
    scanf("%d", &n);
    printf("Enter the array elements in ascending order\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the data element\n");
    scanf("%d", &data);
    low = 0;
    high = n - 1;
    while (high >= low)
    {
        mid = (low + high) / 2;
        if (data == a[mid])
            break;
        else
        {
            if (data > a[mid])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    if (data == a[mid])
        printf("The data element is found at location %d", mid + 1);
    else
        printf("the data element is not found");
    getch();
}