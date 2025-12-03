#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], ch;
    int i;
    printf("请输入字符串:\n");
    gets(str);
    printf("请输入字符:\n");
    ch = getchar();
    for (i = 0; i <= strlen(str); i++)
    {
        if (str[i] == ch)
            str[i] = 'A';
    }
    printf("替换后的字符串:\n");
    puts(str);
    return 0;
}