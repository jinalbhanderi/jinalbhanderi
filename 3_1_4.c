#include <stdio.h>
int main()
{
    float pamount, rate, time, i;
    printf("enter pamount:");
    scanf("%f", &pamount);

    printf("enter rate:");
    scanf("%f", &rate);

    printf("enter time:");
    scanf("%f", &time);

    i = (pamount * rate * time) / 100;
    printf("simple intrest is %f", i);

    return 0;
}