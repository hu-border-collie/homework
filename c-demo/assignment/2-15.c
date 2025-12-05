#include <stdio.h>
int main()
{
    int t1, t2, h, m, h1, h2, m1, m2;
    printf("Enter time1:");
    scanf("%d", &t1);
    printf("Enter time2:");
    scanf("%d", &t2);
    h1 = t1 / 100;
    m1 = t1 % 100;
    h2 = t2 / 100;
    m2 = t2 % 100;
    h = h2 - h1;
    m = m2 - m1;
    if (m < 0)
        m = 60 + m, h = h - 1;
    printf("The train journey time is %d hours %d minutes", h, m);
    return 0;
}