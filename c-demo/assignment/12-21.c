#include <stdio.h>
struct book
{
    char name[20];
    float price;
} a[10];
int main()
{
    int i, n, max = 0, min = 0;
    printf("Input n:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Input the name,price of the %d book:", i + 1);
        scanf("%s%f", a[i].name, &a[i].price);
    }
    for (i = 1; i < n; i++)
    {
        if (a[i].price > a[max].price)
            max = i;
        if (a[i].price < a[min].price)
            min = i;
    }
    printf("The book with the max price:%s,%.1f\n", a[max].name, a[max].price);
    printf("The book with the min price:%s,%.1f", a[min].name, a[min].price);
    return 0;
}