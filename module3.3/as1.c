#include <stdio.h>
int main()
{
    int i, s[10] = {2, 34, 65, 57, 46, 678,35, 90, 98}, max;
    max = s[0];
    for (i = 0; i < 8; i++)
    {
        if (s[i] > max)
        {
            max = s[i];
        }
    }
    printf("maximum value of the array is %d", max);
    return 0;
}