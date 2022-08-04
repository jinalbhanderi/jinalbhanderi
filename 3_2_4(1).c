#include <stdio.h>
int main()
{
    int day;

    printf("choose the nom ");

    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("%d monday\n");
        break;
    case 2:
        printf("%d tuesday\n");
        break;
    case 3:
        printf("%d wednesday\n");
        break;
    case 4:
        printf("%d thursday\n");
        break;
    case 5:
        printf("%d friay\n");
        break;
    case 6:
        printf("%d saterday\n");
        break;
    case 7:
        printf("%d sunday\n");
        break;

    default:
        printf("enter correct day\n");
        break;
    }
    return 0;
}