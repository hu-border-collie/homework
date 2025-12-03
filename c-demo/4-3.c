#include <stdio.h>
int main()
{
    int i, peach, day;
    peach = 1;
    scanf("%d", &day);
    for (i = 1; i < day; i++)
    {
        peach = (peach + 1) * 2;
    }
    printf("%d\n", peach);
    return 0;
}