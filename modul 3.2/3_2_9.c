#include <stdio.h>
int main()
{
    int n = 1562, rem, max = 0;
    while (n != 0)
    {
        rem = n % 10;
        if (rem > max)

           { max = rem;}
        n /= 10;
    }
    printf("maximum value of the digit is %d",max);   
    return 0;
}