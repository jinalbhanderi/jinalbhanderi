#include <stdio.h>
struct emp
{
    char name[10];
    int nom;
    int age;
    char address[10];
};
int main()
{
    int i;
    struct emp e[5];
    for (i = 0; i < 5; i++)
    {
        printf("enter the name of emp number %d\n", i + 1);
        scanf("%s", &e[i].name);
        printf("enter the nom of emp number %d\n", i + 1);
        scanf("%d", &e[i].nom);
        printf("enter the age of emp number %d\n", i + 1);
        scanf("%d", &e[i].age);
        printf("enter the adress of emp number %d\n", i + 1);
        scanf("%s", &e[i].address);
    }
    printf("\n---all data---\n");

    for (i = 0; i < 5; i++)
    {
        printf("%s %d %d %s\n", e[i].name, e[i].nom, e[i].age, e[i].address);
    }
    return 0;
}
    