#include <stdio.h>
int main()
{
    int n = 64728, rem, a = 0;
    while (n != 0)
    {
        rem = n % 10;
        a = a * 10 + rem;
        n /= 10;
    }
    printf("reverse nom %d",a);

    return 0;
}