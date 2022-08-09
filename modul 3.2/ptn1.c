

#include <stdio.h>

int main()
{
    char i, j, n = 5;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 1)
            {
                printf("1 ");            
            }
            else
            {
                printf("0 ");
            }
        }

        printf("\n");
    }

    return 0;
}