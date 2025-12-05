#include <stdio.h>
int main()
{
    int letter = 0, blank = 0, digit = 0, other = 0;
    int ch;
    printf("Input 10 characters: ");
    for (int i = 0; i < 10; i++)
    {
        ch = getchar();
        if (('A' <= ch && ch <= 'Z') || ('a' <= ch && ch <= 'z'))
            letter++;
        else if ('0' <= ch && ch <= '9')
            digit++;
        else if (ch == ' ')
            blank++;
        else
            other++;
    }
    printf("letter=%d,blank=%d,digit=%d,other=%d", letter, blank, digit, other);
    return 0;
}