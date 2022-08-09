#include <stdio.h>
int main()
{
    int a[10] , i, n, even, odd,sum;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the ele of array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("even num in the array are\n");
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d\n", a[i]);
        }
    }
    printf("\nodd num is array are\n");
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {                                 
            printf("%d\n", a[i]);
        }
    }
    
    return 0;
}