#include <stdio.h>
#include <string.h>

int main()
{
    char s[20] = "hello word";
    int i;
    int l = strlen(s);
    for (i = l; i >= 0; i--)
    {
        printf("%c", s[i]);
    }

    return 0;
}