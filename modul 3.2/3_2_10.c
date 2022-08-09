#include <stdio.h>
int main()
{
    int n = 1523, rem, sum = 0;
    while (n != 0)
    {
        rem = n % 10;
        sum = rem + sum;
        n /= 10;
    }
    printf("addition of individual digit is %d",sum);
    return 0;
}                