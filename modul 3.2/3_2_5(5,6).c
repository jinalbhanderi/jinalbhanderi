#include <stdio.h>

int main()
{
    int n, i, a[10], even = 0, odd = 0;
    printf("enter the size of array");
    scanf("%d", &n);
    printf("enter the elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }                            
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even = even + a[i];
        }
        else
        {
            odd = odd + a[i];        
        }
    }
    printf("sum of even num is %d ", even);
    printf("sum of odd num is %d ", odd);
    return 0;
}
