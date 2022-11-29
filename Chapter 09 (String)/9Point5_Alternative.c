#include <stdio.h>

int string_length(char str[])
{
    int i;

    for (i = 0; str[i] != '\0'; i++) // Not recommeneded do this
        ;

    return i;
}

int main()
{
    char str[100];
    int length;

    while (1 == scanf("%s", str))
    {
        length = string_length(str);

        printf("%d\n", length);
    }

    return 0;
}