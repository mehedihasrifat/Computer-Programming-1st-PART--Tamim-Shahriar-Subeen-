#include <stdio.h>

int main()
{
    char ch = 'k';

    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is lower case\n", ch);
    }
    else if (ch >= 'A' && ch <= 'Z') // 1 + 1 = 1
    {
        printf("%c is upper case\n", ch);
    }

    return 0;
}