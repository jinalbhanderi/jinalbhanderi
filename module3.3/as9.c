#include <stdio.h>
struct emp
{
    char name[20];
    char nom[20];
    int age;
    char add[20];
};
int main()
{
    struct emp e1 = {"jinal", "9913254188", 27, "surat"};

    printf("%s %s %d %s", e1.name, e1.nom, e1.age, e1.add);
    return 0;
}
