#include <stdio.h>
int main()
{
    char vl;
    printf("enter an alphabet:");
    scanf("%c", &vl);
    switch (vl)
    {
    case 'a':
        printf("vowel");
        break;
    case 'e':
        printf("vowel");
        break;
    case 'i':
        printf("vowel");
        break;
    case '0':
        printf("vowel");
        break;
    case 'u':
        printf("vowel");
        break;

    default:
        printf("constance");
        break;
    }
    return 0;
}