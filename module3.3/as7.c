#include<stdio.h>

int main()
{
    char s[20]="hello word";
    int i,count=0;
    for ( i = 0; s[i]!='\0'; i++)
    {
        count++;
    }
    printf("%d",count);
    return 0;
}