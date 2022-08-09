#include <stdio.h>
int main()
{
    int n = 1234, rem, r;
    r = n % 10;
    while (n != 0)
    {
        rem = n % 10;
        n/=10;
    }
    printf("addition of first and last digit is %d",r+rem);
    return 0;
}