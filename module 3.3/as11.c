#include <stdio.h>
struct emp
{
    int id;
    char name[10];
};
union emp1
{
    int id;
    char name[10];
};
int main()
{
    printf("%d\n", sizeof(struct emp));
    printf("%d\n", sizeof(union emp1));
    return 0;
}