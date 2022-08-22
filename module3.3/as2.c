#include <stdio.h>
int main()
{
    int a,b,op;
    printf("enter value of a and b=");
    scanf("%d %d",&a,&b);
    printf("choose the nom");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        printf("addition of %d and %d is %d", a, b, a + b);
        break;
    case 2:
        printf("subtraction of %d and %d is %d", a, b, a + b);
        break;
    case 3:
        printf("multiplication of %d and %d is %d", a, b, a + b);
        break;
    case 4:
        printf("divison of %d and %d is %d", a, b, a + b);
        break;
    case 5:
        printf("modulo of %d and %d is %d", a, b, a + b);
        break;

    default:
        printf("please choose valid option");
        break;
    }
    return 0;
}