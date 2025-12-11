#include <stdio.h>
int main()
{
    int i, a[10];
    int *p;
    p = a;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *p + i);
    }
    return 0;
}