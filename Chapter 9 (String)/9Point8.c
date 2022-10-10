#include <stdio.h>

int string_length(char str[])
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
        ;

    return i;
}

int string_compare(char a[], char b[])
{
    int i, j;

    for (i = 0; a[i] != '\0' && b[i] != '\0'; i++)
    {
        if (a[i] < b[i])
        {
            return -1;
        }
        if (a[i] > b[i])
        {
            return 1;
        }
    }

    if (string_length(a) == string_length(b))
    {
        return 0;
    }
    if (string_length(a) < string_length(b))
    {
        return -1;
    }
    if (string_length(a) > string_length(b))
    {
        return 1;
    }
}

int main()
{
    char str1[100], str2[100];

    printf("Enter the value for string 1: ");
    scanf("%s", str1);
    printf("Enter the value for string 2: ");
    scanf("%s", str2);

    int value = string_compare(str1, str2);

    if (value == 1)
    {
        printf("String 1 is bigger than String 2\n");
    }
    else if (value == -1)
    {
        printf("String 1 is smaller than String 2\n");
    }
    else
    {
        printf("String 1 and String 2 are equal\n");
    }

    return 0;
}