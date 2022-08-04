#include <stdio.h>
int main()
{
    int i, n, a = 0, b = 1;
    printf("%d %d", a, b);
    for (i = 3; i <= 15; i++)
    {
        n = a + b;
        printf("%d", n);
        a = b;
        b = n;
    }
    return 0;
}