#include<stdio.h>
int main()
{

    int a;
    printf("enter odd or even value");
    scanf("%d\n",&a);
    (a % 1 == 0) ? printf("the value is even nom") : ("the value is odd nom");

    return 0;
}
