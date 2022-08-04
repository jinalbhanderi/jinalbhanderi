#include <stdio.h>
int main()
{
    int a, b, triangle, rectangle;
    float circle, r;
    printf("enter radius of circle:\n");
    scanf("%f", &r);
    circle = 3.14 * r * r;

    printf("area of circle is %.f\n", circle);
    printf("enter lenth\n");
    scanf("%d", &a);
    printf("enter width\n");
    scanf("%d", &b);
    rectangle = a * b;
    printf("area of rectangle is %d", rectangle);

    printf("enter height\n");
    scanf("%d", &a);
    printf("enter width\n");
    scanf("%d", &b);
    triangle = 0.5 * a * b;
    printf("area of triangle is %d", triangle);
}