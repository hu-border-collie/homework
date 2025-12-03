#include <stdio.h>
void print_star(int n);
int main()
{
    int n;
    printf("Enter n(n<80):");
    scanf("%d", &n);
    print_star(n);

    return 0;
}
void print_star(int n)
{
    for (int i = 0; i < n; i++)
        printf("*");
}