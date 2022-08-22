#include <stdio.h>

int main()
{
    int i, j, k, a[10][10], b[10][10], c[10][10], n, k;
    printf("enter the value of n\n");
    scanf("%d", &n);
    printf("enter the 1st matrix\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the second matrix");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("enter both matrix addition");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d", c[i][j]);
        }
        printf("\n");
    }
    printf("enter both matrix subraction");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
            printf("%d", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}