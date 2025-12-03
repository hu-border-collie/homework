#include <stdio.h>
int main()
{
    double a[10];
    double sum = 0;
    printf("Please insert 10 scores:\n");
    for (int i = 0; i < 10; i++)
        scanf("%lf", &a[i]);
    for (int i = 0; i < 10; i++)
        sum = sum + a[i];
    printf("The average is:%.2lf", sum / 10);
    return 0;
}