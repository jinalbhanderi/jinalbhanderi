#include <stdio.h>
#include <string.h>
void rev(char s[])
{
    int l = strlen(s);
    for (int i = l - 1; i >= 0; i--)
    {
        if (s[i] != s[l - i - 1])
        {
            printf("string is not palindrome");
            break;
        }
        else{
            printf("string is palindrome");
            break;
        }
    }
}
int main()
{
    rev("ollo");
    return 0;
}