#include <stdio.h>
int main()
{
    int i, j, n;
    printf("enter value:-");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

        return 0;
}