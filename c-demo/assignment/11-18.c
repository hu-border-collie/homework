#include <stdio.h>
#include <string.h>
int main()
{
    char ch[80];
    scanf("%s", ch);
    for (int i = 1; i <= strlen(ch); i++)
    {
        printf("%d:", i);
        for (int j = 0; j < i; j++)
        {
            putchar(ch[strlen(ch) - j - 1]);
        }
        printf("\n");
    }
    return 0;
}