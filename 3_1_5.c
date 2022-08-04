#include <stdio.h>
int main()
{
    int year;
    printf("enter year of your choice: ");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("%d is lip year\n", year);
    }
    else if (year % 100 == 0)
    {
        printf("%d is not lip year\n", year);
    }
    else if (year % 4 == 0)
    {
        printf("%d is lip year\n", year);
    }
    else
    {
        printf("%d is not lip year\n");
    }

    return 0;
}