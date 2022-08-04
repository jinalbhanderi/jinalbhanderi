#include<stdio.h>
int main()
{
    int a=20,b=10;
    printf("before swap %d and %d:",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap %d and %d\n",a,b);
    return 0;
}