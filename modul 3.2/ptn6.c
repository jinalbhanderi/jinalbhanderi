#include <stdio.h>                        
int main()
{
    int i, j, n;            
    printf("enter value:-");
    scanf("%d", &n);
    char c = 'A';
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)      

        {
            printf("%c ", 'A' - 1 + j);
            c++;
        }

        printf("\n");
    }
    return 0;
}