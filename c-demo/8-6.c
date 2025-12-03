#include <stdio.h>
#include <string.h>
int main()
{
    int i, j;
    char ch[100];
    printf("Enter a string:");
    gets(ch);
    for (i = 0; i < strlen(ch); i++)
    {
        printf("%d:", i + 1);
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        puts(ch + i);
    }
    return 0;
}