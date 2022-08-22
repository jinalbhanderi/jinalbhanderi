#include <stdio.h>
int main()

{
    int i, j, temp = 0;
    int a[7] = {34, 56, 23, 9, 87, 98, 67};
    printf("ascending order\n");
    for (i = 0; i < 7; i++)
    {
        for (j = i + 1; j < 7; j++)

            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        printf("%d\n", a[i]);
    }
    printf("descending order");
    for (i = 0; i < 7; i++)

        for (i = 0; i < 7; ++i)
        {
            for (j = i; j < 7; ++j)
            {
                if (a[i] < a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
            printf(" %d\n",a[i]);
        }

    return 0;
}