#include <stdio.h>
#include <string.h>
int main()
{
    char ch[50];
    printf("Enter a string:");
    gets(ch);
    for (int i = 0; i < strlen(ch); i++)
    {
        if (ch[i] >= 97 && ch[i <= 122])
            ch[i] = ch[i] - 32;
    }
    puts(ch);
    return 0;
}