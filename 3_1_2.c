#include <stdio.h>
int main()
{
    int a, b;
    int sum, sub, multi, divison;
    printf("enter value of a");
    scanf("%d", &a);
    printf("enter value of b");
    scanf("%d", &b);

    sum = a + b;
    printf("addition of a and b is %d\n", a, b, sum);

    sub = a - b;
    printf("subtraction of a and b is %d\n", a, b, sub);

    multi = a * b;
    printf("multiplication of a and b is %d\n", a, b, multi);

    divison = a / b;
    printf("divison of a  and b is %d\n", a, b, divison);

    return 0;
}
