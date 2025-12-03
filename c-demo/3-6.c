#include <stdio.h>
int main()
{
    char ch;
    ch = getchar();
    int n = 0;
    while (ch != '\n')
    {
        if (ch >= '0' && ch <= '9')
        {
            putchar(ch);
            putchar(' ');
            n++;
        }
        ch = getchar();
    }
    printf("\nThere are %d digits!\n", n);
    return 0;
}